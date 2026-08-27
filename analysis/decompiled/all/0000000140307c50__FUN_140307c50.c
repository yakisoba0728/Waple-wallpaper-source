// Function: FUN_140307c50
// Addr: 140307c50
// Size: 64 bytes


ulonglong FUN_140307c50(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x408) == 0) {
    uVar1 = FUN_1403073d0(param_1,0);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  return uVar2;
}

