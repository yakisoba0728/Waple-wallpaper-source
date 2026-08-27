// Function: FUN_140406ea0
// Addr: 140406ea0
// Size: 461 bytes


undefined8 FUN_140406ea0(byte *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar7;
  
  pbVar5 = param_1 + 0xc;
  pcVar3 = "OUT-OF-RANGE";
  uVar8 = 1;
  uVar10 = (longlong)pbVar5 - *(longlong *)(param_2 + 2);
  uVar9 = (ulonglong)(uint)param_2[6];
  if (uVar10 <= uVar9) {
    pcVar3 = "OK";
  }
  uVar7 = 0;
  FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar9 < uVar10) ||
      ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
       (uint)param_1[3] < uVar8)) || (cVar2 = FUN_140407cc0(param_1 + 8,param_2), cVar2 == '\0')) {
LAB_14040705a:
    uVar4 = 0;
  }
  else {
    uVar8 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
            (uint)param_1[0xb];
    if (uVar8 != 0) {
      do {
        uVar10 = (ulonglong)(uint)param_2[6];
        lVar1 = uVar7 * 4;
        pbVar5 = param_1 + lVar1 + 0x10;
        pcVar3 = "OUT-OF-RANGE";
        uVar9 = (longlong)pbVar5 - *(longlong *)(param_2 + 2);
        if (uVar9 <= uVar10) {
          pcVar3 = "OK";
        }
        FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                      pbVar5,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
        if ((uVar10 < uVar9) ||
           (cVar2 = FUN_14036f0c0(param_2,param_1 + (ulonglong)param_1[lVar1 + 0xc] * 0x100 +
                                                    (ulonglong)param_1[lVar1 + 0xd],
                                  (uint)param_1[lVar1 + 0xf] + (uint)param_1[lVar1 + 0xe] * 0x100),
           cVar2 == '\0')) goto LAB_14040705a;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar8);
    }
    uVar4 = 1;
  }
  return uVar4;
}

