// Function: FUN_1402ee270
// Addr: 1402ee270
// Size: 185 bytes


int FUN_1402ee270(short *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ushort)(uVar1 >> 0x17) & 0xff;
  if (uVar2 == 0xff) {
    *param_1 = 0;
    return ((uVar1 & 0x7fffff) != 0) + 1;
  }
  if (uVar2 == 0) {
    if ((uVar1 & 0x7fffff) == 0) {
      *param_1 = 0;
      return 0;
    }
    uVar2 = FUN_1402ee330(param_2);
    uVar1 = *param_2;
  }
  *param_2 = uVar1 & 0xbf7fffff | 0x3f000000;
  *param_1 = uVar2 - 0x7e;
  return -1;
}

