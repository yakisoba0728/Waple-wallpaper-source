// Function: FUN_1400eb090
// Addr: 1400eb090
// Size: 62 bytes


undefined8 FUN_1400eb090(undefined4 param_1)

{
  switch(param_1) {
  case 10:
  case 0xb:
  case 0xd:
    return 8;
  default:
    return 4;
  case 0x31:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x3a:
  case 0x47:
    return 2;
  case 0x3d:
    return 1;
  }
}

