// Function: FUN_1401371b0
// Addr: 1401371b0
// Size: 242 bytes


longlong FUN_1401371b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != param_3) {
    uVar3 = 0;
    uVar1 = *(longlong *)(param_2 + 0x20) * 2;
    if (uVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    lVar2 = func_0x00014000dab0(param_2 + 0x30);
    return lVar2;
  }
  return param_3;
}

