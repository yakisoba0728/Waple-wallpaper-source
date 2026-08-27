// Function: FUN_140405f50
// Addr: 140405f50
// Size: 563 bytes


undefined8 FUN_140405f50(byte *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pbVar1 = param_1 + 8;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar6 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar11 <= uVar9) {
    pcVar6 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
  if (((uVar11 <= uVar9) && (cVar5 = FUN_140409580(param_1 + 4,param_2,param_3), cVar5 != '\0')) &&
     (cVar5 = FUN_140409750((ulonglong)param_1[7] +
                            ((ulonglong)param_1[6] +
                            (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100 + param_3,
                            param_2,(uint)param_1[2] * 0x100 + (uint)param_1[3]), cVar5 != '\0')) {
    uVar10 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    cVar5 = FUN_140409a20(pbVar1,param_2,uVar10);
    if (cVar5 != '\0') {
      uVar9 = 0;
      if (uVar10 != 0) {
        do {
          bVar3 = param_1[3];
          lVar2 = uVar9 * 8;
          uVar12 = (ulonglong)(uint)param_2[6];
          bVar4 = param_1[2];
          pbVar7 = param_1 + lVar2 + 0x10;
          uVar11 = (longlong)pbVar7 - *(longlong *)(param_2 + 2);
          pcVar6 = "OUT-OF-RANGE";
          if (uVar11 <= uVar12) {
            pcVar6 = "OK";
          }
          FUN_1402fc370("SANITIZE",pbVar7,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar7,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
          if (uVar12 < uVar11) {
            return 0;
          }
          cVar5 = FUN_1404093d0(param_1 + lVar2 + 0xe,param_2,param_3);
          if (cVar5 == '\0') {
            return 0;
          }
          cVar5 = FUN_14036f0c0(param_2,(ulonglong)pbVar1[lVar2 + 7] +
                                        (ulonglong)pbVar1[lVar2 + 6] * 0x100 + param_3,
                                (uint)bVar4 * 0x100 + (uint)bVar3,2);
          if (cVar5 == '\0') {
            return 0;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < uVar10);
      }
      return 1;
    }
  }
  return 0;
}

