// Function: FUN_1403fe170
// Addr: 1403fe170
// Size: 914 bytes


ulonglong FUN_1403fe170(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  pbVar1 = param_1 + 2;
  uVar11 = (ulonglong)(uint)param_2[6];
  pcVar6 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar9 = 1;
  if (uVar10 <= uVar11) {
    pcVar6 = "OK";
  }
  uVar8 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
  if (uVar11 < uVar10) {
    return 0;
  }
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    uVar9 = FUN_14036edf0(param_2,pbVar1,param_2[0xe]);
    break;
  default:
    uVar9 = uVar9 & 0xff;
    break;
  case 2:
    uVar9 = FUN_140409c00(pbVar1,param_2);
    break;
  case 4:
    cVar3 = FUN_140409b10(pbVar1,param_2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1403cbe30(pbVar1);
      if (uVar4 != 0) {
        do {
          uVar5 = FUN_1403cbe30(pbVar1);
          if (uVar8 < uVar5) {
            pbVar7 = pbVar1 + (ulonglong)(((uint)*pbVar1 * 0x100 + (uint)param_1[3]) * uVar8) + 10;
          }
          else {
            pbVar7 = (byte *)&DAT_14045dd10;
          }
          pbVar2 = pbVar7 + 6;
          uVar11 = (ulonglong)(uint)param_2[6];
          pcVar6 = "OUT-OF-RANGE";
          uVar9 = (longlong)pbVar2 - *(longlong *)(param_2 + 2);
          if (uVar9 <= uVar11) {
            pcVar6 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar2,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar2,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
          if (uVar11 < uVar9) goto LAB_1403fe4d8;
          uVar12 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
          uVar5 = (uint)pbVar7[2] * 0x100 + (uint)pbVar7[3];
          if (((uVar12 < uVar5) ||
              (cVar3 = FUN_1404093d0(pbVar7 + 4,param_2,param_1), cVar3 == '\0')) ||
             (cVar3 = FUN_14036edf0(param_2,param_1 + (ulonglong)pbVar7[5] +
                                                      (ulonglong)pbVar7[4] * 0x100,
                                    (uVar12 - uVar5) + 1), cVar3 == '\0')) goto LAB_1403fe4d8;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      return 1;
    }
    goto LAB_1403fe4d8;
  case 6:
    uVar9 = FUN_140409b10(pbVar1,param_2);
    break;
  case 8:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 6) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 6,0);
    if ((uVar11 <= uVar9) && (cVar3 = FUN_14036edf0(param_2), cVar3 != '\0')) {
      return 1;
    }
    goto LAB_1403fe4d8;
  case 10:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 8) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 8);
    if (((uVar11 <= uVar9) && ((uint)param_1[3] + (uint)*pbVar1 * 0x100 < 5)) &&
       (cVar3 = FUN_14036f0c0(param_2), cVar3 != '\0')) {
      return 1;
    }
LAB_1403fe4d8:
    uVar9 = 0;
  }
  return uVar9;
}

