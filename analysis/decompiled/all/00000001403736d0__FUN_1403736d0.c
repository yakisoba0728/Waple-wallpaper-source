// Function: FUN_1403736d0
// Addr: 1403736d0
// Size: 177 bytes


undefined8 FUN_1403736d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  longlong *plVar10;
  
  puVar1 = (undefined1 *)0x0;
  if ((*(uint *)(param_1 + 0x10) < 8) &&
     (puVar1 = (undefined1 *)thunk_FUN_1402da070(0x100), puVar1 != (undefined1 *)0x0)) {
    for (puVar4 = puVar1; puVar4 != puVar1 + 0x100; puVar4 = puVar4 + 1) {
      *puVar4 = 0xff;
    }
  }
  pbVar8 = (byte *)&DAT_14045dde0;
  plVar10 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x40 + *(longlong *)(param_1 + 8));
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + 1;
  plVar10[1] = (longlong)&DAT_14036cbe0;
  plVar10[2] = (longlong)&DAT_14036c930;
  plVar10[3] = (longlong)&LAB_14036e240;
  *plVar10 = param_3;
  plVar10[4] = (longlong)puVar1;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  uVar6 = (uint)*(byte *)(param_3 + 3) + (uint)*(byte *)(param_3 + 2) * 0x100;
  if (uVar6 == 0) {
    puVar5 = &DAT_14045dde0;
  }
  else {
    puVar5 = (undefined8 *)((ulonglong)uVar6 + param_3);
  }
  func_0x00014036f650(puVar5,plVar10 + 5);
  uVar6 = (uint)*(byte *)(param_3 + 6) * 0x100 + (uint)*(byte *)(param_3 + 7);
  if (uVar6 == 0) {
    pbVar7 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar7 = (byte *)((ulonglong)uVar6 + param_3);
  }
  iVar9 = 1;
  iVar2 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
  if (iVar2 == 1) {
    iVar2 = 1;
  }
  else if (iVar2 == 2) {
    uVar6 = (uint)pbVar7[2] * 0x100 + (uint)pbVar7[3];
    iVar2 = 0;
    if (uVar6 != 0) {
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = 0;
  }
  uVar6 = (uint)*(byte *)(param_3 + 9) + (uint)*(byte *)(param_3 + 8) * 0x100;
  if (uVar6 != 0) {
    pbVar8 = (byte *)((ulonglong)uVar6 + param_3);
  }
  iVar3 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      uVar6 = (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100;
      iVar9 = 0;
      if (uVar6 != 0) {
        iVar9 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        iVar9 = iVar9 + 1;
      }
    }
    else {
      iVar9 = 0;
    }
  }
  if (*(uint *)(param_1 + 0x18) < (uint)(iVar9 + iVar2)) {
    *(int *)(param_1 + 0x18) = iVar9 + iVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + -1;
  }
  return param_2;
}

