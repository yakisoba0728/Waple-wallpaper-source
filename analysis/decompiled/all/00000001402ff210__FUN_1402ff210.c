// Function: FUN_1402ff210
// Addr: 1402ff210
// Size: 97 bytes


ulonglong FUN_1402ff210(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    uVar4 = 0;
    iVar7 = 0x7fffffff;
    iVar5 = -0x80000000;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar4 * 4);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + uVar4 * 4);
      if ((iVar5 < iVar1) || ((iVar1 == iVar5 && (iVar7 < iVar2)))) {
        uVar6 = uVar4;
        iVar5 = iVar1;
        iVar7 = iVar2;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x2c));
  }
  return uVar6;
}

