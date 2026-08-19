// Function: FUN_1402f5f40
// Addr: 1402f5f40
// Size: 126 bytes


uint FUN_1402f5f40(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = *param_1;
  uVar6 = param_1[1];
  uVar8 = uVar12;
  if ((int)uVar12 < 0) {
    uVar8 = -uVar12;
  }
  uVar9 = uVar6;
  if ((int)uVar6 < 0) {
    uVar9 = -uVar6;
  }
  uVar6 = (int)uVar6 >> 0x1f & 0xfffffffe;
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      param_1[1] = (uVar6 + 1) * 0x10000;
    }
    return uVar9;
  }
  uVar12 = (int)uVar12 >> 0x1f & 0xfffffffe;
  if (uVar9 == 0) {
    *param_1 = (uVar12 + 1) * 0x10000;
    return uVar8;
  }
  uVar10 = (uVar8 >> 1) + uVar9;
  if (uVar9 < uVar8) {
    uVar10 = (uVar9 >> 1) + uVar8;
  }
  iVar1 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar1 = ((0x1f - iVar1) - (uint)(0xaaaaaaaaU >> ((byte)(0x1f - iVar1) & 0x1f) <= uVar10)) + -0xf;
  bVar4 = (byte)iVar1;
  if (iVar1 < 1) {
    bVar5 = -bVar4;
    uVar8 = uVar8 >> (bVar5 & 0x1f);
    uVar9 = uVar9 >> (bVar5 & 0x1f);
    uVar10 = uVar10 >> (bVar5 & 0x1f);
  }
  else {
    uVar9 = uVar9 << (bVar4 & 0x1f);
    uVar8 = uVar8 << (bVar4 & 0x1f);
    if (uVar9 < uVar8) {
      uVar10 = (uVar9 >> 1) + uVar8;
    }
    else {
      uVar10 = uVar9 + (uVar8 >> 1);
    }
  }
  iVar7 = 0x10000 - uVar10;
  do {
    uVar10 = ((int)(iVar7 * uVar8) >> 0x10) + uVar8;
    uVar11 = ((int)(iVar7 * uVar9) >> 0x10) + uVar9;
    iVar2 = uVar11 * uVar11 + uVar10 * uVar10;
    iVar2 = -((int)(iVar2 + (iVar2 >> 0x1f & 0x1ffU)) >> 9) * (iVar7 + 0x10000 >> 8);
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10;
    iVar7 = iVar7 + iVar2;
  } while (0 < iVar2);
  uVar3 = uVar10;
  if ((int)uVar12 < -1) {
    uVar3 = -uVar10;
  }
  *param_1 = uVar3;
  uVar12 = uVar11;
  if ((int)uVar6 < -1) {
    uVar12 = -uVar11;
  }
  param_1[1] = uVar12;
  iVar7 = uVar11 * uVar9 + uVar10 * uVar8;
  iVar7 = ((int)((iVar7 >> 0x1f & 0xffffU) + iVar7) >> 0x10) + 0x10000;
  if (0 < iVar1) {
    return (uint)((1 << (bVar4 - 1 & 0x1f)) + iVar7) >> (bVar4 & 0x1f);
  }
  return iVar7 << (-bVar4 & 0x1f);
}

