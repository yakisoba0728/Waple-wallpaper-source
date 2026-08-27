// Function: FUN_1400158b0
// Addr: 1400158b0
// Size: 94 bytes


undefined8 FUN_1400158b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_14028e250();
  if (lVar1 == param_3) {
    return 0;
  }
  uVar2 = 1;
  if (*(ushort *)(param_1 + lVar1 * 2) < *(ushort *)(param_2 + lVar1 * 2)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

