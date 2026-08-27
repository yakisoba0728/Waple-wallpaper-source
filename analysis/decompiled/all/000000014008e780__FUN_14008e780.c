// Function: FUN_14008e780
// Addr: 14008e780
// Size: 2541 bytes


/* WARNING: Type propagation algorithm not settling */

char FUN_14008e780(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  char cVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 uVar15;
  int iVar16;
  byte *pbVar17;
  char *pcVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  char cVar24;
  char *pcVar25;
  undefined8 *******pppppppuVar26;
  char *local_res20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [40];
  
  puVar23 = auStack_a8;
  pbVar17 = *(byte **)(param_1 + 0x80);
  while (pbVar17 != *(byte **)(param_1 + 0x78)) {
    bVar4 = *pbVar17;
    if (((0x20 < bVar4) || ((0x100002200U >> ((longlong)(char)bVar4 & 0x3fU) & 1) == 0)) &&
       (bVar4 != 10)) break;
    pbVar17 = pbVar17 + 1;
    *(byte **)(param_1 + 0x80) = pbVar17;
  }
  *(byte **)(param_2 + 8) = pbVar17;
  pbVar17 = *(byte **)(param_1 + 0x80);
  iVar16 = 0;
  if (pbVar17 != *(byte **)(param_1 + 0x78)) {
    bVar4 = *pbVar17;
    iVar16 = (int)(char)bVar4;
    *(byte **)(param_1 + 0x80) = pbVar17 + 1;
    if (bVar4 < 0x7e) goto LAB_14008e839;
    goto switchD_14008e857_caseD_12;
  }
LAB_14008e839:
  cVar24 = '\x01';
  pcVar25 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_14008f1bc)[iVar16]) {
  case 0:
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 1:
    param_2[0] = '\x05';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    cVar11 = '\0';
    pcVar25 = *(char **)(param_1 + 0x80);
joined_r0x00014008e8a0:
    do {
      if (pcVar25 == *(char **)(param_1 + 0x78)) {
LAB_14008e8dd:
        cVar24 = cVar11 == '\"';
        break;
      }
      cVar11 = *pcVar25;
      pcVar12 = pcVar25 + 1;
      *(char **)(param_1 + 0x80) = pcVar12;
      if (cVar11 == '\\') {
        if (pcVar12 == *(char **)(param_1 + 0x78)) goto LAB_14008e8dd;
        *(char **)(param_1 + 0x80) = pcVar25 + 2;
        pcVar25 = pcVar25 + 2;
        goto joined_r0x00014008e8a0;
      }
      cVar24 = true;
      pcVar25 = pcVar12;
    } while (cVar11 != '\"');
    break;
  case 2:
    if (*(char *)(param_1 + 0xc5) == '\0') goto switchD_14008e857_caseD_12;
    param_2[0] = '\x05';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    cVar11 = '\0';
    pcVar25 = *(char **)(param_1 + 0x80);
joined_r0x00014008e90d:
    do {
      if (pcVar25 == *(char **)(param_1 + 0x78)) {
LAB_14008e93d:
        cVar24 = cVar11 == '\'';
        break;
      }
      cVar11 = *pcVar25;
      pcVar12 = pcVar25 + 1;
      *(char **)(param_1 + 0x80) = pcVar12;
      if (cVar11 == '\\') {
        if (pcVar12 == *(char **)(param_1 + 0x78)) goto LAB_14008e93d;
        *(char **)(param_1 + 0x80) = pcVar25 + 2;
        pcVar25 = pcVar25 + 2;
        goto joined_r0x00014008e90d;
      }
      cVar24 = true;
      pcVar25 = pcVar12;
    } while (cVar11 != '\'');
    break;
  case 3:
    cVar11 = FUN_14008f280(param_1,1);
    if (cVar11 != '\0') {
LAB_14008ee73:
      param_2[0] = '\x06';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      goto LAB_14008f123;
    }
    param_2[0] = '\v';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    if ((*(char *)(param_1 + 200) != '\0') &&
       (lVar6 = *(longlong *)(param_1 + 0x80), 6 < *(longlong *)(param_1 + 0x78) - lVar6)) {
      iVar16 = 7;
      do {
        iVar16 = iVar16 + -1;
        if (*(char *)(lVar6 + iVar16) != "nfinity"[iVar16]) goto switchD_14008e857_caseD_12;
      } while (iVar16 != 0);
      cVar24 = '\x01';
      *(longlong *)(param_1 + 0x80) = lVar6 + 7;
      goto LAB_14008f123;
    }
  case 0x12:
switchD_14008e857_caseD_12:
    cVar24 = false;
    goto LAB_14008f11c;
  case 4:
    param_2[0] = '\r';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 5:
    cVar11 = FUN_14008f280(param_1,1);
    if (cVar11 != '\0') goto LAB_14008ee73;
    param_2[0] = '\f';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    if ((*(char *)(param_1 + 200) != '\0') &&
       (lVar6 = *(longlong *)(param_1 + 0x80), 6 < *(longlong *)(param_1 + 0x78) - lVar6)) {
      iVar16 = 7;
      do {
        iVar16 = iVar16 + -1;
        if (*(char *)(lVar6 + iVar16) != "nfinity"[iVar16]) goto switchD_14008e857_caseD_12;
      } while (iVar16 != 0);
      cVar24 = '\x01';
      *(longlong *)(param_1 + 0x80) = lVar6 + 7;
      goto LAB_14008f123;
    }
    goto switchD_14008e857_caseD_12;
  case 6:
    param_2[0] = '\x0f';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    pcVar25 = *(char **)(param_1 + 0x80);
    pcVar12 = *(char **)(param_1 + 0x78);
    if (pcVar25 != pcVar12) {
      cVar11 = *pcVar25;
      pcVar18 = pcVar25 + 1;
      cVar24 = cVar11 == '/';
      *(char **)(param_1 + 0x80) = pcVar18;
      if (cVar11 == '*') {
        bVar8 = false;
        pcVar1 = pcVar25 + 2;
        while (pcVar1 < pcVar12) {
          if (pcVar18 != pcVar12) {
            cVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            *(char **)(param_1 + 0x80) = pcVar18;
            if (cVar11 == '*') {
              if (*pcVar18 == '/') break;
            }
            else if (cVar11 == '\n') {
              bVar8 = true;
            }
          }
          pcVar1 = pcVar18 + 1;
        }
        if (pcVar18 == pcVar12) {
          cVar11 = '\0';
        }
        else {
          cVar11 = *pcVar18;
          *(char **)(param_1 + 0x80) = pcVar18 + 1;
        }
        if (cVar11 == '/') {
LAB_14008ea30:
          if (*(char *)(param_1 + 0xd8) != '\0') {
            pcVar12 = pcVar25 + -1;
            bVar9 = false;
            if ((*(char *)(param_1 + 0x98) == '\0') &&
               (pcVar18 = *(char **)(param_1 + 0x88), pcVar18 != (char *)0x0)) {
              if (pcVar18 == pcVar12) {
LAB_14008ea79:
                if (((bool)cVar24) || (!bVar8)) {
                  bVar9 = true;
                  *(undefined1 *)(param_1 + 0x98) = 1;
                }
              }
              else {
                for (; (*pcVar18 != '\n' && (*pcVar18 != '\r')); pcVar18 = pcVar18 + 1) {
                  if (pcVar18 == pcVar25 + -2) goto LAB_14008ea79;
                }
              }
            }
            pcVar18 = *(char **)(param_1 + 0x80);
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            local_88 = (undefined8 *******)0x0;
            FUN_140052fb0(&local_88,(longlong)pcVar18 - (longlong)pcVar12);
            uVar21 = local_70;
            while (uVar10 = local_78, pppppppuVar13 = local_88, pcVar12 != pcVar18) {
              cVar11 = *pcVar12;
              local_res20 = pcVar12 + 1;
              if (cVar11 == '\r') {
                if ((local_res20 != pcVar18) && (*local_res20 == '\n')) {
                  local_res20 = pcVar12 + 2;
                }
                pcVar12 = local_res20;
                if (local_78 < uVar21) {
                  pppppppuVar13 = &local_88;
                  if (0xf < uVar21) {
                    pppppppuVar13 = local_88;
                  }
                  puVar3 = (undefined2 *)((longlong)pppppppuVar13 + local_78);
                  local_78 = local_78 + 1;
                  *puVar3 = 10;
                  uVar21 = local_70;
                }
                else {
                  if (local_78 == 0x7fffffffffffffff) {
LAB_14008f163:
                    /* WARNING: Subroutine does not return */
                    FUN_1400172e0();
                  }
                  uVar20 = local_78 + 1;
                  uVar22 = uVar20 | 0xf;
                  if (uVar22 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (uVar21 >> 1) < uVar21) {
                      uVar22 = 0x7fffffffffffffff;
                      uVar19 = 0x8000000000000027;
                      goto LAB_14008eba6;
                    }
                    uVar19 = (uVar21 >> 1) + uVar21;
                    if (uVar22 < uVar19) {
                      uVar22 = uVar19;
                    }
                    uVar2 = uVar22 + 1;
                    if (uVar2 == 0) {
                      pppppppuVar26 = (undefined8 *******)0x0;
                    }
                    else {
                      if (0xfff < uVar2) {
                        uVar19 = uVar22 + 0x28;
                        if (uVar19 <= uVar2) {
LAB_14008f169:
                    /* WARNING: Subroutine does not return */
                          FUN_140017370();
                        }
                        goto LAB_14008eba6;
                      }
                      pppppppuVar26 = (undefined8 *******)FUN_14028af20(uVar2);
                    }
                  }
                  else {
                    uVar22 = 0x7fffffffffffffff;
                    uVar19 = 0x8000000000000027;
LAB_14008eba6:
                    ppppppuVar14 = (undefined8 ******)FUN_14028af20(uVar19);
                    if (ppppppuVar14 == (undefined8 ******)0x0) goto LAB_14008ee48;
                    pppppppuVar26 =
                         (undefined8 *******)((longlong)ppppppuVar14 + 0x27U & 0xffffffffffffffe0);
                    pppppppuVar26[-1] = ppppppuVar14;
                  }
                  local_78 = uVar20;
                  local_70 = uVar22;
                  if (uVar21 < 0x10) {
                    FUN_1404210f0(pppppppuVar26,&local_88,uVar10);
                    *(undefined2 *)((longlong)pppppppuVar26 + uVar10) = 10;
                    uVar21 = uVar22;
                    local_88 = pppppppuVar26;
                  }
                  else {
                    FUN_1404210f0(pppppppuVar26,pppppppuVar13,uVar10);
                    *(undefined2 *)((longlong)pppppppuVar26 + uVar10) = 10;
LAB_14008ebf0:
                    pcVar12 = local_res20;
                    if (uVar21 + 1 < 0x1000) {
                      thunk_FUN_14028af80(pppppppuVar13);
                      uVar21 = uVar22;
                      local_88 = pppppppuVar26;
                    }
                    else {
                      if (0x1f < (ulonglong)
                                 ((longlong)pppppppuVar13 + (-8 - (longlong)pppppppuVar13[-1])))
                      goto LAB_14008ee48;
                      thunk_FUN_14028af80(pppppppuVar13[-1],uVar21 + 0x28);
                      uVar21 = uVar22;
                      local_88 = pppppppuVar26;
                    }
                  }
                }
              }
              else {
                pcVar12 = local_res20;
                if (local_78 < uVar21) {
                  pppppppuVar13 = &local_88;
                  if (0xf < uVar21) {
                    pppppppuVar13 = local_88;
                  }
                  pcVar1 = (char *)((longlong)pppppppuVar13 + local_78);
                  local_78 = local_78 + 1;
                  *pcVar1 = cVar11;
                  *(undefined1 *)((longlong)pppppppuVar13 + uVar10 + 1) = 0;
                  uVar21 = local_70;
                }
                else {
                  if (local_78 == 0x7fffffffffffffff) goto LAB_14008f163;
                  uVar22 = local_78 + 1 | 0xf;
                  if (uVar22 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (uVar21 >> 1) < uVar21) {
                      uVar22 = 0x7fffffffffffffff;
                      uVar20 = 0x8000000000000027;
                      goto LAB_14008ed1c;
                    }
                    uVar20 = (uVar21 >> 1) + uVar21;
                    if (uVar22 < uVar20) {
                      uVar22 = uVar20;
                    }
                    uVar19 = uVar22 + 1;
                    if (uVar19 == 0) {
                      pppppppuVar26 = (undefined8 *******)0x0;
                    }
                    else {
                      if (0xfff < uVar19) {
                        uVar20 = uVar22 + 0x28;
                        if (uVar20 <= uVar19) goto LAB_14008f169;
                        goto LAB_14008ed1c;
                      }
                      pppppppuVar26 = (undefined8 *******)FUN_14028af20(uVar19);
                    }
                  }
                  else {
                    uVar22 = 0x7fffffffffffffff;
                    uVar20 = 0x8000000000000027;
LAB_14008ed1c:
                    ppppppuVar14 = (undefined8 ******)FUN_14028af20(uVar20);
                    if (ppppppuVar14 == (undefined8 ******)0x0) goto LAB_14008ee48;
                    pppppppuVar26 =
                         (undefined8 *******)((longlong)ppppppuVar14 + 0x27U & 0xffffffffffffffe0);
                    pppppppuVar26[-1] = ppppppuVar14;
                  }
                  local_78 = uVar10 + 1;
                  local_70 = uVar22;
                  if (0xf < uVar21) {
                    FUN_1404210f0(pppppppuVar26,pppppppuVar13,uVar10);
                    *(char *)((longlong)pppppppuVar26 + uVar10) = cVar11;
                    *(undefined1 *)((longlong)pppppppuVar26 + uVar10 + 1) = 0;
                    goto LAB_14008ebf0;
                  }
                  FUN_1404210f0(pppppppuVar26,&local_88,uVar10);
                  *(char *)((longlong)pppppppuVar26 + uVar10) = cVar11;
                  *(undefined1 *)((longlong)pppppppuVar26 + uVar10 + 1) = 0;
                  uVar21 = uVar22;
                  local_88 = pppppppuVar26;
                }
              }
            }
            if (bVar9) {
              if (*(longlong *)(param_1 + 0x90) == 0) {
                FID_conflict__assert
                          (L"lastValue_ != nullptr",
                           L"D:\\dev\\we\\windows\\src\\json\\src\\json_reader.cpp",0x536);
              }
              uVar5 = *(undefined8 *)(param_1 + 0x90);
              uVar15 = FUN_140016fc0(local_68,&local_88);
              FUN_1400888c0(uVar5,uVar15,1);
            }
            else {
              pppppppuVar13 = &local_88;
              if (0xf < uVar21) {
                pppppppuVar13 = local_88;
              }
              FUN_1400532a0(param_1 + 0xa0,pppppppuVar13,local_78);
            }
            if (0xf < local_70) {
              uVar21 = local_70 + 1;
              pppppppuVar13 = local_88;
              if (0xfff < uVar21) {
                pppppppuVar13 = (undefined8 *******)local_88[-1];
                if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar13))) {
LAB_14008ee48:
                  pcVar7 = (code *)swi(0x29);
                  (*pcVar7)(5);
                  puVar23 = auStack_a0;
                  goto switchD_14008e857_caseD_7;
                }
                uVar21 = local_70 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar13,uVar21);
            }
          }
          cVar24 = true;
          break;
        }
      }
      else if ((bool)cVar24) {
        if (pcVar18 == pcVar12) {
LAB_14008ea29:
          bVar8 = false;
        }
        else {
          do {
            cVar11 = *pcVar18;
            pcVar1 = pcVar18 + 1;
            *(char **)(param_1 + 0x80) = pcVar1;
            if (cVar11 == '\n') goto LAB_14008ea29;
            if (cVar11 == '\r') {
              if ((pcVar1 != pcVar12) && (*pcVar1 == '\n')) {
                *(char **)(param_1 + 0x80) = pcVar18 + 2;
              }
              goto LAB_14008ea29;
            }
            pcVar18 = pcVar1;
          } while (pcVar1 != pcVar12);
          bVar8 = false;
        }
        goto LAB_14008ea30;
      }
    }
    cVar24 = false;
    break;
  case 7:
