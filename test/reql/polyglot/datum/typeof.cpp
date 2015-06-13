// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./reql/core.h"

#include <memory>

TEST_CASE("reql These tests test the type of command", "[reql][ast]") {

  SECTION("test0") {
    std::unique_ptr<ReQL_Obj_t> var0(new ReQL_Obj_t);
    std::unique_ptr<ReQL_Byte[]> buf0(new ReQL_Byte[4]);
    const ReQL_Byte src0[] = "NULL";
    reql_string_init(var0.get(), buf0.get(), src0, 4);
  }

  SECTION("test1") {
    std::unique_ptr<ReQL_Obj_t> var0(new ReQL_Obj_t);
    std::unique_ptr<ReQL_Byte[]> buf0(new ReQL_Byte[4]);
    const ReQL_Byte src0[] = "NULL";
    reql_string_init(var0.get(), buf0.get(), src0, 4);
  }
}
