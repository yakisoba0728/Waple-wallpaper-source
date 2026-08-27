// Function: FUN_1402fd060
// Addr: 1402fd060
// Size: 1250 bytes


void FUN_1402fd060(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short *psVar5;
  longlong lVar6;
  bool bVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  int *piVar19;
  byte *pbVar20;
  longlong *plVar21;
  uint uVar22;
  int *piVar24;
  short *psVar25;
  uint local_res20;
  short *local_58;
  short *psVar23;
  
  psVar11 = (short *)0x0;
  psVar5 = *(short **)((longlong)param_2 * 0x898 + 0x60 + param_1);
  psVar17 = psVar11;
  psVar18 = psVar11;
  if (psVar5 != (short *)0x0) {
    local_58 = (short *)0x0;
    psVar18 = psVar5 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x58 + param_1) * 0x24;
    psVar15 = psVar11;
    psVar25 = psVar5;
    if (psVar5 < psVar18) {
      do {
        if ((*(byte *)(psVar25 + 6) & 4) == 0) {
          psVar23 = *(short **)(psVar25 + 0xc);
          psVar16 = *(short **)(psVar25 + 0x10);
          psVar8 = psVar25;
          psVar9 = psVar25;
          if (psVar23 == (short *)0x0) {
            if (psVar16 == (short *)0x0) goto LAB_1402fd193;
            psVar23 = *(short **)(psVar16 + 0xc);
            psVar8 = psVar16;
            psVar16 = psVar25;
            psVar9 = psVar23;
          }
          if (psVar9 != (short *)0x0) {
            iVar13 = *(int *)(psVar23 + 4);
            bVar2 = *(byte *)(psVar8 + 6);
            *(int *)(psVar8 + 4) = iVar13;
            *(byte *)(psVar8 + 6) = bVar2 | 4;
            if ((psVar16 != (short *)0x0) && (*(longlong *)(psVar16 + 0xc) == 0)) {
              bVar3 = *(byte *)(psVar16 + 6);
              iVar10 = FUN_1402fce80(param_1,param_2,*(int *)(psVar16 + 2) - *(int *)(psVar8 + 2),
                                     bVar2 | 4,bVar3);
              *(byte *)(psVar16 + 6) = bVar3 | 4;
              *(int *)(psVar16 + 4) = iVar10 + iVar13;
              psVar15 = local_58;
            }
            if (psVar15 == (short *)0x0) {
              psVar15 = psVar25;
              local_58 = psVar25;
            }
          }
        }
LAB_1402fd193:
        local_res20 = 0;
        bVar7 = false;
        psVar25 = psVar25 + 0x24;
        psVar16 = psVar5;
        psVar23 = psVar11;
      } while (psVar25 < psVar18);
      do {
        bVar2 = *(byte *)(psVar16 + 6);
        if ((bVar2 & 4) == 0) {
          psVar25 = *(short **)(psVar16 + 0x10);
          if (psVar25 == (short *)0x0) {
            psVar17 = (short *)(ulonglong)((int)psVar17 + 1);
          }
          else if ((bVar7) &&
                  ((iVar13 = (int)psVar23 + 0x40, *(int *)(psVar16 + 4) < iVar13 ||
                   (*(int *)(psVar25 + 4) < iVar13)))) {
            psVar17 = (short *)(ulonglong)((int)psVar17 + 1);
          }
          else if (*(longlong *)(psVar25 + 0xc) == 0) {
            if (psVar25 < psVar16) {
              iVar13 = FUN_1402fce80(param_1,param_2,*(int *)(psVar16 + 2) - *(int *)(psVar25 + 2),
                                     (char)psVar25[6],bVar2);
              uVar22 = *(int *)(psVar25 + 4) + iVar13;
              *(uint *)(psVar16 + 4) = uVar22;
              *(byte *)(psVar16 + 6) = bVar2 | 4;
            }
            else {
              if ((param_2 == 1) || (psVar15 != (short *)0x0)) {
                FUN_140300680(param_1,psVar16,psVar25,psVar11,param_2);
              }
              else {
                local_res20 = FUN_140300680(param_1,psVar16,psVar25,0,0);
              }
              *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
              *(byte *)(psVar25 + 6) = *(byte *)(psVar25 + 6) | 4;
              uVar22 = *(uint *)(psVar25 + 4);
              local_58 = psVar16;
            }
            psVar23 = (short *)(ulonglong)uVar22;
            bVar7 = true;
            psVar15 = local_58;
          }
          else {
            iVar13 = FUN_1402fce80(param_1,param_2,*(int *)(psVar16 + 2) - *(int *)(psVar25 + 2),
                                   (char)psVar25[6],bVar2);
            *(int *)(psVar16 + 4) = iVar13 + *(int *)(psVar25 + 4);
            *(byte *)(psVar16 + 6) = bVar2 | 4;
            psVar15 = local_58;
          }
        }
        psVar11 = (short *)(ulonglong)local_res20;
        psVar16 = psVar16 + 0x24;
      } while (psVar16 < psVar18);
    }
  }
  if (param_2 != 0) goto LAB_1402fd426;
  uVar1 = (longlong)psVar18 + (-0x1b0 - (longlong)psVar5);
  if (uVar1 < 0x48) {
LAB_1402fd327:
    piVar24 = (int *)(psVar5 + 0x4c);
    psVar15 = psVar5 + 0x58;
    psVar25 = psVar5 + 0x6c;
    piVar14 = (int *)(psVar5 + 0x4a);
    pbVar20 = (byte *)(psVar5 + 0x96);
    plVar21 = (longlong *)(psVar5 + 0xa0);
    piVar19 = (int *)(psVar5 + 0x94);
    psVar16 = psVar5 + 0xb4;
    piVar12 = (int *)(psVar5 + 0x92);
    psVar11 = psVar5;
  }
  else {
    if (0x47 < (ulonglong)((longlong)psVar18 + (-0x360 - (longlong)psVar5))) goto LAB_1402fd426;
    if (uVar1 < 0x48) goto LAB_1402fd327;
    psVar11 = psVar5 + 0x24;
    piVar24 = (int *)(psVar5 + 0xb8);
    psVar15 = psVar5 + 0xc4;
    psVar25 = psVar5 + 0xd8;
    piVar14 = (int *)(psVar5 + 0xb6);
    pbVar20 = (byte *)(psVar5 + 0x14a);
    plVar21 = (longlong *)(psVar5 + 0x154);
    piVar19 = (int *)(psVar5 + 0x148);
    psVar16 = psVar5 + 0x168;
    piVar12 = (int *)(psVar5 + 0x146);
  }
  iVar13 = *piVar14 * 2 - *piVar12;
  iVar10 = iVar13 - *(int *)(psVar11 + 2);
  iVar13 = *(int *)(psVar11 + 2) - iVar13;
  if (-1 < iVar10) {
    iVar13 = iVar10;
  }
  if ((((*(short **)(psVar11 + 0x10) == psVar11 + 0x24) && (*(short **)psVar15 == psVar25)) &&
      (psVar15 = (short *)*plVar21, psVar15 == psVar16)) && (iVar13 < 8)) {
    iVar13 = *(int *)(psVar11 + 4) + *piVar24 * -2 + *piVar19;
    *piVar19 = *piVar19 - iVar13;
    if (psVar15 != (short *)0x0) {
      *(int *)(psVar15 + 4) = *(int *)(psVar15 + 4) - iVar13;
    }
    if ((ulonglong)((longlong)psVar18 + (-0x360 - (longlong)psVar5)) < 0x48) {
      *(int *)(psVar5 + 0x124) = *(int *)(psVar5 + 0x124) - iVar13;
      *(int *)(psVar5 + 400) = *(int *)(psVar5 + 400) - iVar13;
    }
    *pbVar20 = *pbVar20 | 4;
    if (*plVar21 != 0) {
      pbVar20 = (byte *)(*plVar21 + 0xc);
      *pbVar20 = *pbVar20 | 4;
    }
  }
