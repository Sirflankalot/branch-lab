#include "doctest.h"
#include "shapes.h"
#include <algorithm>
#include <iostream>

std::string triangle(std::intmax_t height) {
	std::string s;
	s.reserve((height * (height + 1)) / 2);
	for (int i = 0; i < height; ++i) {
		std::fill_n(std::back_inserter(s), i + 1, '*');
		s.push_back('\n');
	}
	return s;
}

TEST_CASE("Testing Box") {
	auto s = triangle(3);
	CHECK(s ==
	      "*\n"
	      "**\n"
	      "***\n");
}
