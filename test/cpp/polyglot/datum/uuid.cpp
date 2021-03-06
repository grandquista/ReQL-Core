// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./ReQL.hpp"

using namespace ReQL;

TEST_CASE("cpp Test that UUIDs work", "[cpp][ast]") {

  SECTION("test0") {
    std::map<std::string, Query> map0;

    std::string src1("result", 6);
    Query var1(src1);

    std::string src2("blank", 5);
    Query var2(src2);

    map0.insert({src1, var2});

    Query var0(map0);
  }

  SECTION("test1") {
    std::map<std::string, Query> map0;

    std::string src1("result", 6);
    Query var1(src1);

    std::string src2("blank", 5);
    Query var2(src2);

    map0.insert({src1, var2});

    Query var0(map0);
  }

  SECTION("test2") {
    std::string src0("STRING", 6);
    Query var0(src0);
  }

  SECTION("test3") {
    Query var0(true);
  }

  SECTION("test4") {
    double num0(10);
    Query var0(num0);
  }
}
