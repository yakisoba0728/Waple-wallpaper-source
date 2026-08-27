// Function: FUN_1404065d0
// Addr: 1404065d0
// Size: 526 bytes


undefined8 FUN_1404065d0(byte *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar3 = param_1 + 4;
  pcVar2 = "OUT-OF-RANGE";
  uVar4 = 1;
  uVar7 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar7 <= uVar6) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar3,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if ((uVar7 <= uVar6) && ((uint)*param_1 * 0x100 + (param_1[1] - 1) <= uVar4)) {
    pbVar3 = param_1 + 8;
    uVar7 = (ulonglong)(uint)param_2[6];
    uVar8 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
    uVar6 = 0;
    FUN_1402fc370("SANITIZE",pbVar3);
    if (uVar8 <= uVar7) {
      uVar6 = uVar6 & 0xffffffff;
      uVar4 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
      if (uVar4 != 0) {
        do {
          cVar1 = FUN_140407b60(pbVar3,param_2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          pbVar3 = pbVar3 + (ulonglong)CONCAT11(*pbVar3,pbVar3[1]) * 4 + 2;
        } while (uVar5 < uVar4);
      }
      if (((uint)*param_1 * 0x100 + (uint)param_1[1] < 2) ||
         (((cVar1 = FUN_140409580(pbVar3,param_2,param_1), cVar1 != '\0' &&
           (((uVar4 = (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 +
                      (uint)*pbVar3 * 0x1000000 + (uint)pbVar3[3], uVar4 == 0 ||
             (cVar1 = FUN_140403310(param_1 + uVar4,param_2), cVar1 != '\0')) &&
            (cVar1 = FUN_140409580(pbVar3 + 4,param_2,param_1), cVar1 != '\0')))) &&
          ((uVar4 = (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 +
                    (uint)pbVar3[4] * 0x1000000 + (uint)pbVar3[7], uVar4 == 0 ||
           (cVar1 = FUN_140404130(param_1 + uVar4,param_2), cVar1 != '\0')))))) {
        return 1;
      }
    }
  }
  return 0;
}

