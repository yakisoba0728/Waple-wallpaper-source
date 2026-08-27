// Function: FUN_1401d9f60
// Addr: 1401d9f60
// Size: 55 bytes


void FUN_1401d9f60(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1401dc3f0();
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
    return;
  }
  FUN_1401db910(param_1,*(longlong *)(param_1 + 8),param_2);
  return;
}

