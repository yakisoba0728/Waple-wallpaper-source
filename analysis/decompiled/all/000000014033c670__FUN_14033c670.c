// Function: FUN_14033c670
// Addr: 14033c670
// Size: 129 bytes


ulonglong FUN_14033c670(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x100) {
    _Str2 = (char *)(**(code **)(*(longlong *)(param_1 + 0x390) + 0x28))
                              (*(undefined2 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x30) +
                                (longlong)(int)param_2 * 2));
    uVar1 = *(uint *)(param_1 + 0x370);
    if (uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
      uVar5 = 0;
      do {
        _Str1 = *(char **)(lVar2 + uVar5 * 8);
        if ((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) {
          iVar3 = strcmp(_Str1,_Str2);
          if (iVar3 == 0) {
            return uVar5;
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar1);
    }
  }
  return 0xffffffff;
}

