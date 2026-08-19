// Function: FUN_140104980
// Addr: 140104980
// Size: 36 bytes


undefined8 * FUN_140104980(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined8 *)func_0x00014028aff0(0x4c0);
    return puVar1;
  }
  if (param_1 == 2) {
    puVar1 = (undefined8 *)func_0x00014028aff0(0x518);
    FUN_14010a1b0(puVar1,param_2);
    *puVar1 = &PTR_DAT_140489cc8;
    FUN_1400830e0(puVar1 + 0x2b);
    *(undefined1 *)(puVar1 + 0x85) = 0;
    puVar1[0x86] = 0;
    *(undefined4 *)(puVar1 + 0x87) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x43c) = 0;
    puVar1[0x88] = 0;
    puVar1[0x89] = 0;
    puVar1[0x8d] = 0;
    puVar1[0x8e] = 0;
    puVar1[0x8f] = 0;
    puVar1[0x90] = 0;
    puVar1[0x91] = 0;
    puVar1[0x92] = 0;
    puVar1[0x8b] = 0;
    puVar1[0x8c] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x49c) = 0;
    *(undefined4 *)(puVar1 + 0x93) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x8a) = 2;
    puVar1[0x97] = 0;
    puVar1[0x98] = 0;
    puVar1[0x99] = 0;
    puVar1[0x9a] = 0;
    puVar1[0x9b] = 0;
    puVar1[0x9c] = 0;
    puVar1[0x95] = 0;
    puVar1[0x96] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4ec) = 0;
    *(undefined4 *)(puVar1 + 0x9d) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x94) = 0x102;
    *(undefined1 *)(puVar1 + 0x9e) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4f4) = 0;
    puVar1[0xa1] = 0;
    *(undefined1 *)(puVar1 + 0xa2) = 0;
    return puVar1;
  }
  if (param_1 == 3) {
    puVar1 = (undefined8 *)func_0x00014028aff0(0x198);
    FUN_14010a1b0(puVar1,param_2);
    puVar1[0x2b] = 0xffffffffffffffff;
    *puVar1 = &UNK_14048a6c0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    *(undefined2 *)(puVar1 + 0x32) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x192) = 0;
    puVar1[0x2c] = 0;
    *(undefined4 *)(puVar1 + 0x2d) = 0;
    return puVar1;
  }
  if (param_1 != 4) {
    if (param_1 != 5) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)func_0x00014028aff0(0x1a8);
    FUN_14010a1b0(puVar1,param_2);
    *puVar1 = &PTR_DAT_14048a7c8;
    *(undefined4 *)((longlong)puVar1 + 0x164) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x2d) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x16c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2e) = 0x3f000000;
    puVar1[0x2b] = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x174) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x176) = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    (*DAT_140426290)(puVar1 + 0x33);
    (*DAT_140426658)(puVar1 + 0x32);
    *(undefined1 *)(puVar1 + 0x34) = 0;
    return puVar1;
  }
  puVar1 = (undefined8 *)func_0x00014028aff0(0x378);
  FUN_14010a1b0(puVar1,param_2);
  *(undefined8 *)((longlong)puVar1 + 0x17c) = 8;
  *(undefined4 *)((longlong)puVar1 + 0x184) = 0x3f000000;
  *(undefined4 *)(puVar1 + 0x31) = 0x3f000000;
  *(undefined4 *)((longlong)puVar1 + 0x18c) = 0x3f800000;
  puVar1[0x32] = 0x3f000000;
  *puVar1 = &PTR_UNWIND_INFO_1400fe29a_UnwindCodes_1__OffsetInProlog_140488a40;
  puVar1[0x2b] = &PTR_UNWIND_INFO_14010489b_SizeOfProlog_140488ae0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
  puVar1[0x33] = 0;
  *(undefined1 *)(puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0xf;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  *(undefined4 *)(puVar1 + 0x3b) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0xf;
  *(undefined1 *)(puVar1 + 0x3f) = 0;
  *(undefined4 *)(puVar1 + 0x43) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1 = (undefined8 *)func_0x00014028aff0(0x18);
  return puVar1;
}

