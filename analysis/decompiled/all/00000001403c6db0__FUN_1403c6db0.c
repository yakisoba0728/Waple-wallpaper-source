// Function: FUN_1403c6db0
// Addr: 1403c6db0
// Size: 683 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403c6db0(undefined8 *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  float *pfVar13;
  short sVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  
  pbVar11 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[2];
  sVar14 = (ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1];
  pbVar16 = pbVar11 + (longlong)sVar14 * 2 + 10;
  if (((pbVar12 <= pbVar16) && (pbVar16 <= pbVar12 + *(uint *)(param_1 + 3))) &&
     (1 < ((int)pbVar12 - (int)pbVar16) + *(uint *)(param_1 + 3))) {
    uVar17 = (uint)pbVar16[-2] * 0x100 + 1 + (uint)pbVar16[-1];
    if ((uint)(int)sVar14 <= uVar17) {
      uVar10 = *(uint *)(param_2 + 4);
      FUN_1403a4d50(param_2,uVar10 + 4 + uVar17,0);
      uVar8 = *(int *)(param_2 + 4) + uVar17;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      uVar9 = (ulonglong)uVar8;
      cVar2 = FUN_1403a4d50(param_2,uVar9,0);
      if (cVar2 != '\0') {
        *(uint *)(param_2 + 4) = uVar8;
        pfVar7 = *(float **)(param_2 + 8);
        if (uVar10 != 0) {
          uVar9 = 0;
          if (uVar10 <= uVar8) {
            uVar9 = (ulonglong)(uVar8 - uVar10);
          }
          pfVar7 = pfVar7 + (ulonglong)uVar10 * 3;
        }
        if (param_3 == '\0') {
          if (uVar17 * 3 != 0) {
            uVar3 = func_0x000140421870(pfVar7,0,uVar17 * 0xc);
            return uVar3;
          }
          uVar5 = 0;
          uVar17 = (uint)uVar9;
          if (0 < sVar14) {
            do {
              uVar10 = (uint)pbVar11[uVar5 * 2 + 0xb] + (uint)pbVar11[uVar5 * 2 + 10] * 0x100;
              if (uVar10 < uVar17) {
                pfVar4 = pfVar7 + (ulonglong)uVar10 * 3;
              }
              else {
                DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
                pfVar4 = (float *)&DAT_1404e4ff0;
                DAT_1404e4ff0 = DAT_14045dde0;
              }
              uVar10 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar10;
              *(undefined1 *)((longlong)pfVar4 + 9) = 1;
            } while ((int)uVar10 < (int)sVar14);
          }
          pbVar11 = pbVar11 + ((ulonglong)*pbVar16 * 0x80 + (longlong)(sVar14 + 1)) * 2 +
                              (ulonglong)pbVar16[1] + 10;
          if (pbVar11 < (byte *)param_1[2]) {
            return 0;
          }
          pbVar16 = (byte *)param_1[2] + *(uint *)(param_1 + 3);
          if (pbVar16 <= pbVar11) {
            return 0;
          }
          uVar5 = 0;
          pbVar12 = pbVar11;
          if (uVar17 != 0) {
            do {
              pbVar11 = pbVar12 + 1;
              if (pbVar16 < pbVar11) {
                return 0;
              }
              bVar1 = *pbVar12;
              uVar10 = (int)uVar5 + 1;
              uVar6 = (ulonglong)uVar10;
              *(byte *)(pfVar7 + uVar5 * 3 + 2) = bVar1;
              if ((bVar1 & 8) != 0) {
                if (pbVar16 < pbVar12 + 2) {
                  return 0;
                }
                uVar8 = uVar17;
                if (*pbVar11 + uVar10 <= uVar17) {
                  uVar8 = *pbVar11 + uVar10;
                }
                while (pbVar11 = pbVar12 + 2, uVar10 < uVar8) {
                  uVar10 = (int)uVar6 + 1;
                  *(byte *)(pfVar7 + uVar6 * 3 + 2) = bVar1;
                  uVar6 = (ulonglong)uVar10;
                }
              }
              uVar5 = uVar6;
              pbVar12 = pbVar11;
            } while ((uint)uVar6 < uVar17);
          }
          iVar15 = 0;
          pfVar4 = pfVar7 + uVar9 * 3;
          pfVar13 = pfVar7;
          if (pfVar7 != pfVar4) {
            do {
              bVar1 = *(byte *)(pfVar13 + 2);
              if ((bVar1 & 2) == 0) {
                if ((bVar1 & 0x10) == 0) {
                  if (pbVar16 < pbVar11 + 2) {
                    return 0;
                  }
                  iVar15 = iVar15 + (short)((ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100);
                  pbVar11 = pbVar11 + 2;
                }
              }
              else {
                if (pbVar16 < pbVar11 + 1) {
                  return 0;
                }
                iVar15 = iVar15 + ((bVar1 >> 4 & 1) * 2 + -1) * (uint)*pbVar11;
                pbVar11 = pbVar11 + 1;
              }
              *pfVar13 = (float)iVar15;
              pfVar13 = pfVar13 + 3;
            } while (pfVar13 != pfVar4);
            iVar15 = 0;
            do {
              bVar1 = *(byte *)(pfVar7 + 2);
              if ((bVar1 & 4) == 0) {
                pbVar12 = pbVar11;
                if ((bVar1 & 0x20) == 0) {
                  pbVar12 = pbVar11 + 2;
                  if (pbVar16 < pbVar12) {
                    return 0;
                  }
                  iVar15 = iVar15 + (short)((ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100);
                }
              }
              else {
                if (pbVar16 < pbVar11 + 1) {
                  return 0;
                }
                iVar15 = iVar15 + ((bVar1 >> 5 & 1) * 2 + -1) * (uint)*pbVar11;
                pbVar12 = pbVar11 + 1;
              }
              pfVar7[1] = (float)iVar15;
              pfVar7 = pfVar7 + 3;
              pbVar11 = pbVar12;
            } while (pfVar7 != pfVar4);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