LAB_1402fd426:
  if ((int)psVar17 != 0) {
    psVar15 = psVar5;
    psVar11 = psVar5;
    if (psVar5 < psVar18) {
      do {
        if (((*(byte *)(psVar15 + 6) & 4) == 0) &&
           (lVar6 = *(longlong *)(psVar15 + 0x14), lVar6 != 0)) {
          *(int *)(psVar15 + 4) =
               (*(int *)(lVar6 + 8) - *(int *)(lVar6 + 4)) + *(int *)(psVar15 + 2);
          psVar17 = (short *)(ulonglong)((int)psVar17 - 1);
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
        }
        psVar15 = psVar15 + 0x24;
      } while (psVar15 < psVar18);
      if ((int)psVar17 == 0) {
        return;
      }
    }
    for (; psVar11 < psVar18; psVar11 = psVar11 + 0x24) {
      psVar17 = psVar11;
      if ((*(byte *)(psVar11 + 6) & 4) == 0) {
        do {
          psVar15 = psVar17;
          psVar17 = psVar15 + -0x24;
          psVar25 = psVar11;
          if (psVar17 < psVar5) break;
        } while ((*(byte *)(psVar15 + -0x1e) & 4) == 0);
        do {
          psVar25 = psVar25 + 0x24;
          if (psVar18 <= psVar25) break;
        } while ((*(byte *)(psVar25 + 6) & 4) == 0);
        if (psVar17 < psVar5) {
          if (psVar25 < psVar18) {
            if (psVar5 <= psVar17) goto LAB_1402fd4e9;
            iVar10 = (*(int *)(psVar11 + 2) - *(int *)(psVar25 + 2)) + *(int *)(psVar25 + 4);
LAB_1402fd527:
            *(int *)(psVar11 + 4) = iVar10;
          }
        }
        else {
LAB_1402fd4e9:
          if (psVar25 < psVar18) {
            sVar4 = *psVar17;
            iVar13 = *(int *)(psVar15 + -0x20);
            if (*psVar25 != sVar4) {
              iVar10 = FUN_1402f20b0((int)*psVar11 - (int)sVar4,*(int *)(psVar25 + 4) - iVar13,
                                     (int)*psVar25 - (int)sVar4);
              iVar10 = iVar10 + iVar13;
              goto LAB_1402fd527;
            }
            *(int *)(psVar11 + 4) = iVar13;
          }
          else {
            *(int *)(psVar11 + 4) =
                 (*(int *)(psVar11 + 2) - *(int *)(psVar15 + -0x22)) + *(int *)(psVar15 + -0x20);
          }
        }
      }
    }
  }
  return;
}

