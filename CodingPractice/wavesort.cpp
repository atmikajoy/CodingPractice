#include"wavesort.h"
#include<algorithm>
namespace ws
{
	std::vector<int> wavesort(std::vector<int> vec)
	{
		if (vec.size() < 2) return vec;
		
		for (int i = 0; i < vec.size()-1; i+=2)
		{
				if (i>0 && vec[i] < vec[i - 1])std::swap(vec[i], vec[i - 1]);
				if(i<vec.size()-1 && vec[i] < vec[i + 1]) std::swap(vec[i], vec[i + 1]);
		}
		

		return vec;
	}

}