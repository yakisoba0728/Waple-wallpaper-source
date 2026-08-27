// Function: FUN_1402fd700
// Addr: 1402fd700
// Size: 1583 bytes


ulonglong FUN_1402fd700(undefined8 *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  short *psVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  short *psVar28;
  byte *pbVar29;
  ulonglong uVar30;
  uint local_res8;
  uint local_res10 [2];
  int local_res18;
  undefined4 uStackX_1c;
  char *local_res20;
  short *psVar19;
  
  uVar4 = *param_1;
  uVar25 = 0;
  lVar23 = (longlong)param_2;
  local_res8 = 0;
  uVar30 = param_1[lVar23 * 0x113 + 10];
  lVar24 = param_1[0x230];
  uVar16 = uVar25;
  if (uVar30 != 0) {
    uVar16 = uVar30 + (ulonglong)*(uint *)(param_1 + lVar23 * 0x113 + 9) * 0x48;
  }
  *(undefined4 *)(param_1 + lVar23 * 0x113 + 0xb) = 0;
  lVar8 = 8;
  if (param_2 != 0) {
    lVar8 = 0x10;
  }
  iVar27 = *(int *)(lVar8 + (longlong)param_1);
  iVar26 = *(int *)(lVar23 * 0x1c4 + lVar24 + 0x110);
  lVar24 = (longlong)iVar26 * (longlong)iVar27;
  local_res18 = iVar26;
  if (0x10 < (int)((ulonglong)(lVar24 + 0x8000 + (lVar24 >> 0x3f)) >> 0x10)) {
    local_res18 = FUN_1402efa10(0x10);
  }
  do {
    if (uVar16 <= uVar30) {
      psVar19 = (short *)param_1[lVar23 * 0x113 + 0xc];
      if ((psVar19 != (short *)0x0) &&
         (psVar28 = psVar19 + (ulonglong)*(uint *)(param_1 + lVar23 * 0x113 + 0xb) * 0x24,
         psVar12 = psVar19, psVar19 < psVar28)) {
        do {
          lVar24 = *(longlong *)(psVar12 + 0x1c);
          if (lVar24 != 0) {
            do {
              *(short **)(lVar24 + 0x10) = psVar12;
              lVar24 = *(longlong *)(lVar24 + 0x18);
            } while (lVar24 != *(longlong *)(psVar12 + 0x1c));
          }
          psVar12 = psVar12 + 0x24;
        } while (psVar12 < psVar28);
        do {
          iVar15 = 0;
          pbVar29 = *(byte **)(psVar19 + 0x1c);
          iVar26 = 0;
          iVar27 = iVar26;
          iVar13 = iVar15;
          if (pbVar29 != (byte *)0x0) {
            do {
              lVar24 = *(longlong *)(pbVar29 + 0x28);
              iVar26 = iVar13 + 1;
              iVar27 = iVar15;
              if ((*pbVar29 & 1) == 0) {
                iVar26 = iVar13;
                iVar27 = iVar15 + 1;
              }
              if ((lVar24 == 0) || (*(short **)(lVar24 + 0x10) == psVar19)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              lVar23 = *(longlong *)(pbVar29 + 0x20);
              if (lVar23 == 0) {
                if (bVar7) {
LAB_1402fdc68:
                  psVar12 = *(short **)(psVar19 + 0x14);
                  lVar23 = lVar24;
                  goto LAB_1402fdc6f;
                }
              }
              else {
                psVar12 = *(short **)(psVar19 + 0x10);
                if (bVar7) goto LAB_1402fdc68;
LAB_1402fdc6f:
                if (psVar12 == (short *)0x0) {
LAB_1402fdcab:
                  psVar12 = *(short **)(lVar23 + 0x10);
                }
                else {
                  sVar2 = *(short *)(lVar23 + 2);
                  sVar3 = *(short *)(pbVar29 + 2);
                  iVar13 = (int)*psVar19 - (int)*psVar12;
                  iVar15 = (int)sVar3 - (int)sVar2;
                  if (sVar3 <= sVar2) {
                    iVar15 = (int)sVar2 - (int)sVar3;
                  }
                  iVar21 = (int)*psVar12 - (int)*psVar19;
                  if (-1 < iVar13) {
                    iVar21 = iVar13;
                  }
                  if (iVar15 < iVar21) goto LAB_1402fdcab;
                }
                if (bVar7) {
                  *(short **)(psVar19 + 0x14) = psVar12;
                  *(byte *)(psVar12 + 6) = *(byte *)(psVar12 + 6) | 2;
                }
                else {
                  *(short **)(psVar19 + 0x10) = psVar12;
                }
              }
              pbVar29 = *(byte **)(pbVar29 + 0x18);
              iVar15 = iVar27;
              iVar13 = iVar26;
            } while (pbVar29 != *(byte **)(psVar19 + 0x1c));
          }
          *(undefined1 *)(psVar19 + 6) = 0;
          if ((0 < iVar26) && (iVar27 <= iVar26)) {
            *(undefined1 *)(psVar19 + 6) = 1;
          }
          if ((*(longlong *)(psVar19 + 0x14) != 0) && (*(longlong *)(psVar19 + 0x10) != 0)) {
            psVar19[0x14] = 0;
            psVar19[0x15] = 0;
            psVar19[0x16] = 0;
            psVar19[0x17] = 0;
          }
          psVar19 = psVar19 + 0x24;
        } while (psVar19 < psVar28);
        uVar25 = (ulonglong)local_res8;
      }
      return uVar25;
    }
    psVar19 = (short *)0x0;
    local_res20 = (char *)(uVar30 + 1);
    if (*(int *)(param_1 + lVar23 * 0x113 + 0xb) == 0) {
      uVar20 = 0;
LAB_1402fd8f0:
      cVar1 = *local_res20;
      uVar25 = 0;
      sVar2 = *(short *)(uVar30 + 2);
      local_res10[0] = 0;
      if (uVar20 < 0xc) {
        if (param_1[lVar23 * 0x113 + 0xc] == 0) {
          *(undefined4 *)((longlong)param_1 + lVar23 * 0x898 + 0x5c) = 0xc;
          param_1[lVar23 * 0x113 + 0xc] = param_1 + lVar23 * 0x113 + 0xb0;
        }
LAB_1402fdaaa:
        puVar9 = (undefined8 *)param_1[lVar23 * 0x113 + 0xc];
        puVar22 = puVar9 + (ulonglong)*(uint *)(param_1 + lVar23 * 0x113 + 0xb) * 9;
        local_res8 = local_res10[0];
        if (puVar9 < puVar22) {
          do {
            puVar10 = puVar22 + -9;
            if ((*(short *)(puVar22 + -9) < sVar2) ||
               ((*(short *)(puVar22 + -9) == sVar2 &&
                ((int)cVar1 == *(int *)(param_1 + lVar23 * 0x113 + 0xd))))) break;
            *puVar22 = *puVar10;
            puVar22[1] = puVar22[-8];
            puVar22[2] = puVar22[-7];
            puVar22[3] = puVar22[-6];
            puVar22[4] = puVar22[-5];
            puVar22[5] = puVar22[-4];
            puVar22[6] = puVar22[-3];
            puVar22[7] = puVar22[-2];
            puVar22[8] = puVar22[-1];
            puVar22 = puVar10;
          } while (puVar9 < puVar10);
          uVar25 = (ulonglong)local_res10[0];
        }
        *(int *)(param_1 + lVar23 * 0x113 + 0xb) = *(int *)(param_1 + lVar23 * 0x113 + 0xb) + 1;
      }
      else {
        uVar18 = *(uint *)((longlong)param_1 + lVar23 * 0x898 + 0x5c);
        if (uVar20 < uVar18) goto LAB_1402fdaaa;
        puVar22 = (undefined8 *)0x0;
        if (uVar18 < 0x1c71c71) {
          uVar20 = (uVar18 >> 2) + 4 + uVar18;
          if ((uVar20 < uVar18) || (0x1c71c71 < uVar20)) {
            uVar20 = 0x1c71c71;
          }
          if ((undefined8 *)param_1[lVar23 * 0x113 + 0xc] == param_1 + lVar23 * 0x113 + 0xb0) {
            puVar9 = (undefined8 *)FUN_1402f80b0(uVar4,0x48,0,uVar20,0,local_res10);
            uVar25 = (ulonglong)local_res10[0];
            param_1[lVar23 * 0x113 + 0xc] = puVar9;
            local_res8 = local_res10[0];
            if (local_res10[0] == 0) {
              lVar24 = 6;
              puVar22 = param_1 + lVar23 * 0x113 + 0xb0;
              do {
                puVar17 = puVar22;
                puVar10 = puVar9;
                uVar11 = puVar17[1];
                *puVar10 = *puVar17;
                puVar10[1] = uVar11;
                uVar11 = puVar17[3];
                puVar10[2] = puVar17[2];
                puVar10[3] = uVar11;
                uVar11 = puVar17[5];
                puVar10[4] = puVar17[4];
                puVar10[5] = uVar11;
                uVar11 = puVar17[7];
                puVar10[6] = puVar17[6];
                puVar10[7] = uVar11;
                uVar11 = puVar17[9];
                puVar10[8] = puVar17[8];
                puVar10[9] = uVar11;
                uVar11 = puVar17[0xb];
                puVar10[10] = puVar17[10];
                puVar10[0xb] = uVar11;
                uVar11 = puVar17[0xd];
                puVar10[0xc] = puVar17[0xc];
                puVar10[0xd] = uVar11;
                uVar11 = puVar17[0xf];
                puVar10[0xe] = puVar17[0xe];
                puVar10[0xf] = uVar11;
                lVar24 = lVar24 + -1;
                puVar9 = puVar10 + 0x10;
                puVar22 = puVar17 + 0x10;
              } while (lVar24 != 0);
              uVar11 = puVar17[0x11];
              puVar10[0x10] = puVar17[0x10];
              puVar10[0x11] = uVar11;
              uVar11 = puVar17[0x13];
              puVar10[0x12] = puVar17[0x12];
              puVar10[0x13] = uVar11;
              uVar11 = puVar17[0x15];
              puVar10[0x14] = puVar17[0x14];
              puVar10[0x15] = uVar11;
              uVar11 = puVar17[0x17];
              puVar10[0x16] = puVar17[0x16];
              puVar10[0x17] = uVar11;
              uVar14 = *(undefined4 *)((longlong)puVar17 + 0xc4);
              uVar5 = *(undefined4 *)(puVar17 + 0x19);
              uVar6 = *(undefined4 *)((longlong)puVar17 + 0xcc);
              *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(puVar17 + 0x18);
              *(undefined4 *)((longlong)puVar10 + 0xc4) = uVar14;
              *(undefined4 *)(puVar10 + 0x19) = uVar5;
              *(undefined4 *)((longlong)puVar10 + 0xcc) = uVar6;
              uVar11 = puVar17[0x1b];
              puVar10[0x1a] = puVar17[0x1a];
              puVar10[0x1b] = uVar11;
              uVar25 = 0;
LAB_1402fdaa6:
              *(uint *)((longlong)param_1 + lVar23 * 0x898 + 0x5c) = uVar20;
              goto LAB_1402fdaaa;
            }
          }
          else {
            uVar11 = FUN_1402f80b0(uVar4,0x48,uVar18,uVar20,
                                   (undefined8 *)param_1[lVar23 * 0x113 + 0xc],local_res10);
            uVar25 = (ulonglong)local_res10[0];
            param_1[lVar23 * 0x113 + 0xc] = uVar11;
            local_res8 = local_res10[0];
            if (local_res10[0] == 0) goto LAB_1402fdaa6;
          }
        }
        else {
          uVar25 = 0x40;
          local_res8 = 0x40;
        }
      }
      if ((int)uVar25 != 0) {
        return uVar25;
      }
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = uVar30;
      puVar22[8] = uVar30;
      *(char *)((longlong)puVar22 + 0xd) = *local_res20;
      *(undefined2 *)puVar22 = *(undefined2 *)(uVar30 + 2);
      lVar24 = (longlong)*(short *)(uVar30 + 2) * (longlong)iVar27;
      uVar14 = (undefined4)((ulonglong)(lVar24 + 0x8000 + (lVar24 >> 0x3f)) >> 0x10);
      *(undefined4 *)((longlong)puVar22 + 4) = uVar14;
      *(undefined4 *)(puVar22 + 1) = uVar14;
      *(ulonglong *)(uVar30 + 0x18) = uVar30;
    }
    else {
      lVar24 = param_1[lVar23 * 0x113 + 0xc];
      iVar26 = 0xffff;
      psVar28 = psVar19;
      do {
        psVar12 = (short *)(lVar24 + (longlong)psVar19 * 0x48);
        if (*(char *)(lVar24 + 0xd + (longlong)psVar19 * 0x48) == *local_res20) {
          iVar13 = (int)*(short *)(uVar30 + 2) - (int)*psVar12;
          iVar15 = (int)*psVar12 - (int)*(short *)(uVar30 + 2);
          if (-1 < iVar13) {
            iVar15 = iVar13;
          }
          if ((iVar15 < local_res18) && (iVar15 < iVar26)) {
            if (*(longlong *)(uVar30 + 0x20) != 0) {
              iVar13 = 0;
              lVar24 = *(longlong *)(psVar12 + 0x1c);
              do {
                if (*(longlong *)(lVar24 + 0x20) != 0) {
                  sVar2 = *(short *)(*(longlong *)(uVar30 + 0x20) + 2);
                  sVar3 = *(short *)(*(longlong *)(lVar24 + 0x20) + 2);
                  iVar13 = (int)sVar2 - (int)sVar3;
                  if (sVar2 <= sVar3) {
                    iVar13 = (int)sVar3 - (int)sVar2;
                  }
                  if (local_res18 <= iVar13) goto LAB_1402fd896;
                }
                lVar24 = *(longlong *)(lVar24 + 0x18);
              } while (lVar24 != *(longlong *)(psVar12 + 0x1c));
              if (local_res18 <= iVar13) goto LAB_1402fd896;
            }
            psVar28 = psVar12;
            iVar26 = iVar15;
          }
        }
LAB_1402fd896:
        uVar20 = *(uint *)(param_1 + lVar23 * 0x113 + 0xb);
        uVar18 = (int)psVar19 + 1;
        psVar19 = (short *)(ulonglong)uVar18;
        lVar24 = param_1[lVar23 * 0x113 + 0xc];
      } while (uVar18 < uVar20);
      if (psVar28 == (short *)0x0) goto LAB_1402fd8f0;
      uVar25 = (ulonglong)local_res8;
      *(undefined8 *)(uVar30 + 0x18) = *(undefined8 *)(psVar28 + 0x1c);
      *(ulonglong *)(*(longlong *)(psVar28 + 0x20) + 0x18) = uVar30;
      *(ulonglong *)(psVar28 + 0x20) = uVar30;
    }
    uVar30 = uVar30 + 0x48;
  } while( true );
}

