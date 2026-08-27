// Function: FUN_140332a40
// Addr: 140332a40
// Size: 155 bytes


ulonglong FUN_140332a40(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  uint uVar4;
  ulonglong uVar5;
  
  if (0xff < param_2) {
    return 0;
  }
  _Str2 = (char *)(**(code **)(param_1 + 0x20))
                            (*(undefined2 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2)
                            );
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar5 = 0;
    do {
      _Str1 = *(char **)(lVar2 + uVar5 * 8);
      if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
         (iVar3 = strcmp(_Str1,_Str2), iVar3 == 0)) {
        return uVar5;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar1);
  }
  return 0;
}

