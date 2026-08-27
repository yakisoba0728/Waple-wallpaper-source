// Function: FUN_14010db90
// Addr: 14010db90
// Size: 681 bytes


undefined8 * FUN_14010db90(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  FUN_14010a0e0();
  *param_1 = &PTR_FUN_1404897b8;
  param_1[0x2b] = &PTR_LAB_1404897a0;
  QueryPerformanceFrequency((LARGE_INTEGER *)(param_1 + 0x2d));
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x14;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  pvVar3 = _aligned_malloc(0x200,0x10);
  param_1[0x34] = pvVar3;
  pvVar3 = _aligned_malloc(0x200,0x10);
  param_1[0x35] = pvVar3;
  pvVar3 = _aligned_malloc(0x40,0x10);
  param_1[0x36] = pvVar3;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x2c688;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0x202;
  bVar1 = *(byte *)(param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(uint *)(param_1 + 0x49) = (bVar1 & 0x10) << 0x11;
  FUN_140273d70(param_1 + 0x4a);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b) = 0x102;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x89) = 2;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0xf;
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_1404217a0(param_1[0x34],0,0x200);
  FUN_1404217a0(param_1[0x35],0,0x200);
  puVar2 = (undefined8 *)param_1[0x36];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  FUN_140276310(param_1 + 0x4a,param_2 + 0x18);
  param_1[0x3c] = param_1[0x4b];
  return param_1;
}

