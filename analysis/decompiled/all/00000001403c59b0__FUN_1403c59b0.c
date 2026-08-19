// Function: FUN_1403c59b0
// Addr: 1403c59b0
// Size: 194 bytes


ulonglong FUN_1403c59b0(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    if (*(uint *)(uVar2 + (ulonglong)uVar1 * 8) == param_2 >> 9) {
      lVar5 = uVar2 + 4;
      uVar2 = *(ulonglong *)(param_1 + 0x28);
      lVar5 = uVar2 + (ulonglong)*(uint *)(lVar5 + (ulonglong)uVar1 * 8) * 0x48;
LAB_1403c5a45:
      if (lVar5 != 0) {
        uVar2 = *(ulonglong *)(lVar5 + 8 + (ulonglong)(param_2 >> 6 & 7) * 8);
        return CONCAT71((int7)(uVar2 >> 8),(uVar2 >> (param_2 & 0x3f) & 1) != 0);
      }
      goto LAB_1403c5a20;
    }
  }
  iVar6 = 0;
  iVar4 = *(uint *)(param_1 + 0x14) - 1;
  if (-1 < iVar4) {
    do {
      uVar3 = (uint)(iVar4 + iVar6) >> 1;
      uVar1 = (param_2 >> 9) - *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 8);
      uVar2 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        iVar4 = uVar3 - 1;
      }
      else {
        if ((int)uVar1 < 1) {
          *(uint *)(param_1 + 8) = uVar3;
          uVar2 = *(ulonglong *)(param_1 + 0x28);
          lVar5 = uVar2 + (ulonglong)
                          *(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (ulonglong)uVar3 * 8) * 0x48
          ;
          goto LAB_1403c5a45;
        }
        iVar6 = uVar3 + 1;
      }
    } while (iVar6 <= iVar4);
  }
LAB_1403c5a20:
  return uVar2 & 0xffffffffffffff00;
}

