// Function: FUN_1404067e0
// Addr: 1404067e0
// Size: 462 bytes


undefined8 FUN_1404067e0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  
  pbVar1 = param_1 + 4;
  pcVar4 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar9 <= uVar7) {
    pcVar4 = "OK";
  }
  uVar6 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if ((uVar9 <= uVar7) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == 0)) {
    pbVar1 = param_1 + 2;
    cVar3 = FUN_140408570(pbVar1,param_2);
    if (cVar3 != '\0') {
      uVar11 = (uint)*pbVar1 * 0x100 + (uint)param_1[3];
      if (uVar11 != 0) {
        do {
          pbVar10 = (byte *)(ulonglong)(uint)param_2[6];
          lVar2 = uVar6 * 8;
          pcVar4 = "OUT-OF-RANGE";
          pbVar8 = pbVar1 + (lVar2 - *(longlong *)(param_2 + 2)) + 10;
          if (pbVar8 <= pbVar10) {
            pcVar4 = "OK";
          }
          FUN_1402fc370("SANITIZE",param_1 + lVar2 + 0xc,0,1,*param_2 + 1,0,
                        "check_point [%p] in [%p..%p] -> %s",param_1 + lVar2 + 0xc,
                        *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
          if (pbVar10 < pbVar8) {
            return 0;
          }
          cVar3 = FUN_140409580(pbVar1 + lVar2 + 6,param_2,param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar5 = (uint)pbVar1[lVar2 + 7] * 0x10000 + (uint)pbVar1[lVar2 + 8] * 0x100 +
                  (uint)pbVar1[lVar2 + 6] * 0x1000000 + (uint)pbVar1[lVar2 + 9];
          if ((uVar5 != 0) && (cVar3 = FUN_140402700(param_1 + uVar5,param_2), cVar3 == '\0')) {
            return 0;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < uVar11);
      }
      return 1;
    }
  }
  return 0;
}

