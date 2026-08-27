// Function: FUN_140301b80
// Addr: 140301b80
// Size: 1121 bytes


ulonglong FUN_140301b80(undefined8 *param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  short *psVar20;
  byte *pbVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined8 *local_res20;
  
  plVar3 = (longlong *)param_1[0x230];
  uVar4 = *param_1;
  lVar23 = (longlong)param_2;
  uVar22 = param_1[lVar23 * 0x113 + 10];
  puVar5 = (&PTR_DAT_140439450)[*(int *)(*plVar3 + 8)];
  if (uVar22 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = uVar22 + (ulonglong)*(uint *)(param_1 + lVar23 * 0x113 + 9) * 0x48;
  }
  *(undefined4 *)(param_1 + lVar23 * 0x113 + 0xb) = 0;
  lVar11 = 8;
  if (param_2 != 0) {
    lVar11 = 0x10;
  }
  iVar17 = *(int *)(lVar11 + (longlong)param_1);
  if (param_2 == 1) {
    uVar25 = puVar5[0x18];
  }
  else {
    uVar26 = 0;
    uVar25 = 0;
    if (param_2 == 0) {
      iVar10 = FUN_1402efa10(0x40,*(undefined4 *)(param_1 + 2));
      goto LAB_140301c1b;
    }
  }
  iVar10 = 0;
  uVar26 = uVar25;
LAB_140301c1b:
  iVar7 = FUN_1402efa10(0x20,iVar17);
  lVar11 = (longlong)*(int *)((longlong)plVar3 + lVar23 * 0x204 + 0x110) * (longlong)iVar17;
  iVar8 = (int)((ulonglong)((lVar11 >> 0x3f) + lVar11 + 0x8000) >> 0x10);
  if (0x10 < iVar8) {
    iVar8 = 0x10;
  }
  iVar8 = FUN_1402efa10(iVar8);
  uVar19 = uVar22;
  if (uVar22 < uVar24) {
    do {
      if ((*(short *)(uVar19 + 10) < iVar10) || (iVar7 < *(short *)(uVar19 + 4))) {
LAB_140301de0:
        uVar14 = 0;
      }
      else {
        cVar2 = *(char *)(uVar19 + 1);
        if ((cVar2 == '\x04') ||
           ((*(longlong *)(uVar19 + 0x28) != 0 && (*(short *)(uVar19 + 10) * 2 < iVar10 * 3))))
        goto LAB_140301de0;
        if (*(uint *)(param_1 + lVar23 * 0x113 + 0xb) != 0) {
          uVar14 = 0;
          do {
            lVar11 = param_1[lVar23 * 0x113 + 0xc] + uVar14 * 0x48;
            iVar15 = (int)*(short *)(param_1[lVar23 * 0x113 + 0xc] + uVar14 * 0x48);
            iVar9 = *(short *)(uVar19 + 2) - iVar15;
            iVar15 = iVar15 - *(short *)(uVar19 + 2);
            if (-1 < iVar9) {
              iVar15 = iVar9;
            }
            if ((iVar15 < iVar8) && (*(char *)(lVar11 + 0xd) == cVar2)) {
              *(undefined8 *)(uVar19 + 0x18) = *(undefined8 *)(lVar11 + 0x38);
              *(ulonglong *)(*(longlong *)(lVar11 + 0x40) + 0x18) = uVar19;
              *(ulonglong *)(lVar11 + 0x40) = uVar19;
              goto LAB_140301de0;
            }
            uVar18 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar18;
          } while (uVar18 < *(uint *)(param_1 + lVar23 * 0x113 + 0xb));
        }
        uVar12 = FUN_1402fcb20(param_1 + lVar23 * 0x113 + 9,(int)*(short *)(uVar19 + 2),(int)cVar2,
                               uVar26,uVar4,&local_res20);
        uVar14 = uVar12 & 0xffffffff;
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        *local_res20 = 0;
        local_res20[1] = 0;
        local_res20[2] = 0;
        local_res20[3] = 0;
        local_res20[4] = 0;
        local_res20[5] = 0;
        local_res20[6] = 0;
        local_res20[7] = 0;
        local_res20[7] = uVar19;
        local_res20[8] = uVar19;
        *(undefined1 *)((longlong)local_res20 + 0xd) = *(undefined1 *)(uVar19 + 1);
        *(undefined2 *)local_res20 = *(undefined2 *)(uVar19 + 2);
        lVar11 = (longlong)*(short *)(uVar19 + 2) * (longlong)iVar17;
        uVar16 = (undefined4)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
        *(undefined4 *)((longlong)local_res20 + 4) = uVar16;
        *(undefined4 *)(local_res20 + 1) = uVar16;
        *(ulonglong *)(uVar19 + 0x18) = uVar19;
      }
      uVar19 = uVar19 + 0x48;
    } while (uVar19 < uVar24);
    do {
      if ((*(char *)(uVar22 + 1) == '\x04') && (*(uint *)(param_1 + lVar23 * 0x113 + 0xb) != 0)) {
        uVar19 = 0;
        do {
          lVar11 = param_1[lVar23 * 0x113 + 0xc] + uVar19 * 0x48;
          iVar17 = (int)*(short *)(param_1[lVar23 * 0x113 + 0xc] + uVar19 * 0x48);
          iVar10 = *(short *)(uVar22 + 2) - iVar17;
          iVar17 = iVar17 - *(short *)(uVar22 + 2);
          if (-1 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar17 < iVar8) {
            *(undefined8 *)(uVar22 + 0x18) = *(undefined8 *)(lVar11 + 0x38);
            *(ulonglong *)(*(longlong *)(lVar11 + 0x40) + 0x18) = uVar22;
            *(ulonglong *)(lVar11 + 0x40) = uVar22;
            break;
          }
          uVar18 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
        } while (uVar18 < *(uint *)(param_1 + lVar23 * 0x113 + 0xb));
      }
      uVar22 = uVar22 + 0x48;
    } while (uVar22 < uVar24);
  }
  else {
    uVar14 = 0;
  }
  psVar20 = (short *)param_1[lVar23 * 0x113 + 0xc];
  if ((psVar20 != (short *)0x0) &&
     (psVar1 = psVar20 + (ulonglong)*(uint *)(param_1 + lVar23 * 0x113 + 0xb) * 0x24,
     psVar13 = psVar20, psVar20 < psVar1)) {
    do {
      lVar23 = *(longlong *)(psVar13 + 0x1c);
      if (lVar23 != 0) {
        do {
          *(short **)(lVar23 + 0x10) = psVar13;
          lVar23 = *(longlong *)(lVar23 + 0x18);
        } while (lVar23 != *(longlong *)(psVar13 + 0x1c));
      }
      psVar13 = psVar13 + 0x24;
    } while (psVar13 < psVar1);
    do {
      pbVar21 = *(byte **)(psVar20 + 0x1c);
      iVar10 = 0;
      iVar17 = 0;
      do {
        lVar23 = *(longlong *)(pbVar21 + 0x28);
        iVar8 = iVar10 + 1;
        if ((*pbVar21 & 1) == 0) {
          iVar8 = iVar10;
          iVar17 = iVar17 + 1;
        }
        iVar10 = iVar8;
        if (((lVar23 == 0) || (*(short **)(lVar23 + 0x10) == (short *)0x0)) ||
           (*(short **)(lVar23 + 0x10) == psVar20)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar11 = *(longlong *)(pbVar21 + 0x20);
        if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
          if (bVar6) goto LAB_140301f25;
        }
        else {
          psVar13 = *(short **)(psVar20 + 0x10);
          if (bVar6) {
LAB_140301f25:
            psVar13 = *(short **)(psVar20 + 0x14);
            lVar11 = lVar23;
          }
          if (psVar13 == (short *)0x0) {
LAB_140301f66:
            psVar13 = *(short **)(lVar11 + 0x10);
          }
          else {
            iVar7 = (int)*psVar20 - (int)*psVar13;
            iVar15 = (int)*(short *)(pbVar21 + 2) - (int)*(short *)(lVar11 + 2);
            iVar8 = (int)*psVar13 - (int)*psVar20;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            iVar7 = (int)*(short *)(lVar11 + 2) - (int)*(short *)(pbVar21 + 2);
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            if (iVar7 < iVar8) goto LAB_140301f66;
          }
          if (bVar6) {
            *(short **)(psVar20 + 0x14) = psVar13;
            *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 2;
          }
          else {
            *(short **)(psVar20 + 0x10) = psVar13;
          }
        }
        pbVar21 = *(byte **)(pbVar21 + 0x18);
      } while (pbVar21 != *(byte **)(psVar20 + 0x1c));
      *(undefined1 *)(psVar20 + 6) = 0;
      if ((0 < iVar10) && (iVar17 <= iVar10)) {
        *(undefined1 *)(psVar20 + 6) = 1;
      }
      if ((*(longlong *)(psVar20 + 0x14) != 0) && (*(longlong *)(psVar20 + 0x10) != 0)) {
        psVar20[0x14] = 0;
        psVar20[0x15] = 0;
        psVar20[0x16] = 0;
        psVar20[0x17] = 0;
      }
      psVar20 = psVar20 + 0x24;
    } while (psVar20 < psVar1);
    uVar14 = 0;
  }
  return uVar14;
}

