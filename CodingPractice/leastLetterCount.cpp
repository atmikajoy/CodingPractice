#include "leastLetterCount.h"

namespace llc
{
	namespace
{
	std::map<char, unsigned int> letterCount;
}
char low_letter_freq(const std::string& sentance)
{
	for (const auto& s : sentance) letterCount[s] += 1;
	for (const auto [letter, count] : letterCount) if (count == 1) return letter;
	return ' ';
}
}