// Function: FUN_1403fba90
// Addr: 1403fba90
// Size: 524 bytes


undefined8 FUN_1403fba90(longlong param_1,int *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pbVar3 = (byte *)(param_1 + 8);
  uVar8 = (ulonglong)(uint)param_2[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar3 - *(longlong *)(param_2 + 2);
  pcVar2 = "OUT-OF-RANGE";
  if (uVar9 <= uVar8) {
    pcVar2 = "OK";
  }
  iVar6 = 0;
  FUN_1402fc370("SANITIZE",pbVar3,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar3,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if ((uVar9 <= uVar8) &&
     (uVar7 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
              (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7), 0xb < uVar7))
  {
    if (((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
       (((uint)(param_2[4] - (int)param_1) < uVar7 ||
        (param_2[7] = param_2[7] - uVar7, param_2[7] <= iVar6)))) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (cVar1 != '\0') {
      pcVar4 = "OK";
    }
    FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                  (ulonglong)uVar7 + param_1,uVar7,*(longlong *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4),pcVar4);
    if (cVar1 != '\0') {
      cVar1 = FUN_14036eee0(param_2,param_1 + 0xc,
                            (uint)*pbVar3 * 0x100 + (uint)*(byte *)(param_1 + 9));
      if (cVar1 != '\0') {
        pbVar3 = (byte *)(param_1 + 0xc +
                         (ulonglong)CONCAT11(*pbVar3,*(undefined1 *)(param_1 + 9)) * 0xc);
        uVar5 = 0;
        uVar7 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
        if (uVar7 != 0) {
          do {
            cVar1 = FUN_1403fbe20(pbVar3,param_2);
            if (cVar1 == '\0') {
              return 0;
            }
            uVar5 = uVar5 + 1;
            pbVar3 = pbVar3 + (ulonglong)*pbVar3 * 0x100 + (ulonglong)pbVar3[1];
          } while (uVar5 < uVar7);
        }
        if ((2 < param_3) && (cVar1 = FUN_140405dc0(pbVar3,param_2,uVar7), cVar1 == '\0')) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}

