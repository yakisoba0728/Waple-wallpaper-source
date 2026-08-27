// Function: FUN_1400c1390
// Addr: 1400c1390
// Size: 164 bytes


undefined4 * FUN_1400c1390(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1400c1440(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x46) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  *(char *)(param_1 + 0x4a) = (char)uVar1;
  *(undefined8 *)(param_1 + 0x52) = uVar1;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = (int)uVar1;
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  param_1[0x5c] = (int)uVar1;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  return param_1;
}

