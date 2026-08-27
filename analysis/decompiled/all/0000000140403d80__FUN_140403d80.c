// Function: FUN_140403d80
// Addr: 140403d80
// Size: 424 bytes


undefined8 FUN_140403d80(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  pbVar1 = param_1 + 4;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  iVar7 = 1;
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar8 <= uVar6) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar6 < uVar8) || ((uint)*param_1 * 0x100 + (uint)param_1[1] != iVar7)) ||
     (cVar2 = FUN_1404086d0(pbVar1,param_2), cVar2 == '\0')) {
    return 0;
  }
  uVar6 = 0;
  uVar5 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)*pbVar1 * 0x1000000 +
          (uint)param_1[7];
  if (uVar5 != 0) {
    do {
      pbVar1 = param_1 + uVar6 * 8 + 8;
      cVar2 = FUN_140409580(pbVar1,param_2,param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
              (uint)pbVar1[3];
      if ((uVar4 != 0) && (cVar2 = FUN_140374a70(param_2,param_1 + uVar4), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_140409580(pbVar1 + 4,param_2,param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = (uint)pbVar1[5] * 0x10000 + (uint)pbVar1[6] * 0x100 + (uint)pbVar1[4] * 0x1000000 +
              (uint)pbVar1[7];
      if ((uVar4 != 0) && (cVar2 = FUN_140403bb0(param_1 + uVar4,param_2), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < uVar5);
  }
  return 1;
}

