// Function: FUN_1401048b0
// Addr: 1401048b0
// Size: 661 bytes


undefined8 * FUN_1401048b0(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 1) {
    uVar2 = FUN_14028af20(0x4c0);
    puVar1 = (undefined8 *)FUN_14010db90(uVar2,param_2);
    return puVar1;
  }
  if (param_1 == 2) {
    puVar1 = (undefined8 *)FUN_14028af20(0x518);
    FUN_14010a0e0(puVar1,param_2);
    *puVar1 = &PTR_FUN_140489bf8;
    FUN_140083010(puVar1 + 0x2b);
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
    puVar1 = (undefined8 *)FUN_14028af20(0x198);
    FUN_14010a0e0(puVar1,param_2);
    puVar1[0x2b] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_14048a5f0;
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
    puVar1 = (undefined8 *)FUN_14028af20(0x1a8);
    FUN_14010a0e0(puVar1,param_2);
    *puVar1 = &DAT_14048a6f8;
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
    QueryPerformanceFrequency((LARGE_INTEGER *)(puVar1 + 0x33));
    QueryPerformanceCounter((LARGE_INTEGER *)(puVar1 + 0x32));
    *(undefined1 *)(puVar1 + 0x34) = 0;
    return puVar1;
  }
  uVar2 = FUN_14028af20(0x378);
  puVar1 = (undefined8 *)FUN_1400fdeb0(uVar2,param_2);
  return puVar1;
}

