// Function: FUN_1403c6ce0
// Addr: 1403c6ce0
// Size: 824 bytes


undefined8 FUN_1403c6ce0(undefined8 *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  float *pfVar12;
  short sVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[2];
  sVar13 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
  pbVar15 = pbVar10 + (longlong)sVar13 * 2 + 10;
  if (((pbVar11 <= pbVar15) && (pbVar15 <= pbVar11 + *(uint *)(param_1 + 3))) &&
     (1 < ((int)pbVar11 - (int)pbVar15) + *(uint *)(param_1 + 3))) {
    uVar16 = (uint)pbVar15[-2] * 0x100 + 1 + (uint)pbVar15[-1];
    if ((uint)(int)sVar13 <= uVar16) {
      uVar9 = *(uint *)(param_2 + 4);
      FUN_1403a4c80(param_2,uVar9 + 4 + uVar16,0);
      uVar7 = *(int *)(param_2 + 4) + uVar16;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      uVar8 = (ulonglong)uVar7;
      cVar2 = FUN_1403a4c80(param_2,uVar8,0);
      if (cVar2 != '\0') {
        *(uint *)(param_2 + 4) = uVar7;
        pfVar6 = *(float **)(param_2 + 8);
        if (uVar9 != 0) {
          uVar8 = 0;
          if (uVar9 <= uVar7) {
            uVar8 = (ulonglong)(uVar7 - uVar9);
          }
          pfVar6 = pfVar6 + (ulonglong)uVar9 * 3;
        }
        if (param_3 == '\0') {
          if (uVar16 * 3 != 0) {
            FUN_1404217a0(pfVar6,0,uVar16 * 0xc);
          }
          uVar4 = 0;
          uVar16 = (uint)uVar8;
          if (0 < sVar13) {
            do {
              uVar9 = (uint)pbVar10[uVar4 * 2 + 0xb] + (uint)pbVar10[uVar4 * 2 + 10] * 0x100;
              if (uVar9 < uVar16) {
                pfVar3 = pfVar6 + (ulonglong)uVar9 * 3;
              }
              else {
                DAT_1404e4f28 = (undefined4)DAT_14045dd18;
                pfVar3 = (float *)&DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              uVar9 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar9;
              *(undefined1 *)((longlong)pfVar3 + 9) = 1;
            } while ((int)uVar9 < (int)sVar13);
          }
          pbVar10 = pbVar10 + ((ulonglong)*pbVar15 * 0x80 + (longlong)(sVar13 + 1)) * 2 +
                              (ulonglong)pbVar15[1] + 10;
          if (pbVar10 < (byte *)param_1[2]) {
            return 0;
          }
          pbVar15 = (byte *)param_1[2] + *(uint *)(param_1 + 3);
          if (pbVar15 <= pbVar10) {
            return 0;
          }
          uVar4 = 0;
          pbVar11 = pbVar10;
          if (uVar16 != 0) {
            do {
              pbVar10 = pbVar11 + 1;
              if (pbVar15 < pbVar10) {
                return 0;
              }
              bVar1 = *pbVar11;
              uVar9 = (int)uVar4 + 1;
              uVar5 = (ulonglong)uVar9;
              *(byte *)(pfVar6 + uVar4 * 3 + 2) = bVar1;
              if ((bVar1 & 8) != 0) {
                if (pbVar15 < pbVar11 + 2) {
                  return 0;
                }
                uVar7 = uVar16;
                if (*pbVar10 + uVar9 <= uVar16) {
                  uVar7 = *pbVar10 + uVar9;
                }
                while (pbVar10 = pbVar11 + 2, uVar9 < uVar7) {
                  uVar9 = (int)uVar5 + 1;
                  *(byte *)(pfVar6 + uVar5 * 3 + 2) = bVar1;
                  uVar5 = (ulonglong)uVar9;
                }
              }
              uVar4 = uVar5;
              pbVar11 = pbVar10;
            } while ((uint)uVar5 < uVar16);
          }
          iVar14 = 0;
          pfVar3 = pfVar6 + uVar8 * 3;
          pfVar12 = pfVar6;
          if (pfVar6 != pfVar3) {
            do {
              bVar1 = *(byte *)(pfVar12 + 2);
              if ((bVar1 & 2) == 0) {
                if ((bVar1 & 0x10) == 0) {
                  if (pbVar15 < pbVar10 + 2) {
                    return 0;
                  }
                  iVar14 = iVar14 + (short)((ushort)pbVar10[1] + (ushort)*pbVar10 * 0x100);
                  pbVar10 = pbVar10 + 2;
                }
              }
              else {
                if (pbVar15 < pbVar10 + 1) {
                  return 0;
                }
                iVar14 = iVar14 + ((bVar1 >> 4 & 1) * 2 + -1) * (uint)*pbVar10;
                pbVar10 = pbVar10 + 1;
              }
              *pfVar12 = (float)iVar14;
              pfVar12 = pfVar12 + 3;
            } while (pfVar12 != pfVar3);
            iVar14 = 0;
            do {
              bVar1 = *(byte *)(pfVar6 + 2);
              if ((bVar1 & 4) == 0) {
                pbVar11 = pbVar10;
                if ((bVar1 & 0x20) == 0) {
                  pbVar11 = pbVar10 + 2;
                  if (pbVar15 < pbVar11) {
                    return 0;
                  }
                  iVar14 = iVar14 + (short)((ushort)pbVar10[1] + (ushort)*pbVar10 * 0x100);
                }
              }
              else {
                if (pbVar15 < pbVar10 + 1) {
                  return 0;
                }
                iVar14 = iVar14 + ((bVar1 >> 5 & 1) * 2 + -1) * (uint)*pbVar10;
                pbVar11 = pbVar10 + 1;
              }
              pfVar6[1] = (float)iVar14;
              pfVar6 = pfVar6 + 3;
              pbVar10 = pbVar11;
            } while (pfVar6 != pfVar3);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

