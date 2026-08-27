// Function: FUN_14037b7a0
// Addr: 14037b7a0
// Size: 1475 bytes


ulonglong FUN_14037b7a0(byte *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
code_r0x00014037b7a0:
  switch(param_3) {
  case 1:
    uVar4 = FUN_14037b580(param_1);
    return uVar4;
  case 2:
    pbVar1 = param_1 + 2;
    uVar9 = (ulonglong)(uint)param_2[6];
    pcVar3 = "OUT-OF-RANGE";
    uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    uVar4 = 1;
    if (uVar8 <= uVar9) {
      pcVar3 = "OK";
    }
    uVar7 = 0;
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar9 < uVar8) {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar4) {
      cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[3] + (uint)*pbVar1 * 0x100;
      if ((uVar6 != 0) && (cVar2 = FUN_140374b40(param_2,param_1 + uVar6), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_1404078b0(param_1 + 4,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      if (uVar6 == 0) {
        return 1;
      }
      do {
        pbVar1 = param_1 + uVar7 * 2 + 6;
        cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar5 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
        if ((uVar5 != 0) && (cVar2 = FUN_1404078b0(param_1 + uVar5,param_2), cVar2 == '\0')) {
          return 0;
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < uVar6);
switchD_14037b7d2_default:
      return 1;
    }
    break;
  case 3:
    pbVar1 = param_1 + 2;
    uVar9 = (ulonglong)(uint)param_2[6];
    pcVar3 = "OUT-OF-RANGE";
    uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    uVar4 = 1;
    if (uVar8 <= uVar9) {
      pcVar3 = "OK";
    }
    uVar7 = 0;
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar9 < uVar8) {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar4) {
      cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[3] + (uint)*pbVar1 * 0x100;
      if ((uVar6 != 0) && (cVar2 = FUN_140374b40(param_2,param_1 + uVar6), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_1404078b0(param_1 + 4,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      if (uVar6 == 0) {
        return 1;
      }
      while( true ) {
        pbVar1 = param_1 + uVar7 * 2 + 6;
        cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
        if ((cVar2 == '\0') ||
           ((uVar5 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100, uVar5 != 0 &&
            (cVar2 = FUN_1404078b0(param_1 + uVar5,param_2), cVar2 == '\0')))) break;
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
        if (uVar6 <= uVar5) {
          return 1;
        }
      }
      return 0;
    }
    break;
  case 4:
    pbVar1 = param_1 + 2;
    uVar9 = (ulonglong)(uint)param_2[6];
    pcVar3 = "OUT-OF-RANGE";
    uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    uVar4 = 1;
    if (uVar8 <= uVar9) {
      pcVar3 = "OK";
    }
    uVar7 = 0;
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar9 < uVar8) {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar4) {
      cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[3] + (uint)*pbVar1 * 0x100;
      if ((uVar6 != 0) && (cVar2 = FUN_140374b40(param_2,param_1 + uVar6), cVar2 == '\0')) {
        return 0;
      }
      cVar2 = FUN_1404078b0(param_1 + 4,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar6 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      if (uVar6 == 0) {
        return 1;
      }
      while( true ) {
        pbVar1 = param_1 + uVar7 * 2 + 6;
        cVar2 = FUN_1404093d0(pbVar1,param_2,param_1);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar5 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
        if ((uVar5 != 0) && (cVar2 = FUN_140373c10(param_2,param_1 + uVar5), cVar2 == '\0')) break;
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
        if (uVar6 <= uVar5) {
          return 1;
        }
      }
      return 0;
    }
    break;
  case 5:
    uVar4 = FUN_140379c10(param_1);
    return uVar4;
  case 6:
    uVar4 = FUN_140379870(param_1);
    return uVar4;
  case 7:
    goto switchD_14037b7d2_caseD_7;
  case 8:
    cVar2 = FUN_1403ff300(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return 1;
    }
    uVar4 = FUN_1404054d0(param_1,param_2);
    return uVar4;
  default:
    goto switchD_14037b7d2_default;
  }
  return uVar4 & 0xff;
switchD_14037b7d2_caseD_7:
  cVar2 = FUN_1403ff300(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
    return 1;
  }
  pbVar1 = param_1 + 8;
  uVar4 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar9 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar4 < uVar9) {
    return 0;
  }
  param_3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (param_3 == 7) {
    return 0;
  }
  uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar6 == 0) {
    param_1 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1 = param_1 + uVar6;
  }
  goto code_r0x00014037b7a0;
}

