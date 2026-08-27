// Function: FUN_14032da10
// Addr: 14032da10
// Size: 116 bytes


uint FUN_14032da10(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) != 0) {
    while (uVar2 < 0x19999998) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = (uint)(byte)(&DAT_1404407b0)[(char)bVar1] + uVar2 * 10;
      if (((&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) == 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

