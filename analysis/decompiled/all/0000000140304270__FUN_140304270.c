// Function: FUN_140304270
// Addr: 140304270
// Size: 536 bytes


undefined8 FUN_140304270(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x318);
  uVar16 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x80) + 0x18) << 0x10;
  if ((int)uVar16 < 0x40000) {
    uVar16 = 0x40000;
  }
  iVar5 = FUN_1402efa10(0x3e80000,(ulonglong)*(ushort *)(param_2 + 0x68) << 0x10);
  if (iVar5 < 0x28f) {
    return 0;
  }
  iVar6 = *(int *)(lVar3 + 0x28);
  iVar7 = *(int *)(lVar3 + 0x3c);
  if (param_3 < 1) {
    uVar15 = 0x4b0000;
  }
  else {
    lVar10 = (longlong)(param_3 << 0x10) * (longlong)iVar5;
    uVar15 = (uint)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
  }
  iVar9 = 0x1f;
  if (uVar15 != 0) {
    for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar4 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar11 = iVar7 << 0x10;
  iVar13 = iVar11;
  if (iVar4 + iVar9 < 0x2e) {
    iVar13 = (int)(((longlong)((longlong)(int)uVar15 * (ulonglong)uVar16) >> 0x3f) + 0x8000 +
                   (longlong)(int)uVar15 * (ulonglong)uVar16 >> 0x10);
  }
  iVar9 = *(int *)(lVar3 + 0x24) * 0x10000;
  if (iVar13 < iVar9) {
    iVar6 = FUN_1402efa10(iVar6 << 0x10,uVar16);
    goto LAB_140304469;
  }
  iVar4 = *(int *)(lVar3 + 0x2c);
  iVar12 = *(int *)(lVar3 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x34);
  iVar14 = *(int *)(lVar3 + 0x38);
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar13 < iVar4 << 0x10) {
    iVar13 = iVar4 - *(int *)(lVar3 + 0x24);
    iVar9 = FUN_1402efa10(iVar9,uVar16);
    if (iVar13 == 0) {
LAB_1403043d0:
      iVar6 = FUN_1402efa10(iVar4 << 0x10,uVar16);
      if (iVar1 - iVar4 != 0) {
        iVar6 = FUN_1402f20b0(uVar15 - iVar6,iVar14 - iVar12,iVar1 - iVar4);
        iVar7 = FUN_1402efa10(iVar12 << 0x10,uVar16);
        iVar6 = iVar6 + iVar7;
        goto LAB_140304469;
      }
LAB_140304414:
      iVar9 = FUN_1402efa10(iVar1 << 0x10,uVar16);
      iVar13 = iVar7 - iVar1;
      if (iVar13 == 0) goto LAB_14030444a;
      iVar12 = iVar2 - iVar14;
    }
    else {
      iVar12 = iVar12 - iVar6;
      iVar14 = iVar6;
    }
    iVar6 = FUN_1402f20b0(uVar15 - iVar9,iVar12,iVar13);
    iVar7 = FUN_1402efa10(iVar14 << 0x10,uVar16);
    iVar6 = iVar6 + iVar7;
  }
  else {
    if (iVar13 < iVar1 << 0x10) goto LAB_1403043d0;
    if (iVar13 < iVar11) goto LAB_140304414;
LAB_14030444a:
    iVar6 = FUN_1402efa10(iVar2 << 0x10,uVar16);
  }
LAB_140304469:
  uVar8 = FUN_1402efa10(iVar6,iVar5);
  return uVar8;
}

