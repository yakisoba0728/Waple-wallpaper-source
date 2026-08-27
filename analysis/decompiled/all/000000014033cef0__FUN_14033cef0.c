// Function: FUN_14033cef0
// Addr: 14033cef0
// Size: 183 bytes


int FUN_14033cef0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  iVar9 = 0;
  if (uVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar6 = *param_2 + 1;
    uVar4 = uVar8 >> 1;
    do {
      uVar5 = *(uint *)(lVar2 + (ulonglong)uVar4 * 8);
      lVar1 = lVar2 + (ulonglong)uVar4 * 8;
      if (uVar5 == uVar6) {
        iVar9 = *(int *)(lVar1 + 4);
        *param_2 = uVar6;
        return iVar9;
      }
      uVar5 = uVar5 & 0x7fffffff;
      uVar3 = uVar4;
      if (uVar5 == uVar6) {
        iVar9 = *(int *)(lVar1 + 4);
      }
      else if (uVar5 < uVar6) {
        uVar7 = (ulonglong)(uVar4 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
      uVar4 = (uVar4 - uVar5) + uVar6;
      uVar5 = (uint)uVar7;
      if ((uVar8 <= uVar4) || (uVar4 < uVar5)) {
        uVar4 = (uVar8 - uVar5 >> 1) + uVar5;
      }
    } while (uVar5 < uVar8);
    if ((iVar9 == 0) && (uVar6 = 0, uVar5 < *(uint *)(param_1 + 0x18))) {
      iVar9 = *(int *)(lVar2 + 4 + uVar7 * 8);
      *param_2 = *(uint *)(lVar2 + uVar7 * 8) & 0x7fffffff;
      return iVar9;
    }
  }
  *param_2 = uVar6;
  return iVar9;
}

