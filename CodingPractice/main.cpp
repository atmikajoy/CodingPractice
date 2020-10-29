#include<iostream>
#include"leastLetterCount.h"
#include"arrEqual.h"
#include"eggDrop.h"
#include"wavesort.h"




int main()
{
	std::cout<<"letter with least frequency = " <<
		          llc::low_letter_freq("geeksforgeeks")<<'\n';
	std::cout << "The arrays are equal : " << std::boolalpha <<
		          arreq::are_arrays_equal({ 1,2,3,4,5 }, { 2,1,3,5,4 });
	std::cout << "\nEgg-Floor problem solution thingy : " <<
		          eggdrop::eggDrop(2, 36);
	std::cout << "\nWave sort = "; 
	for(auto& i : ws::wavesort({ 1,2,3,4,5,6,7,8,9 }))
		std::cout<<i<<' ';
}