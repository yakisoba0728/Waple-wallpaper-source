// Function: FUN_140256ae0
// Addr: 140256ae0
// Size: 566 bytes


undefined8 * FUN_140256ae0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  FUN_1401e6980();
  *param_1 = &PTR_FUN_140491950;
  FUN_140153760(param_1 + 0x7a);
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0xf;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0xf;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  pcVar5 = (char *)FUN_14028af20(0x20);
  uVar4 = s_systemfont_arial_14048ef50._12_4_;
  uVar3 = s_systemfont_arial_14048ef50._8_4_;
  uVar2 = s_systemfont_arial_14048ef50._4_4_;
  uVar1 = s_systemfont_arial_14048ef50._0_4_;
  param_1[0x92] = pcVar5;
  param_1[0x94] = 0x10;
  param_1[0x95] = 0x1f;
  *(undefined4 *)pcVar5 = uVar1;
  *(undefined4 *)(pcVar5 + 4) = uVar2;
  *(undefined4 *)(pcVar5 + 8) = uVar3;
  *(undefined4 *)(pcVar5 + 0xc) = uVar4;
  pcVar5[0x10] = '\0';
  FUN_140016fc0(param_1 + 0x96,param_1 + 0x92);
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x42000000;
  param_1[0x9e] = param_1[0x9d];
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0x42000000;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xa2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x514) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x40800000;
  *(undefined4 *)(param_1 + 0xa8) = 0x40800000;
  *(undefined4 *)(param_1 + 0xa6) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x40c00000;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 0x100;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 1;
  *(undefined4 *)(param_1 + 0xb3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0x1010101;
  return param_1;
}

