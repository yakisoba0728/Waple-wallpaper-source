// Function: FUN_140372910
// Addr: 140372910
// Size: 1301 bytes


undefined8
FUN_140372910(ulonglong *param_1,longlong param_2,float param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar15 = *(uint *)(param_2 + 0x10);
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      pbVar5 = (byte *)*param_1;
      pbVar11 = pbVar5 + 1;
      if (param_4 < pbVar11) {
        return 0;
      }
      *param_1 = (ulonglong)pbVar11;
      bVar4 = *pbVar5;
      uVar12 = (bVar4 & 0x3f) + 1;
      uVar13 = (uint)uVar14;
      uVar8 = uVar12 + uVar13;
      if (uVar15 < uVar8) {
        return 0;
      }
      if (uVar13 < param_5) {
        uVar10 = (ulonglong)uVar12;
        if (param_5 - uVar13 <= uVar12) {
          uVar10 = (ulonglong)(param_5 - uVar13);
        }
      }
      else {
        uVar10 = 0;
      }
      iVar9 = (int)uVar10;
      uVar13 = uVar13 + iVar9;
      uVar14 = (ulonglong)uVar13;
      uVar7 = bVar4 & 0xc0;
      if ((bVar4 & 0xc0) == 0) {
        if (param_4 < pbVar11 + uVar12) {
          return 0;
        }
        pbVar11 = pbVar11 + uVar10;
        *param_1 = (ulonglong)pbVar11;
        if (uVar13 < uVar8) {
          lVar6 = *(longlong *)(param_2 + 8);
          uVar10 = uVar14;
          if (3 < uVar8 - uVar13) {
            do {
              iVar9 = (int)uVar14;
              *(float *)(lVar6 + uVar14 * 0xc) =
                   (float)(int)(char)*pbVar11 * param_3 + *(float *)(lVar6 + uVar14 * 0xc);
              *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc) =
                   (float)(int)(char)pbVar11[1] * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc);
              uVar13 = iVar9 + 4;
              uVar14 = (ulonglong)uVar13;
              *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc) =
                   (float)(int)(char)pbVar11[2] * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc);
              pbVar5 = pbVar11 + 3;
              pbVar11 = pbVar11 + 4;
              *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc) =
                   (float)(int)(char)*pbVar5 * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc);
            } while (uVar13 < uVar8 - 3);
            uVar10 = uVar14;
            if (uVar8 <= uVar13) goto LAB_140372dfb;
          }
          do {
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar13 = (int)uVar10 + 1;
            uVar14 = (ulonglong)uVar13;
            *(float *)(lVar6 + uVar10 * 0xc) =
                 (float)(int)(char)bVar4 * param_3 + *(float *)(lVar6 + uVar10 * 0xc);
            uVar10 = uVar14;
          } while (uVar13 < uVar8);
        }
