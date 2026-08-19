// Function: FUN_1403843a0
// Addr: 1403843a0
// Size: 7 bytes


void FUN_1403843a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  char cVar16;
  undefined4 uVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ushort uVar24;
  ulonglong uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  int iStack_68;
  uint *puStack_60;
  
  lVar10 = *(longlong *)(param_3 + 0x20);
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x70);
  *(undefined2 *)(lVar10 + 0x59) = 1;
  *(undefined4 *)(lVar10 + 0x5c) = 0;
  *(undefined4 *)(lVar10 + 100) = 0;
  lVar23 = *(longlong *)(param_3 + 0x80);
  iStack_68 = 0;
  if ((lVar23 == 0) || (*(uint *)(lVar23 + 4) < 2)) {
    puStack_60 = (uint *)0x0;
  }
  else {
    puStack_60 = *(uint **)(lVar23 + 8);
  }
  pbVar27 = (byte *)*param_1;
  lVar23 = (ulonglong)
           pbVar27[(ulonglong)pbVar27[5] +
                   (ulonglong)((uint)pbVar27[1] + (uint)*pbVar27 * 0x100 == 0) +
                   (ulonglong)pbVar27[4] * 0x100] + (ulonglong)pbVar27[6] * 0x40;
  bVar5 = pbVar27[lVar23 * 4 + (ulonglong)pbVar27[7] + 2];
  bVar6 = pbVar27[lVar23 * 4 + (ulonglong)pbVar27[7] + 3];
  cVar16 = *(char *)(lVar10 + 0x58);
  iVar29 = iStack_68;
  do {
    if (cVar16 == '\0') {
code_r0x000140384bf5:
      if ((*(char *)(lVar10 + 0x58) != '\0') &&
         (cVar16 = func_0x0001403ed130(lVar10,*(int *)(lVar10 + 0x60) - *(int *)(lVar10 + 0x5c)),
         cVar16 != '\0')) {
        if (*(longlong *)(lVar10 + 0x78) != *(longlong *)(lVar10 + 0x70)) {
          *(longlong *)(lVar10 + 0x80) = *(longlong *)(lVar10 + 0x70);
          *(longlong *)(lVar10 + 0x70) = *(longlong *)(lVar10 + 0x78);
        }
        *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)(lVar10 + 100);
      }
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x70);
      *(undefined1 *)(lVar10 + 0x59) = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
      *(undefined4 *)(lVar10 + 0x5c) = 0;
      return;
    }
    if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
      lVar23 = *(longlong *)(param_3 + 0xa8);
      lVar11 = *param_1;
      uVar26 = *(uint *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
      if (lVar23 != 0) {
        uVar24 = *(ushort *)(lVar23 + (ulonglong)(uVar26 & 0xff) * 2);
        if ((uVar24 != 0xffff) && (((uVar24 ^ uVar26) & 0xffffff00) == 0)) {
          uVar25 = (ulonglong)(uVar24 & 0xff);
          goto code_r0x000140384590;
        }
      }
      if (uVar26 == 0xffff) {
        uVar25 = 2;
      }
      else {
        pbVar27 = (byte *)((ulonglong)*(byte *)(lVar11 + 2) * 0x100 +
                          (ulonglong)*(byte *)(lVar11 + 3) + lVar11);
        uVar22 = (uVar26 - pbVar27[1]) + (uint)*pbVar27 * -0x100;
        if (uVar22 < (uint)pbVar27[3] + (uint)pbVar27[2] * 0x100) {
          uVar25 = (ulonglong)pbVar27[(ulonglong)uVar22 + 4];
          uVar24 = (ushort)pbVar27[(ulonglong)uVar22 + 4];
        }
        else {
          uVar25 = 1;
          uVar24 = 1;
        }
        if ((lVar23 != 0) && ((uVar26 & 0xffff0000) == 0)) {
          *(ushort *)(lVar23 + (ulonglong)(uVar26 & 0xff) * 2) = (ushort)uVar26 & 0xff00 | uVar24;
        }
      }
    }
    else {
      uVar25 = 0;
    }
