// Function: FUN_14032c6c0
// Addr: 14032c6c0
// Size: 149 bytes


short FUN_14032c6c0(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar9 = *param_2 + 1;
  uVar6 = uVar2 >> 1;
  uVar4 = uVar2;
  if (uVar2 != 0) {
    do {
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar6 * 8);
      if (uVar9 == uVar7) {
        sVar1 = *(short *)(lVar3 + (ulonglong)uVar6 * 8 + 4);
        *param_2 = uVar9;
        return sVar1 + 1;
      }
      uVar5 = uVar6;
      if (uVar7 <= uVar9) {
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      uVar6 = (uVar6 - uVar7) + uVar9;
      uVar7 = (uint)uVar8;
      if ((uVar4 <= uVar6) || (uVar6 < uVar7)) {
        uVar6 = uVar7 + uVar4 >> 1;
      }
    } while (uVar7 < uVar4);
  }
  if (uVar2 <= (uint)uVar8) {
    *param_2 = 0;
    return 0;
  }
  sVar1 = *(short *)(lVar3 + 4 + uVar8 * 8);
  *param_2 = *(uint *)(lVar3 + uVar8 * 8);
  return sVar1 + 1;
}

