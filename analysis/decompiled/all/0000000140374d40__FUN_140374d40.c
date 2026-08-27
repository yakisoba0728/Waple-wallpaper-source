// Function: FUN_140374d40
// Addr: 140374d40
// Size: 218 bytes


undefined8 FUN_140374d40(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar2 = FUN_1404093d0(param_2,param_1);
  if ((cVar2 == '\0') ||
     (((uVar3 = (uint)*param_2 * 0x100 + (uint)param_2[1], uVar3 != 0 &&
       (cVar2 = FUN_140374b40(param_1,param_2 + uVar3), cVar2 == '\0')) ||
      (cVar2 = FUN_1404078b0(param_2 + 2,param_1), cVar2 == '\0')))) {
    return 0;
  }
  uVar5 = 0;
  uVar3 = (uint)param_2[3] + (uint)param_2[2] * 0x100;
  if (uVar3 != 0) {
    do {
      pbVar1 = param_2 + uVar5 * 2 + 4;
      cVar2 = FUN_1404093d0(pbVar1,param_1,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
      if ((uVar4 != 0) && (cVar2 = FUN_140374e20(param_1,param_2 + uVar4), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar3);
  }
  return 1;
}

