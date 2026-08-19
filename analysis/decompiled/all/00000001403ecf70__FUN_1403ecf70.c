// Function: FUN_1403ecf70
// Addr: 1403ecf70
// Size: 243 bytes


byte * FUN_1403ecf70(byte *param_1,byte *param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  pbVar2 = param_1 + 1;
  if (bVar1 < 0x80) {
LAB_1403ecfb2:
    *param_3 = uVar3;
    return pbVar2;
  }
  if (bVar1 - 0xc2 < 0x1e) {
    if ((pbVar2 < param_2) && (*pbVar2 - 0x80 < 0x40)) {
      uVar3 = (bVar1 & 0x1f) << 6 | *pbVar2 - 0x80;
      pbVar2 = param_1 + 2;
      goto LAB_1403ecfb2;
    }
  }
  else if (uVar3 - 0xe0 < 0x10) {
    if (((1 < (longlong)param_2 - (longlong)pbVar2) && (*pbVar2 - 0x80 < 0x40)) &&
       ((param_1[2] - 0x80 < 0x40 &&
        ((uVar3 = ((bVar1 & 0xf) << 6 | *pbVar2 - 0x80) << 6 | param_1[2] - 0x80, 0x7ff < uVar3 &&
         (0x7ff < uVar3 - 0xd800)))))) {
      *param_3 = uVar3;
      return param_1 + 3;
    }
  }
  else if (((((uVar3 - 0xf0 < 5) && (2 < (longlong)param_2 - (longlong)pbVar2)) &&
            (*pbVar2 - 0x80 < 0x40)) && ((param_1[2] - 0x80 < 0x40 && (param_1[3] - 0x80 < 0x40))))
          && (uVar3 = (((bVar1 & 7) << 6 | *pbVar2 - 0x80) << 6 | param_1[2] - 0x80) << 6 |
                      param_1[3] - 0x80, uVar3 - 0x10000 < 0x100000)) {
    *param_3 = uVar3;
    return param_1 + 4;
  }
  *param_3 = param_4;
  return pbVar2;
}

