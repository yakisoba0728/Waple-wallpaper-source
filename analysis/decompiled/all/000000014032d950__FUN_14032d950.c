// Function: FUN_14032d950
// Addr: 14032d950
// Size: 188 bytes


int FUN_14032d950(byte *param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  bVar3 = *param_1;
  if (bVar3 == 0x2d) {
    bVar3 = param_1[1];
    param_1 = param_1 + 1;
    sVar2 = -1;
  }
  else {
    sVar2 = 1;
  }
  sVar1 = 0;
  bVar3 = (&DAT_140440830)[bVar3 >> 3] & (byte)(1 << (bVar3 & 7));
  do {
    if (bVar3 == 0) {
LAB_14032d9f9:
      return (int)sVar1 * (int)sVar2;
    }
    if (0xcca < sVar1) {
      sVar1 = 0x7fff;
      goto LAB_14032d9f9;
    }
    bVar3 = *param_1;
    param_1 = param_1 + 1;
    sVar1 = sVar1 * 10 + (ushort)(byte)(&DAT_1404407b0)[(char)bVar3];
    bVar3 = (&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7));
  } while( true );
}

