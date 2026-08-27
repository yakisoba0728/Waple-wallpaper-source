// Function: FUN_140324600
// Addr: 140324600
// Size: 584 bytes


ulonglong FUN_140324600(longlong param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  
  param_4[0] = 0;
  param_4[1] = 0;
  if ((*(uint *)(param_1 + 0x218) <= param_2 - 1U) || (*(uint *)(param_1 + 0x218) <= param_3 - 1U))
  {
    return 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x238);
  uVar12 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_3 - 1U) * 0x10) |
           *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_2 - 1U) * 0x10) << 0x10;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 3) <= uVar12) && (uVar12 <= *(uint *)((longlong)puVar3 + 0x1c))) break;
    puVar3 = (undefined8 *)*puVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  uVar6 = FUN_1402f5c50(lVar4,*(undefined4 *)(puVar3 + 2));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FUN_1402f4fe0(lVar4,(uint)*(byte *)(puVar3 + 1) * *(int *)((longlong)puVar3 + 0xc));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  bVar1 = *(byte *)(puVar3 + 1);
  pbVar13 = *(byte **)(lVar4 + 0x38);
  iVar9 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  uVar5 = *(uint *)((longlong)puVar3 + 0xc);
  bVar2 = *(byte *)((longlong)puVar3 + 9);
  iVar14 = 1 << ((byte)iVar9 & 0x1f);
  bVar16 = bVar2 & 1;
  iVar9 = (uint)bVar1 - iVar14;
  if (iVar9 == 0) {
LAB_140324750:
    uVar15 = iVar14 * uVar5;
    while (pbVar10 = pbVar13, uVar5 < uVar15) {
      uVar15 = uVar15 >> 1;
      pbVar13 = pbVar10 + uVar15;
      if (bVar16 == 0) {
        uVar8 = (uint)pbVar13[1];
        pbVar11 = pbVar13 + 2;
        uVar7 = (uint)*pbVar13 << 0x10;
      }
      else {
        pbVar11 = pbVar13 + 4;
        uVar7 = (uint)pbVar13[3];
        uVar8 = (uint)CONCAT21(CONCAT11(*pbVar13,pbVar13[1]),pbVar13[2]) << 8;
      }
      if ((uVar8 | uVar7) == uVar12) goto LAB_1403247eb;
      if (uVar12 <= (uVar8 | uVar7)) {
        pbVar13 = pbVar10;
      }
    }
    if (bVar16 == 0) {
      uVar15 = (uint)pbVar10[1];
      pbVar11 = pbVar10 + 2;
      uVar5 = (uint)*pbVar10 << 0x10;
    }
    else {
      pbVar11 = pbVar10 + 4;
      uVar5 = (uint)pbVar10[3];
      uVar15 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]) << 8;
    }
    if ((uVar15 | uVar5) != uVar12) goto LAB_14032480e;
  }
  else {
    pbVar10 = pbVar13 + iVar9 * uVar5;
    if (bVar16 == 0) {
      uVar7 = (uint)pbVar10[1];
      pbVar11 = pbVar10 + 2;
      uVar15 = (uint)*pbVar10 << 0x10;
    }
    else {
      pbVar11 = pbVar10 + 4;
      uVar15 = (uint)pbVar10[3];
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]) << 8;
    }
    if ((uVar7 | uVar15) != uVar12) {
      if ((uVar7 | uVar15) < uVar12) {
        pbVar13 = pbVar11 + (ulonglong)((bVar2 & 2) != 0) + 1;
      }
      goto LAB_140324750;
    }
  }
LAB_1403247eb:
  if ((bVar2 & 2) == 0) {
    uVar12 = (uint)*pbVar11;
  }
  else {
    uVar12 = (int)(short)((ushort)*pbVar11 << 8) | (uint)pbVar11[1];
  }
  *param_4 = (int)*(short *)((longlong)puVar3 + 10) + uVar12;
LAB_14032480e:
  FUN_1402f5100(lVar4);
  return uVar6 & 0xffffffff;
}

