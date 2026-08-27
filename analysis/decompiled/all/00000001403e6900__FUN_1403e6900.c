// Function: FUN_1403e6900
// Addr: 1403e6900
// Size: 279 bytes


bool FUN_1403e6900(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 0x10 == 0) {
    uVar1 = param_1 >> 8;
    if (0x18 < uVar1) {
      if (uVar1 == 0x20) {
        if (((4 < param_1 - 0x200b) && (4 < param_1 - 0x202a)) && (0xf < param_1 - 0x2060)) {
          return false;
        }
      }
      else {
        if (uVar1 != 0xfe) {
          if (uVar1 != 0xff) {
            return false;
          }
          return param_1 - 0xfff0 < 9;
        }
        if ((0xf < param_1 - 0xfe00) && (param_1 != 0xfeff)) {
          return false;
        }
      }
      return true;
    }
    if (uVar1 == 0x18) {
      return param_1 - 0x180b < 4;
    }
    if (param_1 >> 8 == 0) {
      return param_1 == 0xad;
    }
    if (uVar1 == 3) {
      return param_1 == 0x34f;
    }
    if (uVar1 == 6) {
      return param_1 == 0x61c;
    }
    if (uVar1 == 0x17) {
      return param_1 - 0x17b4 < 2;
    }
  }
  else {
    if (param_1 >> 0x10 == 1) {
      return param_1 - 0x1d173 < 8;
    }
    if (param_1 >> 0x10 == 0xe) {
      return param_1 - 0xe0000 < 0x1000;
    }
  }
  return false;
}

