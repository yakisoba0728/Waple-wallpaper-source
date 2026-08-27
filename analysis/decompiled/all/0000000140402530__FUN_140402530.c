// Function: FUN_140402530
// Addr: 140402530
// Size: 449 bytes


undefined8 FUN_140402530(longlong param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  
  lVar4 = param_1 + 5;
  pcVar3 = "OUT-OF-RANGE";
  uVar10 = lVar4 - *(longlong *)(param_2 + 2);
  uVar8 = (ulonglong)(uint)param_2[6];
  if (uVar10 <= uVar8) {
    pcVar3 = "OK";
  }
  uVar7 = 0;
  FUN_1402fc370("SANITIZE",lVar4,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar4,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar10 <= uVar8) {
    pbVar1 = (byte *)(param_1 + 1);
    cVar2 = FUN_140408120(pbVar1,param_2);
    if (cVar2 != '\0') {
      uVar12 = (uint)*(byte *)(param_1 + 2) * 0x10000 + (uint)*(byte *)(param_1 + 3) * 0x100 +
               (uint)*pbVar1 * 0x1000000 + (uint)*(byte *)(param_1 + 4);
      if (uVar12 != 0) {
        do {
          pbVar11 = (byte *)(ulonglong)(uint)param_2[6];
          lVar4 = uVar7 * 7;
          pcVar3 = "OUT-OF-RANGE";
          lVar6 = param_1 + 0xc + lVar4;
          pbVar9 = pbVar1 + (lVar4 - *(longlong *)(param_2 + 2)) + 0xb;
          if (pbVar9 <= pbVar11) {
            pcVar3 = "OK";
          }
          FUN_1402fc370("SANITIZE",lVar6,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        lVar6,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
          if (pbVar11 < pbVar9) {
            return 0;
          }
          cVar2 = FUN_1404094a0(pbVar1 + lVar4 + 8,param_2,param_1);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar5 = (uint)pbVar1[lVar4 + 9] * 0x100 + (uint)pbVar1[lVar4 + 8] * 0x10000 +
                  (uint)pbVar1[lVar4 + 10];
          if ((uVar5 != 0) &&
             (cVar2 = FUN_140379a30((ulonglong)uVar5 + param_1,param_2), cVar2 == '\0')) {
            return 0;
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < uVar12);
      }
      return 1;
    }
  }
  return 0;
}

