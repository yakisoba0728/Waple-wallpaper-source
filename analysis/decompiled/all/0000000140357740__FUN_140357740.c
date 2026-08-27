// Function: FUN_140357740
// Addr: 140357740
// Size: 915 bytes


uint FUN_140357740(uint param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint local_res8;
  int local_48;
  
  local_res8 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = *param_2 + param_1;
    uVar16 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar16 = param_1;
    }
    local_res8 = uVar16 + local_res8;
    uVar12 = local_res8 - 0xfff1;
    if (local_res8 < 0xfff1) {
      uVar12 = local_res8;
    }
    return uVar12 << 0x10 | uVar16;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar11 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + bVar11;
      local_res8 = local_res8 + param_1;
    }
    uVar16 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar16 = param_1;
    }
    return ((local_res8 / 0xfff1) * 0xf + local_res8) * 0x10000 | uVar16;
  }
  if (0x15af < param_3) {
    do {
      param_3 = param_3 - 0x15b0;
      local_48 = 0x15b;
      do {
        iVar13 = *param_2 + param_1;
        pbVar1 = param_2 + 6;
        pbVar2 = param_2 + 7;
        pbVar3 = param_2 + 8;
        pbVar4 = param_2 + 9;
        pbVar5 = param_2 + 10;
        pbVar6 = param_2 + 0xb;
        pbVar7 = param_2 + 0xc;
        pbVar8 = param_2 + 0xd;
        iVar14 = iVar13 + (uint)param_2[1];
        pbVar9 = param_2 + 0xf;
        iVar26 = (uint)param_2[2] + iVar14;
        iVar25 = (uint)param_2[3] + iVar26;
        pbVar10 = param_2 + 0xe;
        iVar28 = (uint)param_2[4] + iVar25;
        iVar27 = (uint)param_2[5] + iVar28;
        param_2 = param_2 + 0x10;
        iVar19 = (uint)*pbVar1 + iVar27;
        iVar20 = (uint)*pbVar2 + iVar19;
        iVar21 = (uint)*pbVar3 + iVar20;
        iVar18 = (uint)*pbVar4 + iVar21;
        iVar24 = (uint)*pbVar5 + iVar18;
        iVar23 = (uint)*pbVar6 + iVar24;
        iVar22 = (uint)*pbVar7 + iVar23;
        iVar17 = (uint)*pbVar8 + iVar22;
        iVar15 = (uint)*pbVar10 + iVar17;
        param_1 = (uint)*pbVar9 + iVar15;
        local_res8 = local_res8 +
                     iVar15 + iVar17 + iVar22 + iVar23 + iVar24 + iVar18 + iVar21 + iVar20 + iVar19
                     + iVar27 + iVar28 + iVar25 + iVar26 + iVar14 + iVar13 + param_1;
        local_48 = local_48 + -1;
      } while (local_48 != 0);
      param_1 = param_1 % 0xfff1;
      local_res8 = local_res8 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_140357a9c;
    if (param_3 < 0x10) goto LAB_140357a60;
  }
  do {
    param_3 = param_3 - 0x10;
    iVar13 = *param_2 + param_1;
    pbVar1 = param_2 + 8;
    pbVar2 = param_2 + 9;
    pbVar3 = param_2 + 10;
    pbVar4 = param_2 + 0xc;
    pbVar5 = param_2 + 0xd;
    iVar14 = iVar13 + (uint)param_2[1];
    pbVar6 = param_2 + 0xf;
    iVar26 = (uint)param_2[2] + iVar14;
    iVar25 = (uint)param_2[3] + iVar26;
    pbVar7 = param_2 + 0xb;
    iVar28 = (uint)param_2[4] + iVar25;
    iVar27 = (uint)param_2[5] + iVar28;
    pbVar8 = param_2 + 0xe;
    iVar19 = (uint)param_2[6] + iVar27;
    iVar20 = (uint)param_2[7] + iVar19;
    param_2 = param_2 + 0x10;
    iVar21 = (uint)*pbVar1 + iVar20;
    iVar18 = (uint)*pbVar2 + iVar21;
    iVar24 = (uint)*pbVar3 + iVar18;
    iVar23 = (uint)*pbVar7 + iVar24;
    iVar22 = (uint)*pbVar4 + iVar23;
    iVar17 = (uint)*pbVar5 + iVar22;
    iVar15 = (uint)*pbVar8 + iVar17;
    param_1 = (uint)*pbVar6 + iVar15;
    local_res8 = local_res8 +
                 iVar15 + iVar17 + iVar22 + iVar23 + iVar24 + iVar18 + iVar21 + iVar20 + iVar19 +
                 iVar27 + iVar28 + iVar25 + iVar26 + iVar14 + iVar13 + param_1;
  } while (0xf < param_3);
  for (; param_3 != 0; param_3 = param_3 - 1) {
LAB_140357a60:
    bVar11 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + bVar11;
    local_res8 = local_res8 + param_1;
  }
  param_1 = param_1 % 0xfff1;
  local_res8 = local_res8 % 0xfff1;
LAB_140357a9c:
  return local_res8 << 0x10 | param_1;
}

