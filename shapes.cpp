#include "shapes.h"
#include "doctest.h"
#include "triangle.h"
#include <iostream>

using std::string;

string box(int width, int height) {
	string s = "";
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; j++) {
			s = s + "*";
		}
		s = s + "\n";
	}
	return s;
}

TEST_CASE("Testing Box") {
	string s = box(4, 3);
	CHECK(s == "****\n****\n****\n");
}
