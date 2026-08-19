// Function: FUN_14031fe40
// Addr: 14031fe40
// Size: 101 bytes


uint FUN_14031fe40(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  pbVar1 = param_1 + 1;
  if (bVar2 == 0x1c) {
    if ((param_1 + 3 <= param_2) || (param_2 < pbVar1)) {
      return (int)(short)((ushort)*pbVar1 << 8) | (uint)param_1[2];
    }
  }
  else if (bVar2 == 0x1d) {
    if ((param_1 + 5 <= param_2) || (param_2 < pbVar1)) {
      return CONCAT31(CONCAT21(CONCAT11(*pbVar1,param_1[2]),param_1[3]),param_1[4]);
    }
  }
  else {
    if (bVar2 < 0xf7) {
      return bVar2 - 0x8b;
    }
    if (bVar2 < 0xfb) {
      if ((param_1 + 2 <= param_2) || (param_2 < pbVar1)) {
        return (*pbVar1 - 0xf694) + (uint)bVar2 * 0x100;
      }
    }
    else if ((param_1 + 2 <= param_2) || (param_2 < pbVar1)) {
      return ((uint)bVar2 * -0x100 + 0xfa94) - (uint)*pbVar1;
    }
  }
  return 0;
}

