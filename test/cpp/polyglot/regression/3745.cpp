// Copyright 2015 Adam Grandquist

#include "./catch.hpp"
#include "./ReQL.hpp"

using namespace ReQL;

TEST_CASE("cpp Test that we do not crash on an error during a function called at unsharding", "[cpp][ast]") {

  SECTION("test0") {
    std::map<std::string, Query> map0;

    std::string src1("func", 4);
    Query var1(src1);

    std::string src2("partial", 7);
    Query var2(src2);

    map0.insert({src1, var2});

    Query var0(map0);
  }

  SECTION("test1") {
    std::map<std::string, Query> map0;

    std::string src1("a", 1);
    Query var1(src1);

    double num2(11);
    Query var2(num2);

    map0.insert({src1, var2});

    Query var0(map0);
  }

  SECTION("test2") {
    std::map<std::string, Query> map0;

    std::string src1("func", 4);
    Query var1(src1);

    std::string src2("err", 3);
    Query var2(src2);

    map0.insert({src1, var2});

    Query var0(map0);
  }
}