LAB_140372dfb:
        *param_1 = (ulonglong)pbVar11;
      }
      else if (uVar7 == 0x40) {
        if (param_4 < pbVar11 + uVar12 * 2) {
          return 0;
        }
        pbVar11 = pbVar11 + (uint)(iVar9 * 2);
        *param_1 = (ulonglong)pbVar11;
        if (uVar13 < uVar8) {
          lVar6 = *(longlong *)(param_2 + 8);
          if (uVar8 - uVar13 < 4) goto LAB_140372cab;
          do {
            iVar9 = (int)uVar14;
            *(float *)(lVar6 + uVar14 * 0xc) =
                 (float)(int)(short)((ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100) * param_3 +
                 *(float *)(lVar6 + uVar14 * 0xc);
            *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc) =
                 (float)(int)(short)((ushort)pbVar11[2] * 0x100 + (ushort)pbVar11[3]) * param_3 +
                 *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc);
            uVar14 = (ulonglong)(iVar9 + 4U);
            *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc) =
                 (float)(int)(short)((ushort)pbVar11[5] + (ushort)pbVar11[4] * 0x100) * param_3 +
                 *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc);
            pbVar5 = pbVar11 + 6;
            pbVar1 = pbVar11 + 7;
            pbVar11 = pbVar11 + 8;
            *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc) =
                 (float)(int)(short)((ushort)*pbVar5 * 0x100 + (ushort)*pbVar1) * param_3 +
                 *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc);
          } while (iVar9 + 4U < uVar8 - 3);
          uVar15 = *(uint *)(param_2 + 0x10);
          for (; (uint)uVar14 < uVar8; uVar14 = (ulonglong)((int)uVar14 + 1)) {
LAB_140372cab:
            pbVar5 = pbVar11 + 1;
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 2;
            *(float *)(lVar6 + uVar14 * 0xc) =
                 (float)(int)(short)((ushort)*pbVar5 + (ushort)bVar4 * 0x100) * param_3 +
                 *(float *)(lVar6 + uVar14 * 0xc);
          }
        }
        *param_1 = (ulonglong)pbVar11;
      }
      else if (uVar7 == 0x80) {
        uVar14 = (ulonglong)uVar8;
      }
      else if (uVar7 == 0xc0) {
        if (param_4 < pbVar11 + uVar12 * 4) {
          return 0;
        }
        pbVar11 = pbVar11 + (uint)(iVar9 * 4);
        *param_1 = (ulonglong)pbVar11;
        if (uVar13 < uVar8) {
          lVar6 = *(longlong *)(param_2 + 8);
          uVar10 = uVar14;
          if (3 < uVar8 - uVar13) {
            do {
              iVar9 = (int)uVar14;
              *(float *)(lVar6 + uVar14 * 0xc) =
                   (float)(int)((((uint)*pbVar11 * 0x100 + (uint)pbVar11[1]) * 0x100 +
                                (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3]) * param_3 +
                   *(float *)(lVar6 + uVar14 * 0xc);
              *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc) =
                   (float)(int)((((uint)pbVar11[4] * 0x100 + (uint)pbVar11[5]) * 0x100 +
                                (uint)pbVar11[6]) * 0x100 + (uint)pbVar11[7]) * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 1) * 0xc);
              uVar13 = iVar9 + 4;
              uVar14 = (ulonglong)uVar13;
              *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc) =
                   (float)(int)((((uint)pbVar11[8] * 0x100 + (uint)pbVar11[9]) * 0x100 +
                                (uint)pbVar11[10]) * 0x100 + (uint)pbVar11[0xb]) * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 2) * 0xc);
              pbVar5 = pbVar11 + 0xd;
              pbVar1 = pbVar11 + 0xc;
              pbVar2 = pbVar11 + 0xe;
              pbVar3 = pbVar11 + 0xf;
              pbVar11 = pbVar11 + 0x10;
              *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc) =
                   (float)(int)((((uint)*pbVar1 * 0x100 + (uint)*pbVar5) * 0x100 + (uint)*pbVar2) *
                                0x100 + (uint)*pbVar3) * param_3 +
                   *(float *)(lVar6 + (ulonglong)(iVar9 + 3) * 0xc);
            } while (uVar13 < uVar8 - 3);
            uVar10 = uVar14;
            if (uVar8 <= uVar13) goto LAB_140372b72;
          }
          do {
            pbVar5 = pbVar11 + 1;
            bVar4 = *pbVar11;
            uVar13 = (int)uVar10 + 1;
            uVar14 = (ulonglong)uVar13;
            pbVar1 = pbVar11 + 2;
            pbVar2 = pbVar11 + 3;
            pbVar11 = pbVar11 + 4;
            *(float *)(lVar6 + uVar10 * 0xc) =
                 (float)(int)((((uint)bVar4 * 0x100 + (uint)*pbVar5) * 0x100 + (uint)*pbVar1) *
                              0x100 + (uint)*pbVar2) * param_3 + *(float *)(lVar6 + uVar10 * 0xc);
            uVar10 = uVar14;
          } while (uVar13 < uVar8);
        }
LAB_140372b72:
        *param_1 = (ulonglong)pbVar11;
      }
    } while ((uint)uVar14 < uVar15);
  }
  return 1;
}

