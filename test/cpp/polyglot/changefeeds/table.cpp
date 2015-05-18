// Copyright 2015 Adam Grandquist

#include "./catch.hpp"

#include "./test.hpp"

using namespace ReQL;
using namespace _C;

TEST_CASE("cpp Test changefeeds on a table", "[cpp][ast]") {

  SECTION("test0") {
    std::map<std::string, Result> map0;

    std::string src1("result", 6);
    Result var1(src1);

    std::string src2("blank", 5);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test1") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test2") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("bag", 3);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test3") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test4") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    std::map<std::string, Result> map3;

    std::string src4("id", 2);
    Result var4(src4);

    double num5(1);
    Result var5(num5);

    map3.insert({src4, var5});

    std::string src6("version", 7);
    Result var6(src6);

    double num7(1);
    Result var7(num7);

    map3.insert({src6, var7});

    Result var3(map3);

    map1.insert({src2, var3});

    std::string src8("old_val", 7);
    Result var8(src8);

    std::map<std::string, Result> map9;

    std::string src10("id", 2);
    Result var10(src10);

    double num11(1);
    Result var11(num11);

    map9.insert({src10, var11});

    Result var9(map9);

    map1.insert({src8, var9});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }

  SECTION("test5") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test6") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    Result var3;

    map1.insert({src2, var3});

    std::string src4("old_val", 7);
    Result var4(src4);

    std::map<std::string, Result> map5;

    std::string src6("id", 2);
    Result var6(src6);

    double num7(1);
    Result var7(num7);

    map5.insert({src6, var7});

    std::string src8("version", 7);
    Result var8(src8);

    double num9(1);
    Result var9(num9);

    map5.insert({src8, var9});

    Result var5(map5);

    map1.insert({src4, var5});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }

  SECTION("test7") {
    std::map<std::string, Result> map0;

    std::string src1("result", 6);
    Result var1(src1);

    std::string src2("blank", 5);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test8") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test9") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    std::map<std::string, Result> map3;

    std::string src4("version", 7);
    Result var4(src4);

    double num5(5);
    Result var5(num5);

    map3.insert({src4, var5});

    Result var3(map3);

    map1.insert({src2, var3});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }

  SECTION("test10") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("err", 3);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test12") {
    std::map<std::string, Result> map0;

    std::string src1("result", 6);
    Result var1(src1);

    std::string src2("blank", 5);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test13") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test14") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("bag", 3);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test15") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test16") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    std::map<std::string, Result> map3;

    std::string src4("id", 2);
    Result var4(src4);

    double num5(1);
    Result var5(num5);

    map3.insert({src4, var5});

    std::string src6("version", 7);
    Result var6(src6);

    double num7(1);
    Result var7(num7);

    map3.insert({src6, var7});

    Result var3(map3);

    map1.insert({src2, var3});

    std::string src8("old_val", 7);
    Result var8(src8);

    std::map<std::string, Result> map9;

    std::string src10("id", 2);
    Result var10(src10);

    double num11(1);
    Result var11(num11);

    map9.insert({src10, var11});

    Result var9(map9);

    map1.insert({src8, var9});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }

  SECTION("test17") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test18") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    Result var3;

    map1.insert({src2, var3});

    std::string src4("old_val", 7);
    Result var4(src4);

    std::map<std::string, Result> map5;

    std::string src6("id", 2);
    Result var6(src6);

    double num7(1);
    Result var7(num7);

    map5.insert({src6, var7});

    std::string src8("version", 7);
    Result var8(src8);

    double num9(1);
    Result var9(num9);

    map5.insert({src8, var9});

    Result var5(map5);

    map1.insert({src4, var5});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }

  SECTION("test19") {
    std::map<std::string, Result> map0;

    std::string src1("result", 6);
    Result var1(src1);

    std::string src2("blank", 5);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test20") {
    std::map<std::string, Result> map0;

    std::string src1("func", 4);
    Result var1(src1);

    std::string src2("partial", 7);
    Result var2(src2);

    map0.insert({src1, var2});

    Result var0(map0);
  }

  SECTION("test21") {
    std::vector<Result> arr0(1);

    std::map<std::string, Result> map1;

    std::string src2("new_val", 7);
    Result var2(src2);

    std::map<std::string, Result> map3;

    std::string src4("version", 7);
    Result var4(src4);

    double num5(5);
    Result var5(num5);

    map3.insert({src4, var5});

    Result var3(map3);

    map1.insert({src2, var3});

    Result var1(map1);

    arr0.insert(arr0.end(), var1);

    Result var0(arr0);
  }
}
