// Function: FUN_14016f990
// Addr: 14016f990
// Size: 164 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14016f990(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  DAT_1404e8100 = 0;
  DAT_1404e8108 = 0;
  DAT_1404e8110 = 0;
  DAT_1404e8108 = FUN_14028af20(0x38);
  *(longlong *)DAT_1404e8108 = DAT_1404e8108;
  *(longlong *)(DAT_1404e8108 + 8) = DAT_1404e8108;
  DAT_1404e8118 = 0;
  _DAT_1404e8120 = 0;
  uRam00000001404e8128 = 0;
  DAT_1404e8130 = 7;
  DAT_1404e8138 = 8;
  DAT_1404e8100 = 0x3f800000;
  uVar1 = FUN_14003e510(&DAT_1404e8118,0x10,DAT_1404e8108);
  FUN_14016fa40(uVar1,*param_2,param_2[1]);
  return &DAT_1404e8100;
}

