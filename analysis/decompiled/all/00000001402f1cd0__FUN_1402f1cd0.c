// Function: FUN_1402f1cd0
// Addr: 1402f1cd0
// Size: 145 bytes


ulonglong FUN_1402f1cd0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 != (uint *)0x0) {
    uVar9 = *param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[2];
    uVar8 = param_1[3];
    uVar4 = -uVar8;
    if ((int)-uVar8 < 0) {
      uVar4 = uVar8;
    }
    uVar1 = -uVar11;
    if ((int)-uVar11 < 0) {
      uVar1 = uVar11;
    }
    uVar2 = -uVar10;
    if ((int)-uVar10 < 0) {
      uVar2 = uVar10;
    }
    uVar6 = -uVar9;
    if ((int)-uVar9 < 0) {
      uVar6 = uVar9;
    }
    in_RAX = (ulonglong)uVar6;
    uVar6 = uVar4 | uVar1 | uVar2 | uVar6;
    if (uVar6 != 0) {
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (0 < iVar3 + -0xc) {
        bVar5 = (byte)(iVar3 + -0xc);
        uVar9 = (int)uVar9 >> (bVar5 & 0x1f);
        uVar10 = (int)uVar10 >> (bVar5 & 0x1f);
        uVar11 = (int)uVar11 >> (bVar5 & 0x1f);
        uVar8 = (int)uVar8 >> (bVar5 & 0x1f);
      }
      iVar7 = uVar8 * uVar9 - uVar11 * uVar10;
      iVar3 = -iVar7;
      if (iVar3 < 0) {
        iVar3 = iVar7;
      }
      uVar4 = iVar3 << 5;
      in_RAX = (ulonglong)uVar4;
      if (uVar8 * uVar8 + uVar11 * uVar11 + uVar10 * uVar10 + uVar9 * uVar9 < uVar4) {
        return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

