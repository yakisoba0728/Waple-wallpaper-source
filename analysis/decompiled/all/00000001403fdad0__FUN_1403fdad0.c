// Function: FUN_1403fdad0
// Addr: 1403fdad0
// Size: 710 bytes


undefined8 FUN_1403fdad0(byte *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pbVar7 = param_1 + 2;
  pcVar3 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar7 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar11 <= uVar10) {
    pcVar3 = "OK";
  }
  uVar5 = 0;
  FUN_1402fc370("SANITIZE",pbVar7,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar7,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar11 <= uVar10) && (1 < (uint)*param_1 * 0x100 + (uint)param_1[1])) &&
     (cVar2 = FUN_1403ff390(param_1 + 4,param_2), cVar2 != '\0')) {
    pbVar7 = param_1 + 8;
    uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
            (uint)param_1[7];
    if (uVar6 != 0) {
      do {
        pbVar9 = pbVar7 + 0xc;
        pcVar3 = "OUT-OF-RANGE";
        uVar11 = (ulonglong)(uint)param_2[6];
        uVar10 = (longlong)pbVar9 - *(longlong *)(param_2 + 2);
        if (uVar10 <= uVar11) {
          pcVar3 = "OK";
        }
        pbVar8 = (byte *)0x0;
        FUN_1402fc370("SANITIZE",pbVar9,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                      pbVar9,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
        if (uVar11 < uVar10) {
          return 0;
        }
        lVar1 = *(longlong *)(param_2 + 0xc);
        if (uVar5 < uVar6 - 1) {
          pbVar8 = pbVar7;
        }
        if (lVar1 == 0) {
          pbVar9 = *(byte **)(param_2 + 4);
        }
        else {
          lVar4 = *(longlong *)(lVar1 + 0x10);
          *(longlong *)(param_2 + 2) = lVar4;
          pbVar9 = (byte *)((ulonglong)*(uint *)(lVar1 + 0x18) + lVar4);
          *(byte **)(param_2 + 4) = pbVar9;
        }
        param_2[6] = (int)pbVar9 - param_2[2];
        if (pbVar8 != (byte *)0x0) {
          if ((pbVar8 < *(byte **)(param_2 + 2)) || (pbVar9 <= pbVar8)) {
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[6] = 0;
          }
          else {
            *(byte **)(param_2 + 2) = pbVar8;
            uVar10 = ((ulonglong)CONCAT11(*pbVar8,pbVar8[1]) * 0x100 + (ulonglong)pbVar8[2]) * 0x100
                     + (ulonglong)pbVar8[3];
            if ((ulonglong)((longlong)pbVar9 - (longlong)pbVar8) <= uVar10) {
              uVar10 = (longlong)pbVar9 - (longlong)pbVar8;
            }
            param_2[6] = (int)uVar10;
            *(byte **)(param_2 + 4) = pbVar8 + uVar10;
          }
        }
        cVar2 = FUN_1404042c0(pbVar7,param_2);
        if (cVar2 == '\0') {
          lVar1 = *(longlong *)(param_2 + 0xc);
          if (lVar1 != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x10);
            *(longlong *)(param_2 + 2) = lVar4;
            *(ulonglong *)(param_2 + 4) = (ulonglong)*(uint *)(lVar1 + 0x18) + lVar4;
          }
          param_2[6] = param_2[4] - param_2[2];
          return 0;
        }
        lVar1 = *(longlong *)(param_2 + 0xc);
        pbVar7 = pbVar7 + ((ulonglong)CONCAT11(*pbVar7,pbVar7[1]) * 0x100 + (ulonglong)pbVar7[2]) *
                          0x100 + (ulonglong)pbVar7[3];
        if (lVar1 == 0) {
          lVar4 = *(longlong *)(param_2 + 4);
        }
        else {
          lVar4 = *(longlong *)(lVar1 + 0x10);
          *(longlong *)(param_2 + 2) = lVar4;
          lVar4 = (ulonglong)*(uint *)(lVar1 + 0x18) + lVar4;
          *(longlong *)(param_2 + 4) = lVar4;
        }
        uVar5 = uVar5 + 1;
        param_2[6] = (int)lVar4 - param_2[2];
      } while (uVar5 < uVar6);
    }
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) < 3) ||
       (cVar2 = FUN_140405dc0(pbVar7,param_2,uVar6), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}

