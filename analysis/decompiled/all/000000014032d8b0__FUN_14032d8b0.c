// Function: FUN_14032d8b0
// Addr: 14032d8b0
// Size: 156 bytes


int FUN_14032d8b0(byte *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *param_1;
  if (bVar2 == 0x2d) {
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  iVar1 = 0;
  if (((&DAT_140440830)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) != 0) {
    while (iVar1 < 0xccccccb) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar1 = (uint)(byte)(&DAT_1404407b0)[(char)bVar2] + iVar1 * 10;
      if (((&DAT_140440830)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) == 0) {
        return iVar1 * iVar3;
      }
    }
    iVar1 = 0x7fffffff;
  }
  return iVar1 * iVar3;
}

