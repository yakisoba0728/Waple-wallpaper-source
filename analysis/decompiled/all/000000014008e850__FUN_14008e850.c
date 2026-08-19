// Function: FUN_14008e850
// Addr: 14008e850
// Size: 2347 bytes


/* WARNING: Type propagation algorithm not settling */

char FUN_14008e850(longlong param_1,char *param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *******pppppppuVar11;
  longlong lVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  char cVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [40];
  
  puVar20 = auStack_a8;
  pbVar14 = *(byte **)(param_1 + 0x80);
  while (pbVar14 != *(byte **)(param_1 + 0x78)) {
    bVar3 = *pbVar14;
    if (((0x20 < bVar3) || ((0x100002200U >> ((longlong)(char)bVar3 & 0x3fU) & 1) == 0)) &&
       (bVar3 != 10)) break;
    pbVar14 = pbVar14 + 1;
    *(byte **)(param_1 + 0x80) = pbVar14;
  }
  *(byte **)(param_2 + 8) = pbVar14;
  pbVar14 = *(byte **)(param_1 + 0x80);
  iVar13 = 0;
  if (pbVar14 != *(byte **)(param_1 + 0x78)) {
    bVar3 = *pbVar14;
    iVar13 = (int)(char)bVar3;
    *(byte **)(param_1 + 0x80) = pbVar14 + 1;
    if (bVar3 < 0x7e) goto LAB_14008e909;
    goto switchD_14008e927_caseD_12;
  }
LAB_14008e909:
  cVar21 = '\x01';
  pcVar22 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_14008f28c)[iVar13]) {
  case 0:
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 1:
    param_2[0] = '\x05';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    cVar8 = '\0';
    pcVar22 = *(char **)(param_1 + 0x80);
joined_r0x00014008e970:
    do {
      if (pcVar22 == *(char **)(param_1 + 0x78)) {
LAB_14008e9ad:
        cVar21 = cVar8 == '\"';
        break;
      }
      cVar8 = *pcVar22;
      pcVar9 = pcVar22 + 1;
      *(char **)(param_1 + 0x80) = pcVar9;
      if (cVar8 == '\\') {
        if (pcVar9 == *(char **)(param_1 + 0x78)) goto LAB_14008e9ad;
        *(char **)(param_1 + 0x80) = pcVar22 + 2;
        pcVar22 = pcVar22 + 2;
        goto joined_r0x00014008e970;
      }
      cVar21 = true;
      pcVar22 = pcVar9;
    } while (cVar8 != '\"');
    break;
  case 2:
    if (*(char *)(param_1 + 0xc5) == '\0') goto switchD_14008e927_caseD_12;
    param_2[0] = '\x05';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    cVar8 = '\0';
    pcVar22 = *(char **)(param_1 + 0x80);
joined_r0x00014008e9dd:
    do {
      if (pcVar22 == *(char **)(param_1 + 0x78)) {
LAB_14008ea0d:
        cVar21 = cVar8 == '\'';
        break;
      }
      cVar8 = *pcVar22;
      pcVar9 = pcVar22 + 1;
      *(char **)(param_1 + 0x80) = pcVar9;
      if (cVar8 == '\\') {
        if (pcVar9 == *(char **)(param_1 + 0x78)) goto LAB_14008ea0d;
        *(char **)(param_1 + 0x80) = pcVar22 + 2;
        pcVar22 = pcVar22 + 2;
        goto joined_r0x00014008e9dd;
      }
      cVar21 = true;
      pcVar22 = pcVar9;
    } while (cVar8 != '\'');
    break;
  case 3:
    cVar8 = FUN_14008f350(param_1,1);
    if (cVar8 != '\0') {
LAB_14008ef43:
      param_2[0] = '\x06';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      goto LAB_14008f1f3;
    }
    param_2[0] = '\v';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    if ((*(char *)(param_1 + 200) != '\0') &&
       (lVar12 = *(longlong *)(param_1 + 0x80), 6 < *(longlong *)(param_1 + 0x78) - lVar12)) {
      iVar13 = 7;
      do {
        iVar13 = iVar13 + -1;
        if (*(char *)(lVar12 + iVar13) != "nfinity"[iVar13]) goto switchD_14008e927_caseD_12;
      } while (iVar13 != 0);
      cVar21 = '\x01';
      *(longlong *)(param_1 + 0x80) = lVar12 + 7;
      goto LAB_14008f1f3;
    }
  case 0x12:
switchD_14008e927_caseD_12:
    cVar21 = false;
    goto LAB_14008f1ec;
  case 4:
    param_2[0] = '\r';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 5:
    cVar8 = FUN_14008f350(param_1,1);
    if (cVar8 != '\0') goto LAB_14008ef43;
    param_2[0] = '\f';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    if ((*(char *)(param_1 + 200) != '\0') &&
       (lVar12 = *(longlong *)(param_1 + 0x80), 6 < *(longlong *)(param_1 + 0x78) - lVar12)) {
      iVar13 = 7;
      do {
        iVar13 = iVar13 + -1;
        if (*(char *)(lVar12 + iVar13) != "nfinity"[iVar13]) goto switchD_14008e927_caseD_12;
      } while (iVar13 != 0);
      cVar21 = '\x01';
      *(longlong *)(param_1 + 0x80) = lVar12 + 7;
      goto LAB_14008f1f3;
    }
    goto switchD_14008e927_caseD_12;
  case 6:
    param_2[0] = '\x0f';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    pcVar22 = *(char **)(param_1 + 0x80);
    pcVar9 = *(char **)(param_1 + 0x78);
    if (pcVar22 != pcVar9) {
      cVar8 = *pcVar22;
      pcVar15 = pcVar22 + 1;
      cVar21 = cVar8 == '/';
      *(char **)(param_1 + 0x80) = pcVar15;
      if (cVar8 == '*') {
        bVar5 = false;
        pcVar10 = pcVar22 + 2;
        while (pcVar10 < pcVar9) {
          if (pcVar15 != pcVar9) {
            cVar8 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            *(char **)(param_1 + 0x80) = pcVar15;
            if (cVar8 == '*') {
              if (*pcVar15 == '/') break;
            }
            else if (cVar8 == '\n') {
              bVar5 = true;
            }
          }
          pcVar10 = pcVar15 + 1;
        }
        if (pcVar15 == pcVar9) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *pcVar15;
          *(char **)(param_1 + 0x80) = pcVar15 + 1;
        }
        if (cVar8 == '/') {
LAB_14008eb00:
          if (*(char *)(param_1 + 0xd8) != '\0') {
            pcVar9 = pcVar22 + -1;
            bVar6 = false;
            if ((*(char *)(param_1 + 0x98) == '\0') &&
               (pcVar15 = *(char **)(param_1 + 0x88), pcVar15 != (char *)0x0)) {
              if (pcVar15 == pcVar9) {
LAB_14008eb49:
                if (((bool)cVar21) || (!bVar5)) {
                  bVar6 = true;
                  *(undefined1 *)(param_1 + 0x98) = 1;
                }
              }
              else {
                for (; (*pcVar15 != '\n' && (*pcVar15 != '\r')); pcVar15 = pcVar15 + 1) {
                  if (pcVar15 == pcVar22 + -2) goto LAB_14008eb49;
                }
              }
            }
            pcVar15 = *(char **)(param_1 + 0x80);
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            local_88 = (undefined8 *******)0x0;
            FUN_140053080(&local_88,(longlong)pcVar15 - (longlong)pcVar9);
            while (uVar7 = local_70, uVar17 = local_78, pppppppuVar11 = local_88, pcVar9 != pcVar15)
            {
              pcVar10 = pcVar9 + 1;
              if (*pcVar9 == '\r') {
                if ((pcVar10 != pcVar15) && (*pcVar10 == '\n')) {
                  pcVar10 = pcVar9 + 2;
                }
                if (local_70 <= local_78) {
                  if (local_78 == 0x7fffffffffffffff) {
LAB_14008f233:
                    /* WARNING: Subroutine does not return */
                    FUN_1400173b0();
                  }
                  uVar19 = local_78 + 1;
                  uVar18 = uVar19 | 0xf;
                  if (uVar18 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (local_70 >> 1) < local_70) {
                      uVar18 = 0x7fffffffffffffff;
                      uVar16 = 0x8000000000000027;
                    }
                    else {
                      uVar23 = (local_70 >> 1) + local_70;
                      if (uVar18 < uVar23) {
                        uVar18 = uVar23;
                      }
                      uVar23 = uVar18 + 1;
                      if (uVar23 == 0) {
                        uVar23 = 0;
                        goto LAB_14008ec9d;
                      }
                      if (uVar23 < 0x1000) {
                        uVar23 = func_0x00014028aff0(uVar23);
                        goto LAB_14008ec9d;
                      }
                      uVar16 = uVar18 + 0x28;
                      if (uVar16 <= uVar23) {
LAB_14008f239:
                    /* WARNING: Subroutine does not return */
                        FUN_140017440();
                      }
                    }
                  }
                  else {
                    uVar18 = 0x7fffffffffffffff;
                    uVar16 = 0x8000000000000027;
                  }
                  lVar12 = func_0x00014028aff0(uVar16);
                  if (lVar12 != 0) {
                    uVar23 = lVar12 + 0x27U & 0xffffffffffffffe0;
                    *(longlong *)(uVar23 - 8) = lVar12;
LAB_14008ec9d:
                    local_78 = uVar19;
                    local_70 = uVar18;
                    if (uVar7 < 0x10) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(uVar23,&local_88,uVar17);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(uVar23,pppppppuVar11,uVar17);
                  }
                  goto LAB_14008ef18;
                }
                pppppppuVar11 = &local_88;
                if (0xf < local_70) {
                  pppppppuVar11 = local_88;
                }
                puVar1 = (undefined2 *)((longlong)pppppppuVar11 + local_78);
                local_78 = local_78 + 1;
                *puVar1 = 10;
                pcVar9 = pcVar10;
              }
              else {
                if (local_70 <= local_78) {
                  if (local_78 == 0x7fffffffffffffff) goto LAB_14008f233;
                  uVar19 = local_78 + 1 | 0xf;
                  if (uVar19 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (local_70 >> 1) < local_70) {
                      uVar19 = 0x7fffffffffffffff;
                      uVar23 = 0x8000000000000027;
                    }
                    else {
                      uVar18 = (local_70 >> 1) + local_70;
                      if (uVar19 < uVar18) {
                        uVar19 = uVar18;
                      }
                      uVar18 = uVar19 + 1;
                      if (uVar18 == 0) {
                        uVar18 = 0;
                        goto LAB_14008ee13;
                      }
                      if (uVar18 < 0x1000) {
                        uVar18 = func_0x00014028aff0(uVar18);
                        goto LAB_14008ee13;
                      }
                      uVar23 = uVar19 + 0x28;
                      if (uVar23 <= uVar18) goto LAB_14008f239;
                    }
                  }
                  else {
                    uVar19 = 0x7fffffffffffffff;
                    uVar23 = 0x8000000000000027;
                  }
                  lVar12 = func_0x00014028aff0(uVar23);
                  if (lVar12 != 0) {
                    uVar18 = lVar12 + 0x27U & 0xffffffffffffffe0;
                    *(longlong *)(uVar18 - 8) = lVar12;
LAB_14008ee13:
                    local_78 = uVar17 + 1;
                    local_70 = uVar19;
                    if (uVar7 < 0x10) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(uVar18,&local_88,uVar17);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(uVar18,pppppppuVar11,uVar17);
                  }
                  goto LAB_14008ef18;
                }
                pppppppuVar11 = &local_88;
                if (0xf < local_70) {
                  pppppppuVar11 = local_88;
                }
                pcVar2 = (char *)((longlong)pppppppuVar11 + local_78);
                local_78 = local_78 + 1;
                *pcVar2 = *pcVar9;
                *(undefined1 *)((longlong)pppppppuVar11 + uVar17 + 1) = 0;
                pcVar9 = pcVar10;
              }
            }
            if (bVar6) {
              if (*(longlong *)(param_1 + 0x90) == 0) {
                func_0x0001402cba34(L"lastValue_ != nullptr",
                                    L"D:\\dev\\we\\windows\\src\\json\\src\\json_reader.cpp",0x536);
              }
                    /* WARNING: Subroutine does not return */
              FUN_140017090(local_68,&local_88);
            }
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = local_88;
            }
            func_0x000140053370(param_1 + 0xa0,pppppppuVar11,local_78);
            if (0xf < local_70) {
              uVar17 = local_70 + 1;
              pppppppuVar11 = local_88;
              if (0xfff < uVar17) {
                pppppppuVar11 = (undefined8 *******)local_88[-1];
                if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11))) {
LAB_14008ef18:
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)(5);
                  puVar20 = auStack_a0;
                  goto switchD_14008e927_caseD_7;
                }
                uVar17 = local_70 + 0x28;
              }
              func_0x00014028b040(pppppppuVar11,uVar17);
            }
          }
          cVar21 = true;
          break;
        }
      }
      else if ((bool)cVar21) {
        if (pcVar15 == pcVar9) {
LAB_14008eaf9:
          bVar5 = false;
        }
        else {
          do {
            cVar8 = *pcVar15;
            pcVar10 = pcVar15 + 1;
            *(char **)(param_1 + 0x80) = pcVar10;
            if (cVar8 == '\n') goto LAB_14008eaf9;
            if (cVar8 == '\r') {
              if ((pcVar10 != pcVar9) && (*pcVar10 == '\n')) {
                *(char **)(param_1 + 0x80) = pcVar15 + 2;
              }
              goto LAB_14008eaf9;
            }
            pcVar15 = pcVar10;
          } while (pcVar10 != pcVar9);
          bVar5 = false;
        }
        goto LAB_14008eb00;
      }
    }
    cVar21 = false;
    break;
  case 7:
