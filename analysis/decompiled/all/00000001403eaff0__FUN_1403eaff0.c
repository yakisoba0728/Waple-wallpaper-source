// Function: FUN_1403eaff0
// Addr: 1403eaff0
// Size: 239 bytes


uint FUN_1403eaff0(char *param_1,uint param_2)

{
  byte bVar1;
  sbyte sVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  if (*param_1 == '\0') {
    uVar4 = (uint)(byte)param_1[2] * 0x100 + (uint)(byte)param_1[3];
    if (uVar4 == 0) {
      return param_2;
    }
    if (uVar4 <= param_2) {
      param_2 = uVar4 - 1;
    }
    bVar6 = param_1[1];
    uVar4 = 0;
    iVar5 = (bVar6 >> 4 & 3) + 1;
    pbVar3 = (byte *)(param_1 + (ulonglong)(param_2 * iVar5) + 4);
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 * 0x100 + (uint)bVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    if (*param_1 != '\x01') {
      return param_2;
    }
    uVar4 = (uint)(byte)param_1[3] * 0x10000 + (uint)(byte)param_1[4] * 0x100 +
            (uint)(byte)param_1[2] * 0x1000000 + (uint)(byte)param_1[5];
    if (uVar4 == 0) {
      return param_2;
    }
    if (uVar4 <= param_2) {
      param_2 = uVar4 - 1;
    }
    bVar6 = param_1[1];
    uVar4 = 0;
    iVar5 = (bVar6 >> 4 & 3) + 1;
    pbVar3 = (byte *)(param_1 + (ulonglong)(param_2 * iVar5) + 6);
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 * 0x100 + (uint)bVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  sVar2 = (bVar6 & 0xf) + 1;
  return (1 << sVar2) - 1U & uVar4 | (uVar4 >> sVar2) << 0x10;
}

