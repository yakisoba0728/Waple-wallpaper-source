// Function: FUN_1403cfef0
// Addr: 1403cfef0
// Size: 195 bytes


uint FUN_1403cfef0(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 10) {
    pbVar2 = (byte *)FUN_1403cf750(param_1);
    pbVar3 = (byte *)&DAT_14045dde0;
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar2;
    }
    return (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
           (uint)pbVar3[3];
  }
  uVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
  if ((param_2 < uVar4) ||
     (param_2 = param_2 - uVar4, (uint)param_1[6] * 0x100 + (uint)param_1[7] <= param_2)) {
    uVar4 = (uint)DAT_14045dde0._2_1_ * 0x100 + (uint)DAT_14045dde0._1_1_ * 0x10000 +
            (uint)(byte)DAT_14045dde0 * 0x1000000 + (uint)DAT_14045dde0._3_1_;
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

