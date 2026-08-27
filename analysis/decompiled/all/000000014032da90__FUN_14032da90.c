// Function: FUN_14032da90
// Addr: 14032da90
// Size: 127 bytes


ushort FUN_14032da90(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (((&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) != 0) {
    while (uVar2 < 0x1998) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 * 10 + (ushort)(byte)(&DAT_1404407b0)[(char)bVar1];
      if (((&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) == 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffff;
  }
  return uVar2;
}

