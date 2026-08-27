// Function: FUN_1401d8e10
// Addr: 1401d8e10
// Size: 170 bytes


void FUN_1401d8e10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[0x11] = 0;
    puVar1[0x13] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 200;
    return;
  }
  FUN_1401dbb10();
  return;
}

