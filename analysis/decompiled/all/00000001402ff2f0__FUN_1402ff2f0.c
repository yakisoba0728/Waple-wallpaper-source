// Function: FUN_1402ff2f0
// Addr: 1402ff2f0
// Size: 135 bytes


ulonglong FUN_1402ff2f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 3) {
    return 0;
  }
  iVar6 = -0x80000000;
  uVar7 = 0;
  iVar3 = FUN_1402ff210();
  uVar5 = 0;
  do {
    if ((int)uVar5 != iVar3) {
      iVar2 = *(int *)(uVar5 * 4 + *(longlong *)(param_1 + 0x40));
      if ((iVar6 < iVar2) &&
         (*(int *)(uVar5 * 4 + *(longlong *)(param_1 + 0x38)) <
          *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 4))) {
        uVar7 = uVar5;
        iVar6 = iVar2;
      }
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while ((int)uVar4 < iVar1);
  return uVar7;
}

