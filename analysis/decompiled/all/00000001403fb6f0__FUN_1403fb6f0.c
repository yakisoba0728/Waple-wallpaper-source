// Function: FUN_1403fb6f0
// Addr: 1403fb6f0
// Size: 915 bytes


undefined8 FUN_1403fb6f0(longlong param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  pbVar6 = (byte *)(param_1 + 8);
  pcVar3 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar6 - *(longlong *)(param_2 + 2);
  uVar9 = (ulonglong)(uint)param_2[6];
  if (uVar10 <= uVar9) {
    pcVar3 = "OK";
  }
  uVar5 = 0;
  FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar6,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar10 <= uVar9) &&
     (uVar7 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
              (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7), 0xf < uVar7))
  {
    if (((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
       (((uint)(param_2[4] - (int)param_1) < uVar7 ||
        (param_2[7] = param_2[7] - uVar7, param_2[7] < 1)))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    pcVar3 = "OUT-OF-RANGE";
    if (cVar2 != '\0') {
      pcVar3 = "OK";
    }
    uVar11 = *(undefined8 *)(param_2 + 4);
    FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                  (ulonglong)uVar7 + param_1,uVar7,*(longlong *)(param_2 + 2),uVar11,pcVar3);
    if (cVar2 != '\0') {
      cVar2 = FUN_14036eee0(param_2,param_1 + 0x10,
                            (uint)*(byte *)(param_1 + 10) * 0x100 +
                            (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*pbVar6 * 0x1000000 +
                            (uint)*(byte *)(param_1 + 0xb));
      if (cVar2 != '\0') {
        pbVar6 = (byte *)(((((ulonglong)CONCAT11(*pbVar6,*(undefined1 *)(param_1 + 9)) * 0x100 +
                            (ulonglong)*(byte *)(param_1 + 10)) * 0x100 +
                           (ulonglong)*(byte *)(param_1 + 0xb)) * 3 & 0x3fffffff) * 4 +
                         param_1 + 0x10);
        uVar7 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
                (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf);
        if (uVar7 != 0) {
          do {
            pbVar1 = pbVar6 + 4;
            pcVar4 = "OUT-OF-RANGE";
            uVar10 = (ulonglong)(uint)param_2[6];
            uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
            if (uVar9 <= uVar10) {
              pcVar4 = "OK";
            }
            FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                          pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4,
                          uVar11,pcVar3);
            if (uVar10 < uVar9) {
              return 0;
            }
            uVar8 = (uint)*pbVar6 * 0x1000000 + (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100
                    + (uint)pbVar6[3];
            if (uVar8 < 0xc) {
              return 0;
            }
            if ((((ulonglong)(uint)param_2[6] <
                  (ulonglong)((longlong)pbVar6 - *(longlong *)(param_2 + 2))) ||
                ((uint)(param_2[4] - (int)pbVar6) < uVar8)) ||
               (param_2[7] = param_2[7] - uVar8, param_2[7] < 1)) {
              cVar2 = '\0';
            }
            else {
              cVar2 = '\x01';
            }
            pcVar3 = "OUT-OF-RANGE";
            if (cVar2 != '\0') {
              pcVar3 = "OK";
            }
            uVar11 = *(undefined8 *)(param_2 + 4);
            FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar6,pbVar6 + uVar8,
                          uVar8,*(longlong *)(param_2 + 2),uVar11,pcVar3);
            if (cVar2 == '\0') {
              return 0;
            }
            cVar2 = FUN_140378d70(pbVar6,param_2);
            if (cVar2 == '\0') {
              return 0;
            }
            uVar5 = uVar5 + 1;
            pbVar6 = pbVar6 + ((ulonglong)CONCAT11(*pbVar6,pbVar6[1]) * 0x100 + (ulonglong)pbVar6[2]
                              ) * 0x100 + (ulonglong)pbVar6[3];
          } while (uVar5 < uVar7);
        }
        if ((param_3 < 3) || (cVar2 = FUN_140405dc0(pbVar6,param_2,uVar7), cVar2 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

