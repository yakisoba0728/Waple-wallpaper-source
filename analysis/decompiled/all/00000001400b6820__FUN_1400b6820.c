// Function: FUN_1400b6820
// Addr: 1400b6820
// Size: 445 bytes


ulonglong FUN_1400b6820(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar10;
  
  pbVar11 = (byte *)*param_2;
  uVar17 = 0;
  uVar15 = 0;
  uVar16 = 0;
  pbVar13 = (byte *)*param_3;
  uVar12 = param_3[1];
  if ((ulonglong)param_2[1] < (ulonglong)param_3[1]) {
    uVar12 = param_2[1];
  }
  pbVar10 = pbVar11 + (uVar12 / 3) * 2;
  pbVar18 = pbVar10 + uVar12 / 3;
  uVar4 = 0;
  uVar8 = 0;
  uVar5 = 0;
  for (; pbVar11 < pbVar18; pbVar11 = pbVar11 + 3) {
    bVar2 = *pbVar13;
    uVar6 = bVar2 - uVar4;
    uVar14 = (uint)bVar2;
    uVar7 = uVar4 - bVar2;
    if (uVar6 < 0x80000000) {
      uVar7 = uVar6;
    }
    iVar1 = uVar6 + uVar17;
    uVar6 = (uint)bVar2 - iVar1;
    if (iVar1 - uVar14 < 0x80000000) {
      uVar6 = iVar1 - uVar14;
    }
    uVar3 = uVar4 - iVar1;
    if (iVar1 - uVar4 < 0x80000000) {
      uVar3 = iVar1 - uVar4;
    }
    if (((uVar6 < uVar7) || (uVar3 < uVar7)) && (uVar17 = uVar4, uVar6 <= uVar3)) {
      uVar17 = uVar14;
    }
    *pbVar11 = *pbVar11 + (char)uVar17;
    bVar2 = pbVar13[1];
    uVar17 = (uint)*pbVar11;
    uVar6 = (uint)bVar2;
    uVar7 = bVar2 - uVar8;
    uVar4 = uVar8 - bVar2;
    if (uVar7 < 0x80000000) {
      uVar4 = uVar7;
    }
    iVar1 = uVar7 + uVar15;
    uVar7 = (uint)bVar2 - iVar1;
    if (iVar1 - uVar6 < 0x80000000) {
      uVar7 = iVar1 - uVar6;
    }
    uVar3 = uVar8 - iVar1;
    if (iVar1 - uVar8 < 0x80000000) {
      uVar3 = iVar1 - uVar8;
    }
    if (((uVar7 < uVar4) || (uVar3 < uVar4)) && (uVar15 = uVar8, uVar7 <= uVar3)) {
      uVar15 = uVar6;
    }
    pbVar11[1] = pbVar11[1] + (char)uVar15;
    bVar2 = pbVar13[2];
    uVar15 = (uint)pbVar11[1];
    uVar7 = (uint)bVar2;
    uVar8 = bVar2 - uVar5;
    uVar4 = uVar5 - bVar2;
    if (uVar8 < 0x80000000) {
      uVar4 = uVar8;
    }
    iVar1 = uVar8 + uVar16;
    uVar8 = (uint)bVar2 - iVar1;
    if (iVar1 - uVar7 < 0x80000000) {
      uVar8 = iVar1 - uVar7;
    }
    uVar9 = iVar1 - uVar5;
    pbVar10 = (byte *)(ulonglong)uVar9;
    uVar3 = uVar5 - iVar1;
    if (uVar9 < 0x80000000) {
      uVar3 = uVar9;
    }
    if (((uVar8 < uVar4) || (uVar3 < uVar4)) && (uVar16 = uVar5, uVar8 <= uVar3)) {
      uVar16 = uVar7;
    }
    pbVar11[2] = pbVar11[2] + (char)uVar16;
    pbVar13 = pbVar13 + 3;
    uVar16 = (uint)pbVar11[2];
    uVar4 = uVar14;
    uVar8 = uVar6;
    uVar5 = uVar7;
  }
  return (ulonglong)pbVar10 & 0xffffffffffffff00;
}

