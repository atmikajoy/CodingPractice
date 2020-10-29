#include"eggDrop.h"
#include<map>
#include<vector>
#include<algorithm>
namespace eggdrop
{
	namespace
	{
		std::map<unsigned int, std::vector<unsigned int>> eggFloor;
	}
	unsigned int eggDrop(const unsigned int eggs, const unsigned int floors)
	{
		for (unsigned int i = 1; i <= eggs+1; ++i)
		{
			eggFloor[i] = std::vector<unsigned int>(floors+1);
			eggFloor[i][1] = 1;
			eggFloor[1][0] = 0;
		}
		unsigned int res = 0;
		for (unsigned int i = 1; i <= floors; ++i) eggFloor[1][i] = i;

		for (unsigned int i = 2; i <= eggs; ++i)
		{
			for (unsigned int j = 2; j <= floors; ++j)
			{
				eggFloor[i][j] = INT_MAX; 
				for (unsigned int x = 1; x <= j; ++x)
				{
					res = 1 + std::max(eggFloor[i - 1][x - 1], eggFloor[i][j - x]);
					if (res < eggFloor[i][j]) eggFloor[i][j] = res;
				}
			}
		}

		return eggFloor[eggs][floors];

	}
}