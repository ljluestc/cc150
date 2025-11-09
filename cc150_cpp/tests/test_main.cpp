#include <cassert>
#include <iostream>
#include <string>

// Include implementations directly for a simple starter workflow
#include "../src/chapter01_arrays_strings/1_1_is_unique.cpp"
#include "../src/chapter01_arrays_strings/1_2_check_permutation.cpp"
#include "../src/chapter01_arrays_strings/1_3_urlify.cpp"
#include "../src/chapter01_arrays_strings/1_4_palindrome_permutation.cpp"
#include "../src/chapter01_arrays_strings/1_5_one_away.cpp"
#include "../src/chapter01_arrays_strings/1_6_string_compression.cpp"

using namespace cc150::chapter01;

int main() {
	// 1.1 isUnique
	assert(isUnique("abcdef") == true);
	assert(isUnique("hello") == false);
	assert(isUnique("") == true);

	// 1.2 checkPermutation
	assert(checkPermutation("abc", "cba") == true);
	assert(checkPermutation("abc", "abz") == false);
	assert(checkPermutation("aab", "aba") == true);
	assert(checkPermutation("ab", "a") == false);

	// 1.3 urlify
	assert(urlify("Mr John Smith    ", 13) == std::string("Mr%20John%20Smith"));
	assert(urlify("a b  ", 3) == std::string("a%20b"));

	// 1.4 palindrome permutation
	assert(isPalindromePermutation("Tact Coa") == true); // taco cat
	assert(isPalindromePermutation("abc") == false);
	assert(isPalindromePermutation("aa bb") == true);

	// 1.5 one away
	assert(oneAway("pale", "ple") == true);
	assert(oneAway("pales", "pale") == true);
	assert(oneAway("pale", "bale") == true);
	assert(oneAway("pale", "bake") == false);

	// 1.6 string compression
	assert(compressString("aabcccccaaa") == std::string("a2b1c5a3"));
	assert(compressString("abc") == std::string("abc"));
	assert(compressString("") == std::string(""));

	std::cout << "All tests passed!" << std::endl;
	return 0;
}


