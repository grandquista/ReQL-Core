// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./ReQL.hpp"

using namespace ReQL;

TEST_CASE("cpp 1179 -- BRACKET term", "[cpp][ast]") {

  SECTION("test0") {
    double num0(1);
    Query var0(num0);
  }
}
