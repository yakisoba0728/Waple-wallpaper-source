// Function: FUN_14038c0e0
// Addr: 14038c0e0
// Size: 606 bytes


undefined8 FUN_14038c0e0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  pcVar5 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 6;
  uVar9 = 1;
  uVar12 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar12 <= uVar10) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar12 <= uVar10) {
    pbVar1 = param_1 + 4;
    cVar4 = FUN_1404078b0(pbVar1,param_2);
    if (cVar4 != '\0') {
      uVar13 = (uint)*pbVar1 * 0x100 + (uint)param_1[5];
      param_2[8] = param_2[8] + uVar13;
      if ((param_2[8] < 0x4000) &&
         (((param_1[3] & 0x10) == 0 ||
          (cVar4 = FUN_1403ff300(pbVar1 + ((ulonglong)*pbVar1 * 0x100 + (ulonglong)param_1[5] + 1) *
                                          2,param_2), cVar4 != '\0')))) {
        bVar2 = *param_1;
        bVar3 = param_1[1];
        cVar4 = FUN_1404078b0(pbVar1,param_2);
        if (cVar4 != '\0') {
          uVar10 = 0;
          uVar14 = (uint)*pbVar1 * 0x100 + (uint)param_1[5];
          if (uVar14 != 0) {
            do {
              cVar4 = FUN_1404093d0(pbVar1 + uVar10 * 2 + 2,param_2,param_1);
              if (cVar4 == '\0') {
                return 0;
              }
              uVar8 = (uint)pbVar1[uVar10 * 2 + 2] * 0x100 + (uint)pbVar1[uVar10 * 2 + 3];
              if ((uVar8 != 0) &&
                 (cVar4 = FUN_14037b7a0(param_1 + uVar8,param_2,(uint)bVar2 * 0x100 + (uint)bVar3),
                 cVar4 == '\0')) {
                return 0;
              }
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
            } while (uVar8 < uVar14);
          }
          if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 7) {
            pbVar6 = (byte *)FUN_14038a3d0(param_1,0);
            if ((uint)pbVar6[1] + (uint)*pbVar6 * 0x100 == 1) {
              iVar11 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
            }
            else {
              iVar11 = 0;
            }
            if (1 < uVar13) {
              do {
                if (uVar9 < (uint)*pbVar1 * 0x100 + (uint)param_1[5]) {
                  pbVar6 = pbVar1 + ((ulonglong)uVar9 + 1) * 2;
                }
                else {
                  pbVar6 = (byte *)&DAT_14045dd10;
                }
                uVar14 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
                if (uVar14 == 0) {
                  pbVar6 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar6 = param_1 + uVar14;
                }
                if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] == 1) {
                  iVar7 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3];
                }
                else {
                  iVar7 = 0;
                }
                if (iVar7 != iVar11) {
                  return 0;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar13);
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

