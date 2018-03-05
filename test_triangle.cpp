#include "doctest.h"
#include "triangle.h"

TEST_CASE("Testing Triangle") {
	auto s = triangle(3);
	CHECK(s ==
	      "*\n"
	      "**\n"
	      "***\n");
}
