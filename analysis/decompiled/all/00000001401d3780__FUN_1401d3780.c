// Function: FUN_1401d3780
// Addr: 1401d3780
// Size: 851 bytes


void FUN_1401d3780(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar11 = auStack_48;
  uVar3 = *param_2;
  *(uint *)(param_3 + 0x1e) = uVar3;
  if (uVar3 != 0) {
    bVar1 = (byte)param_2[3];
    iVar14 = 4 - (uVar3 & 3);
    iVar13 = 0x14;
    iVar12 = 0x11;
    if ((uVar3 & 3) == 0) {
      iVar14 = 0;
    }
    iVar14 = iVar14 + uVar3;
    uVar9 = (uint)(bVar1 & 1) + (uint)(bVar1 & 1);
    uVar3 = 0x14;
    if ((bVar1 & 2) == 0) {
      uVar3 = 0x11;
    }
    if ((bVar1 & 4) == 0) {
      uVar9 = uVar9 | uVar3;
    }
    else {
      iVar4 = 0x17;
      if ((bVar1 & 2) == 0) {
        iVar4 = 0x14;
      }
      uVar9 = uVar9 + iVar4;
    }
    uVar3 = uVar9 + 3;
    if ((bVar1 & 8) == 0) {
      uVar3 = uVar9;
    }
    uVar9 = uVar3 + 1;
    if ((bVar1 & 0x10) == 0) {
      uVar9 = uVar3;
    }
    uVar3 = uVar9 * iVar14 * 4;
    pvVar5 = _aligned_malloc((ulonglong)uVar3,0x10);
    if (pvVar5 == (void *)0x0) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(0);
      puVar11 = auStack_40;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1401d3860;
    FUN_1404217a0(pvVar5,0,uVar3);
    *(int *)((longlong)param_3 + 0xf4) = iVar14;
    *param_3 = pvVar5;
    param_3[1] = (ulonglong)(uint)(iVar14 * 4) + (longlong)pvVar5;
    uVar3 = iVar14 * 0x40;
    param_3[2] = (ulonglong)(uint)(iVar14 * 8) + (longlong)pvVar5;
    param_3[3] = (ulonglong)(uint)(iVar14 * 0xc) + (longlong)pvVar5;
    param_3[4] = (ulonglong)(uint)(iVar14 * 0x10) + (longlong)pvVar5;
    param_3[0xb] = (ulonglong)(uint)(iVar14 * 0x14) + (longlong)pvVar5;
    param_3[0xc] = (ulonglong)(uint)(iVar14 * 0x18) + (longlong)pvVar5;
    param_3[0xd] = (ulonglong)(uint)(iVar14 * 0x1c) + (longlong)pvVar5;
    param_3[0xe] = (ulonglong)(uint)(iVar14 * 0x20) + (longlong)pvVar5;
    param_3[0xf] = (ulonglong)(uint)(iVar14 * 0x24) + (longlong)pvVar5;
    param_3[0x10] = (ulonglong)(uint)(iVar14 * 0x28) + (longlong)pvVar5;
    param_3[5] = (ulonglong)uVar3 + (longlong)pvVar5;
    param_3[0x18] = (ulonglong)(uint)(iVar14 * 0x2c) + (longlong)pvVar5;
    param_3[0x19] = (ulonglong)(uint)(iVar14 * 0x30) + (longlong)pvVar5;
    param_3[0x1a] = (ulonglong)(uint)(iVar14 * 0x34) + (longlong)pvVar5;
    param_3[0x1b] = (ulonglong)(uint)(iVar14 * 0x38) + (longlong)pvVar5;
    param_3[0x1c] = (ulonglong)(uint)(iVar14 * 0x3c) + (longlong)pvVar5;
    if ((param_2[3] & 0x10) == 0) {
      iVar10 = 0x48;
      iVar7 = 0x4c;
      iVar4 = 0x38;
      iVar15 = 0x44;
    }
    else {
      iVar12 = 0x12;
      iVar10 = 0x4c;
      iVar7 = 0x50;
      iVar4 = 0x44;
      iVar15 = 0x48;
      iVar13 = 0x15;
    }
    param_3[0x17] = (ulonglong)(uint)(iVar4 * iVar14) + (longlong)pvVar5;
    if ((param_2[3] & 8) == 0) {
      iVar7 = 0x34;
      iVar10 = 0x30;
      iVar15 = 0x2c;
      iVar13 = iVar12;
    }
    param_3[0x14] = (ulonglong)(uint)(iVar15 * iVar14) + (longlong)pvVar5;
    param_3[0x15] = (ulonglong)(uint)(iVar10 * iVar14) + (longlong)pvVar5;
    param_3[0x16] = (ulonglong)(uint)(iVar7 * iVar14) + (longlong)pvVar5;
    uVar9 = uVar3;
    if ((param_2[3] & 1) != 0) {
      iVar12 = iVar13 * 4;
      iVar4 = iVar14 * iVar13;
      iVar13 = iVar13 + 2;
      uVar3 = iVar4 * 4;
      uVar9 = (iVar12 + 4) * iVar14;
    }
    param_3[6] = (ulonglong)uVar3 + (longlong)pvVar5;
    param_3[7] = (ulonglong)uVar9 + (longlong)pvVar5;
    if ((param_2[3] & 2) == 0) {
      lVar6 = 0;
      lVar16 = 0;
      lVar8 = 0;
    }
    else {
      iVar12 = iVar13 * 4;
      iVar4 = iVar14 * iVar13;
      iVar13 = iVar13 + 3;
      lVar16 = (ulonglong)(uint)((iVar12 + 8) * iVar14) + (longlong)pvVar5;
      lVar8 = (ulonglong)(uint)((iVar12 + 4) * iVar14) + (longlong)pvVar5;
      lVar6 = (ulonglong)(uint)(iVar4 * 4) + (longlong)pvVar5;
    }
    param_3[8] = lVar6;
    param_3[9] = lVar8;
    param_3[10] = lVar16;
    if ((param_2[3] & 4) == 0) {
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
    }
    else {
      param_3[0x12] = (ulonglong)(uint)((iVar13 * 4 + 4) * iVar14) + (longlong)pvVar5;
      param_3[0x11] = (ulonglong)(uint)(iVar14 * iVar13 * 4) + (longlong)pvVar5;
      param_3[0x13] = (ulonglong)(uint)((iVar13 * 4 + 8) * iVar14) + (longlong)pvVar5;
    }
  }
  return;
}

