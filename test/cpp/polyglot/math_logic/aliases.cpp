// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./ReQL.hpp"

using namespace ReQL;

TEST_CASE("cpp Test named aliases for math and logic operators", "[cpp][ast]") {

  SECTION("test0") {
    double num0(1);
    Query var0(num0);
  }

  SECTION("test1") {
    Query var0(true);
  }

  SECTION("test2") {
    Query var0(true);
  }
}
