// Function: FUN_140397f20
// Addr: 140397f20
// Size: 70 bytes


uint FUN_140397f20(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  if (bVar1 < 0x80) {
    return (uint)bVar1;
  }
  bVar2 = param_1[1];
  if (bVar1 < 0xc0) {
    return (uint)bVar2 | (bVar1 & 0x3f) << 8;
  }
  uVar4 = (uint)bVar1;
  if (uVar4 < 0xe0) {
    return (uint)bVar2 << 8 | (uVar4 & 0x1f) << 0x10 | (uint)param_1[2];
  }
  uVar3 = CONCAT11(bVar2,param_1[2]);
  if (uVar4 < 0xf0) {
    return (uint)param_1[3] | (uVar4 & 0xf) << 0x18 | (uint)uVar3 << 8;
  }
  return CONCAT31(CONCAT21(uVar3,param_1[3]),param_1[4]);
}

