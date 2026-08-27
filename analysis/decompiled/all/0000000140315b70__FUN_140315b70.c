// Function: FUN_140315b70
// Addr: 140315b70
// Size: 128 bytes


undefined8 FUN_140315b70(longlong param_1)

{
  uint uVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  *(undefined4 *)(param_1 + 0x40) = 500;
  *(undefined4 *)(param_1 + 0x44) = 400;
  *(undefined4 *)(param_1 + 0x48) = 1000;
  *(undefined4 *)(param_1 + 0x4c) = 0x113;
  *(undefined4 *)(param_1 + 0x50) = 0x683;
  *(undefined4 *)(param_1 + 0x54) = 0x113;
  *(undefined8 *)(param_1 + 0x58) = 0x91d;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = (uint)local_res10 ^ *(uint *)(param_1 + 0x10) ^ (uint)local_res8;
  uVar1 = (uVar1 >> 10 ^ uVar1) >> 10 ^ uVar1;
  *(uint *)(param_1 + 0x60) = uVar1;
  if ((int)uVar1 < 0) {
    *(uint *)(param_1 + 0x60) = -uVar1;
    return 0;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x75bcd15;
  }
  return 0;
}

