// Function: FUN_1403fe530
// Addr: 1403fe530
// Size: 1215 bytes


ulonglong FUN_1403fe530(byte *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  longlong local_res10;
  
  pbVar1 = param_1 + 2;
  uVar4 = (ulonglong)(uint)param_2[6];
  uVar13 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar3 = "OUT-OF-RANGE";
  if (uVar13 <= uVar4) {
    pcVar3 = "OK";
  }
  uVar8 = 0;
  uVar12 = 1;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar13 <= uVar4) {
    switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
    case 0:
      uVar6 = param_2[0xe];
      cVar2 = FUN_140409660(pbVar1,param_2,uVar6);
      if (cVar2 != '\0') {
        if (uVar6 == 0) {
          return 1;
        }
        while( true ) {
          pbVar9 = pbVar1 + uVar8 * 2;
          cVar2 = FUN_1404093d0(pbVar9,param_2,param_3);
          if ((cVar2 == '\0') ||
             (cVar2 = FUN_140407cc0((ulonglong)pbVar9[1] + (ulonglong)*pbVar9 * 0x100 + param_3,
                                    param_2), cVar2 == '\0')) break;
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
          if (uVar6 <= uVar10) {
            return 1;
          }
        }
      }
      break;
    default:
      return uVar12 & 0xff;
    case 2:
      cVar2 = FUN_140409b10(pbVar1,param_2);
      if (cVar2 != '\0') {
        uVar6 = FUN_1403cbe30(pbVar1);
        if (uVar6 == 0) {
          return 1;
        }
        while( true ) {
          uVar10 = FUN_1403cbe30(pbVar1);
          uVar5 = (uint)uVar8;
          if (uVar5 < uVar10) {
            uVar4 = (ulonglong)(((uint)param_1[3] + (uint)*pbVar1 * 0x100) * uVar5);
            pbVar7 = param_1 + uVar4 + 0x10;
            pbVar9 = param_1 + uVar4 + 0x12;
          }
          else {
            pbVar7 = (byte *)((longlong)&DAT_14045dd10 + 4);
            pbVar9 = (byte *)((longlong)&DAT_14045dd10 + 6);
          }
          uVar13 = (ulonglong)(uint)param_2[6];
          uVar4 = (longlong)pbVar9 - *(longlong *)(param_2 + 2);
          pcVar3 = "OUT-OF-RANGE";
          if (uVar4 <= uVar13) {
            pcVar3 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar9,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar9,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
          if (((uVar13 < uVar4) || (cVar2 = FUN_1404093d0(pbVar7,param_2,param_3), cVar2 == '\0'))
             || (cVar2 = FUN_140407cc0((ulonglong)*pbVar7 * 0x100 + (ulonglong)pbVar7[1] + param_3,
                                       param_2), cVar2 == '\0')) break;
          uVar8 = (ulonglong)(uVar5 + 1);
          if (uVar6 <= uVar5 + 1) {
            return 1;
          }
        }
      }
      break;
    case 4:
      local_res10 = param_3;
      cVar2 = FUN_140409b10(pbVar1,param_2);
      if (cVar2 != '\0') {
        uVar6 = FUN_1403cbe30(pbVar1);
        if (uVar6 == 0) {
          return 1;
        }
        while( true ) {
          uVar10 = FUN_1403cbe30(pbVar1);
          uVar5 = (uint)uVar8;
          if (uVar5 < uVar10) {
            pbVar9 = pbVar1 + (ulonglong)(((uint)*pbVar1 * 0x100 + (uint)param_1[3]) * uVar5) + 10;
          }
          else {
            pbVar9 = (byte *)&DAT_14045dd10;
          }
          pbVar7 = pbVar9 + 6;
          uVar13 = (ulonglong)(uint)param_2[6];
          pcVar3 = "OUT-OF-RANGE";
          uVar4 = (longlong)pbVar7 - *(longlong *)(param_2 + 2);
          if (uVar4 <= uVar13) {
            pcVar3 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar7,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar7,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
          if (uVar13 < uVar4) break;
          uVar10 = (uint)pbVar9[1] + (uint)*pbVar9 * 0x100;
          uVar11 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
          if (uVar10 < uVar11) {
            return 0;
          }
          local_res8[0] = (uVar10 - uVar11) + 1;
          cVar2 = FUN_1404093d0(pbVar9 + 4,param_2,param_1);
          if (cVar2 == '\0') {
            return 0;
          }
          cVar2 = FUN_140374310(param_2,param_1 + (ulonglong)pbVar9[4] * 0x100 +
                                                  (ulonglong)pbVar9[5],local_res8,&local_res10);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar8 = (ulonglong)(uVar5 + 1);
          if (uVar6 <= uVar5 + 1) {
            return 1;
          }
        }
      }
      break;
    case 6:
      uVar4 = FUN_1403fede0(param_1,param_2,param_3);
      return uVar4;
    case 8:
      pbVar1 = param_1 + 6;
      uVar4 = (ulonglong)(uint)param_2[6];
      uVar13 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",pbVar1,0);
      if (uVar13 <= uVar4) {
        uVar6 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
        cVar2 = FUN_140409660(pbVar1,param_2,uVar6);
        if (cVar2 != '\0') {
          if (uVar6 == 0) {
            return 1;
          }
          while( true ) {
            pbVar9 = pbVar1 + uVar8 * 2;
            cVar2 = FUN_1404093d0(pbVar9,param_2,param_3);
            if (cVar2 == '\0') {
              return 0;
            }
            cVar2 = FUN_140407cc0((ulonglong)pbVar9[1] + (ulonglong)*pbVar9 * 0x100 + param_3,
                                  param_2);
            if (cVar2 == '\0') break;
            uVar10 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar10;
            if (uVar6 <= uVar10) {
              return 1;
            }
          }
          return 0;
        }
      }
      break;
    case 10:
      break;
    }
  }
  return 0;
}

