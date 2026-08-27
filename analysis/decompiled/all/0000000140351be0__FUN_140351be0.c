// Function: FUN_140351be0
// Addr: 140351be0
// Size: 355 bytes


undefined8 FUN_140351be0(longlong param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  iVar7 = (int)((*(longlong *)(param_1 + 0x30) - (longlong)puVar2) + -0x24 >> 2);
  if (iVar7 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 99;
    return 1;
  }
  if (iVar7 < 1) {
    return 0;
  }
  uVar1 = *(ushort *)((longlong)puVar2 + 0x1c);
  *(int *)((longlong)puVar2 + 0x14) = iVar7;
  uVar8 = *(uint *)(param_1 + 0x44);
  uVar12 = -*(int *)(param_1 + 4);
  if ((uVar1 & 8) == 0) {
    if (*(int *)(param_1 + 8) <= (int)((*(int *)(param_1 + 4) + -1 + uVar8 & uVar12) - uVar8)) {
      *(ushort *)((longlong)puVar2 + 0x1c) = uVar1 | 0x20;
    }
    iVar10 = *(int *)(puVar2 + 3) + 1;
    *(int *)(puVar2 + 2) = iVar7 + -1;
    iVar11 = iVar10 - iVar7;
    *(int *)(puVar2 + 3) = iVar11;
    uVar4 = *(undefined4 *)((longlong)puVar2 + (longlong)iVar7 * 4 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 8) <= (int)(uVar8 - (uVar8 & uVar12))) {
      *(ushort *)((longlong)puVar2 + 0x1c) = uVar1 | 0x10;
    }
    iVar11 = *(int *)(puVar2 + 3);
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar4 = *(undefined4 *)((longlong)puVar2 + 0x24);
    iVar10 = iVar7 + iVar11;
  }
  *(undefined4 *)(puVar2 + 4) = uVar4;
  uVar9 = (ulonglong)*(int *)(param_1 + 0x54);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar9;
    if (iVar10 <= *(int *)(lVar3 + uVar9 * 4)) goto LAB_140351cc1;
  }
  *(int *)(lVar3 + uVar5 * 4) = iVar10;
LAB_140351cc1:
  do {
    iVar7 = (int)uVar9;
    uVar8 = iVar7 - 1;
    uVar9 = (ulonglong)uVar8;
    if (iVar7 == 0) break;
  } while (iVar11 < *(int *)((longlong)(int)uVar8 * 4 + lVar3));
  if (((int)uVar8 < 0) || (*(int *)(lVar3 + (longlong)(int)uVar8 * 4) < iVar11)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
    if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x38) = 0x62;
      return 1;
    }
    do {
      iVar10 = (int)uVar9;
      iVar7 = *(int *)(lVar3 + (longlong)iVar10 * 4);
      *(int *)(lVar3 + (longlong)iVar10 * 4) = iVar11;
      uVar9 = (ulonglong)(iVar10 - 1);
      iVar11 = iVar7;
    } while (-1 < iVar10);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x68) = puVar2;
    puVar6 = puVar2;
  }
  puVar2[1] = puVar6;
  *puVar2 = *(undefined8 *)(param_1 + 0x30);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
  return 0;
}

