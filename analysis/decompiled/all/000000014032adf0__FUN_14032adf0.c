// Function: FUN_14032adf0
// Addr: 14032adf0
// Size: 130 bytes


longlong FUN_14032adf0(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  bVar3 = false;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  uVar6 = 0;
  if (0 < iVar1) {
    do {
      if (bVar3) goto LAB_14032ae47;
      iVar4 = strcmp(*(char **)(lVar2 + uVar6 * 0x18),param_2);
      if (iVar4 == 0) {
        bVar3 = true;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
    if (bVar3) {
LAB_14032ae47:
      return lVar2 + ((longlong)(int)uVar6 * 3 + -3) * 8;
    }
  }
  return 0;
}

