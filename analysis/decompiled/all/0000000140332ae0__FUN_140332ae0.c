// Function: FUN_140332ae0
// Addr: 140332ae0
// Size: 161 bytes


ulonglong FUN_140332ae0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  char *_Str2;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *param_2;
  uVar6 = 0;
  do {
    while( true ) {
      uVar1 = uVar1 + 1;
      if (0xff < uVar1) {
        *param_2 = 0;
        return uVar6;
      }
      uVar6 = 0;
      _Str2 = (char *)(**(code **)(param_1 + 0x20))
                                (*(undefined2 *)
                                  (*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 2));
      uVar2 = *(uint *)(param_1 + 0x28);
      if (uVar2 != 0) break;
LAB_140332b56:
      if ((int)uVar6 != 0) {
        *param_2 = uVar1;
        return uVar6;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    do {
      _Str1 = *(char **)(lVar3 + uVar6 * 8);
      if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
         (iVar4 = strcmp(_Str1,_Str2), iVar4 == 0)) goto LAB_140332b56;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar2);
    uVar6 = 0;
  } while( true );
}

