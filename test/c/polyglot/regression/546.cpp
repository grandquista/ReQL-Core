// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./test.hpp"
#include "./ReQL.hpp"

using namespace ReQL;
using namespace _C;

TEST_CASE("c Regression tests for issue 182", "[c][ast]") {

  SECTION("test0") {
    std::unique_ptr<ReQL_Obj_t> var0;
    reql_number_init(var0.get(), 1);
  }

  SECTION("test1") {
    std::unique_ptr<ReQL_Obj_t> var0;
    reql_number_init(var0.get(), 2);
  }

  SECTION("test2") {
    std::unique_ptr<ReQL_Obj_t> var0;
    reql_number_init(var0.get(), 1);
  }
}
