// Function: FUN_1403cfe10
// Addr: 1403cfe10
// Size: 2 bytes


uint FUN_1403cfe10(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 10) {
    pbVar2 = (byte *)FUN_1403cf4c0();
    pbVar3 = (byte *)&DAT_14045dde0;
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar2;
    }
    return (uint)(ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]);
  }
  uVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
  if ((param_2 < uVar4) ||
     (param_2 = param_2 - uVar4, (uint)param_1[6] * 0x100 + (uint)param_1[7] <= param_2)) {
    uVar4 = (uint)(ushort)((ushort)DAT_14045dde0._1_1_ + (ushort)(byte)DAT_14045dde0 * 0x100);
  }
  else {
    uVar5 = 0;
    uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    uVar4 = 0;
    param_1 = param_1 + (ulonglong)(param_2 * uVar6) + 8;
    if (uVar6 != 0) {
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 << 8 | (uint)bVar1;
      } while (uVar5 < uVar6);
      return uVar4;
    }
  }
  return uVar4;
}

