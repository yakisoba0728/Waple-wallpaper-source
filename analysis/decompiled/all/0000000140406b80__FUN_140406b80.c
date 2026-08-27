// Function: FUN_140406b80
// Addr: 140406b80
// Size: 800 bytes


ulonglong FUN_140406b80(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  char cVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  
  pbVar1 = param_1 + 4;
  uVar10 = (ulonglong)(uint)param_2[6];
  pcVar6 = "OUT-OF-RANGE";
  pcVar2 = "OUT-OF-RANGE";
  uVar13 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  iVar7 = 1;
  if (uVar13 <= uVar10) {
    pcVar2 = "OK";
  }
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if ((uVar13 <= uVar10) && (uVar3 = 0, (uint)*param_1 * 0x100 + (uint)param_1[1] == iVar7)) {
    uVar10 = (ulonglong)(uint)param_2[6];
    uVar13 = (longlong)(param_1 + 0x10) - *(longlong *)(param_2 + 2);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uVar3 = FUN_1402fc370("SANITIZE",param_1 + 0x10,0);
    if ((uVar13 <= uVar10) &&
       (uVar3 = (ulonglong)param_1[10] << 8, (uint)param_1[0xb] + (int)uVar3 == 0x14)) {
      iVar7 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
      uVar4 = iVar7 * 4 + 4;
      uVar3 = (ulonglong)uVar4;
      if (uVar4 <= (uint)param_1[0xe] * 0x100 + (uint)param_1[0xf]) {
        pbVar11 = (byte *)&DAT_14045dd10;
        uVar4 = (uint)*pbVar1 * 0x100 + (uint)param_1[5];
        if (uVar4 == 0) {
          pbVar5 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar5 = param_1 + uVar4;
        }
        uVar4 = iVar7 * 0x14;
        if ((((ulonglong)(uint)param_2[6] <
              (ulonglong)((longlong)pbVar5 - *(longlong *)(param_2 + 2))) ||
            ((uint)(param_2[4] - (int)pbVar5) < uVar4)) ||
           (param_2[7] = param_2[7] + iVar7 * -0x14, param_2[7] < 1)) {
          cVar12 = '\0';
        }
        else {
          cVar12 = '\x01';
        }
        pcVar2 = "OUT-OF-RANGE";
        if (cVar12 != '\0') {
          pcVar2 = "OK";
        }
        uVar3 = FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_2 + 1,0,
                              "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar5,
                              pbVar5 + uVar4,CONCAT44(uVar14,uVar4),*(longlong *)(param_2 + 2),
                              *(undefined8 *)(param_2 + 4),pcVar2);
        if (cVar12 != '\0') {
          uVar8 = (uint)param_1[0xe] * 0x100 + (uint)param_1[0xf];
          uVar9 = (uint)param_1[0xc] * 0x100 + (uint)param_1[0xd];
          uVar4 = (uint)*pbVar1 * 0x100 + (uint)param_1[5];
          if (uVar4 != 0) {
            pbVar11 = param_1 + uVar4;
          }
          if ((uVar8 == 0) || (uVar3 = 0xffffffff / (ulonglong)uVar8, uVar9 < (uint)uVar3)) {
            uVar9 = uVar9 * uVar8;
            pbVar11 = pbVar11 + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x14;
            if (((ulonglong)(uint)param_2[6] <
                 (ulonglong)((longlong)pbVar11 - *(longlong *)(param_2 + 2))) ||
               (((uint)(param_2[4] - (int)pbVar11) < uVar9 ||
                (param_2[7] = param_2[7] - uVar9, param_2[7] < 1)))) {
              cVar12 = '\0';
            }
            else {
              cVar12 = '\x01';
            }
            if (cVar12 != '\0') {
              pcVar6 = "OK";
            }
            uVar10 = 1;
            uVar3 = FUN_1402fc370("SANITIZE",pbVar11,0,1,*param_2 + 1,0,
                                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar11,
                                  pbVar11 + uVar9,uVar9,*(longlong *)(param_2 + 2),
                                  *(undefined8 *)(param_2 + 4),pcVar6);
            if (cVar12 != '\0') {
              return uVar10 & 0xff;
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

