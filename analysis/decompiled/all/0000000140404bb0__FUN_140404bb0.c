// Function: FUN_140404bb0
// Addr: 140404bb0
// Size: 595 bytes


ulonglong FUN_140404bb0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  pbVar1 = param_1 + 4;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar8 = 1;
  if (uVar10 <= uVar9) {
    pcVar4 = "OK";
  }
  uVar7 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  uVar6 = (uint)uVar8;
  if (uVar9 < uVar10) {
    return 0;
  }
  uVar5 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar5 < 0x74727566) {
    if (uVar5 == 0x74727565) goto LAB_140404cb8;
    if (uVar5 == 0x100) {
      uVar8 = FUN_140405320(param_1,param_2);
      return uVar8;
    }
    if (uVar5 == 0x10000) goto LAB_140404cb8;
    bVar11 = uVar5 == 0x4f54544f;
  }
  else {
    if (uVar5 == 0x74746366) {
      lVar2 = *(longlong *)(param_2 + 2);
      uVar8 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE",param_1 + 8,0);
      if ((ulonglong)((longlong)(param_1 + 8) - lVar2) <= uVar8) {
        uVar5 = (uint)param_1[5] + (uint)*pbVar1 * 0x100;
        if ((uVar5 != uVar6) && (uVar5 - uVar6 != uVar6)) {
          return (ulonglong)(uVar6 & 0xff);
        }
        cVar3 = FUN_140407cc0(param_1 + 8,param_2);
        if (cVar3 != '\0') {
          uVar6 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 +
                  (uint)param_1[8] * 0x1000000 + (uint)param_1[0xb];
          if (uVar6 != 0) {
            do {
              pbVar1 = param_1 + uVar7 * 4 + 0xc;
              cVar3 = FUN_140409580(pbVar1,param_2,param_1);
              if (cVar3 == '\0') {
                return 0;
              }
              uVar5 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 +
                      (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[3];
              if ((uVar5 != 0) && (cVar3 = FUN_140404e10(param_1 + uVar5,param_2), cVar3 == '\0')) {
                return 0;
              }
              uVar5 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < uVar6);
          }
          return 1;
        }
      }
      return 0;
    }
    bVar11 = uVar5 == 0x74797031;
  }
  if (!bVar11) {
    return uVar8 & 0xff;
  }
LAB_140404cb8:
  uVar8 = FUN_140404e10(param_1,param_2);
  return uVar8;
}

