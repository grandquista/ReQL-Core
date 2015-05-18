// Copyright 2015 Adam Grandquist

#include "./catch.hpp"

#include "./test.hpp"

using namespace ReQL;
using namespace _C;

TEST_CASE("c Test basic time arithmetic 228", "[c][ast]") {

  SECTION("test10") {
    ReQL_Obj_c var0;
    reql_bool_init(var0.get(), 1);
  }

  SECTION("test11") {
    ReQL_Obj_c var0;
    reql_number_init(var0.get(), 1);
  }

  SECTION("test12") {
    ReQL_Obj_c var0;
    reql_number_init(var0.get(), 1000000000);
  }

  SECTION("test13") {
    ReQL_Obj_c var0;
    reql_bool_init(var0.get(), 1);
  }

  SECTION("test14") {
    ReQL_Obj_c var0;
    reql_number_init(var0.get(), -1);
  }

  SECTION("test15") {
    ReQL_Obj_c var0;
    reql_number_init(var0.get(), -1000000000);
  }

  SECTION("test16") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Pair_t[]> pair1(new ReQL_Pair_t[1]);
    reql_object_init(var1.get(), pair1.get(), 1);

    ReQL_Obj_c var2;
    std::unique_ptr<uint8_t[]> buf2(new uint8_t[4]);
    const uint8_t src2[] = "func";
    reql_string_init(var2.get(), buf2.get(), 4);
    reql_string_append(var2.get(), src2, 4);

    ReQL_Obj_c var3;
    std::unique_ptr<uint8_t[]> buf3(new uint8_t[3]);
    const uint8_t src3[] = "rt1";
    reql_string_init(var3.get(), buf3.get(), 3);
    reql_string_append(var3.get(), src3, 3);

    reql_object_add(var1.get(), var2.get(), var3.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var4;
    std::unique_ptr<ReQL_Pair_t[]> pair4(new ReQL_Pair_t[1]);
    reql_object_init(var4.get(), pair4.get(), 1);

    ReQL_Obj_c var5;
    std::unique_ptr<uint8_t[]> buf5(new uint8_t[4]);
    const uint8_t src5[] = "func";
    reql_string_init(var5.get(), buf5.get(), 4);
    reql_string_append(var5.get(), src5, 4);

    ReQL_Obj_c var6;
    std::unique_ptr<uint8_t[]> buf6(new uint8_t[3]);
    const uint8_t src6[] = "rt2";
    reql_string_init(var6.get(), buf6.get(), 3);
    reql_string_append(var6.get(), src6, 3);

    reql_object_add(var4.get(), var5.get(), var6.get());

    reql_array_append(var0.get(), var4.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Pair_t[]> pair7(new ReQL_Pair_t[1]);
    reql_object_init(var7.get(), pair7.get(), 1);

    ReQL_Obj_c var8;
    std::unique_ptr<uint8_t[]> buf8(new uint8_t[4]);
    const uint8_t src8[] = "func";
    reql_string_init(var8.get(), buf8.get(), 4);
    reql_string_append(var8.get(), src8, 4);

    ReQL_Obj_c var9;
    std::unique_ptr<uint8_t[]> buf9(new uint8_t[3]);
    const uint8_t src9[] = "rt3";
    reql_string_init(var9.get(), buf9.get(), 3);
    reql_string_append(var9.get(), src9, 3);

    reql_object_add(var7.get(), var8.get(), var9.get());

    reql_array_append(var0.get(), var7.get());

    ReQL_Obj_c var10;
    std::unique_ptr<ReQL_Pair_t[]> pair10(new ReQL_Pair_t[1]);
    reql_object_init(var10.get(), pair10.get(), 1);

    ReQL_Obj_c var11;
    std::unique_ptr<uint8_t[]> buf11(new uint8_t[4]);
    const uint8_t src11[] = "func";
    reql_string_init(var11.get(), buf11.get(), 4);
    reql_string_append(var11.get(), src11, 4);

    ReQL_Obj_c var12;
    std::unique_ptr<uint8_t[]> buf12(new uint8_t[3]);
    const uint8_t src12[] = "rt4";
    reql_string_init(var12.get(), buf12.get(), 3);
    reql_string_append(var12.get(), src12, 3);

    reql_object_add(var10.get(), var11.get(), var12.get());

    reql_array_append(var0.get(), var10.get());
  }

  SECTION("test17") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Pair_t[]> pair0(new ReQL_Pair_t[1]);
    reql_object_init(var0.get(), pair0.get(), 1);

    ReQL_Obj_c var1;
    std::unique_ptr<uint8_t[]> buf1(new uint8_t[4]);
    const uint8_t src1[] = "func";
    reql_string_init(var1.get(), buf1.get(), 4);
    reql_string_append(var1.get(), src1, 4);

    ReQL_Obj_c var2;
    std::unique_ptr<uint8_t[]> buf2(new uint8_t[3]);
    const uint8_t src2[] = "err";
    reql_string_init(var2.get(), buf2.get(), 3);
    reql_string_append(var2.get(), src2, 3);

    reql_object_add(var0.get(), var1.get(), var2.get());
  }

  SECTION("test18") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Pair_t[]> pair1(new ReQL_Pair_t[1]);
    reql_object_init(var1.get(), pair1.get(), 1);

    ReQL_Obj_c var2;
    std::unique_ptr<uint8_t[]> buf2(new uint8_t[4]);
    const uint8_t src2[] = "func";
    reql_string_init(var2.get(), buf2.get(), 4);
    reql_string_append(var2.get(), src2, 4);

    ReQL_Obj_c var3;
    std::unique_ptr<uint8_t[]> buf3(new uint8_t[3]);
    const uint8_t src3[] = "rt1";
    reql_string_init(var3.get(), buf3.get(), 3);
    reql_string_append(var3.get(), src3, 3);

    reql_object_add(var1.get(), var2.get(), var3.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var4;
    std::unique_ptr<ReQL_Pair_t[]> pair4(new ReQL_Pair_t[1]);
    reql_object_init(var4.get(), pair4.get(), 1);

    ReQL_Obj_c var5;
    std::unique_ptr<uint8_t[]> buf5(new uint8_t[4]);
    const uint8_t src5[] = "func";
    reql_string_init(var5.get(), buf5.get(), 4);
    reql_string_append(var5.get(), src5, 4);

    ReQL_Obj_c var6;
    std::unique_ptr<uint8_t[]> buf6(new uint8_t[3]);
    const uint8_t src6[] = "rt2";
    reql_string_init(var6.get(), buf6.get(), 3);
    reql_string_append(var6.get(), src6, 3);

    reql_object_add(var4.get(), var5.get(), var6.get());

    reql_array_append(var0.get(), var4.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Pair_t[]> pair7(new ReQL_Pair_t[1]);
    reql_object_init(var7.get(), pair7.get(), 1);

    ReQL_Obj_c var8;
    std::unique_ptr<uint8_t[]> buf8(new uint8_t[4]);
    const uint8_t src8[] = "func";
    reql_string_init(var8.get(), buf8.get(), 4);
    reql_string_append(var8.get(), src8, 4);

    ReQL_Obj_c var9;
    std::unique_ptr<uint8_t[]> buf9(new uint8_t[3]);
    const uint8_t src9[] = "rt3";
    reql_string_init(var9.get(), buf9.get(), 3);
    reql_string_append(var9.get(), src9, 3);

    reql_object_add(var7.get(), var8.get(), var9.get());

    reql_array_append(var0.get(), var7.get());

    ReQL_Obj_c var10;
    std::unique_ptr<ReQL_Pair_t[]> pair10(new ReQL_Pair_t[1]);
    reql_object_init(var10.get(), pair10.get(), 1);

    ReQL_Obj_c var11;
    std::unique_ptr<uint8_t[]> buf11(new uint8_t[4]);
    const uint8_t src11[] = "func";
    reql_string_init(var11.get(), buf11.get(), 4);
    reql_string_append(var11.get(), src11, 4);

    ReQL_Obj_c var12;
    std::unique_ptr<uint8_t[]> buf12(new uint8_t[3]);
    const uint8_t src12[] = "rt4";
    reql_string_init(var12.get(), buf12.get(), 3);
    reql_string_append(var12.get(), src12, 3);

    reql_object_add(var10.get(), var11.get(), var12.get());

    reql_array_append(var0.get(), var10.get());
  }

  SECTION("test19") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[4]);
    reql_array_init(var1.get(), arr1.get(), 4);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[6]);
    reql_array_init(var2.get(), arr2.get(), 6);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 0);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 1);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 1);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 0);

    reql_array_append(var2.get(), var6.get());

    ReQL_Obj_c var7;
    reql_bool_init(var7.get(), 1);

    reql_array_append(var2.get(), var7.get());

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var2.get(), var8.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var9;
    std::unique_ptr<ReQL_Obj_t*[]> arr9(new ReQL_Obj_t*[6]);
    reql_array_init(var9.get(), arr9.get(), 6);

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 1);

    reql_array_append(var9.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 1);

    reql_array_append(var9.get(), var11.get());

    ReQL_Obj_c var12;
    reql_bool_init(var12.get(), 0);

    reql_array_append(var9.get(), var12.get());

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 1);

    reql_array_append(var9.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 0);

    reql_array_append(var9.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 0);

    reql_array_append(var9.get(), var15.get());

    reql_array_append(var1.get(), var9.get());

    ReQL_Obj_c var16;
    std::unique_ptr<ReQL_Obj_t*[]> arr16(new ReQL_Obj_t*[6]);
    reql_array_init(var16.get(), arr16.get(), 6);

    ReQL_Obj_c var17;
    reql_bool_init(var17.get(), 1);

    reql_array_append(var16.get(), var17.get());

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 1);

    reql_array_append(var16.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 0);

    reql_array_append(var16.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 1);

    reql_array_append(var16.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 0);

    reql_array_append(var16.get(), var21.get());

    ReQL_Obj_c var22;
    reql_bool_init(var22.get(), 0);

    reql_array_append(var16.get(), var22.get());

    reql_array_append(var1.get(), var16.get());

    ReQL_Obj_c var23;
    std::unique_ptr<ReQL_Obj_t*[]> arr23(new ReQL_Obj_t*[6]);
    reql_array_init(var23.get(), arr23.get(), 6);

    ReQL_Obj_c var24;
    reql_bool_init(var24.get(), 1);

    reql_array_append(var23.get(), var24.get());

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 1);

    reql_array_append(var23.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var23.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 1);

    reql_array_append(var23.get(), var27.get());

    ReQL_Obj_c var28;
    reql_bool_init(var28.get(), 0);

    reql_array_append(var23.get(), var28.get());

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 0);

    reql_array_append(var23.get(), var29.get());

    reql_array_append(var1.get(), var23.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var30;
    std::unique_ptr<ReQL_Obj_t*[]> arr30(new ReQL_Obj_t*[4]);
    reql_array_init(var30.get(), arr30.get(), 4);

    ReQL_Obj_c var31;
    std::unique_ptr<ReQL_Obj_t*[]> arr31(new ReQL_Obj_t*[6]);
    reql_array_init(var31.get(), arr31.get(), 6);

    ReQL_Obj_c var32;
    reql_bool_init(var32.get(), 0);

    reql_array_append(var31.get(), var32.get());

    ReQL_Obj_c var33;
    reql_bool_init(var33.get(), 0);

    reql_array_append(var31.get(), var33.get());

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 0);

    reql_array_append(var31.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 1);

    reql_array_append(var31.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 1);

    reql_array_append(var31.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 1);

    reql_array_append(var31.get(), var37.get());

    reql_array_append(var30.get(), var31.get());

    ReQL_Obj_c var38;
    std::unique_ptr<ReQL_Obj_t*[]> arr38(new ReQL_Obj_t*[6]);
    reql_array_init(var38.get(), arr38.get(), 6);

    ReQL_Obj_c var39;
    reql_bool_init(var39.get(), 0);

    reql_array_append(var38.get(), var39.get());

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 1);

    reql_array_append(var38.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 1);

    reql_array_append(var38.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 0);

    reql_array_append(var38.get(), var42.get());

    ReQL_Obj_c var43;
    reql_bool_init(var43.get(), 1);

    reql_array_append(var38.get(), var43.get());

    ReQL_Obj_c var44;
    reql_bool_init(var44.get(), 0);

    reql_array_append(var38.get(), var44.get());

    reql_array_append(var30.get(), var38.get());

    ReQL_Obj_c var45;
    std::unique_ptr<ReQL_Obj_t*[]> arr45(new ReQL_Obj_t*[6]);
    reql_array_init(var45.get(), arr45.get(), 6);

    ReQL_Obj_c var46;
    reql_bool_init(var46.get(), 1);

    reql_array_append(var45.get(), var46.get());

    ReQL_Obj_c var47;
    reql_bool_init(var47.get(), 1);

    reql_array_append(var45.get(), var47.get());

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 0);

    reql_array_append(var45.get(), var48.get());

    ReQL_Obj_c var49;
    reql_bool_init(var49.get(), 1);

    reql_array_append(var45.get(), var49.get());

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var45.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 0);

    reql_array_append(var45.get(), var51.get());

    reql_array_append(var30.get(), var45.get());

    ReQL_Obj_c var52;
    std::unique_ptr<ReQL_Obj_t*[]> arr52(new ReQL_Obj_t*[6]);
    reql_array_init(var52.get(), arr52.get(), 6);

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 1);

    reql_array_append(var52.get(), var53.get());

    ReQL_Obj_c var54;
    reql_bool_init(var54.get(), 1);

    reql_array_append(var52.get(), var54.get());

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var52.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 1);

    reql_array_append(var52.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 0);

    reql_array_append(var52.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 0);

    reql_array_append(var52.get(), var58.get());

    reql_array_append(var30.get(), var52.get());

    reql_array_append(var0.get(), var30.get());

    ReQL_Obj_c var59;
    std::unique_ptr<ReQL_Obj_t*[]> arr59(new ReQL_Obj_t*[4]);
    reql_array_init(var59.get(), arr59.get(), 4);

    ReQL_Obj_c var60;
    std::unique_ptr<ReQL_Obj_t*[]> arr60(new ReQL_Obj_t*[6]);
    reql_array_init(var60.get(), arr60.get(), 6);

    ReQL_Obj_c var61;
    reql_bool_init(var61.get(), 0);

    reql_array_append(var60.get(), var61.get());

    ReQL_Obj_c var62;
    reql_bool_init(var62.get(), 0);

    reql_array_append(var60.get(), var62.get());

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 0);

    reql_array_append(var60.get(), var63.get());

    ReQL_Obj_c var64;
    reql_bool_init(var64.get(), 1);

    reql_array_append(var60.get(), var64.get());

    ReQL_Obj_c var65;
    reql_bool_init(var65.get(), 1);

    reql_array_append(var60.get(), var65.get());

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 1);

    reql_array_append(var60.get(), var66.get());

    reql_array_append(var59.get(), var60.get());

    ReQL_Obj_c var67;
    std::unique_ptr<ReQL_Obj_t*[]> arr67(new ReQL_Obj_t*[6]);
    reql_array_init(var67.get(), arr67.get(), 6);

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 0);

    reql_array_append(var67.get(), var68.get());

    ReQL_Obj_c var69;
    reql_bool_init(var69.get(), 0);

    reql_array_append(var67.get(), var69.get());

    ReQL_Obj_c var70;
    reql_bool_init(var70.get(), 0);

    reql_array_append(var67.get(), var70.get());

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 1);

    reql_array_append(var67.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 1);

    reql_array_append(var67.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 1);

    reql_array_append(var67.get(), var73.get());

    reql_array_append(var59.get(), var67.get());

    ReQL_Obj_c var74;
    std::unique_ptr<ReQL_Obj_t*[]> arr74(new ReQL_Obj_t*[6]);
    reql_array_init(var74.get(), arr74.get(), 6);

    ReQL_Obj_c var75;
    reql_bool_init(var75.get(), 0);

    reql_array_append(var74.get(), var75.get());

    ReQL_Obj_c var76;
    reql_bool_init(var76.get(), 1);

    reql_array_append(var74.get(), var76.get());

    ReQL_Obj_c var77;
    reql_bool_init(var77.get(), 1);

    reql_array_append(var74.get(), var77.get());

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 0);

    reql_array_append(var74.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 1);

    reql_array_append(var74.get(), var79.get());

    ReQL_Obj_c var80;
    reql_bool_init(var80.get(), 0);

    reql_array_append(var74.get(), var80.get());

    reql_array_append(var59.get(), var74.get());

    ReQL_Obj_c var81;
    std::unique_ptr<ReQL_Obj_t*[]> arr81(new ReQL_Obj_t*[6]);
    reql_array_init(var81.get(), arr81.get(), 6);

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 1);

    reql_array_append(var81.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 1);

    reql_array_append(var81.get(), var83.get());

    ReQL_Obj_c var84;
    reql_bool_init(var84.get(), 0);

    reql_array_append(var81.get(), var84.get());

    ReQL_Obj_c var85;
    reql_bool_init(var85.get(), 1);

    reql_array_append(var81.get(), var85.get());

    ReQL_Obj_c var86;
    reql_bool_init(var86.get(), 0);

    reql_array_append(var81.get(), var86.get());

    ReQL_Obj_c var87;
    reql_bool_init(var87.get(), 0);

    reql_array_append(var81.get(), var87.get());

    reql_array_append(var59.get(), var81.get());

    reql_array_append(var0.get(), var59.get());

    ReQL_Obj_c var88;
    std::unique_ptr<ReQL_Obj_t*[]> arr88(new ReQL_Obj_t*[4]);
    reql_array_init(var88.get(), arr88.get(), 4);

    ReQL_Obj_c var89;
    std::unique_ptr<ReQL_Obj_t*[]> arr89(new ReQL_Obj_t*[6]);
    reql_array_init(var89.get(), arr89.get(), 6);

    ReQL_Obj_c var90;
    reql_bool_init(var90.get(), 0);

    reql_array_append(var89.get(), var90.get());

    ReQL_Obj_c var91;
    reql_bool_init(var91.get(), 0);

    reql_array_append(var89.get(), var91.get());

    ReQL_Obj_c var92;
    reql_bool_init(var92.get(), 0);

    reql_array_append(var89.get(), var92.get());

    ReQL_Obj_c var93;
    reql_bool_init(var93.get(), 1);

    reql_array_append(var89.get(), var93.get());

    ReQL_Obj_c var94;
    reql_bool_init(var94.get(), 1);

    reql_array_append(var89.get(), var94.get());

    ReQL_Obj_c var95;
    reql_bool_init(var95.get(), 1);

    reql_array_append(var89.get(), var95.get());

    reql_array_append(var88.get(), var89.get());

    ReQL_Obj_c var96;
    std::unique_ptr<ReQL_Obj_t*[]> arr96(new ReQL_Obj_t*[6]);
    reql_array_init(var96.get(), arr96.get(), 6);

    ReQL_Obj_c var97;
    reql_bool_init(var97.get(), 0);

    reql_array_append(var96.get(), var97.get());

    ReQL_Obj_c var98;
    reql_bool_init(var98.get(), 0);

    reql_array_append(var96.get(), var98.get());

    ReQL_Obj_c var99;
    reql_bool_init(var99.get(), 0);

    reql_array_append(var96.get(), var99.get());

    ReQL_Obj_c var100;
    reql_bool_init(var100.get(), 1);

    reql_array_append(var96.get(), var100.get());

    ReQL_Obj_c var101;
    reql_bool_init(var101.get(), 1);

    reql_array_append(var96.get(), var101.get());

    ReQL_Obj_c var102;
    reql_bool_init(var102.get(), 1);

    reql_array_append(var96.get(), var102.get());

    reql_array_append(var88.get(), var96.get());

    ReQL_Obj_c var103;
    std::unique_ptr<ReQL_Obj_t*[]> arr103(new ReQL_Obj_t*[6]);
    reql_array_init(var103.get(), arr103.get(), 6);

    ReQL_Obj_c var104;
    reql_bool_init(var104.get(), 0);

    reql_array_append(var103.get(), var104.get());

    ReQL_Obj_c var105;
    reql_bool_init(var105.get(), 0);

    reql_array_append(var103.get(), var105.get());

    ReQL_Obj_c var106;
    reql_bool_init(var106.get(), 0);

    reql_array_append(var103.get(), var106.get());

    ReQL_Obj_c var107;
    reql_bool_init(var107.get(), 1);

    reql_array_append(var103.get(), var107.get());

    ReQL_Obj_c var108;
    reql_bool_init(var108.get(), 1);

    reql_array_append(var103.get(), var108.get());

    ReQL_Obj_c var109;
    reql_bool_init(var109.get(), 1);

    reql_array_append(var103.get(), var109.get());

    reql_array_append(var88.get(), var103.get());

    ReQL_Obj_c var110;
    std::unique_ptr<ReQL_Obj_t*[]> arr110(new ReQL_Obj_t*[6]);
    reql_array_init(var110.get(), arr110.get(), 6);

    ReQL_Obj_c var111;
    reql_bool_init(var111.get(), 0);

    reql_array_append(var110.get(), var111.get());

    ReQL_Obj_c var112;
    reql_bool_init(var112.get(), 1);

    reql_array_append(var110.get(), var112.get());

    ReQL_Obj_c var113;
    reql_bool_init(var113.get(), 1);

    reql_array_append(var110.get(), var113.get());

    ReQL_Obj_c var114;
    reql_bool_init(var114.get(), 0);

    reql_array_append(var110.get(), var114.get());

    ReQL_Obj_c var115;
    reql_bool_init(var115.get(), 1);

    reql_array_append(var110.get(), var115.get());

    ReQL_Obj_c var116;
    reql_bool_init(var116.get(), 0);

    reql_array_append(var110.get(), var116.get());

    reql_array_append(var88.get(), var110.get());

    reql_array_append(var0.get(), var88.get());
  }

  SECTION("test21") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[8]);
    reql_array_init(var0.get(), arr0.get(), 8);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[2]);
    reql_array_init(var1.get(), arr1.get(), 2);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[6]);
    reql_array_init(var2.get(), arr2.get(), 6);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 1);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 1);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 0);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 1);

    reql_array_append(var2.get(), var6.get());

    ReQL_Obj_c var7;
    reql_bool_init(var7.get(), 0);

    reql_array_append(var2.get(), var7.get());

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var2.get(), var8.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var9;
    std::unique_ptr<ReQL_Obj_t*[]> arr9(new ReQL_Obj_t*[6]);
    reql_array_init(var9.get(), arr9.get(), 6);

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 0);

    reql_array_append(var9.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 0);

    reql_array_append(var9.get(), var11.get());

    ReQL_Obj_c var12;
    reql_bool_init(var12.get(), 0);

    reql_array_append(var9.get(), var12.get());

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 1);

    reql_array_append(var9.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 1);

    reql_array_append(var9.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 1);

    reql_array_append(var9.get(), var15.get());

    reql_array_append(var1.get(), var9.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var16;
    std::unique_ptr<ReQL_Obj_t*[]> arr16(new ReQL_Obj_t*[2]);
    reql_array_init(var16.get(), arr16.get(), 2);

    ReQL_Obj_c var17;
    std::unique_ptr<ReQL_Obj_t*[]> arr17(new ReQL_Obj_t*[6]);
    reql_array_init(var17.get(), arr17.get(), 6);

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 1);

    reql_array_append(var17.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 1);

    reql_array_append(var17.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 0);

    reql_array_append(var17.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 1);

    reql_array_append(var17.get(), var21.get());

    ReQL_Obj_c var22;
    reql_bool_init(var22.get(), 0);

    reql_array_append(var17.get(), var22.get());

    ReQL_Obj_c var23;
    reql_bool_init(var23.get(), 0);

    reql_array_append(var17.get(), var23.get());

    reql_array_append(var16.get(), var17.get());

    ReQL_Obj_c var24;
    std::unique_ptr<ReQL_Obj_t*[]> arr24(new ReQL_Obj_t*[6]);
    reql_array_init(var24.get(), arr24.get(), 6);

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 0);

    reql_array_append(var24.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var24.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 0);

    reql_array_append(var24.get(), var27.get());

    ReQL_Obj_c var28;
    reql_bool_init(var28.get(), 1);

    reql_array_append(var24.get(), var28.get());

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 1);

    reql_array_append(var24.get(), var29.get());

    ReQL_Obj_c var30;
    reql_bool_init(var30.get(), 1);

    reql_array_append(var24.get(), var30.get());

    reql_array_append(var16.get(), var24.get());

    reql_array_append(var0.get(), var16.get());

    ReQL_Obj_c var31;
    std::unique_ptr<ReQL_Obj_t*[]> arr31(new ReQL_Obj_t*[2]);
    reql_array_init(var31.get(), arr31.get(), 2);

    ReQL_Obj_c var32;
    std::unique_ptr<ReQL_Obj_t*[]> arr32(new ReQL_Obj_t*[6]);
    reql_array_init(var32.get(), arr32.get(), 6);

    ReQL_Obj_c var33;
    reql_bool_init(var33.get(), 1);

    reql_array_append(var32.get(), var33.get());

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 1);

    reql_array_append(var32.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 0);

    reql_array_append(var32.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 1);

    reql_array_append(var32.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 0);

    reql_array_append(var32.get(), var37.get());

    ReQL_Obj_c var38;
    reql_bool_init(var38.get(), 0);

    reql_array_append(var32.get(), var38.get());

    reql_array_append(var31.get(), var32.get());

    ReQL_Obj_c var39;
    std::unique_ptr<ReQL_Obj_t*[]> arr39(new ReQL_Obj_t*[6]);
    reql_array_init(var39.get(), arr39.get(), 6);

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 0);

    reql_array_append(var39.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 0);

    reql_array_append(var39.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 0);

    reql_array_append(var39.get(), var42.get());

    ReQL_Obj_c var43;
    reql_bool_init(var43.get(), 1);

    reql_array_append(var39.get(), var43.get());

    ReQL_Obj_c var44;
    reql_bool_init(var44.get(), 1);

    reql_array_append(var39.get(), var44.get());

    ReQL_Obj_c var45;
    reql_bool_init(var45.get(), 1);

    reql_array_append(var39.get(), var45.get());

    reql_array_append(var31.get(), var39.get());

    reql_array_append(var0.get(), var31.get());

    ReQL_Obj_c var46;
    std::unique_ptr<ReQL_Obj_t*[]> arr46(new ReQL_Obj_t*[2]);
    reql_array_init(var46.get(), arr46.get(), 2);

    ReQL_Obj_c var47;
    std::unique_ptr<ReQL_Obj_t*[]> arr47(new ReQL_Obj_t*[6]);
    reql_array_init(var47.get(), arr47.get(), 6);

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 1);

    reql_array_append(var47.get(), var48.get());

    ReQL_Obj_c var49;
    reql_bool_init(var49.get(), 1);

    reql_array_append(var47.get(), var49.get());

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var47.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 1);

    reql_array_append(var47.get(), var51.get());

    ReQL_Obj_c var52;
    reql_bool_init(var52.get(), 0);

    reql_array_append(var47.get(), var52.get());

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 0);

    reql_array_append(var47.get(), var53.get());

    reql_array_append(var46.get(), var47.get());

    ReQL_Obj_c var54;
    std::unique_ptr<ReQL_Obj_t*[]> arr54(new ReQL_Obj_t*[6]);
    reql_array_init(var54.get(), arr54.get(), 6);

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var54.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 0);

    reql_array_append(var54.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 0);

    reql_array_append(var54.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 1);

    reql_array_append(var54.get(), var58.get());

    ReQL_Obj_c var59;
    reql_bool_init(var59.get(), 1);

    reql_array_append(var54.get(), var59.get());

    ReQL_Obj_c var60;
    reql_bool_init(var60.get(), 1);

    reql_array_append(var54.get(), var60.get());

    reql_array_append(var46.get(), var54.get());

    reql_array_append(var0.get(), var46.get());

    ReQL_Obj_c var61;
    std::unique_ptr<ReQL_Obj_t*[]> arr61(new ReQL_Obj_t*[2]);
    reql_array_init(var61.get(), arr61.get(), 2);

    ReQL_Obj_c var62;
    std::unique_ptr<ReQL_Obj_t*[]> arr62(new ReQL_Obj_t*[6]);
    reql_array_init(var62.get(), arr62.get(), 6);

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 0);

    reql_array_append(var62.get(), var63.get());

    ReQL_Obj_c var64;
    reql_bool_init(var64.get(), 0);

    reql_array_append(var62.get(), var64.get());

    ReQL_Obj_c var65;
    reql_bool_init(var65.get(), 0);

    reql_array_append(var62.get(), var65.get());

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 1);

    reql_array_append(var62.get(), var66.get());

    ReQL_Obj_c var67;
    reql_bool_init(var67.get(), 1);

    reql_array_append(var62.get(), var67.get());

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 1);

    reql_array_append(var62.get(), var68.get());

    reql_array_append(var61.get(), var62.get());

    ReQL_Obj_c var69;
    std::unique_ptr<ReQL_Obj_t*[]> arr69(new ReQL_Obj_t*[6]);
    reql_array_init(var69.get(), arr69.get(), 6);

    ReQL_Obj_c var70;
    reql_bool_init(var70.get(), 1);

    reql_array_append(var69.get(), var70.get());

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 1);

    reql_array_append(var69.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 0);

    reql_array_append(var69.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 1);

    reql_array_append(var69.get(), var73.get());

    ReQL_Obj_c var74;
    reql_bool_init(var74.get(), 0);

    reql_array_append(var69.get(), var74.get());

    ReQL_Obj_c var75;
    reql_bool_init(var75.get(), 0);

    reql_array_append(var69.get(), var75.get());

    reql_array_append(var61.get(), var69.get());

    reql_array_append(var0.get(), var61.get());

    ReQL_Obj_c var76;
    std::unique_ptr<ReQL_Obj_t*[]> arr76(new ReQL_Obj_t*[2]);
    reql_array_init(var76.get(), arr76.get(), 2);

    ReQL_Obj_c var77;
    std::unique_ptr<ReQL_Obj_t*[]> arr77(new ReQL_Obj_t*[6]);
    reql_array_init(var77.get(), arr77.get(), 6);

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 1);

    reql_array_append(var77.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 1);

    reql_array_append(var77.get(), var79.get());

    ReQL_Obj_c var80;
    reql_bool_init(var80.get(), 0);

    reql_array_append(var77.get(), var80.get());

    ReQL_Obj_c var81;
    reql_bool_init(var81.get(), 1);

    reql_array_append(var77.get(), var81.get());

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 0);

    reql_array_append(var77.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 0);

    reql_array_append(var77.get(), var83.get());

    reql_array_append(var76.get(), var77.get());

    ReQL_Obj_c var84;
    std::unique_ptr<ReQL_Obj_t*[]> arr84(new ReQL_Obj_t*[6]);
    reql_array_init(var84.get(), arr84.get(), 6);

    ReQL_Obj_c var85;
    reql_bool_init(var85.get(), 0);

    reql_array_append(var84.get(), var85.get());

    ReQL_Obj_c var86;
    reql_bool_init(var86.get(), 0);

    reql_array_append(var84.get(), var86.get());

    ReQL_Obj_c var87;
    reql_bool_init(var87.get(), 0);

    reql_array_append(var84.get(), var87.get());

    ReQL_Obj_c var88;
    reql_bool_init(var88.get(), 1);

    reql_array_append(var84.get(), var88.get());

    ReQL_Obj_c var89;
    reql_bool_init(var89.get(), 1);

    reql_array_append(var84.get(), var89.get());

    ReQL_Obj_c var90;
    reql_bool_init(var90.get(), 1);

    reql_array_append(var84.get(), var90.get());

    reql_array_append(var76.get(), var84.get());

    reql_array_append(var0.get(), var76.get());

    ReQL_Obj_c var91;
    std::unique_ptr<ReQL_Obj_t*[]> arr91(new ReQL_Obj_t*[2]);
    reql_array_init(var91.get(), arr91.get(), 2);

    ReQL_Obj_c var92;
    std::unique_ptr<ReQL_Obj_t*[]> arr92(new ReQL_Obj_t*[6]);
    reql_array_init(var92.get(), arr92.get(), 6);

    ReQL_Obj_c var93;
    reql_bool_init(var93.get(), 1);

    reql_array_append(var92.get(), var93.get());

    ReQL_Obj_c var94;
    reql_bool_init(var94.get(), 1);

    reql_array_append(var92.get(), var94.get());

    ReQL_Obj_c var95;
    reql_bool_init(var95.get(), 0);

    reql_array_append(var92.get(), var95.get());

    ReQL_Obj_c var96;
    reql_bool_init(var96.get(), 1);

    reql_array_append(var92.get(), var96.get());

    ReQL_Obj_c var97;
    reql_bool_init(var97.get(), 0);

    reql_array_append(var92.get(), var97.get());

    ReQL_Obj_c var98;
    reql_bool_init(var98.get(), 0);

    reql_array_append(var92.get(), var98.get());

    reql_array_append(var91.get(), var92.get());

    ReQL_Obj_c var99;
    std::unique_ptr<ReQL_Obj_t*[]> arr99(new ReQL_Obj_t*[6]);
    reql_array_init(var99.get(), arr99.get(), 6);

    ReQL_Obj_c var100;
    reql_bool_init(var100.get(), 0);

    reql_array_append(var99.get(), var100.get());

    ReQL_Obj_c var101;
    reql_bool_init(var101.get(), 0);

    reql_array_append(var99.get(), var101.get());

    ReQL_Obj_c var102;
    reql_bool_init(var102.get(), 0);

    reql_array_append(var99.get(), var102.get());

    ReQL_Obj_c var103;
    reql_bool_init(var103.get(), 1);

    reql_array_append(var99.get(), var103.get());

    ReQL_Obj_c var104;
    reql_bool_init(var104.get(), 1);

    reql_array_append(var99.get(), var104.get());

    ReQL_Obj_c var105;
    reql_bool_init(var105.get(), 1);

    reql_array_append(var99.get(), var105.get());

    reql_array_append(var91.get(), var99.get());

    reql_array_append(var0.get(), var91.get());

    ReQL_Obj_c var106;
    std::unique_ptr<ReQL_Obj_t*[]> arr106(new ReQL_Obj_t*[2]);
    reql_array_init(var106.get(), arr106.get(), 2);

    ReQL_Obj_c var107;
    std::unique_ptr<ReQL_Obj_t*[]> arr107(new ReQL_Obj_t*[6]);
    reql_array_init(var107.get(), arr107.get(), 6);

    ReQL_Obj_c var108;
    reql_bool_init(var108.get(), 1);

    reql_array_append(var107.get(), var108.get());

    ReQL_Obj_c var109;
    reql_bool_init(var109.get(), 1);

    reql_array_append(var107.get(), var109.get());

    ReQL_Obj_c var110;
    reql_bool_init(var110.get(), 0);

    reql_array_append(var107.get(), var110.get());

    ReQL_Obj_c var111;
    reql_bool_init(var111.get(), 1);

    reql_array_append(var107.get(), var111.get());

    ReQL_Obj_c var112;
    reql_bool_init(var112.get(), 0);

    reql_array_append(var107.get(), var112.get());

    ReQL_Obj_c var113;
    reql_bool_init(var113.get(), 0);

    reql_array_append(var107.get(), var113.get());

    reql_array_append(var106.get(), var107.get());

    ReQL_Obj_c var114;
    std::unique_ptr<ReQL_Obj_t*[]> arr114(new ReQL_Obj_t*[6]);
    reql_array_init(var114.get(), arr114.get(), 6);

    ReQL_Obj_c var115;
    reql_bool_init(var115.get(), 0);

    reql_array_append(var114.get(), var115.get());

    ReQL_Obj_c var116;
    reql_bool_init(var116.get(), 0);

    reql_array_append(var114.get(), var116.get());

    ReQL_Obj_c var117;
    reql_bool_init(var117.get(), 0);

    reql_array_append(var114.get(), var117.get());

    ReQL_Obj_c var118;
    reql_bool_init(var118.get(), 1);

    reql_array_append(var114.get(), var118.get());

    ReQL_Obj_c var119;
    reql_bool_init(var119.get(), 1);

    reql_array_append(var114.get(), var119.get());

    ReQL_Obj_c var120;
    reql_bool_init(var120.get(), 1);

    reql_array_append(var114.get(), var120.get());

    reql_array_append(var106.get(), var114.get());

    reql_array_append(var0.get(), var106.get());
  }

  SECTION("test22") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[4]);
    reql_array_init(var1.get(), arr1.get(), 4);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[4]);
    reql_array_init(var2.get(), arr2.get(), 4);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 0);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 1);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 1);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 1);

    reql_array_append(var2.get(), var6.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Obj_t*[]> arr7(new ReQL_Obj_t*[4]);
    reql_array_init(var7.get(), arr7.get(), 4);

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var7.get(), var8.get());

    ReQL_Obj_c var9;
    reql_bool_init(var9.get(), 0);

    reql_array_append(var7.get(), var9.get());

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 1);

    reql_array_append(var7.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 1);

    reql_array_append(var7.get(), var11.get());

    reql_array_append(var1.get(), var7.get());

    ReQL_Obj_c var12;
    std::unique_ptr<ReQL_Obj_t*[]> arr12(new ReQL_Obj_t*[4]);
    reql_array_init(var12.get(), arr12.get(), 4);

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 0);

    reql_array_append(var12.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 0);

    reql_array_append(var12.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 0);

    reql_array_append(var12.get(), var15.get());

    ReQL_Obj_c var16;
    reql_bool_init(var16.get(), 1);

    reql_array_append(var12.get(), var16.get());

    reql_array_append(var1.get(), var12.get());

    ReQL_Obj_c var17;
    std::unique_ptr<ReQL_Obj_t*[]> arr17(new ReQL_Obj_t*[4]);
    reql_array_init(var17.get(), arr17.get(), 4);

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 0);

    reql_array_append(var17.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 0);

    reql_array_append(var17.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 0);

    reql_array_append(var17.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 0);

    reql_array_append(var17.get(), var21.get());

    reql_array_append(var1.get(), var17.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var22;
    std::unique_ptr<ReQL_Obj_t*[]> arr22(new ReQL_Obj_t*[4]);
    reql_array_init(var22.get(), arr22.get(), 4);

    ReQL_Obj_c var23;
    std::unique_ptr<ReQL_Obj_t*[]> arr23(new ReQL_Obj_t*[4]);
    reql_array_init(var23.get(), arr23.get(), 4);

    ReQL_Obj_c var24;
    reql_bool_init(var24.get(), 0);

    reql_array_append(var23.get(), var24.get());

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 0);

    reql_array_append(var23.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var23.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 0);

    reql_array_append(var23.get(), var27.get());

    reql_array_append(var22.get(), var23.get());

    ReQL_Obj_c var28;
    std::unique_ptr<ReQL_Obj_t*[]> arr28(new ReQL_Obj_t*[4]);
    reql_array_init(var28.get(), arr28.get(), 4);

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 0);

    reql_array_append(var28.get(), var29.get());

    ReQL_Obj_c var30;
    reql_bool_init(var30.get(), 0);

    reql_array_append(var28.get(), var30.get());

    ReQL_Obj_c var31;
    reql_bool_init(var31.get(), 1);

    reql_array_append(var28.get(), var31.get());

    ReQL_Obj_c var32;
    reql_bool_init(var32.get(), 1);

    reql_array_append(var28.get(), var32.get());

    reql_array_append(var22.get(), var28.get());

    ReQL_Obj_c var33;
    std::unique_ptr<ReQL_Obj_t*[]> arr33(new ReQL_Obj_t*[4]);
    reql_array_init(var33.get(), arr33.get(), 4);

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 0);

    reql_array_append(var33.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 0);

    reql_array_append(var33.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 0);

    reql_array_append(var33.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 1);

    reql_array_append(var33.get(), var37.get());

    reql_array_append(var22.get(), var33.get());

    ReQL_Obj_c var38;
    std::unique_ptr<ReQL_Obj_t*[]> arr38(new ReQL_Obj_t*[4]);
    reql_array_init(var38.get(), arr38.get(), 4);

    ReQL_Obj_c var39;
    reql_bool_init(var39.get(), 0);

    reql_array_append(var38.get(), var39.get());

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 0);

    reql_array_append(var38.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 0);

    reql_array_append(var38.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 0);

    reql_array_append(var38.get(), var42.get());

    reql_array_append(var22.get(), var38.get());

    reql_array_append(var0.get(), var22.get());

    ReQL_Obj_c var43;
    std::unique_ptr<ReQL_Obj_t*[]> arr43(new ReQL_Obj_t*[4]);
    reql_array_init(var43.get(), arr43.get(), 4);

    ReQL_Obj_c var44;
    std::unique_ptr<ReQL_Obj_t*[]> arr44(new ReQL_Obj_t*[4]);
    reql_array_init(var44.get(), arr44.get(), 4);

    ReQL_Obj_c var45;
    reql_bool_init(var45.get(), 0);

    reql_array_append(var44.get(), var45.get());

    ReQL_Obj_c var46;
    reql_bool_init(var46.get(), 0);

    reql_array_append(var44.get(), var46.get());

    ReQL_Obj_c var47;
    reql_bool_init(var47.get(), 0);

    reql_array_append(var44.get(), var47.get());

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 0);

    reql_array_append(var44.get(), var48.get());

    reql_array_append(var43.get(), var44.get());

    ReQL_Obj_c var49;
    std::unique_ptr<ReQL_Obj_t*[]> arr49(new ReQL_Obj_t*[4]);
    reql_array_init(var49.get(), arr49.get(), 4);

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var49.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 0);

    reql_array_append(var49.get(), var51.get());

    ReQL_Obj_c var52;
    reql_bool_init(var52.get(), 0);

    reql_array_append(var49.get(), var52.get());

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 0);

    reql_array_append(var49.get(), var53.get());

    reql_array_append(var43.get(), var49.get());

    ReQL_Obj_c var54;
    std::unique_ptr<ReQL_Obj_t*[]> arr54(new ReQL_Obj_t*[4]);
    reql_array_init(var54.get(), arr54.get(), 4);

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var54.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 0);

    reql_array_append(var54.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 0);

    reql_array_append(var54.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 1);

    reql_array_append(var54.get(), var58.get());

    reql_array_append(var43.get(), var54.get());

    ReQL_Obj_c var59;
    std::unique_ptr<ReQL_Obj_t*[]> arr59(new ReQL_Obj_t*[4]);
    reql_array_init(var59.get(), arr59.get(), 4);

    ReQL_Obj_c var60;
    reql_bool_init(var60.get(), 0);

    reql_array_append(var59.get(), var60.get());

    ReQL_Obj_c var61;
    reql_bool_init(var61.get(), 0);

    reql_array_append(var59.get(), var61.get());

    ReQL_Obj_c var62;
    reql_bool_init(var62.get(), 0);

    reql_array_append(var59.get(), var62.get());

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 0);

    reql_array_append(var59.get(), var63.get());

    reql_array_append(var43.get(), var59.get());

    reql_array_append(var0.get(), var43.get());

    ReQL_Obj_c var64;
    std::unique_ptr<ReQL_Obj_t*[]> arr64(new ReQL_Obj_t*[4]);
    reql_array_init(var64.get(), arr64.get(), 4);

    ReQL_Obj_c var65;
    std::unique_ptr<ReQL_Obj_t*[]> arr65(new ReQL_Obj_t*[4]);
    reql_array_init(var65.get(), arr65.get(), 4);

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 0);

    reql_array_append(var65.get(), var66.get());

    ReQL_Obj_c var67;
    reql_bool_init(var67.get(), 0);

    reql_array_append(var65.get(), var67.get());

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 0);

    reql_array_append(var65.get(), var68.get());

    ReQL_Obj_c var69;
    reql_bool_init(var69.get(), 0);

    reql_array_append(var65.get(), var69.get());

    reql_array_append(var64.get(), var65.get());

    ReQL_Obj_c var70;
    std::unique_ptr<ReQL_Obj_t*[]> arr70(new ReQL_Obj_t*[4]);
    reql_array_init(var70.get(), arr70.get(), 4);

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 0);

    reql_array_append(var70.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 0);

    reql_array_append(var70.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 0);

    reql_array_append(var70.get(), var73.get());

    ReQL_Obj_c var74;
    reql_bool_init(var74.get(), 0);

    reql_array_append(var70.get(), var74.get());

    reql_array_append(var64.get(), var70.get());

    ReQL_Obj_c var75;
    std::unique_ptr<ReQL_Obj_t*[]> arr75(new ReQL_Obj_t*[4]);
    reql_array_init(var75.get(), arr75.get(), 4);

    ReQL_Obj_c var76;
    reql_bool_init(var76.get(), 0);

    reql_array_append(var75.get(), var76.get());

    ReQL_Obj_c var77;
    reql_bool_init(var77.get(), 0);

    reql_array_append(var75.get(), var77.get());

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 0);

    reql_array_append(var75.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 0);

    reql_array_append(var75.get(), var79.get());

    reql_array_append(var64.get(), var75.get());

    ReQL_Obj_c var80;
    std::unique_ptr<ReQL_Obj_t*[]> arr80(new ReQL_Obj_t*[4]);
    reql_array_init(var80.get(), arr80.get(), 4);

    ReQL_Obj_c var81;
    reql_bool_init(var81.get(), 0);

    reql_array_append(var80.get(), var81.get());

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 0);

    reql_array_append(var80.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 0);

    reql_array_append(var80.get(), var83.get());

    ReQL_Obj_c var84;
    reql_bool_init(var84.get(), 0);

    reql_array_append(var80.get(), var84.get());

    reql_array_append(var64.get(), var80.get());

    reql_array_append(var0.get(), var64.get());
  }

  SECTION("test23") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[4]);
    reql_array_init(var1.get(), arr1.get(), 4);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[4]);
    reql_array_init(var2.get(), arr2.get(), 4);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 0);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 0);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 0);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 0);

    reql_array_append(var2.get(), var6.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Obj_t*[]> arr7(new ReQL_Obj_t*[4]);
    reql_array_init(var7.get(), arr7.get(), 4);

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var7.get(), var8.get());

    ReQL_Obj_c var9;
    reql_bool_init(var9.get(), 0);

    reql_array_append(var7.get(), var9.get());

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 1);

    reql_array_append(var7.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 1);

    reql_array_append(var7.get(), var11.get());

    reql_array_append(var1.get(), var7.get());

    ReQL_Obj_c var12;
    std::unique_ptr<ReQL_Obj_t*[]> arr12(new ReQL_Obj_t*[4]);
    reql_array_init(var12.get(), arr12.get(), 4);

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 0);

    reql_array_append(var12.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 0);

    reql_array_append(var12.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 0);

    reql_array_append(var12.get(), var15.get());

    ReQL_Obj_c var16;
    reql_bool_init(var16.get(), 1);

    reql_array_append(var12.get(), var16.get());

    reql_array_append(var1.get(), var12.get());

    ReQL_Obj_c var17;
    std::unique_ptr<ReQL_Obj_t*[]> arr17(new ReQL_Obj_t*[4]);
    reql_array_init(var17.get(), arr17.get(), 4);

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 0);

    reql_array_append(var17.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 0);

    reql_array_append(var17.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 0);

    reql_array_append(var17.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 0);

    reql_array_append(var17.get(), var21.get());

    reql_array_append(var1.get(), var17.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var22;
    std::unique_ptr<ReQL_Obj_t*[]> arr22(new ReQL_Obj_t*[4]);
    reql_array_init(var22.get(), arr22.get(), 4);

    ReQL_Obj_c var23;
    std::unique_ptr<ReQL_Obj_t*[]> arr23(new ReQL_Obj_t*[4]);
    reql_array_init(var23.get(), arr23.get(), 4);

    ReQL_Obj_c var24;
    reql_bool_init(var24.get(), 0);

    reql_array_append(var23.get(), var24.get());

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 0);

    reql_array_append(var23.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var23.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 0);

    reql_array_append(var23.get(), var27.get());

    reql_array_append(var22.get(), var23.get());

    ReQL_Obj_c var28;
    std::unique_ptr<ReQL_Obj_t*[]> arr28(new ReQL_Obj_t*[4]);
    reql_array_init(var28.get(), arr28.get(), 4);

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 0);

    reql_array_append(var28.get(), var29.get());

    ReQL_Obj_c var30;
    reql_bool_init(var30.get(), 0);

    reql_array_append(var28.get(), var30.get());

    ReQL_Obj_c var31;
    reql_bool_init(var31.get(), 0);

    reql_array_append(var28.get(), var31.get());

    ReQL_Obj_c var32;
    reql_bool_init(var32.get(), 0);

    reql_array_append(var28.get(), var32.get());

    reql_array_append(var22.get(), var28.get());

    ReQL_Obj_c var33;
    std::unique_ptr<ReQL_Obj_t*[]> arr33(new ReQL_Obj_t*[4]);
    reql_array_init(var33.get(), arr33.get(), 4);

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 0);

    reql_array_append(var33.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 0);

    reql_array_append(var33.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 0);

    reql_array_append(var33.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 1);

    reql_array_append(var33.get(), var37.get());

    reql_array_append(var22.get(), var33.get());

    ReQL_Obj_c var38;
    std::unique_ptr<ReQL_Obj_t*[]> arr38(new ReQL_Obj_t*[4]);
    reql_array_init(var38.get(), arr38.get(), 4);

    ReQL_Obj_c var39;
    reql_bool_init(var39.get(), 0);

    reql_array_append(var38.get(), var39.get());

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 0);

    reql_array_append(var38.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 0);

    reql_array_append(var38.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 0);

    reql_array_append(var38.get(), var42.get());

    reql_array_append(var22.get(), var38.get());

    reql_array_append(var0.get(), var22.get());

    ReQL_Obj_c var43;
    std::unique_ptr<ReQL_Obj_t*[]> arr43(new ReQL_Obj_t*[4]);
    reql_array_init(var43.get(), arr43.get(), 4);

    ReQL_Obj_c var44;
    std::unique_ptr<ReQL_Obj_t*[]> arr44(new ReQL_Obj_t*[4]);
    reql_array_init(var44.get(), arr44.get(), 4);

    ReQL_Obj_c var45;
    reql_bool_init(var45.get(), 0);

    reql_array_append(var44.get(), var45.get());

    ReQL_Obj_c var46;
    reql_bool_init(var46.get(), 0);

    reql_array_append(var44.get(), var46.get());

    ReQL_Obj_c var47;
    reql_bool_init(var47.get(), 0);

    reql_array_append(var44.get(), var47.get());

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 0);

    reql_array_append(var44.get(), var48.get());

    reql_array_append(var43.get(), var44.get());

    ReQL_Obj_c var49;
    std::unique_ptr<ReQL_Obj_t*[]> arr49(new ReQL_Obj_t*[4]);
    reql_array_init(var49.get(), arr49.get(), 4);

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var49.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 0);

    reql_array_append(var49.get(), var51.get());

    ReQL_Obj_c var52;
    reql_bool_init(var52.get(), 0);

    reql_array_append(var49.get(), var52.get());

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 0);

    reql_array_append(var49.get(), var53.get());

    reql_array_append(var43.get(), var49.get());

    ReQL_Obj_c var54;
    std::unique_ptr<ReQL_Obj_t*[]> arr54(new ReQL_Obj_t*[4]);
    reql_array_init(var54.get(), arr54.get(), 4);

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var54.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 0);

    reql_array_append(var54.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 0);

    reql_array_append(var54.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 0);

    reql_array_append(var54.get(), var58.get());

    reql_array_append(var43.get(), var54.get());

    ReQL_Obj_c var59;
    std::unique_ptr<ReQL_Obj_t*[]> arr59(new ReQL_Obj_t*[4]);
    reql_array_init(var59.get(), arr59.get(), 4);

    ReQL_Obj_c var60;
    reql_bool_init(var60.get(), 0);

    reql_array_append(var59.get(), var60.get());

    ReQL_Obj_c var61;
    reql_bool_init(var61.get(), 0);

    reql_array_append(var59.get(), var61.get());

    ReQL_Obj_c var62;
    reql_bool_init(var62.get(), 0);

    reql_array_append(var59.get(), var62.get());

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 0);

    reql_array_append(var59.get(), var63.get());

    reql_array_append(var43.get(), var59.get());

    reql_array_append(var0.get(), var43.get());

    ReQL_Obj_c var64;
    std::unique_ptr<ReQL_Obj_t*[]> arr64(new ReQL_Obj_t*[4]);
    reql_array_init(var64.get(), arr64.get(), 4);

    ReQL_Obj_c var65;
    std::unique_ptr<ReQL_Obj_t*[]> arr65(new ReQL_Obj_t*[4]);
    reql_array_init(var65.get(), arr65.get(), 4);

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 0);

    reql_array_append(var65.get(), var66.get());

    ReQL_Obj_c var67;
    reql_bool_init(var67.get(), 0);

    reql_array_append(var65.get(), var67.get());

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 0);

    reql_array_append(var65.get(), var68.get());

    ReQL_Obj_c var69;
    reql_bool_init(var69.get(), 0);

    reql_array_append(var65.get(), var69.get());

    reql_array_append(var64.get(), var65.get());

    ReQL_Obj_c var70;
    std::unique_ptr<ReQL_Obj_t*[]> arr70(new ReQL_Obj_t*[4]);
    reql_array_init(var70.get(), arr70.get(), 4);

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 0);

    reql_array_append(var70.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 0);

    reql_array_append(var70.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 0);

    reql_array_append(var70.get(), var73.get());

    ReQL_Obj_c var74;
    reql_bool_init(var74.get(), 0);

    reql_array_append(var70.get(), var74.get());

    reql_array_append(var64.get(), var70.get());

    ReQL_Obj_c var75;
    std::unique_ptr<ReQL_Obj_t*[]> arr75(new ReQL_Obj_t*[4]);
    reql_array_init(var75.get(), arr75.get(), 4);

    ReQL_Obj_c var76;
    reql_bool_init(var76.get(), 0);

    reql_array_append(var75.get(), var76.get());

    ReQL_Obj_c var77;
    reql_bool_init(var77.get(), 0);

    reql_array_append(var75.get(), var77.get());

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 0);

    reql_array_append(var75.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 0);

    reql_array_append(var75.get(), var79.get());

    reql_array_append(var64.get(), var75.get());

    ReQL_Obj_c var80;
    std::unique_ptr<ReQL_Obj_t*[]> arr80(new ReQL_Obj_t*[4]);
    reql_array_init(var80.get(), arr80.get(), 4);

    ReQL_Obj_c var81;
    reql_bool_init(var81.get(), 0);

    reql_array_append(var80.get(), var81.get());

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 0);

    reql_array_append(var80.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 0);

    reql_array_append(var80.get(), var83.get());

    ReQL_Obj_c var84;
    reql_bool_init(var84.get(), 0);

    reql_array_append(var80.get(), var84.get());

    reql_array_append(var64.get(), var80.get());

    reql_array_append(var0.get(), var64.get());
  }

  SECTION("test24") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[4]);
    reql_array_init(var1.get(), arr1.get(), 4);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[4]);
    reql_array_init(var2.get(), arr2.get(), 4);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 1);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 1);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 1);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 1);

    reql_array_append(var2.get(), var6.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Obj_t*[]> arr7(new ReQL_Obj_t*[4]);
    reql_array_init(var7.get(), arr7.get(), 4);

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var7.get(), var8.get());

    ReQL_Obj_c var9;
    reql_bool_init(var9.get(), 1);

    reql_array_append(var7.get(), var9.get());

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 1);

    reql_array_append(var7.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 1);

    reql_array_append(var7.get(), var11.get());

    reql_array_append(var1.get(), var7.get());

    ReQL_Obj_c var12;
    std::unique_ptr<ReQL_Obj_t*[]> arr12(new ReQL_Obj_t*[4]);
    reql_array_init(var12.get(), arr12.get(), 4);

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 0);

    reql_array_append(var12.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 0);

    reql_array_append(var12.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 1);

    reql_array_append(var12.get(), var15.get());

    ReQL_Obj_c var16;
    reql_bool_init(var16.get(), 1);

    reql_array_append(var12.get(), var16.get());

    reql_array_append(var1.get(), var12.get());

    ReQL_Obj_c var17;
    std::unique_ptr<ReQL_Obj_t*[]> arr17(new ReQL_Obj_t*[4]);
    reql_array_init(var17.get(), arr17.get(), 4);

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 0);

    reql_array_append(var17.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 0);

    reql_array_append(var17.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 0);

    reql_array_append(var17.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 1);

    reql_array_append(var17.get(), var21.get());

    reql_array_append(var1.get(), var17.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var22;
    std::unique_ptr<ReQL_Obj_t*[]> arr22(new ReQL_Obj_t*[4]);
    reql_array_init(var22.get(), arr22.get(), 4);

    ReQL_Obj_c var23;
    std::unique_ptr<ReQL_Obj_t*[]> arr23(new ReQL_Obj_t*[4]);
    reql_array_init(var23.get(), arr23.get(), 4);

    ReQL_Obj_c var24;
    reql_bool_init(var24.get(), 0);

    reql_array_append(var23.get(), var24.get());

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 0);

    reql_array_append(var23.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var23.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 0);

    reql_array_append(var23.get(), var27.get());

    reql_array_append(var22.get(), var23.get());

    ReQL_Obj_c var28;
    std::unique_ptr<ReQL_Obj_t*[]> arr28(new ReQL_Obj_t*[4]);
    reql_array_init(var28.get(), arr28.get(), 4);

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 0);

    reql_array_append(var28.get(), var29.get());

    ReQL_Obj_c var30;
    reql_bool_init(var30.get(), 1);

    reql_array_append(var28.get(), var30.get());

    ReQL_Obj_c var31;
    reql_bool_init(var31.get(), 1);

    reql_array_append(var28.get(), var31.get());

    ReQL_Obj_c var32;
    reql_bool_init(var32.get(), 1);

    reql_array_append(var28.get(), var32.get());

    reql_array_append(var22.get(), var28.get());

    ReQL_Obj_c var33;
    std::unique_ptr<ReQL_Obj_t*[]> arr33(new ReQL_Obj_t*[4]);
    reql_array_init(var33.get(), arr33.get(), 4);

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 0);

    reql_array_append(var33.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 0);

    reql_array_append(var33.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 1);

    reql_array_append(var33.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 1);

    reql_array_append(var33.get(), var37.get());

    reql_array_append(var22.get(), var33.get());

    ReQL_Obj_c var38;
    std::unique_ptr<ReQL_Obj_t*[]> arr38(new ReQL_Obj_t*[4]);
    reql_array_init(var38.get(), arr38.get(), 4);

    ReQL_Obj_c var39;
    reql_bool_init(var39.get(), 0);

    reql_array_append(var38.get(), var39.get());

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 0);

    reql_array_append(var38.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 0);

    reql_array_append(var38.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 1);

    reql_array_append(var38.get(), var42.get());

    reql_array_append(var22.get(), var38.get());

    reql_array_append(var0.get(), var22.get());

    ReQL_Obj_c var43;
    std::unique_ptr<ReQL_Obj_t*[]> arr43(new ReQL_Obj_t*[4]);
    reql_array_init(var43.get(), arr43.get(), 4);

    ReQL_Obj_c var44;
    std::unique_ptr<ReQL_Obj_t*[]> arr44(new ReQL_Obj_t*[4]);
    reql_array_init(var44.get(), arr44.get(), 4);

    ReQL_Obj_c var45;
    reql_bool_init(var45.get(), 0);

    reql_array_append(var44.get(), var45.get());

    ReQL_Obj_c var46;
    reql_bool_init(var46.get(), 0);

    reql_array_append(var44.get(), var46.get());

    ReQL_Obj_c var47;
    reql_bool_init(var47.get(), 0);

    reql_array_append(var44.get(), var47.get());

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 0);

    reql_array_append(var44.get(), var48.get());

    reql_array_append(var43.get(), var44.get());

    ReQL_Obj_c var49;
    std::unique_ptr<ReQL_Obj_t*[]> arr49(new ReQL_Obj_t*[4]);
    reql_array_init(var49.get(), arr49.get(), 4);

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var49.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 0);

    reql_array_append(var49.get(), var51.get());

    ReQL_Obj_c var52;
    reql_bool_init(var52.get(), 0);

    reql_array_append(var49.get(), var52.get());

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 0);

    reql_array_append(var49.get(), var53.get());

    reql_array_append(var43.get(), var49.get());

    ReQL_Obj_c var54;
    std::unique_ptr<ReQL_Obj_t*[]> arr54(new ReQL_Obj_t*[4]);
    reql_array_init(var54.get(), arr54.get(), 4);

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var54.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 0);

    reql_array_append(var54.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 1);

    reql_array_append(var54.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 1);

    reql_array_append(var54.get(), var58.get());

    reql_array_append(var43.get(), var54.get());

    ReQL_Obj_c var59;
    std::unique_ptr<ReQL_Obj_t*[]> arr59(new ReQL_Obj_t*[4]);
    reql_array_init(var59.get(), arr59.get(), 4);

    ReQL_Obj_c var60;
    reql_bool_init(var60.get(), 0);

    reql_array_append(var59.get(), var60.get());

    ReQL_Obj_c var61;
    reql_bool_init(var61.get(), 0);

    reql_array_append(var59.get(), var61.get());

    ReQL_Obj_c var62;
    reql_bool_init(var62.get(), 0);

    reql_array_append(var59.get(), var62.get());

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 1);

    reql_array_append(var59.get(), var63.get());

    reql_array_append(var43.get(), var59.get());

    reql_array_append(var0.get(), var43.get());

    ReQL_Obj_c var64;
    std::unique_ptr<ReQL_Obj_t*[]> arr64(new ReQL_Obj_t*[4]);
    reql_array_init(var64.get(), arr64.get(), 4);

    ReQL_Obj_c var65;
    std::unique_ptr<ReQL_Obj_t*[]> arr65(new ReQL_Obj_t*[4]);
    reql_array_init(var65.get(), arr65.get(), 4);

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 0);

    reql_array_append(var65.get(), var66.get());

    ReQL_Obj_c var67;
    reql_bool_init(var67.get(), 0);

    reql_array_append(var65.get(), var67.get());

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 0);

    reql_array_append(var65.get(), var68.get());

    ReQL_Obj_c var69;
    reql_bool_init(var69.get(), 0);

    reql_array_append(var65.get(), var69.get());

    reql_array_append(var64.get(), var65.get());

    ReQL_Obj_c var70;
    std::unique_ptr<ReQL_Obj_t*[]> arr70(new ReQL_Obj_t*[4]);
    reql_array_init(var70.get(), arr70.get(), 4);

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 0);

    reql_array_append(var70.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 0);

    reql_array_append(var70.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 0);

    reql_array_append(var70.get(), var73.get());

    ReQL_Obj_c var74;
    reql_bool_init(var74.get(), 0);

    reql_array_append(var70.get(), var74.get());

    reql_array_append(var64.get(), var70.get());

    ReQL_Obj_c var75;
    std::unique_ptr<ReQL_Obj_t*[]> arr75(new ReQL_Obj_t*[4]);
    reql_array_init(var75.get(), arr75.get(), 4);

    ReQL_Obj_c var76;
    reql_bool_init(var76.get(), 0);

    reql_array_append(var75.get(), var76.get());

    ReQL_Obj_c var77;
    reql_bool_init(var77.get(), 0);

    reql_array_append(var75.get(), var77.get());

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 0);

    reql_array_append(var75.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 0);

    reql_array_append(var75.get(), var79.get());

    reql_array_append(var64.get(), var75.get());

    ReQL_Obj_c var80;
    std::unique_ptr<ReQL_Obj_t*[]> arr80(new ReQL_Obj_t*[4]);
    reql_array_init(var80.get(), arr80.get(), 4);

    ReQL_Obj_c var81;
    reql_bool_init(var81.get(), 0);

    reql_array_append(var80.get(), var81.get());

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 0);

    reql_array_append(var80.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 0);

    reql_array_append(var80.get(), var83.get());

    ReQL_Obj_c var84;
    reql_bool_init(var84.get(), 1);

    reql_array_append(var80.get(), var84.get());

    reql_array_append(var64.get(), var80.get());

    reql_array_append(var0.get(), var64.get());
  }

  SECTION("test25") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Obj_t*[]> arr0(new ReQL_Obj_t*[4]);
    reql_array_init(var0.get(), arr0.get(), 4);

    ReQL_Obj_c var1;
    std::unique_ptr<ReQL_Obj_t*[]> arr1(new ReQL_Obj_t*[4]);
    reql_array_init(var1.get(), arr1.get(), 4);

    ReQL_Obj_c var2;
    std::unique_ptr<ReQL_Obj_t*[]> arr2(new ReQL_Obj_t*[4]);
    reql_array_init(var2.get(), arr2.get(), 4);

    ReQL_Obj_c var3;
    reql_bool_init(var3.get(), 0);

    reql_array_append(var2.get(), var3.get());

    ReQL_Obj_c var4;
    reql_bool_init(var4.get(), 0);

    reql_array_append(var2.get(), var4.get());

    ReQL_Obj_c var5;
    reql_bool_init(var5.get(), 0);

    reql_array_append(var2.get(), var5.get());

    ReQL_Obj_c var6;
    reql_bool_init(var6.get(), 0);

    reql_array_append(var2.get(), var6.get());

    reql_array_append(var1.get(), var2.get());

    ReQL_Obj_c var7;
    std::unique_ptr<ReQL_Obj_t*[]> arr7(new ReQL_Obj_t*[4]);
    reql_array_init(var7.get(), arr7.get(), 4);

    ReQL_Obj_c var8;
    reql_bool_init(var8.get(), 0);

    reql_array_append(var7.get(), var8.get());

    ReQL_Obj_c var9;
    reql_bool_init(var9.get(), 1);

    reql_array_append(var7.get(), var9.get());

    ReQL_Obj_c var10;
    reql_bool_init(var10.get(), 1);

    reql_array_append(var7.get(), var10.get());

    ReQL_Obj_c var11;
    reql_bool_init(var11.get(), 1);

    reql_array_append(var7.get(), var11.get());

    reql_array_append(var1.get(), var7.get());

    ReQL_Obj_c var12;
    std::unique_ptr<ReQL_Obj_t*[]> arr12(new ReQL_Obj_t*[4]);
    reql_array_init(var12.get(), arr12.get(), 4);

    ReQL_Obj_c var13;
    reql_bool_init(var13.get(), 0);

    reql_array_append(var12.get(), var13.get());

    ReQL_Obj_c var14;
    reql_bool_init(var14.get(), 0);

    reql_array_append(var12.get(), var14.get());

    ReQL_Obj_c var15;
    reql_bool_init(var15.get(), 1);

    reql_array_append(var12.get(), var15.get());

    ReQL_Obj_c var16;
    reql_bool_init(var16.get(), 1);

    reql_array_append(var12.get(), var16.get());

    reql_array_append(var1.get(), var12.get());

    ReQL_Obj_c var17;
    std::unique_ptr<ReQL_Obj_t*[]> arr17(new ReQL_Obj_t*[4]);
    reql_array_init(var17.get(), arr17.get(), 4);

    ReQL_Obj_c var18;
    reql_bool_init(var18.get(), 0);

    reql_array_append(var17.get(), var18.get());

    ReQL_Obj_c var19;
    reql_bool_init(var19.get(), 0);

    reql_array_append(var17.get(), var19.get());

    ReQL_Obj_c var20;
    reql_bool_init(var20.get(), 0);

    reql_array_append(var17.get(), var20.get());

    ReQL_Obj_c var21;
    reql_bool_init(var21.get(), 1);

    reql_array_append(var17.get(), var21.get());

    reql_array_append(var1.get(), var17.get());

    reql_array_append(var0.get(), var1.get());

    ReQL_Obj_c var22;
    std::unique_ptr<ReQL_Obj_t*[]> arr22(new ReQL_Obj_t*[4]);
    reql_array_init(var22.get(), arr22.get(), 4);

    ReQL_Obj_c var23;
    std::unique_ptr<ReQL_Obj_t*[]> arr23(new ReQL_Obj_t*[4]);
    reql_array_init(var23.get(), arr23.get(), 4);

    ReQL_Obj_c var24;
    reql_bool_init(var24.get(), 0);

    reql_array_append(var23.get(), var24.get());

    ReQL_Obj_c var25;
    reql_bool_init(var25.get(), 0);

    reql_array_append(var23.get(), var25.get());

    ReQL_Obj_c var26;
    reql_bool_init(var26.get(), 0);

    reql_array_append(var23.get(), var26.get());

    ReQL_Obj_c var27;
    reql_bool_init(var27.get(), 0);

    reql_array_append(var23.get(), var27.get());

    reql_array_append(var22.get(), var23.get());

    ReQL_Obj_c var28;
    std::unique_ptr<ReQL_Obj_t*[]> arr28(new ReQL_Obj_t*[4]);
    reql_array_init(var28.get(), arr28.get(), 4);

    ReQL_Obj_c var29;
    reql_bool_init(var29.get(), 0);

    reql_array_append(var28.get(), var29.get());

    ReQL_Obj_c var30;
    reql_bool_init(var30.get(), 0);

    reql_array_append(var28.get(), var30.get());

    ReQL_Obj_c var31;
    reql_bool_init(var31.get(), 0);

    reql_array_append(var28.get(), var31.get());

    ReQL_Obj_c var32;
    reql_bool_init(var32.get(), 0);

    reql_array_append(var28.get(), var32.get());

    reql_array_append(var22.get(), var28.get());

    ReQL_Obj_c var33;
    std::unique_ptr<ReQL_Obj_t*[]> arr33(new ReQL_Obj_t*[4]);
    reql_array_init(var33.get(), arr33.get(), 4);

    ReQL_Obj_c var34;
    reql_bool_init(var34.get(), 0);

    reql_array_append(var33.get(), var34.get());

    ReQL_Obj_c var35;
    reql_bool_init(var35.get(), 0);

    reql_array_append(var33.get(), var35.get());

    ReQL_Obj_c var36;
    reql_bool_init(var36.get(), 1);

    reql_array_append(var33.get(), var36.get());

    ReQL_Obj_c var37;
    reql_bool_init(var37.get(), 1);

    reql_array_append(var33.get(), var37.get());

    reql_array_append(var22.get(), var33.get());

    ReQL_Obj_c var38;
    std::unique_ptr<ReQL_Obj_t*[]> arr38(new ReQL_Obj_t*[4]);
    reql_array_init(var38.get(), arr38.get(), 4);

    ReQL_Obj_c var39;
    reql_bool_init(var39.get(), 0);

    reql_array_append(var38.get(), var39.get());

    ReQL_Obj_c var40;
    reql_bool_init(var40.get(), 0);

    reql_array_append(var38.get(), var40.get());

    ReQL_Obj_c var41;
    reql_bool_init(var41.get(), 0);

    reql_array_append(var38.get(), var41.get());

    ReQL_Obj_c var42;
    reql_bool_init(var42.get(), 1);

    reql_array_append(var38.get(), var42.get());

    reql_array_append(var22.get(), var38.get());

    reql_array_append(var0.get(), var22.get());

    ReQL_Obj_c var43;
    std::unique_ptr<ReQL_Obj_t*[]> arr43(new ReQL_Obj_t*[4]);
    reql_array_init(var43.get(), arr43.get(), 4);

    ReQL_Obj_c var44;
    std::unique_ptr<ReQL_Obj_t*[]> arr44(new ReQL_Obj_t*[4]);
    reql_array_init(var44.get(), arr44.get(), 4);

    ReQL_Obj_c var45;
    reql_bool_init(var45.get(), 0);

    reql_array_append(var44.get(), var45.get());

    ReQL_Obj_c var46;
    reql_bool_init(var46.get(), 0);

    reql_array_append(var44.get(), var46.get());

    ReQL_Obj_c var47;
    reql_bool_init(var47.get(), 0);

    reql_array_append(var44.get(), var47.get());

    ReQL_Obj_c var48;
    reql_bool_init(var48.get(), 0);

    reql_array_append(var44.get(), var48.get());

    reql_array_append(var43.get(), var44.get());

    ReQL_Obj_c var49;
    std::unique_ptr<ReQL_Obj_t*[]> arr49(new ReQL_Obj_t*[4]);
    reql_array_init(var49.get(), arr49.get(), 4);

    ReQL_Obj_c var50;
    reql_bool_init(var50.get(), 0);

    reql_array_append(var49.get(), var50.get());

    ReQL_Obj_c var51;
    reql_bool_init(var51.get(), 0);

    reql_array_append(var49.get(), var51.get());

    ReQL_Obj_c var52;
    reql_bool_init(var52.get(), 0);

    reql_array_append(var49.get(), var52.get());

    ReQL_Obj_c var53;
    reql_bool_init(var53.get(), 0);

    reql_array_append(var49.get(), var53.get());

    reql_array_append(var43.get(), var49.get());

    ReQL_Obj_c var54;
    std::unique_ptr<ReQL_Obj_t*[]> arr54(new ReQL_Obj_t*[4]);
    reql_array_init(var54.get(), arr54.get(), 4);

    ReQL_Obj_c var55;
    reql_bool_init(var55.get(), 0);

    reql_array_append(var54.get(), var55.get());

    ReQL_Obj_c var56;
    reql_bool_init(var56.get(), 0);

    reql_array_append(var54.get(), var56.get());

    ReQL_Obj_c var57;
    reql_bool_init(var57.get(), 0);

    reql_array_append(var54.get(), var57.get());

    ReQL_Obj_c var58;
    reql_bool_init(var58.get(), 0);

    reql_array_append(var54.get(), var58.get());

    reql_array_append(var43.get(), var54.get());

    ReQL_Obj_c var59;
    std::unique_ptr<ReQL_Obj_t*[]> arr59(new ReQL_Obj_t*[4]);
    reql_array_init(var59.get(), arr59.get(), 4);

    ReQL_Obj_c var60;
    reql_bool_init(var60.get(), 0);

    reql_array_append(var59.get(), var60.get());

    ReQL_Obj_c var61;
    reql_bool_init(var61.get(), 0);

    reql_array_append(var59.get(), var61.get());

    ReQL_Obj_c var62;
    reql_bool_init(var62.get(), 0);

    reql_array_append(var59.get(), var62.get());

    ReQL_Obj_c var63;
    reql_bool_init(var63.get(), 1);

    reql_array_append(var59.get(), var63.get());

    reql_array_append(var43.get(), var59.get());

    reql_array_append(var0.get(), var43.get());

    ReQL_Obj_c var64;
    std::unique_ptr<ReQL_Obj_t*[]> arr64(new ReQL_Obj_t*[4]);
    reql_array_init(var64.get(), arr64.get(), 4);

    ReQL_Obj_c var65;
    std::unique_ptr<ReQL_Obj_t*[]> arr65(new ReQL_Obj_t*[4]);
    reql_array_init(var65.get(), arr65.get(), 4);

    ReQL_Obj_c var66;
    reql_bool_init(var66.get(), 0);

    reql_array_append(var65.get(), var66.get());

    ReQL_Obj_c var67;
    reql_bool_init(var67.get(), 0);

    reql_array_append(var65.get(), var67.get());

    ReQL_Obj_c var68;
    reql_bool_init(var68.get(), 0);

    reql_array_append(var65.get(), var68.get());

    ReQL_Obj_c var69;
    reql_bool_init(var69.get(), 0);

    reql_array_append(var65.get(), var69.get());

    reql_array_append(var64.get(), var65.get());

    ReQL_Obj_c var70;
    std::unique_ptr<ReQL_Obj_t*[]> arr70(new ReQL_Obj_t*[4]);
    reql_array_init(var70.get(), arr70.get(), 4);

    ReQL_Obj_c var71;
    reql_bool_init(var71.get(), 0);

    reql_array_append(var70.get(), var71.get());

    ReQL_Obj_c var72;
    reql_bool_init(var72.get(), 0);

    reql_array_append(var70.get(), var72.get());

    ReQL_Obj_c var73;
    reql_bool_init(var73.get(), 0);

    reql_array_append(var70.get(), var73.get());

    ReQL_Obj_c var74;
    reql_bool_init(var74.get(), 0);

    reql_array_append(var70.get(), var74.get());

    reql_array_append(var64.get(), var70.get());

    ReQL_Obj_c var75;
    std::unique_ptr<ReQL_Obj_t*[]> arr75(new ReQL_Obj_t*[4]);
    reql_array_init(var75.get(), arr75.get(), 4);

    ReQL_Obj_c var76;
    reql_bool_init(var76.get(), 0);

    reql_array_append(var75.get(), var76.get());

    ReQL_Obj_c var77;
    reql_bool_init(var77.get(), 0);

    reql_array_append(var75.get(), var77.get());

    ReQL_Obj_c var78;
    reql_bool_init(var78.get(), 0);

    reql_array_append(var75.get(), var78.get());

    ReQL_Obj_c var79;
    reql_bool_init(var79.get(), 0);

    reql_array_append(var75.get(), var79.get());

    reql_array_append(var64.get(), var75.get());

    ReQL_Obj_c var80;
    std::unique_ptr<ReQL_Obj_t*[]> arr80(new ReQL_Obj_t*[4]);
    reql_array_init(var80.get(), arr80.get(), 4);

    ReQL_Obj_c var81;
    reql_bool_init(var81.get(), 0);

    reql_array_append(var80.get(), var81.get());

    ReQL_Obj_c var82;
    reql_bool_init(var82.get(), 0);

    reql_array_append(var80.get(), var82.get());

    ReQL_Obj_c var83;
    reql_bool_init(var83.get(), 0);

    reql_array_append(var80.get(), var83.get());

    ReQL_Obj_c var84;
    reql_bool_init(var84.get(), 0);

    reql_array_append(var80.get(), var84.get());

    reql_array_append(var64.get(), var80.get());

    reql_array_append(var0.get(), var64.get());
  }

  SECTION("test26") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Pair_t[]> pair0(new ReQL_Pair_t[1]);
    reql_object_init(var0.get(), pair0.get(), 1);

    ReQL_Obj_c var1;
    std::unique_ptr<uint8_t[]> buf1(new uint8_t[4]);
    const uint8_t src1[] = "func";
    reql_string_init(var1.get(), buf1.get(), 4);
    reql_string_append(var1.get(), src1, 4);

    ReQL_Obj_c var2;
    std::unique_ptr<uint8_t[]> buf2(new uint8_t[3]);
    const uint8_t src2[] = "rts";
    reql_string_init(var2.get(), buf2.get(), 3);
    reql_string_append(var2.get(), src2, 3);

    reql_object_add(var0.get(), var1.get(), var2.get());
  }

  SECTION("test27") {
    ReQL_Obj_c var0;
    std::unique_ptr<ReQL_Pair_t[]> pair0(new ReQL_Pair_t[1]);
    reql_object_init(var0.get(), pair0.get(), 1);

    ReQL_Obj_c var1;
    std::unique_ptr<uint8_t[]> buf1(new uint8_t[4]);
    const uint8_t src1[] = "func";
    reql_string_init(var1.get(), buf1.get(), 4);
    reql_string_append(var1.get(), src1, 4);

    ReQL_Obj_c var2;
    std::unique_ptr<uint8_t[]> buf2(new uint8_t[3]);
    const uint8_t src2[] = "rt1";
    reql_string_init(var2.get(), buf2.get(), 3);
    reql_string_append(var2.get(), src2, 3);

    reql_object_add(var0.get(), var1.get(), var2.get());
  }

  SECTION("test28") {
    ReQL_Obj_c var0;
    std::unique_ptr<uint8_t[]> buf0(new uint8_t[25]);
    const uint8_t src0[] = "2012-08-01T00:00:00+00:00";
    reql_string_init(var0.get(), buf0.get(), 25);
    reql_string_append(var0.get(), src0, 25);
  }

  SECTION("test29") {
    ReQL_Obj_c var0;
    std::unique_ptr<uint8_t[]> buf0(new uint8_t[25]);
    const uint8_t src0[] = "2012-08-01T00:00:00+00:00";
    reql_string_init(var0.get(), buf0.get(), 25);
    reql_string_append(var0.get(), src0, 25);
  }
}
