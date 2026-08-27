// Function: FUN_1400b69e0
// Addr: 1400b69e0
// Size: 543 bytes


ulonglong FUN_1400b69e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_res10;
  
  pbVar7 = (byte *)*param_2;
  pbVar14 = (byte *)*param_3;
  uVar15 = 0;
  local_res10 = 0;
  uVar13 = 0;
  uVar18 = 0;
  uVar16 = 0;
  uVar11 = param_3[1];
  if ((ulonglong)param_2[1] < (ulonglong)param_3[1]) {
    uVar11 = param_2[1];
  }
  pbVar2 = pbVar7 + (uVar11 & 0xfffffffffffffffc);
  uVar4 = 0;
  uVar10 = 0;
  uVar6 = 0;
  for (; pbVar7 < pbVar2; pbVar7 = pbVar7 + 4) {
    bVar3 = *pbVar14;
    uVar8 = bVar3 - uVar4;
    uVar12 = (uint)bVar3;
    uVar9 = uVar4 - bVar3;
    if (uVar8 < 0x80000000) {
      uVar9 = uVar8;
    }
    iVar1 = uVar8 + uVar15;
    uVar8 = uVar12 - iVar1;
    if (iVar1 - uVar12 < 0x80000000) {
      uVar8 = iVar1 - uVar12;
    }
    uVar17 = uVar4 - iVar1;
    if (iVar1 - uVar4 < 0x80000000) {
      uVar17 = iVar1 - uVar4;
    }
    if (((uVar8 < uVar9) || (uVar17 < uVar9)) && (uVar15 = uVar4, uVar8 <= uVar17)) {
      uVar15 = uVar12;
    }
    *pbVar7 = *pbVar7 + (char)uVar15;
    bVar3 = pbVar14[1];
    uVar15 = (uint)*pbVar7;
    uVar8 = (uint)bVar3;
    uVar9 = bVar3 - uVar10;
    uVar4 = uVar10 - bVar3;
    if (uVar9 < 0x80000000) {
      uVar4 = uVar9;
    }
    iVar1 = uVar9 + uVar13;
    uVar9 = uVar8 - iVar1;
    if (iVar1 - uVar8 < 0x80000000) {
      uVar9 = iVar1 - uVar8;
    }
    uVar17 = uVar10 - iVar1;
    if (iVar1 - uVar10 < 0x80000000) {
      uVar17 = iVar1 - uVar10;
    }
    if (((uVar9 < uVar4) || (uVar17 < uVar4)) && (uVar13 = uVar10, uVar9 <= uVar17)) {
      uVar13 = uVar8;
    }
    pbVar7[1] = pbVar7[1] + (char)uVar13;
    uVar9 = (uint)pbVar14[2];
    uVar13 = (uint)pbVar7[1];
    uVar10 = uVar9 - local_res10;
    iVar1 = uVar10 + uVar18;
    uVar4 = local_res10 - uVar9;
    if (uVar10 < 0x80000000) {
      uVar4 = uVar10;
    }
    uVar10 = (uint)pbVar14[2] - iVar1;
    if (iVar1 - uVar9 < 0x80000000) {
      uVar10 = iVar1 - uVar9;
    }
    uVar17 = local_res10 - iVar1;
    if (iVar1 - local_res10 < 0x80000000) {
      uVar17 = iVar1 - local_res10;
    }
    if (((uVar10 < uVar4) || (uVar17 < uVar4)) && (uVar18 = local_res10, uVar10 <= uVar17)) {
      uVar18 = uVar9;
    }
    pbVar7[2] = pbVar7[2] + (char)uVar18;
    bVar3 = pbVar14[3];
    uVar18 = (uint)pbVar7[2];
    uVar10 = bVar3 - uVar6;
    uVar17 = (uint)bVar3;
    uVar4 = uVar6 - bVar3;
    if (uVar10 < 0x80000000) {
      uVar4 = uVar10;
    }
    iVar1 = uVar10 + uVar16;
    uVar10 = (uint)bVar3 - iVar1;
    if (iVar1 - uVar17 < 0x80000000) {
      uVar10 = iVar1 - uVar17;
    }
    uVar5 = uVar6 - iVar1;
    if (iVar1 - uVar6 < 0x80000000) {
      uVar5 = iVar1 - uVar6;
    }
    if (((uVar10 < uVar4) || (uVar5 < uVar4)) && (uVar16 = uVar6, uVar10 <= uVar5)) {
      uVar16 = uVar17;
    }
    pbVar7[3] = pbVar7[3] + (char)uVar16;
    pbVar14 = pbVar14 + 4;
    uVar16 = (uint)pbVar7[3];
    uVar4 = uVar12;
    uVar10 = uVar8;
    uVar6 = uVar17;
    local_res10 = uVar9;
  }
  return (ulonglong)pbVar7 & 0xffffffffffffff00;
}

