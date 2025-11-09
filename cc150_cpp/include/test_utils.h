#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace test_utils {
	inline void printCaseHeader(const std::string& name) {
		std::cout << "[TEST] " << name << std::endl;
	}
}


