// Function: FUN_1400153a0
// Addr: 1400153a0
// Size: 127 bytes


ulonglong FUN_1400153a0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2;
  if (param_4 < param_2) {
    uVar2 = param_4;
  }
  uVar1 = thunk_FUN_14028e250(param_1,param_3,uVar2);
  if (uVar1 != uVar2) {
    uVar2 = 1;
    if (*(ushort *)(param_1 + uVar1 * 2) < *(ushort *)(param_3 + uVar1 * 2)) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  if (param_2 < param_4) {
    return 0xffffffff;
  }
  return (ulonglong)(param_4 < param_2);
}

