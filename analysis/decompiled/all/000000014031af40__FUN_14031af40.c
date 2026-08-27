// Function: FUN_14031af40
// Addr: 14031af40
// Size: 132 bytes


ulonglong FUN_14031af40(char *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((param_2 < 0x10000) && (iVar1 = *(int *)(param_3 + 0x168), 0 < iVar1)) {
    lVar2 = *(longlong *)(param_3 + 0x170);
    uVar6 = 0;
    do {
      _Str = *(char **)(lVar2 + uVar6 * 8);
      if ((_Str != (char *)0x0) && (*_Str == *param_1)) {
        sVar4 = strlen(_Str);
        if (sVar4 == param_2) {
          iVar3 = strncmp(_Str,param_1,param_2 & 0xffffffff);
          if (iVar3 == 0) {
            return uVar6;
          }
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
  return 0;
}

