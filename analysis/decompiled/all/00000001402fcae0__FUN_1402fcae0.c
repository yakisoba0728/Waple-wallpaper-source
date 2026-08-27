// Function: FUN_1402fcae0
// Addr: 1402fcae0
// Size: 63 bytes


undefined4 FUN_1402fcae0(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = 0x3a6;
  do {
    uVar1 = uVar2 + uVar3 >> 1;
    if ((uint)(&DAT_1404dcf90)[uVar1 * 2] < param_1) {
      uVar3 = uVar1 + 1;
    }
    else {
      if ((uint)(&DAT_1404dcf90)[uVar1 * 2] <= param_1) {
        return *(undefined4 *)(uVar1 * 8 + 0x1404dcf94);
      }
      uVar2 = uVar1 - 1;
    }
  } while (uVar3 <= uVar2);
  return 0;
}

