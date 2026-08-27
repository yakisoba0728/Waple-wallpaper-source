// Function: FUN_1404042c0
// Addr: 1404042c0
// Size: 747 bytes


ulonglong FUN_1404042c0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pbVar1 = param_1 + 0xc;
  uVar8 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar9 <= uVar8) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if ((uVar9 <= uVar8) &&
     (uVar6 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
              (uint)param_1[3], 0xb < uVar6)) {
    if (((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2)))
       || (((uint)(param_2[4] - (int)param_1) < uVar6 ||
           (param_2[7] = param_2[7] - uVar6, param_2[7] < 1)))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    pcVar5 = "OUT-OF-RANGE";
    if (cVar3 != '\0') {
      pcVar5 = "OK";
    }
    uVar8 = 1;
    FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,param_1 + uVar6,uVar6,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
    if (cVar3 != '\0') {
      if (param_1[7] == 0) {
        uVar8 = FUN_140408b30(pbVar1,param_2);
        return uVar8;
      }
      iVar7 = (int)uVar8;
      iVar4 = (uint)param_1[7] - iVar7;
      if (iVar4 == 0) {
        uVar8 = (ulonglong)(uint)param_2[6];
        uVar9 = (longlong)(param_1 + 0x20) - *(longlong *)(param_2 + 2);
        FUN_1402fc370("SANITIZE",param_1 + 0x20,0);
        if ((uVar9 <= uVar8) && (cVar3 = FUN_1403fffb0(pbVar1,param_2), cVar3 != '\0')) {
          return 1;
        }
      }
      else {
        if (iVar4 == iVar7) {
          uVar8 = FUN_1403fcc70(param_1,param_2);
          return uVar8;
        }
        if (iVar4 - iVar7 != 2) {
          if (iVar4 - iVar7 != 4) {
            return uVar8 & 0xff;
          }
          uVar8 = FUN_1403fce80(param_1,param_2);
          return uVar8;
        }
        lVar2 = *(longlong *)(param_2 + 2);
        uVar8 = (ulonglong)(uint)param_2[6];
        FUN_1402fc370("SANITIZE",param_1 + 0x20,0);
        if (((ulonglong)((longlong)(param_1 + 0x20) - lVar2) <= uVar8) &&
           (cVar3 = FUN_1403fffb0(pbVar1,param_2), cVar3 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

