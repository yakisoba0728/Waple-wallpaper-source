// Function: FUN_1403c7410
// Addr: 1403c7410
// Size: 41 bytes


longlong FUN_1403c7410(byte *param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((((param_2 != 0) && (iVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100, iVar4 - 1U < 3)) &&
      (uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1], uVar5 <= param_2)) &&
     (param_2 <= (uint)param_1[2] * 0x100 + (uint)param_1[3])) {
    bVar2 = (byte)iVar4;
    uVar5 = param_2 - uVar5;
    uVar1 = uVar5 >> (4 - bVar2 & 0x3f);
    uVar3 = 0xffff >> (0x10U - (char)(1 << (bVar2 & 0x1f)) & 0x1f);
    uVar5 = (uint)param_1[(ulonglong)uVar1 * 2 + 7] +
            (uint)param_1[(ulonglong)uVar1 * 2 + 6] * 0x100 >>
            (0x10U - (char)(((1 << (4 - bVar2 & 0x1f)) - 1U & (ushort)uVar5) + 1 << (bVar2 & 0x1f))
            & 0x1f) & uVar3;
    if (uVar3 + 1 >> 1 <= uVar5) {
      uVar5 = (uVar5 - uVar3) - 1;
    }
    if (uVar5 != 0) {
      return ((longlong)(int)uVar5 * (longlong)param_3) / (longlong)(ulonglong)param_2;
    }
  }
  return 0;
}

