// Function: FUN_140386ea0
// Addr: 140386ea0
// Size: 145 bytes


ulonglong FUN_140386ea0(longlong param_1,ulonglong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((*(int *)(param_1 + 0x2c) == 0) && (param_2 <= param_2 + param_3)) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = (param_2 + param_3) - lVar1;
    if ((uVar2 < 0x80000000) && ((longlong)uVar2 <= *(longlong *)(param_1 + 0x10) - lVar1)) {
      if ((param_4 != '\0') && ((int)uVar2 != 0)) {
        FUN_1404217a0(lVar1,0,uVar2 & 0xffffffff);
      }
      lVar1 = *(longlong *)(param_1 + 8);
      *(ulonglong *)(param_1 + 8) = lVar1 + uVar2;
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = param_2;
      }
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x2c) = 4;
  }
  return 0;
}

