// Function: FUN_140015980
// Addr: 140015980
// Size: 94 bytes


undefined8 FUN_140015980(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_14028e320();
  if (lVar1 == param_3) {
    return 0;
  }
  uVar2 = 1;
  if (*(ushort *)(param_1 + lVar1 * 2) < *(ushort *)(param_2 + lVar1 * 2)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

