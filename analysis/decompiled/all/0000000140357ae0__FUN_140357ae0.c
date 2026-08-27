// Function: FUN_140357ae0
// Addr: 140357ae0
// Size: 242 bytes


uint FUN_140357ae0(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  for (uVar5 = (ulonglong)param_3; 7 < uVar5; uVar5 = uVar5 - 8) {
    uVar4 = param_1 >> 8 ^
            *(uint *)(&DAT_140452640 + (((ulonglong)*param_2 ^ (ulonglong)param_1) & 0xff) * 4);
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((param_2[1] ^ uVar4) & 0xff) * 4);
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((param_2[2] ^ uVar4) & 0xff) * 4);
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((param_2[3] ^ uVar4) & 0xff) * 4);
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((param_2[4] ^ uVar4) & 0xff) * 4);
    pbVar1 = param_2 + 6;
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((param_2[5] ^ uVar4) & 0xff) * 4);
    pbVar2 = param_2 + 7;
    param_2 = param_2 + 8;
    uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((*pbVar1 ^ uVar4) & 0xff) * 4);
    param_1 = uVar4 >> 8 ^ *(uint *)(&DAT_140452640 + (ulonglong)((*pbVar2 ^ uVar4) & 0xff) * 4);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    bVar3 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 >> 8 ^
              *(uint *)(&DAT_140452640 + (((ulonglong)bVar3 ^ (ulonglong)param_1) & 0xff) * 4);
  }
  return ~param_1;
}

