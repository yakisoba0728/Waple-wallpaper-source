// Function: FUN_140354d90
// Addr: 140354d90
// Size: 1250 bytes


undefined8 FUN_140354d90(ulonglong *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_res8;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_a8 = 0;
  iStack_a4 = 0;
  if (((param_1 == (ulonglong *)0x0) || (param_3 == (int *)0x0)) || ((int)param_1[4] != 2)) {
    return 6;
  }
  local_58 = *param_1;
  local_60 = param_2 >> 0x20;
  iVar2 = (int)param_1[2];
  local_48 = local_58 >> 0x20;
  iVar14 = (int)(param_1[2] >> 0x20);
  uVar15 = 0;
  local_res8 = 0;
  uVar13 = (iVar2 - (int)local_58) * 2;
  local_70 = (ulonglong)uVar13;
  local_8c = (int)param_1[1] + iVar2 * -2 + (int)local_58;
  iVar2 = (int)(local_58 >> 0x20);
  local_78 = (longlong)local_8c;
  local_90 = (int)(param_1[1] >> 0x20) + iVar14 * -2 + iVar2;
  uVar8 = (iVar14 - iVar2) * 2;
  local_68 = (ulonglong)uVar8;
  local_80 = (longlong)(int)uVar13;
  uVar5 = 0;
  lVar12 = (longlong)local_90;
  local_50 = (longlong)(int)uVar8;
  lVar4 = local_78;
  iVar2 = 0x7fffffff;
  local_88 = lVar12;
  uVar13 = 0;
  while( true ) {
    do {
      lVar11 = (longlong)(int)uVar15;
      lVar10 = (longlong)
               (int)((ulonglong)(lVar11 * lVar11 + (lVar11 * lVar11 >> 0x3f) + 0x8000) >> 0x10);
      lVar9 = lVar10 * lVar4;
      lVar10 = lVar10 * lVar12;
      iVar6 = (int)((ulonglong)(lVar11 * local_80 + 0x8000 + (lVar11 * local_80 >> 0x3f)) >> 0x10) +
              (int)local_58 + (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
      iVar7 = (int)((ulonglong)(lVar11 * local_50 + 0x8000 + (lVar11 * local_50 >> 0x3f)) >> 0x10) +
              (int)local_48 + (int)((ulonglong)((lVar10 >> 0x3f) + 0x8000 + lVar10) >> 0x10);
      local_a0 = (iVar6 - (int)param_2) * 0x400;
      local_9c = (iVar7 - (int)local_60) * 0x400;
      iVar1 = FUN_1402f5d70(&local_a0);
      lVar12 = local_88;
      iVar14 = iVar2;
      if (iVar1 < iVar2) {
        local_a8 = iVar6 * 0x400;
        iStack_a4 = iVar7 * 0x400;
        iVar14 = iVar1;
      }
      uVar8 = uVar15;
      if (iVar2 <= iVar1) {
        uVar8 = uVar13;
      }
      lVar10 = (int)(uVar15 * 2) * local_88;
      lVar9 = (int)(uVar15 * 2) * lVar4;
      iVar7 = (int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) + (int)local_70;
      iVar6 = (int)((ulonglong)((lVar10 >> 0x3f) + 0x8000 + lVar10) >> 0x10) + (int)local_68;
      local_a0 = (int)((local_a0 >> 0x1f & 0x3ffU) + local_a0) >> 10;
      local_9c = (int)((local_9c >> 0x1f & 0x3ffU) + local_9c) >> 10;
      iVar2 = local_9c * local_90 * 2;
      iVar1 = local_a0 * local_8c * 2;
      iVar2 = FUN_1402efa10(((int)((local_9c * iVar6 >> 0x1f & 0x3fU) + local_9c * iVar6) >> 6) +
                            ((int)(local_a0 * iVar7 + (local_a0 * iVar7 >> 0x1f & 0x3fU)) >> 6),
                            ((int)((iVar6 * iVar6 >> 0x1f & 0x3fU) + iVar6 * iVar6) >> 6) +
                            ((int)(iVar7 * iVar7 + (iVar7 * iVar7 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6));
      uVar15 = uVar15 - iVar2;
      iVar2 = iVar14;
      uVar13 = uVar8;
    } while ((uVar15 < 0x10001) && (uVar5 = uVar5 + 1, uVar5 < 4));
    local_res8 = local_res8 + 1;
    if (local_res8 == 5) break;
    uVar15 = local_res8 * 0x4000;
    uVar5 = 0;
    lVar4 = local_78;
  }
  lVar4 = (int)uVar8 * local_78;
  lVar12 = (int)uVar8 * lVar12;
  local_a8 = local_a8 + (int)param_2 * -0x400;
  *param_3 = iVar14;
  local_98 = (int)local_70 + (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10) * 2;
  local_94 = (int)local_68 + (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) * 2;
  iStack_a4 = iStack_a4 + (int)local_60 * -0x400;
  uVar3 = 0xff;
  if ((int)((ulonglong)
            ((longlong)local_a8 * (longlong)local_94 + 0x8000 +
            ((longlong)local_a8 * (longlong)local_94 >> 0x3f)) >> 0x10) -
      (int)((ulonglong)
            ((longlong)iStack_a4 * (longlong)local_98 + 0x8000 +
            ((longlong)iStack_a4 * (longlong)local_98 >> 0x3f)) >> 0x10) < 0) {
    uVar3 = 1;
  }
  *(undefined1 *)(param_3 + 2) = uVar3;
  if ((uVar8 & 0xfffeffff) == 0) {
    FUN_1402f5e70(&local_98);
    FUN_1402f5e70(&local_a8);
    param_3[1] = (int)((ulonglong)
                       ((longlong)local_98 * (longlong)iStack_a4 + 0x8000 +
                       ((longlong)local_98 * (longlong)iStack_a4 >> 0x3f)) >> 0x10) -
                 (int)((ulonglong)
                       ((longlong)local_94 * (longlong)local_a8 + 0x8000 +
                       ((longlong)local_94 * (longlong)local_a8 >> 0x3f)) >> 0x10);
    return 0;
  }
  param_3[1] = 0x10000;
  return 0;
}

