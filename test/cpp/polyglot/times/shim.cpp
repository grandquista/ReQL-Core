// Copyright 2015 Adam Grandquist

#include "./catch.hpp"

#include "./test.hpp"

using namespace ReQL;

TEST_CASE("cpp Test the native shims.", "[cpp][ast]") {

  SECTION("test1") {
    std::string src0("2013-07-29T18:21:36.680-07:00", 29);
    Result var0(src0);
  }

  SECTION("test2") {
    std::string src0("2013-07-30T01:21:36.680+00:00", 29);
    Result var0(src0);
  }

  SECTION("test3") {
    double num0(1375147296.68);
    Result var0(num0);
  }

  SECTION("test4") {
    double num0(1375147296.68);
    Result var0(num0);
  }
}