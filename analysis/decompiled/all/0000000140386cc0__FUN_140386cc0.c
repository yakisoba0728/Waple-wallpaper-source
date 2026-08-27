// Function: FUN_140386cc0
// Addr: 140386cc0
// Size: 159 bytes


ulonglong FUN_140386cc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  if (param_2 <= param_2 + 4) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = (param_2 - lVar1) + 4;
    if ((uVar2 < 0x80000000) && ((longlong)uVar2 <= *(longlong *)(param_1 + 0x10) - lVar1)) {
      if ((int)uVar2 != 0) {
        FUN_1404217a0(lVar1,0,uVar2 & 0xffffffff);
      }
      lVar1 = *(longlong *)(param_1 + 8);
      *(ulonglong *)(param_1 + 8) = uVar2 + lVar1;
      if (lVar1 != 0) {
        return param_2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
  }
  return 0;
}

