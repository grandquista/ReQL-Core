// Copyright 2015 Adam Grandquist

#include "./catch.hpp"

#include "./test.hpp"

using namespace ReQL;
using namespace _C;

TEST_CASE("c 1179 -- BRACKET term", "[c][ast]") {

  SECTION("test0") {
    ReQL_Obj_c var0;
    reql_number_init(var0.get(), 1);
  }
}
