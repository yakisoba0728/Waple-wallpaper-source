// Function: FUN_140347a20
// Addr: 140347a20
// Size: 288 bytes


ulonglong FUN_140347a20(longlong param_1,char *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  char *_Str2;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar6) {
    uVar5 = 0;
    if (uVar6 == 0xffffffff) {
      uVar6 = 0xffffffff;
    }
    else if (uVar6 == 0) {
      return 0;
    }
    do {
      uVar4 = (uint)uVar5;
      if ((uVar4 < *(ushort *)(param_1 + 0x174)) &&
         (lVar2 = *(longlong *)(param_1 + 0x2d8), lVar2 != 0)) {
        _Str2 = (char *)(**(code **)(lVar2 + 0x20))(0);
        iVar3 = *(int *)(param_1 + 0x270);
        if ((iVar3 == 0x20000) || (iVar3 == 0x25000)) {
          if (((*(char *)(param_1 + 0x358) != '\0') || (iVar3 = FUN_1403496e0(param_1), iVar3 == 0))
             && (uVar4 < *(ushort *)(param_1 + 0x35a))) {
            uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x360) + uVar5 * 2);
            if (uVar1 < 0x102) {
              _Str2 = (char *)(**(code **)(lVar2 + 0x20))((ulonglong)uVar1);
            }
            else {
              _Str2 = *(char **)(*(longlong *)(param_1 + 0x368) + -0x810 + (ulonglong)uVar1 * 8);
            }
          }
        }
        else if ((iVar3 == 0x10000) && (*(short *)(param_1 + 0x174) == 0x102)) {
          _Str2 = (char *)(**(code **)(lVar2 + 0x20))(uVar5);
        }
        iVar3 = strcmp(param_2,_Str2);
        if (iVar3 == 0) {
          return uVar5;
        }
      }
      uVar5 = (ulonglong)(uVar4 + 1);
    } while (uVar4 + 1 < uVar6);
  }
  return 0;
}