code_r0x000140384590:
    while( true ) {
      pbVar27 = (byte *)*param_1;
      uVar22 = (uint)uVar25;
      uVar28 = (uint)pbVar27[1] + (uint)*pbVar27 * 0x100;
      uVar26 = uVar22;
      if (uVar28 <= uVar22) {
        uVar26 = 1;
      }
      lVar23 = (ulonglong)
               pbVar27[(ulonglong)pbVar27[5] +
                       (ulonglong)(uVar26 + uVar28 * iVar29) + (ulonglong)pbVar27[4] * 0x100] +
               (ulonglong)pbVar27[6] * 0x40;
      pbVar1 = pbVar27 + lVar23 * 4 + (ulonglong)pbVar27[7];
      iStack_68 = (int)((((uint)pbVar27[lVar23 * 4 + (ulonglong)pbVar27[7]] - (uint)pbVar27[4]) *
                         0x100 + (uint)pbVar1[1]) - (uint)pbVar27[5]) / (int)uVar28;
      uVar26 = (uint)pbVar1[3] + (uint)pbVar1[2] * 0x100;
      uVar28 = uVar26 & 0x4000;
      if (puStack_60 != (uint *)0x0) break;
      if ((((iVar29 != 0) || (iStack_68 != 0)) ||
          (((uint)bVar5 * 0x100 + (uint)bVar6 & 0x3fff) != 0)) ||
         (((uVar26 & 0x3fff) != 0 || (uVar28 != 0)))) goto code_r0x00014038488a;
      do {
        func_0x00014040e410(param_2,lVar10,param_1,pbVar1);
        iVar21 = *(int *)(lVar10 + 0x5c);
        if ((iVar21 == *(int *)(lVar10 + 0x60)) || (*(char *)(lVar10 + 0x58) == '\0')) break;
        if (*(char *)(lVar10 + 0x59) == '\0') {
code_r0x0001403846e4:
          *(int *)(lVar10 + 0x5c) = iVar21 + 1;
        }
        else {
          if ((*(longlong *)(lVar10 + 0x78) == *(longlong *)(lVar10 + 0x70)) &&
             (*(int *)(lVar10 + 100) == iVar21)) {
code_r0x0001403846e1:
            *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
            goto code_r0x0001403846e4;
          }
          cVar16 = func_0x0001403bf270(lVar10,*(int *)(lVar10 + 100) + 1);
          if (cVar16 != '\0') {
            uVar26 = *(uint *)(lVar10 + 0x5c);
            lVar23 = *(longlong *)(lVar10 + 0x70);
            uVar28 = *(uint *)(lVar10 + 100);
            puVar2 = (undefined4 *)(lVar23 + (ulonglong)uVar26 * 0x14);
            uVar17 = puVar2[1];
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            lVar11 = *(longlong *)(lVar10 + 0x78);
            puVar3 = (undefined4 *)(lVar11 + (ulonglong)uVar28 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar17;
            puVar3[2] = uVar13;
            puVar3[3] = uVar14;
            *(undefined4 *)(lVar11 + (ulonglong)uVar28 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar23 + 0x10 + (ulonglong)uVar26 * 0x14);
            iVar21 = *(int *)(lVar10 + 0x5c);
            goto code_r0x0001403846e1;
          }
        }
        if (*(uint *)(lVar10 + 0x5c) < *(uint *)(lVar10 + 0x60)) {
          lVar23 = *(longlong *)(param_3 + 0xa8);
          lVar11 = *param_1;
          uVar26 = *(uint *)(*(longlong *)(lVar10 + 0x70) +
                            (ulonglong)*(uint *)(lVar10 + 0x5c) * 0x14);
          if (lVar23 != 0) {
            uVar24 = *(ushort *)(lVar23 + (ulonglong)(uVar26 & 0xff) * 2);
            if ((uVar24 != 0xffff) && (((uVar24 ^ uVar26) & 0xffffff00) == 0)) {
              uVar25 = (ulonglong)(uVar24 & 0xff);
              goto code_r0x0001403847e1;
            }
          }
          if (uVar26 == 0xffff) {
            uVar25 = 2;
          }
          else {
            pbVar27 = (byte *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 3) +
                              (ulonglong)*(byte *)(lVar11 + 2) * 0x100);
            uVar28 = (uVar26 - pbVar27[1]) + (uint)*pbVar27 * -0x100;
            if (uVar28 < (uint)pbVar27[3] + (uint)pbVar27[2] * 0x100) {
              uVar25 = (ulonglong)pbVar27[(ulonglong)uVar28 + 4];
            }
            else {
              uVar25 = 1;
            }
            if ((lVar23 != 0) && ((uVar26 & 0xffff0000) == 0)) {
              *(ushort *)(lVar23 + (ulonglong)(uVar26 & 0xff) * 2) =
                   (ushort)uVar26 & 0xff00 | (ushort)uVar25;
            }
          }
        }
        else {
          uVar25 = 0;
        }
code_r0x0001403847e1:
      } while ((uint)uVar25 == uVar22);
      if ((*(int *)(lVar10 + 0x5c) == *(int *)(lVar10 + 0x60)) || (*(char *)(lVar10 + 0x58) == '\0')
         ) goto code_r0x000140384bf5;
    }
    uVar26 = *(uint *)(lVar10 + 0x5c);
    if (uVar26 < *(uint *)(lVar10 + 0x60)) {
      uVar9 = *(uint *)(*(longlong *)(lVar10 + 0x70) + 8 + (ulonglong)uVar26 * 0x14);
      uVar19 = puStack_60[1];
      while (uVar9 < uVar19) {
        uVar19 = puStack_60[-2];
        puStack_60 = puStack_60 + -3;
      }
      uVar19 = puStack_60[2];
      while (uVar19 < uVar9) {
        uVar19 = puStack_60[5];
        puStack_60 = puStack_60 + 3;
      }
    }
    if ((*puStack_60 & *(uint *)(param_3 + 0x88)) == 0) {
      if (uVar26 == *(uint *)(lVar10 + 0x60)) goto code_r0x000140384bf5;
      iStack_68 = 0;
      if (*(char *)(lVar10 + 0x59) == '\0') goto code_r0x000140384bc0;
      if (*(longlong *)(lVar10 + 0x78) == *(longlong *)(lVar10 + 0x70)) {
        bVar30 = *(uint *)(lVar10 + 100) == uVar26;
code_r0x000140384b7e:
        if (!bVar30) goto code_r0x000140384b80;
      }
      else {
code_r0x000140384b80:
        cVar16 = func_0x0001403bf270(lVar10,*(int *)(lVar10 + 100) + 1);
        if (cVar16 == '\0') goto code_r0x000140384bc3;
        uVar26 = *(uint *)(lVar10 + 0x5c);
        lVar23 = *(longlong *)(lVar10 + 0x70);
        uVar22 = *(uint *)(lVar10 + 100);
        puVar2 = (undefined4 *)(lVar23 + (ulonglong)uVar26 * 0x14);
        uVar17 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        lVar11 = *(longlong *)(lVar10 + 0x78);
        puVar3 = (undefined4 *)(lVar11 + (ulonglong)uVar22 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar17;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        *(undefined4 *)(lVar11 + (ulonglong)uVar22 * 0x14 + 0x10) =
             *(undefined4 *)(lVar23 + 0x10 + (ulonglong)uVar26 * 0x14);
      }
      *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
code_r0x000140384bc0:
      *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 1;
    }
    else {
code_r0x00014038488a:
      bVar7 = pbVar1[2];
      if (((uint)bVar7 * 0x100 + (uint)pbVar1[3] & 0x3fff) == 0) {
        if ((iVar29 != 0) && (((bVar7 & 0x40) == 0 || (iStack_68 != 0)))) {
          pbVar27 = (byte *)*param_1;
          if ((uint)*pbVar27 * 0x100 + (uint)pbVar27[1] <= uVar22) {
            uVar25 = 1;
          }
          bVar8 = pbVar27[7];
          lVar23 = (ulonglong)
                   pbVar27[(ulonglong)pbVar27[5] + (ulonglong)pbVar27[4] * 0x100 + uVar25] +
                   (ulonglong)pbVar27[6] * 0x40;
          uVar26 = (uint)pbVar27[lVar23 * 4 + (ulonglong)bVar8 + 3] +
                   (uint)pbVar27[lVar23 * 4 + (ulonglong)bVar8 + 2] * 0x100;
          if ((((uVar26 & 0x3fff) != 0) ||
              (iStack_68 !=
               (int)(((uint)pbVar27[lVar23 * 4 + (ulonglong)bVar8] * 0x100 +
                      (uint)pbVar27[4] * -0x100 + (uint)(pbVar27 + lVar23 * 4 + (ulonglong)bVar8)[1]
                     ) - (uint)pbVar27[5]) / (int)(uint)CONCAT11(*pbVar27,pbVar27[1]))) ||
             ((bVar7 & 0x40) << 8 != (uVar26 & 0x4000))) goto code_r0x0001403849f1;
        }
        pbVar27 = (byte *)*param_1;
        iVar21 = (uint)pbVar27[1] + (uint)*pbVar27 * 0x100;
        lVar23 = (ulonglong)
                 pbVar27[(ulonglong)pbVar27[4] * 0x100 +
                         (ulonglong)(iVar21 * iVar29 + (uint)(iVar21 == 0)) + (ulonglong)pbVar27[5]]
                 + (ulonglong)pbVar27[6] * 0x40;
        if (((uint)pbVar27[lVar23 * 4 + (ulonglong)pbVar27[7] + 3] +
             (uint)pbVar27[lVar23 * 4 + (ulonglong)pbVar27[7] + 2] * 0x100 & 0x3fff) != 0)
        goto code_r0x0001403849f1;
      }
      else {
code_r0x0001403849f1:
        cVar16 = *(char *)(lVar10 + 0x59);
        piVar18 = (int *)(lVar10 + 100);
        if (cVar16 == '\0') {
          piVar18 = (int *)(lVar10 + 0x5c);
        }
        if (*piVar18 != 0) {
          uVar26 = *(uint *)(lVar10 + 0x60);
          uVar22 = *(uint *)(lVar10 + 0x5c);
          if (uVar22 < uVar26) {
            uVar19 = uVar22;
            if (cVar16 != '\0') {
              uVar19 = *(uint *)(lVar10 + 100);
            }
            iVar29 = uVar19 - 1;
            uVar19 = uVar22 + 1;
            if ((uVar19 == 0xffffffff) || ((uVar22 - iVar29) + 1 < 0x100)) {
              uVar12 = *(undefined8 *)(lVar10 + 0x70);
              if (uVar19 <= uVar26) {
                uVar26 = uVar19;
              }
              uVar25 = (ulonglong)uVar26;
              if (cVar16 == '\0') {
                uVar17 = FUN_1403a1af0(lVar10,uVar12,iVar29,uVar26,0xffffffff);
                FUN_1403a1c90(lVar10,uVar12,iVar29,uVar26,uVar17,3);
              }
              else {
                uVar17 = FUN_1403a1af0(lVar10,uVar12,uVar22,uVar26,0xffffffff);
                iVar21 = FUN_1403a1af0(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar29,
                                       *(undefined4 *)(lVar10 + 100),uVar17);
                FUN_1403a1c90(lVar10,*(undefined8 *)(lVar10 + 0x78),iVar29,
                              *(undefined4 *)(lVar10 + 100),iVar21,3);
                uVar22 = *(uint *)(lVar10 + 0x5c);
                uVar20 = (ulonglong)uVar22;
                if (uVar22 != uVar26) {
                  lVar23 = *(longlong *)(lVar10 + 0x70);
                  piVar18 = (int *)(lVar10 + 0xe0);
                  *piVar18 = *piVar18 + (uVar22 - uVar26);
                  if (*piVar18 < 0) {
                    *(undefined1 *)(lVar10 + 0x58) = 0;
                  }
                  uVar15 = uVar20;
                  if (*(int *)(lVar10 + 0x1c) == 2) {
joined_r0x000140384c99:
                    while (uVar22 < uVar26) {
                      if (iVar21 != *(int *)(lVar23 + 8 + uVar20 * 0x14)) {
                        puVar4 = (uint *)(lVar23 + 4 + uVar20 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                      uVar22 = (int)uVar15 + 1;
                      uVar20 = uVar20 + 1;
                      uVar15 = (ulonglong)uVar22;
                    }
                  }
                  else {
                    iVar29 = *(int *)(lVar23 + 8 + uVar20 * 0x14);
                    if (iVar21 == iVar29) {
                      while (uVar22 < uVar26) {
                        uVar26 = (int)uVar25 - 1;
                        uVar25 = (ulonglong)uVar26;
                        if (*(int *)(lVar23 + 8 + uVar25 * 0x14) == iVar29) break;
                        puVar4 = (uint *)(lVar23 + 4 + uVar25 * 0x14);
                        *puVar4 = *puVar4 | 3;
                      }
                    }
                    else {
                      iVar29 = *(int *)(lVar23 + 8 + (ulonglong)(uVar26 - 1) * 0x14);
                      if (iVar21 != iVar29) goto joined_r0x000140384c99;
                      while ((uVar22 < uVar26 && (*(int *)(lVar23 + 8 + uVar20 * 0x14) != iVar29)))
                      {
                        puVar4 = (uint *)(lVar23 + 4 + uVar20 * 0x14);
                        *puVar4 = *puVar4 | 3;
                        uVar22 = (int)uVar20 + 1;
                        uVar20 = (ulonglong)uVar22;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      func_0x00014040e410(param_2,lVar10,param_1,pbVar1);
      if (*(int *)(lVar10 + 0x5c) == *(int *)(lVar10 + 0x60)) goto code_r0x000140384bf5;
      if ((uVar28 == 0) ||
         (iVar29 = *(int *)(lVar10 + 0xe0), *(int *)(lVar10 + 0xe0) = iVar29 + -1, iVar29 < 1)) {
        if (*(char *)(lVar10 + 0x59) != '\0') {
          if (*(longlong *)(lVar10 + 0x78) == *(longlong *)(lVar10 + 0x70)) {
            bVar30 = *(int *)(lVar10 + 100) == *(int *)(lVar10 + 0x5c);
            goto code_r0x000140384b7e;
          }
          goto code_r0x000140384b80;
        }
        goto code_r0x000140384bc0;
      }
    }
code_r0x000140384bc3:
    cVar16 = *(char *)(lVar10 + 0x58);
    iVar29 = iStack_68;
  } while( true );
}

