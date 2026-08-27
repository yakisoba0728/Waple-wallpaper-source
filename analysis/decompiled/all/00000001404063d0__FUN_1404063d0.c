// Function: FUN_1404063d0
// Addr: 1404063d0
// Size: 500 bytes


undefined8 FUN_1404063d0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pcVar8 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 0xc;
  pcVar7 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar11 <= uVar10) {
    pcVar7 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar7);
  if ((uVar11 <= uVar10) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0)) {
    uVar9 = (uint)param_1[10] * 0x100 + (uint)param_1[9] * 0x10000 + (uint)param_1[8] * 0x1000000 +
            (uint)param_1[0xb];
    if (((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2)))
       || (((uint)(param_2[4] - (int)param_1) < uVar9 ||
           (param_2[7] = param_2[7] - uVar9, param_2[7] < 1)))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if (cVar6 != '\0') {
      pcVar8 = "OK";
    }
    FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,param_1 + uVar9,uVar9,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar8);
    if (cVar6 != '\0') {
      bVar2 = param_1[8];
      bVar3 = param_1[9];
      bVar4 = param_1[10];
      bVar5 = param_1[0xb];
      cVar6 = FUN_140409580(param_1 + 4,param_2,param_1);
      if (cVar6 != '\0') {
        uVar9 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000
                + (uint)param_1[7];
        if ((uVar9 != 0) &&
           (cVar6 = FUN_1403fe530(param_1 + uVar9,param_2,
                                  param_1 + (ulonglong)bVar5 +
                                            ((ulonglong)CONCAT11(bVar2,bVar3) * 0x100 +
                                            (ulonglong)bVar4) * 0x100), cVar6 == '\0')) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}

