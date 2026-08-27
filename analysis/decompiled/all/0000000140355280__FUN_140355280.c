// Function: FUN_140355280
// Addr: 140355280
// Size: 1583 bytes


undefined8 FUN_140355280(ulonglong *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar15 = 0;
  local_98 = 0;
  iStack_94 = 0;
  if (((param_1 == (ulonglong *)0x0) || (param_3 == (int *)0x0)) || ((int)param_1[4] != 3)) {
    return 6;
  }
  local_84 = 0;
  iVar14 = 0x7fffffff;
  local_50 = param_2 >> 0x20;
  iVar3 = (int)param_1[2];
  local_48 = *param_1;
  iVar7 = (int)param_1[3];
  iVar16 = (int)local_48;
  local_68 = iVar7 + iVar3 * -2 + iVar16;
  iVar6 = (int)(param_1[2] >> 0x20);
  local_40 = local_48 >> 0x20;
  iVar10 = (int)(param_1[3] >> 0x20);
  iVar12 = (int)(local_48 >> 0x20);
  local_64 = iVar10 + iVar6 * -2 + iVar12;
  local_80 = (longlong)(local_68 * 3);
  iVar1 = (iVar3 - iVar16) * 3;
  iVar2 = (iVar6 - iVar12) * 3;
  lVar9 = (longlong)(((iVar3 - iVar7) * 3 + (int)param_1[1]) - iVar16);
  local_78 = (longlong)(((iVar6 - iVar10) * 3 + (int)(param_1[1] >> 0x20)) - iVar12);
  local_58 = (longlong)(local_64 * 3);
  local_64 = local_64 * 6;
  local_68 = local_68 * 6;
  local_88 = 0;
  uVar17 = 0;
  uVar5 = 0;
  local_60 = lVar9;
  while( true ) {
    do {
      lVar8 = (longlong)(int)uVar17;
      iVar12 = (int)((ulonglong)(lVar8 * lVar8 + 0x8000 + (lVar8 * lVar8 >> 0x3f)) >> 0x10);
      lVar13 = (longlong)iVar12;
      lVar11 = (longlong)
               (int)((ulonglong)(lVar13 * lVar8 + (lVar13 * lVar8 >> 0x3f) + 0x8000) >> 0x10);
      lVar9 = lVar9 * lVar11;
      iVar6 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) +
              (int)((ulonglong)(iVar1 * lVar8 + 0x8000 + (iVar1 * lVar8 >> 0x3f)) >> 0x10) +
              (int)local_48 +
              (int)((ulonglong)(local_80 * lVar13 + (local_80 * lVar13 >> 0x3f) + 0x8000) >> 0x10);
      lVar11 = local_78 * lVar11;
      iVar7 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) +
              (int)((ulonglong)(lVar8 * iVar2 + 0x8000 + (lVar8 * iVar2 >> 0x3f)) >> 0x10) +
              (int)local_40 +
              (int)((ulonglong)(local_58 * lVar13 + 0x8000 + (local_58 * lVar13 >> 0x3f)) >> 0x10);
      local_90 = (iVar6 - (int)param_2) * 0x400;
      local_8c = (iVar7 - (int)local_50) * 0x400;
      iVar3 = FUN_1402f5d70(&local_90);
      lVar8 = local_58;
      lVar9 = local_60;
      if (iVar3 < iVar14) {
        local_98 = iVar6 * 0x400;
        iStack_94 = iVar7 * 0x400;
        iVar14 = iVar3;
        local_84 = iVar12;
        uVar15 = uVar17;
      }
      lVar11 = local_80 * (int)(uVar17 * 2);
      lVar13 = local_60 * (iVar12 * 3);
      iVar7 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) +
              iVar1 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
      lVar11 = local_78 * (iVar12 * 3);
      lVar13 = local_58 * (int)(uVar17 * 2);
      iVar12 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) +
               iVar2 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
      lVar11 = local_60 * (int)(uVar17 * 6);
      lVar13 = local_78 * (int)(uVar17 * 6);
      local_90 = (int)((local_90 >> 0x1f & 0x3ffU) + local_90) >> 10;
      local_8c = (int)((local_8c >> 0x1f & 0x3ffU) + local_8c) >> 10;
      iVar3 = ((int)((ulonglong)((lVar11 >> 0x3f) + 0x8000 + lVar11) >> 0x10) + local_68) * local_90
      ;
      iVar6 = ((int)((ulonglong)((lVar13 >> 0x3f) + 0x8000 + lVar13) >> 0x10) + local_64) * local_8c
      ;
      iVar3 = FUN_1402efa10(((int)((local_90 * iVar7 >> 0x1f & 0x3fU) + local_90 * iVar7) >> 6) +
                            ((int)(local_8c * iVar12 + (local_8c * iVar12 >> 0x1f & 0x3fU)) >> 6),
                            ((int)((iVar3 >> 0x1f & 0x3fU) + iVar3) >> 6) +
                            ((int)(iVar6 + (iVar6 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar7 * iVar7 + (iVar7 * iVar7 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar12 * iVar12 + (iVar12 * iVar12 >> 0x1f & 0x3fU)) >> 6));
      uVar17 = uVar17 - iVar3;
    } while ((uVar17 < 0x10001) && (uVar5 = uVar5 + 1, uVar5 < 4));
    local_88 = local_88 + 1;
    if (local_88 == 5) break;
    uVar17 = local_88 * 0x4000;
    uVar5 = 0;
  }
  lVar13 = (local_84 * 3) * local_78;
  lVar9 = (local_84 * 3) * lVar9;
  lVar8 = lVar8 * (int)(uVar15 * 2);
  lVar11 = (int)(uVar15 * 2) * local_80;
  local_98 = local_98 + (int)param_2 * -0x400;
  *param_3 = iVar14;
  local_70 = iVar1 + (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) +
             (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
  local_6c = (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) + iVar2 +
             (int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10);
  iStack_94 = iStack_94 + (int)local_50 * -0x400;
  uVar4 = 0xff;
  if ((int)((ulonglong)
            ((longlong)local_98 * (longlong)local_6c + 0x8000 +
            ((longlong)local_98 * (longlong)local_6c >> 0x3f)) >> 0x10) -
      (int)((ulonglong)
            ((longlong)iStack_94 * (longlong)local_70 + 0x8000 +
            ((longlong)iStack_94 * (longlong)local_70 >> 0x3f)) >> 0x10) < 0) {
    uVar4 = 1;
  }
  *(undefined1 *)(param_3 + 2) = uVar4;
  if ((uVar15 & 0xfffeffff) == 0) {
    FUN_1402f5e70(&local_70);
    FUN_1402f5e70(&local_98);
    param_3[1] = (int)((ulonglong)
                       ((longlong)local_70 * (longlong)iStack_94 + 0x8000 +
                       ((longlong)local_70 * (longlong)iStack_94 >> 0x3f)) >> 0x10) -
                 (int)((ulonglong)
                       ((longlong)local_6c * (longlong)local_98 + 0x8000 +
                       ((longlong)local_6c * (longlong)local_98 >> 0x3f)) >> 0x10);
    return 0;
  }
  param_3[1] = 0x10000;
  return 0;
}

