// Function: FUN_140402d70
// Addr: 140402d70
// Size: 774 bytes


ulonglong FUN_140402d70(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pbVar1 = param_1 + 2;
  uVar12 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = 1;
  if (uVar11 <= uVar12) {
    pcVar5 = "OK";
  }
  uVar8 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar12 < uVar11) {
    return 0;
  }
  iVar9 = (int)uVar10;
  iVar6 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) - iVar9;
  if (iVar6 == 0) {
    uVar10 = (ulonglong)(uint)param_2[6];
    uVar12 = (longlong)(param_1 + 8) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 8,0);
    return (ulonglong)(uVar12 <= uVar10);
  }
  iVar6 = iVar6 - iVar9;
  if (iVar6 != 0) {
    iVar6 = iVar6 - iVar9;
    if (iVar6 == 0) {
      cVar4 = FUN_140407a10(pbVar1,param_2);
      if (cVar4 != '\0') {
        bVar2 = *pbVar1;
        if (bVar2 != 0) {
          do {
            pbVar1 = param_1 + uVar8 * 3 + 3;
            cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
            if (cVar4 == '\0') {
              return 0;
            }
            uVar7 = (uint)pbVar1[1] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)pbVar1[2];
            if ((uVar7 != 0) && (cVar4 = FUN_140402d70(param_1 + uVar7,param_2), cVar4 == '\0')) {
              return 0;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < bVar2);
        }
        return 1;
      }
    }
    else if (iVar6 == iVar9) {
      cVar4 = FUN_140407a10(pbVar1,param_2);
      if (cVar4 != '\0') {
        bVar2 = *pbVar1;
        if (bVar2 == 0) {
          return 1;
        }
        while( true ) {
          pbVar1 = param_1 + uVar8 * 3 + 3;
          cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
          if ((cVar4 == '\0') ||
             ((uVar7 = (uint)pbVar1[1] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)pbVar1[2],
              uVar7 != 0 && (cVar4 = FUN_140402d70(param_1 + uVar7,param_2), cVar4 == '\0'))))
          break;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          if (bVar2 <= uVar7) {
            return 1;
          }
        }
      }
    }
    else {
      if (iVar6 - iVar9 != iVar9) {
        return uVar10 & 0xff;
      }
      cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
      if (cVar4 != '\0') {
        uVar7 = (uint)param_1[3] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)param_1[4];
        if (uVar7 == 0) {
          return 1;
        }
        cVar4 = FUN_140402d70(param_1 + uVar7,param_2);
        if (cVar4 != '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
  lVar3 = *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  FUN_1402fc370("SANITIZE",param_1 + 8,0);
  return (ulonglong)((ulonglong)((longlong)(param_1 + 8) - lVar3) <= uVar10);
}

