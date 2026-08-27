// Function: FUN_14036f1b0
// Addr: 14036f1b0
// Size: 536 bytes


undefined8 FUN_14036f1b0(byte *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar10 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar10 == 1) {
    uVar7 = 0;
    uVar11 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (uVar11 != 0) {
      do {
        if (uVar7 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
          pbVar8 = param_1 + (ulonglong)uVar7 * 2 + 6;
        }
        else {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == param_3) {
          uVar9 = (uint)param_1[2] * 0x100 + param_1[3] + uVar7;
          if (*(char *)(param_2 + 0x40) == '\0') {
            if ((*(char *)(param_2 + 0x10) != '\0') && (uVar9 != 0xffffffff)) {
              *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
              puVar4 = (undefined4 *)FUN_1403ed560(param_2 + 0x10,uVar9,1);
              if (puVar4 != (undefined4 *)0x0) {
                uVar5 = (ulonglong)(uVar9 >> 6 & 7);
                puVar6 = puVar4 + uVar5 * 2;
                uVar5 = *(ulonglong *)(puVar4 + uVar5 * 2 + 2) | 1L << (ulonglong)(uVar9 & 0x3f);
                goto LAB_14036f396;
              }
            }
          }
          else if ((*(char *)(param_2 + 0x10) != '\0') &&
                  (puVar4 = (undefined4 *)FUN_1403ed560(param_2 + 0x10,uVar9,0),
                  puVar4 != (undefined4 *)0x0)) {
            uVar5 = (ulonglong)(uVar9 >> 6 & 7);
            *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
            puVar6 = puVar4 + uVar5 * 2;
            uVar5 = *(ulonglong *)(puVar4 + uVar5 * 2 + 2) & ~(1L << (ulonglong)(uVar9 & 0x3f));
LAB_14036f396:
            *(ulonglong *)(puVar6 + 2) = uVar5;
            *puVar4 = 0xffffffff;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar11);
    }
  }
  else {
    if (iVar10 != 2) {
      return 0;
    }
    bVar1 = param_1[2];
    pbVar8 = param_1 + 4;
    bVar2 = param_1[3];
    if (pbVar8 != param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4) {
      do {
        if ((uint)pbVar8[5] + (uint)pbVar8[4] * 0x100 == param_3) {
          if (*(char *)(param_2 + 0x40) == '\0') {
            cVar3 = FUN_1403a3350(param_2 + 0x10,(uint)pbVar8[1] + (uint)*pbVar8 * 0x100,
                                  (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100);
            if (cVar3 == '\0') {
              return 0;
            }
          }
          else {
            FUN_1403bdc00();
          }
        }
        pbVar8 = pbVar8 + 6;
      } while (pbVar8 != param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4);
      return 1;
    }
  }
  return 1;
}