switchD_14008e857_caseD_7:
    pcVar25[0] = '\x06';
    pcVar25[1] = '\0';
    pcVar25[2] = '\0';
    pcVar25[3] = '\0';
    *(undefined8 *)(puVar23 + -8) = 0x14008ee60;
    FUN_14008f280(param_1,0);
    param_2 = pcVar25;
    goto LAB_14008f123;
  case 8:
    param_2[0] = '\x0e';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 9:
    if (*(char *)(param_1 + 200) == '\0') goto switchD_14008e857_caseD_12;
    param_2[0] = '\v';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar6 < 7) goto LAB_14008f0f8;
    iVar16 = 7;
    do {
      iVar16 = iVar16 + -1;
      if (*(char *)(lVar6 + iVar16) != "nfinity"[iVar16]) goto LAB_14008f0f8;
    } while (iVar16 != 0);
    cVar24 = true;
    *(longlong *)(param_1 + 0x80) = lVar6 + 7;
    break;
  case 10:
    if (*(char *)(param_1 + 200) == '\0') goto switchD_14008e857_caseD_12;
    param_2[0] = '\n';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar6 < 2) goto LAB_14008f0f8;
    iVar16 = 2;
    do {
      iVar16 = iVar16 + -1;
      if (*(char *)(lVar6 + iVar16) != (&DAT_140485480)[iVar16]) goto LAB_14008f0f8;
    } while (iVar16 != 0);
    cVar24 = true;
    *(longlong *)(param_1 + 0x80) = lVar6 + 2;
    break;
  case 0xb:
    param_2[0] = '\x03';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 0xc:
    param_2[0] = '\x04';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 0xd:
    param_2[0] = '\b';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar6 < 4) {
LAB_14008f0f8:
      cVar24 = false;
    }
    else {
      iVar16 = 4;
      do {
        iVar16 = iVar16 + -1;
        if (*(char *)(lVar6 + iVar16) != (&UNK_1404850ec)[iVar16]) goto LAB_14008f0f8;
      } while (iVar16 != 0);
      cVar24 = true;
      *(longlong *)(param_1 + 0x80) = lVar6 + 4;
    }
    break;
  case 0xe:
    param_2[0] = '\t';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar6 < 3) goto LAB_14008f0f8;
    iVar16 = 3;
    do {
      iVar16 = iVar16 + -1;
      if (*(char *)(lVar6 + iVar16) != (&UNK_1404850e8)[iVar16]) goto LAB_14008f0f8;
    } while (iVar16 != 0);
    cVar24 = true;
    *(longlong *)(param_1 + 0x80) = lVar6 + 3;
    break;
  case 0xf:
    param_2[0] = '\a';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x78) - lVar6 < 3) goto LAB_14008f0f8;
    iVar16 = 3;
    do {
      iVar16 = iVar16 + -1;
      if (*(char *)(lVar6 + iVar16) != (&UNK_1404850b4)[iVar16]) goto LAB_14008f0f8;
    } while (iVar16 != 0);
    cVar24 = true;
    *(longlong *)(param_1 + 0x80) = lVar6 + 3;
    break;
  case 0x10:
    param_2[0] = '\x01';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  case 0x11:
    param_2[0] = '\x02';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    goto LAB_14008f123;
  }
  if ((bool)cVar24 == false) {
LAB_14008f11c:
    param_2[0] = '\x10';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
LAB_14008f123:
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x80);
  return cVar24;
}

