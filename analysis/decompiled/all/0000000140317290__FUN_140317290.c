// Function: FUN_140317290
// Addr: 140317290
// Size: 76 bytes


ulonglong FUN_140317290(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x240);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x248);
    uVar5 = 0;
    do {
      iVar3 = strcmp(param_2,*(char **)(lVar2 + uVar5 * 8));
      if (iVar3 == 0) {
        return uVar5;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < iVar1);
  }
  return 0;
}

