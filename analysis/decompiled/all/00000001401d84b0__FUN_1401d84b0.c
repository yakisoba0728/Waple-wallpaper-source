// Function: FUN_1401d84b0
// Addr: 1401d84b0
// Size: 46 bytes


void FUN_1401d84b0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
    return;
  }
  FUN_1401db3c0();
  return;
}