switchD_14008e927_caseD_7:
    pcVar22[0] = '\x06';
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    *(undefined8 *)(puVar20 + -8) = 0x14008ef30;
    FUN_14008f350(param_1,0);
    param_2 = pcVar22;
    goto LAB_14008f1f3;
  case 8:
    param_2[0] = '\x0e';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 9:
    if (*(char *)(param_1 + 200) == '\0') goto switchD_14008e927_caseD_12;
    param_2[0] = '\v';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar12 < 7) goto LAB_14008f1c8;
    iVar13 = 7;
    do {
      iVar13 = iVar13 + -1;
      if (*(char *)(lVar12 + iVar13) != "nfinity"[iVar13]) goto LAB_14008f1c8;
    } while (iVar13 != 0);
    cVar21 = true;
    *(longlong *)(param_1 + 0x80) = lVar12 + 7;
    break;
  case 10:
    if (*(char *)(param_1 + 200) == '\0') goto switchD_14008e927_caseD_12;
    param_2[0] = '\n';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar12 < 2) goto LAB_14008f1c8;
    iVar13 = 2;
    do {
      iVar13 = iVar13 + -1;
      if (*(char *)(lVar12 + iVar13) != (&DAT_140485550)[iVar13]) goto LAB_14008f1c8;
    } while (iVar13 != 0);
    cVar21 = true;
    *(longlong *)(param_1 + 0x80) = lVar12 + 2;
    break;
  case 0xb:
    param_2[0] = '\x03';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 0xc:
    param_2[0] = '\x04';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 0xd:
    param_2[0] = '\b';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar12 < 4) {
LAB_14008f1c8:
      cVar21 = false;
    }
    else {
      iVar13 = 4;
      do {
        iVar13 = iVar13 + -1;
        if (*(char *)(lVar12 + iVar13) != (&UNK_1404851bc)[iVar13]) goto LAB_14008f1c8;
      } while (iVar13 != 0);
      cVar21 = true;
      *(longlong *)(param_1 + 0x80) = lVar12 + 4;
    }
    break;
  case 0xe:
    param_2[0] = '\t';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar12 < 3) goto LAB_14008f1c8;
    iVar13 = 3;
    do {
      iVar13 = iVar13 + -1;
      if (*(char *)(lVar12 + iVar13) != (&UNK_1404851b8)[iVar13]) goto LAB_14008f1c8;
    } while (iVar13 != 0);
    cVar21 = true;
    *(longlong *)(param_1 + 0x80) = lVar12 + 3;
    break;
  case 0xf:
    param_2[0] = '\a';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar12 < 3) goto LAB_14008f1c8;
    iVar13 = 3;
    do {
      iVar13 = iVar13 + -1;
      if (*(char *)(lVar12 + iVar13) != (&UNK_140485184)[iVar13]) goto LAB_14008f1c8;
    } while (iVar13 != 0);
    cVar21 = true;
    *(longlong *)(param_1 + 0x80) = lVar12 + 3;
    break;
  case 0x10:
    param_2[0] = '\x01';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  case 0x11:
    param_2[0] = '\x02';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f1f3;
  }
  if ((bool)cVar21 == false) {
LAB_14008f1ec:
    param_2[0] = '\x10';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
LAB_14008f1f3:
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x80);
  return cVar21;
}

