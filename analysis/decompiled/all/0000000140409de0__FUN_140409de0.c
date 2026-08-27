// Function: FUN_140409de0
// Addr: 140409de0
// Size: 347 bytes


undefined8 FUN_140409de0(longlong param_1,undefined8 param_2,longlong param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  pbVar5 = param_4 + 2;
  if ((bVar1 & 1) == 0) {
    pbVar5 = param_4;
  }
  pbVar4 = pbVar5 + 2;
  if ((bVar1 & 2) == 0) {
    pbVar4 = pbVar5;
  }
  pbVar5 = pbVar4 + 2;
  if ((bVar1 & 4) == 0) {
    pbVar5 = pbVar4;
  }
  pbVar4 = pbVar5 + 2;
  if ((bVar1 & 8) == 0) {
    pbVar4 = pbVar5;
  }
  pbVar5 = pbVar4;
  if ((bVar1 & 0x10) != 0) {
    cVar2 = FUN_1404093d0(pbVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    pbVar5 = pbVar4 + 2;
    uVar3 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
    if ((uVar3 != 0) && (cVar2 = FUN_140403500((ulonglong)uVar3 + param_3,param_2), cVar2 == '\0'))
    {
      return 0;
    }
  }
  pbVar4 = pbVar5;
  if ((bVar1 & 0x20) != 0) {
    cVar2 = FUN_1404093d0(pbVar5,param_2,param_3);
    if (cVar2 == '\0') {
      return 0;
    }
    pbVar4 = pbVar5 + 2;
    uVar3 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
    if ((uVar3 != 0) && (cVar2 = FUN_140403500((ulonglong)uVar3 + param_3,param_2), cVar2 == '\0'))
    {
      return 0;
    }
  }
  pbVar5 = pbVar4;
  if ((bVar1 & 0x40) != 0) {
    cVar2 = FUN_1404093d0(pbVar4,param_2,param_3);
    if (cVar2 == '\0') {
      return 0;
    }
    pbVar5 = pbVar4 + 2;
    uVar3 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
    if ((uVar3 != 0) && (cVar2 = FUN_140403500((ulonglong)uVar3 + param_3,param_2), cVar2 == '\0'))
    {
      return 0;
    }
  }
  if (((char)bVar1 < '\0') &&
     ((cVar2 = FUN_1404093d0(pbVar5,param_2,param_3), cVar2 == '\0' ||
      ((uVar3 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1], uVar3 != 0 &&
       (cVar2 = FUN_140403500((ulonglong)uVar3 + param_3,param_2), cVar2 == '\0')))))) {
    return 0;
  }
  return 1;
}

