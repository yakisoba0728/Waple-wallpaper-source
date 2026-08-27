// Function: FUN_140082040
// Addr: 140082040
// Size: 18 bytes


void FUN_140082040(longlong param_1,undefined8 param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (param_3 != -1) {
    *(int *)(param_1 + 0x218) = param_3;
  }
  return;
}

