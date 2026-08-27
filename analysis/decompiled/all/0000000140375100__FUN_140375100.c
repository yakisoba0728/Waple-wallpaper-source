// Function: FUN_140375100
// Addr: 140375100
// Size: 356 bytes


ulonglong FUN_140375100(int *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar1 = param_2 + 2;
  uVar7 = (ulonglong)(uint)param_1[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  uVar6 = 1;
  if (uVar8 <= uVar7) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if (uVar8 <= uVar7) {
    if ((uint)*param_2 * 0x100 + (uint)param_2[1] != (int)uVar6) {
      return uVar6 & 0xff;
    }
    cVar2 = FUN_140407b60(pbVar1,param_1);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar5 = (uint)param_2[3] + (uint)*pbVar1 * 0x100;
      if (uVar5 != 0) {
        do {
          pbVar1 = param_2 + uVar6 * 4 + 4;
          cVar2 = FUN_140409580(pbVar1,param_1,param_2);
          if ((cVar2 == '\0') ||
             ((uVar4 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 +
                       (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[3], uVar4 != 0 &&
              (cVar2 = FUN_140374b40(param_1,param_2 + uVar4), cVar2 == '\0')))) {
            return 0;
          }
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 < uVar5);
      }
      return 1;
    }
  }
  return 0;
}

