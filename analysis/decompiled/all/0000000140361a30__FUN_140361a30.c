// Function: FUN_140361a30
// Addr: 140361a30
// Size: 652 bytes


undefined8 *
FUN_140361a30(undefined8 *param_1,undefined8 *param_2,longlong param_3,uint param_4,
             undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  puVar12 = &DAT_14045dd10;
  if (param_4 < *(uint *)(param_3 + 0xb4)) {
    puVar10 = (undefined8 *)((ulonglong)param_4 * 0x30 + *(longlong *)(param_3 + 0xb8));
  }
  else {
    puVar10 = &DAT_14045dd10;
  }
  pbVar2 = (byte *)puVar10[4];
  pbVar3 = *(byte **)(param_3 + 0x70);
  *param_1 = 0;
  lVar11 = 0x40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  puVar10 = param_1 + 4;
  do {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar1 = puVar10 + 8;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    lVar11 = lVar11 + -1;
    puVar10 = puVar1;
  } while (lVar11 != 0);
  *puVar1 = 0;
  uVar9 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar9;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  param_1[2] = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  FUN_140394310(param_1 + 0x20b);
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  uVar9 = *(undefined4 *)(param_2 + 2);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x103c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1044) = 0;
  param_1[0x205] = uVar6;
  param_1[0x206] = uVar7;
  *(undefined4 *)(param_1 + 0x207) = uVar9;
  *(undefined2 *)((longlong)param_1 + 0x1049) = 1;
  *(undefined8 *)((longlong)param_1 + 0x104c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x235] = pbVar3;
  if ((pbVar3 == (byte *)0x0) ||
     (uVar13 = (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
               (uint)pbVar3[3], uVar13 < 0x4d8)) {
    *(undefined4 *)(param_1 + 0x234) = 0x6b;
  }
  else {
    uVar9 = 0x8000;
    if (uVar13 < 0x846c) {
      uVar9 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0x234) = uVar9;
  }
  param_1[0x237] = pbVar2;
  if ((pbVar2 == (byte *)0x0) ||
     (uVar13 = (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
               (uint)pbVar2[3], uVar13 < 0x4d8)) {
    *(undefined4 *)(param_1 + 0x236) = 0x6b;
  }
  else {
    uVar9 = 0x8000;
    if (uVar13 < 0x846c) {
      uVar9 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0x236) = uVar9;
  }
  *(undefined4 *)(param_1 + 0x23d) = 0;
  param_1[0x23f] = param_3 + 0xc0;
  param_1[0x23a] = param_5;
  *(int *)(param_1 + 0x23b) = param_6;
  param_1[0x23e] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1201) = 0;
  pbVar2 = *(byte **)(param_3 + 0x78);
  param_1[0x23c] = pbVar2;
  if ((param_6 == 0) || ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 0x240) = uVar8;
  if (param_4 < *(uint *)(param_3 + 0xb4)) {
    puVar12 = (undefined8 *)((ulonglong)param_4 * 0x30 + *(longlong *)(param_3 + 0xb8));
  }
  *(undefined4 *)((longlong)param_1 + 0x11ec) = *(undefined4 *)(puVar12 + 5);
  return param_1;
}

