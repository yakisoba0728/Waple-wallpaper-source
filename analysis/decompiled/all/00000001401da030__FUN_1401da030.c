// Function: FUN_1401da030
// Addr: 1401da030
// Size: 55 bytes


void FUN_1401da030(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1401dc4c0();
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
    return;
  }
  FUN_1401db9e0(param_1,*(longlong *)(param_1 + 8),param_2);
  return;
}

