cmake_minimum_required(VERSION 3.16)

add_executable(cc150_tests
	test_main.cpp
)

target_include_directories(cc150_tests PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/../include
	${CMAKE_CURRENT_SOURCE_DIR}/../src
)

add_test(NAME cc150_tests COMMAND cc150_tests)


