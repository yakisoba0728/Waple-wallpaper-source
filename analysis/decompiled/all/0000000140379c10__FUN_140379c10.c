// Function: FUN_140379c10
// Addr: 140379c10
// Size: 675 bytes


ulonglong FUN_140379c10(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pbVar1 = param_1 + 2;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar8 = 1;
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar10 <= uVar9) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar9 < uVar10) {
    return 0;
  }
  iVar7 = (int)uVar8;
  iVar4 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) - iVar7;
  if (iVar4 == 0) {
    cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
    if ((cVar2 != '\0') &&
       (((uVar5 = (uint)param_1[3] + (uint)*pbVar1 * 0x100, uVar5 == 0 ||
         (cVar2 = FUN_140374b40(param_2,param_1 + uVar5), cVar2 != '\0')) &&
        (cVar2 = FUN_1404078b0(param_1 + 4,param_2), cVar2 != '\0')))) {
      uVar8 = 0;
      uVar5 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      if (uVar5 == 0) {
        return 1;
      }
      while( true ) {
        pbVar1 = param_1 + uVar8 * 2 + 6;
        cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar6 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
        if ((uVar6 != 0) && (cVar2 = FUN_140374260(param_2,param_1 + uVar6), cVar2 == '\0')) break;
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
        if (uVar5 <= uVar6) {
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    if (iVar4 != iVar7) {
      if (iVar4 - iVar7 == iVar7) {
        uVar8 = FUN_140403080(param_1,param_2);
        return uVar8;
      }
      return uVar8 & 0xff;
    }
    cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
    if ((((cVar2 != '\0') &&
         ((uVar5 = (uint)param_1[3] + (uint)*pbVar1 * 0x100, uVar5 == 0 ||
          (cVar2 = FUN_140374b40(param_2,param_1 + uVar5), cVar2 != '\0')))) &&
        (cVar2 = FUN_1404093d0(param_1 + 4,param_2,param_1), cVar2 != '\0')) &&
       (((uVar5 = (uint)param_1[5] + (uint)param_1[4] * 0x100, uVar5 == 0 ||
         (cVar2 = FUN_140374830(param_2,param_1 + uVar5), cVar2 != '\0')) &&
        (cVar2 = FUN_1404078b0(param_1 + 6,param_2), cVar2 != '\0')))) {
      uVar8 = 0;
      uVar5 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
      if (uVar5 != 0) {
        do {
          pbVar1 = param_1 + uVar8 * 2 + 8;
          cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar6 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
          if ((uVar6 != 0) && (cVar2 = FUN_140374260(param_2,param_1 + uVar6), cVar2 == '\0')) {
            return 0;
          }
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
        } while (uVar6 < uVar5);
      }
      return 1;
    }
  }
  return 0;
}

