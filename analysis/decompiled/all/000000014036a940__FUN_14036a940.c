// Function: FUN_14036a940
// Addr: 14036a940
// Size: 1181 bytes


void FUN_14036a940(undefined8 *param_1,longlong param_2,float param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar13 = 0;
  pfVar12 = *(float **)(param_2 + 8);
  if (uVar5 != 0) {
    do {
      if ((*(int *)(param_1 + 2) < 1) && (cVar8 = FUN_14039ab40(param_1), cVar8 == '\0')) {
        return;
      }
      iVar6 = *(int *)((longlong)param_1 + 0x14);
      uVar7 = *(uint *)(param_1 + 2);
      if (uVar5 - uVar13 <= *(uint *)(param_1 + 2)) {
        uVar7 = uVar5 - uVar13;
      }
      if (iVar6 == 0) {
        pfVar12 = pfVar12 + uVar7;
      }
      else if (iVar6 == 1) {
        pbVar10 = (byte *)*param_1;
        uVar14 = 0;
        pbVar11 = pbVar10;
        uVar15 = uVar14;
        if (3 < uVar7) {
          do {
            uVar15 = uVar14 + 4;
            *pfVar12 = (float)(int)(char)*pbVar11 * param_3 + *pfVar12;
            pfVar12[1] = (float)(int)(char)pbVar11[1] * param_3 + pfVar12[1];
            pbVar10 = pbVar11 + 4;
            pfVar12[2] = (float)(int)(char)pbVar11[2] * param_3 + pfVar12[2];
            uVar9 = uVar14 + 7;
            pfVar12[3] = (float)(int)(char)pbVar11[3] * param_3 + pfVar12[3];
            pfVar12 = pfVar12 + 4;
            pbVar11 = pbVar10;
            uVar14 = uVar15;
          } while (uVar9 < uVar7);
        }
        if (uVar15 < uVar7) {
          if (3 < uVar7 - uVar15) {
            do {
              uVar15 = uVar15 + 4;
              *pfVar12 = (float)(int)(char)*pbVar10 * param_3 + *pfVar12;
              pfVar12[1] = (float)(int)(char)pbVar10[1] * param_3 + pfVar12[1];
              pfVar12[2] = (float)(int)(char)pbVar10[2] * param_3 + pfVar12[2];
              pbVar11 = pbVar10 + 3;
              pbVar10 = pbVar10 + 4;
              pfVar12[3] = (float)(int)(char)*pbVar11 * param_3 + pfVar12[3];
              pfVar12 = pfVar12 + 4;
            } while (uVar15 < uVar7 - 3);
            if (uVar7 <= uVar15) goto LAB_14036ae5d;
          }
          do {
            bVar4 = *pbVar10;
            uVar15 = uVar15 + 1;
            pbVar10 = pbVar10 + 1;
            *pfVar12 = (float)(int)(char)bVar4 * param_3 + *pfVar12;
            pfVar12 = pfVar12 + 1;
          } while (uVar15 < uVar7);
        }
LAB_14036ae5d:
        *param_1 = pbVar10;
      }
      else if (iVar6 == 2) {
        pbVar10 = (byte *)*param_1;
        uVar14 = 0;
        pbVar11 = pbVar10;
        uVar15 = uVar14;
        if (3 < uVar7) {
          do {
            uVar15 = uVar14 + 4;
            *pfVar12 = (float)(int)(short)((ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100) * param_3
                       + *pfVar12;
            pfVar12[1] = (float)(int)(short)((ushort)pbVar11[3] + (ushort)pbVar11[2] * 0x100) *
                         param_3 + pfVar12[1];
            pbVar10 = pbVar11 + 8;
            pfVar12[2] = (float)(int)(short)((ushort)pbVar11[4] * 0x100 + (ushort)pbVar11[5]) *
                         param_3 + pfVar12[2];
            uVar9 = uVar14 + 7;
            pfVar12[3] = (float)(int)(short)((ushort)pbVar11[7] + (ushort)pbVar11[6] * 0x100) *
                         param_3 + pfVar12[3];
            pfVar12 = pfVar12 + 4;
            pbVar11 = pbVar10;
            uVar14 = uVar15;
          } while (uVar9 < uVar7);
        }
        if (uVar15 < uVar7) {
          if (3 < uVar7 - uVar15) {
            do {
              uVar15 = uVar15 + 4;
              *pfVar12 = (float)(int)(short)((ushort)pbVar10[1] + (ushort)*pbVar10 * 0x100) *
                         param_3 + *pfVar12;
              pfVar12[1] = (float)(int)(short)((ushort)pbVar10[3] + (ushort)pbVar10[2] * 0x100) *
                           param_3 + pfVar12[1];
              pfVar12[2] = (float)(int)(short)((ushort)pbVar10[4] * 0x100 + (ushort)pbVar10[5]) *
                           param_3 + pfVar12[2];
              pbVar11 = pbVar10 + 6;
              pbVar1 = pbVar10 + 7;
              pbVar10 = pbVar10 + 8;
              pfVar12[3] = (float)(int)(short)((ushort)*pbVar11 * 0x100 + (ushort)*pbVar1) * param_3
                           + pfVar12[3];
              pfVar12 = pfVar12 + 4;
            } while (uVar15 < uVar7 - 3);
            if (uVar7 <= uVar15) goto LAB_14036ad17;
          }
          do {
            pbVar11 = pbVar10 + 1;
            uVar15 = uVar15 + 1;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 2;
            *pfVar12 = (float)(int)(short)((ushort)*pbVar11 + (ushort)bVar4 * 0x100) * param_3 +
                       *pfVar12;
            pfVar12 = pfVar12 + 1;
          } while (uVar15 < uVar7);
        }
LAB_14036ad17:
        *param_1 = pbVar10;
      }
      else if (iVar6 == 4) {
        pbVar10 = (byte *)*param_1;
        uVar14 = 0;
        if (3 < uVar7) {
          do {
            uVar14 = uVar14 + 4;
            *pfVar12 = (float)(int)((((uint)*pbVar10 * 0x100 + (uint)pbVar10[1]) * 0x100 +
                                    (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3]) * param_3 +
                       *pfVar12;
            pfVar12[1] = (float)(int)((((uint)pbVar10[4] * 0x100 + (uint)pbVar10[5]) * 0x100 +
                                      (uint)pbVar10[6]) * 0x100 + (uint)pbVar10[7]) * param_3 +
                         pfVar12[1];
            pfVar12[2] = (float)(int)((((uint)pbVar10[9] + (uint)pbVar10[8] * 0x100) * 0x100 +
                                      (uint)pbVar10[10]) * 0x100 + (uint)pbVar10[0xb]) * param_3 +
                         pfVar12[2];
            pbVar11 = pbVar10 + 0xc;
            pbVar1 = pbVar10 + 0xd;
            pbVar2 = pbVar10 + 0xe;
            pbVar3 = pbVar10 + 0xf;
            pbVar10 = pbVar10 + 0x10;
            pfVar12[3] = (float)(int)((((uint)*pbVar1 + (uint)*pbVar11 * 0x100) * 0x100 +
                                      (uint)*pbVar2) * 0x100 + (uint)*pbVar3) * param_3 + pfVar12[3]
            ;
            pfVar12 = pfVar12 + 4;
          } while (uVar14 < uVar7 - 3);
        }
        if (uVar7 <= uVar14) goto LAB_14036ae5d;
        do {
          pbVar11 = pbVar10 + 1;
          uVar14 = uVar14 + 1;
          bVar4 = *pbVar10;
          pbVar1 = pbVar10 + 2;
          pbVar2 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          *pfVar12 = (float)(int)((((uint)bVar4 * 0x100 + (uint)*pbVar11) * 0x100 + (uint)*pbVar1) *
                                  0x100 + (uint)*pbVar2) * param_3 + *pfVar12;
          pfVar12 = pfVar12 + 1;
        } while (uVar14 < uVar7);
        *param_1 = pbVar10;
      }
      *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - uVar7;
      uVar13 = uVar13 + uVar7;
    } while (uVar13 < uVar5);
  }
  return;
}

