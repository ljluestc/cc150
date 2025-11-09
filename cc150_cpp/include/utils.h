#pragma once
#include <string>
#include <algorithm>
#include <cctype>

namespace utils {
	inline std::string toLowerAscii(std::string s) {
		std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
			return static_cast<char>(std::tolower(c));
		});
		return s;
	}

	inline bool isAsciiLetter(unsigned char c) {
		return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
	}

	inline bool isAsciiSpace(unsigned char c) {
		return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v';
	}
}


