#include"arrEqual.h"

namespace arreq
{
	bool are_arrays_equal(const std::vector<int>& a, const std::vector<int>& b)
	{
		if (a.size() != b.size()) return false; 
		int a1 = a[0]; 
		int b1 = b[0];
		for (std::size_t i = 1; i < a.size(); ++i)
		{
			a1 ^= a[i];
			b1 ^= b[i];
		}

		auto xor_res = a1 ^ b1; 
		if (xor_res == 0) return true;
		else return false;
	}
}