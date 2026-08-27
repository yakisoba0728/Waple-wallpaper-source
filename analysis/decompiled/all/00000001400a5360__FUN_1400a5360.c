// Function: FUN_1400a5360
// Addr: 1400a5360
// Size: 3159 bytes


/* WARNING: Removing unreachable block (ram,0x0001400a5504) */
/* WARNING: Removing unreachable block (ram,0x0001400a55d3) */
/* WARNING: Removing unreachable block (ram,0x0001400a54af) */

char * FUN_1400a5360(int *param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  bool bVar26;
  longlong local_res8;
  uint *local_88;
  int *local_58;
  undefined8 local_50;
  int *local_48;
  undefined8 local_40;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar5 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar5 = "#base: disabled by previous error";
    }
    return pcVar5;
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (longlong *)0x0)) {
    pcVar5 = "#base: bad argument";
LAB_1400a5fa3:
    *param_1 = 0x75ae3d2;
    return pcVar5;
  }
  if ((param_1[1] != 0) && (param_1[1] != 3)) {
    pcVar5 = "#base: interleaved coroutine calls";
    goto LAB_1400a5fa3;
  }
  param_1[1] = 0;
  if ((param_1[0x30] == 0) || (param_1[0x30] == 1)) {
    lVar9 = *param_3;
    pcVar5 = (char *)0x0;
    puVar19 = (uint *)0x0;
    local_88 = (uint *)0x0;
    if (lVar9 != 0) {
      puVar19 = (uint *)(param_3[3] + lVar9);
      local_88 = (uint *)(param_3[2] + lVar9);
    }
    iVar12 = param_1[0x31];
    if (iVar12 != 0) {
      if (iVar12 == 1) {
LAB_1400a54d8:
        lVar21 = 0;
        lVar22 = 0;
        if (lVar9 != 0) {
          lVar21 = param_3[3] + lVar9;
          lVar22 = lVar9;
        }
        if (param_1[0x2f] == 0) {
          bVar11 = *(byte *)(param_1 + 0xc);
          if (bVar11 == 0x20) {
LAB_1400a5598:
            *(undefined1 *)(param_1 + 0xc) = 0x40;
          }
          else {
            if (bVar11 < 0x20) {
              param_3[3] = lVar21 - lVar9;
              goto LAB_1400a5526;
            }
            if (bVar11 == 0x28) {
              uVar24 = (param_3[4] - lVar22) + lVar21;
              if (uVar24 < (ulonglong)param_3[4]) {
                uVar24 = 0xffffffffffffffff;
              }
              if (*(ulonglong *)(param_1 + 0x12) == uVar24) goto LAB_1400a5598;
              pcVar5 = "#base: bad restart";
              goto LAB_1400a55a6;
            }
            pcVar5 = "@base: end of data";
            if (bVar11 == 0x40) {
              *(undefined1 *)(param_1 + 0xc) = 0x60;
            }
          }
          param_1[0x2f] = 0;
        }
        else {
          if (param_1[0x2f] == 1) {
LAB_1400a5526:
            pcVar5 = (char *)FUN_1400a3c90(param_1,0,param_3);
            lVar21 = param_3[3] + *param_3;
            if (pcVar5 == (char *)0x0) goto LAB_1400a5598;
            if (*pcVar5 == '$') {
              param_1[0x2f] = 1;
              goto LAB_1400a55a6;
            }
          }
          param_1[0x2f] = 0;
        }
LAB_1400a55a6:
        lVar9 = *param_3;
        if (lVar9 != 0) {
          param_3[3] = lVar21 - lVar9;
        }
        puVar19 = (uint *)(param_3[3] + lVar9);
        if (pcVar5 == (char *)0x0) goto LAB_1400a55fb;
        if (*pcVar5 == '$') goto LAB_1400a563c;
        param_1[0x31] = 0;
        goto LAB_1400a5eed;
      }
      pcVar18 = pcVar5;
      if (iVar12 == 2) goto LAB_1400a560b;
      puVar20 = puVar19;
      if (iVar12 == 3) {
LAB_1400a5727:
        lVar9 = *param_3;
        uVar13 = param_1[0x17];
        puVar19 = (uint *)((longlong)puVar20 - lVar9);
        param_3[3] = (longlong)puVar19;
        if (uVar13 == 0) {
          puVar19 = (uint *)0x0;
          if (lVar9 != 0) {
            puVar19 = (uint *)(param_3[2] + lVar9);
          }
          uVar13 = *param_2;
          uVar4 = 0;
          if (lVar9 == 0) {
            puVar20 = (uint *)0x0;
          }
          if (((uVar13 & 0x30000) != 0) ||
             (uVar4 = (&DAT_140482a50)[uVar13 & 0xf] +
                      (&DAT_140482a50)[uVar13 >> 0xc & 0xf] + (&DAT_140482a50)[uVar13 >> 8 & 0xf] +
                      (&DAT_140482a50)[uVar13 >> 4 & 0xf], (uVar4 & 7) == 0)) {
            uVar24 = (ulonglong)(uint)param_1[10] * (ulonglong)(uVar4 >> 3);
            if (((uVar13 >> 0x12 & 1) == 0) ||
               ((*(longlong *)(param_2 + 0x1e) != 0x400 || (*(longlong *)(param_2 + 0x20) != 1)))) {
              piVar8 = param_1 + 0x134;
            }
            else {
              piVar8 = *(int **)(param_2 + 0x1c);
            }
            lVar9 = *(longlong *)(param_2 + 4);
            uVar1 = *(ulonglong *)(param_2 + 6);
            uVar2 = *(ulonglong *)(param_2 + 8);
            lVar22 = *(longlong *)(param_2 + 10);
LAB_1400a5820:
            iVar12 = param_1[0x21];
            while (iVar12 != 0) {
              if (puVar19 == puVar20) goto LAB_1400a59c1;
              iVar12 = iVar12 + -1;
              puVar20 = (uint *)((longlong)puVar20 + 1);
              param_1[0x21] = iVar12;
            }
            do {
              uVar13 = param_1[0x1e];
              if (uVar13 == param_1[10]) {
                param_1[0x1f] = param_1[0x1f] + param_1[0x20];
                param_1[0x1e] = 0;
                if ((uint)param_1[0xb] <= (uint)param_1[0x1f]) {
                  if (param_1[0xb] != 0) {
                    param_1[0x21] = param_1[0xd];
                  }
                  pcVar5 = (char *)0x0;
                  goto LAB_1400a5a07;
                }
                if (param_1[0xd] != 0) goto LAB_1400a59a5;
                uVar13 = 0;
              }
              if ((uint)param_1[0x1f] < uVar2) {
                uVar7 = uVar1;
                if (uVar24 < uVar1) {
                  uVar7 = uVar24;
                }
                uVar6 = (ulonglong)uVar13 * (ulonglong)(uVar4 >> 3);
                if (uVar7 <= uVar6) goto LAB_1400a58fb;
                if ((param_1 + 0x26 == (int *)0x0) ||
                   (pcVar3 = *(code **)(param_1 + 0x26), pcVar3 == (code *)0x0)) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (*pcVar3)((ulonglong)(uint)param_1[0x1f] * lVar22 + lVar9 + uVar6,
                                    uVar7 - uVar6,piVar8,0x400,puVar20,
                                    (longlong)puVar19 - (longlong)puVar20);
                  puVar20 = (uint *)((longlong)puVar20 + (uint)param_1[0x2b] * uVar7);
                }
              }
              else {
LAB_1400a58fb:
                uVar14 = param_1[0x16];
                if ((0x20 < uVar14) || (uVar14 < 8)) {
                  pcVar5 = "#bmp: unsupported BMP file";
                  goto LAB_1400a5a07;
                }
                uVar7 = (ulonglong)(param_1[10] - uVar13);
                uVar10 = (ulonglong)(uVar14 >> 3);
                uVar6 = (ulonglong)((longlong)puVar19 - (longlong)puVar20) / uVar10;
                if (uVar6 < uVar7) {
                  uVar7 = uVar6;
                }
                uVar6 = uVar7;
                if (7 < uVar7) {
                  puVar25 = puVar20;
                  do {
                    puVar20 = (uint *)(((ulonglong)uVar14 & 0xfffffff8) + (longlong)puVar25);
                    if ((ulonglong)((longlong)puVar19 - (longlong)puVar25) <
                        ((ulonglong)uVar14 & 0xfffffff8)) {
                      puVar20 = puVar25;
                    }
                    uVar6 = uVar6 - 8;
                    puVar25 = puVar20;
                  } while (7 < uVar6);
                }
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  puVar25 = (uint *)(uVar10 + (longlong)puVar20);
                  if ((ulonglong)((longlong)puVar19 - (longlong)puVar20) < uVar10) {
                    puVar25 = puVar20;
                  }
                  puVar20 = puVar25;
                }
              }
              if (uVar7 == 0) goto LAB_1400a59c1;
              uVar13 = (int)uVar7 + param_1[0x1e];
              if (uVar13 < (uint)param_1[0x1e]) {
                uVar13 = 0xffffffff;
              }
              param_1[0x1e] = uVar13;
            } while( true );
          }
          pcVar5 = "#base: unsupported option";
LAB_1400a5a07:
          lVar9 = *param_3;
          if (lVar9 != 0) {
            param_3[3] = (longlong)puVar20 - lVar9;
          }
          puVar19 = (uint *)(param_3[3] + lVar9);
        }
        else {
          if (uVar13 < 3) {
            pcVar5 = (char *)FUN_1400a5fc0(param_1,param_2,param_3);
          }
          else {
            if (uVar13 == 3) {
              if (lVar9 == 0) {
                puVar25 = (uint *)0x0;
                puVar20 = (uint *)0x0;
              }
              else {
                puVar25 = (uint *)(param_3[2] + lVar9);
              }
              uVar13 = *param_2;
              if ((uVar13 & 0x30000) != 0) {
                uVar4 = 0;
LAB_1400a5a61:
                uVar24 = (ulonglong)(uint)param_1[10] * (ulonglong)(uVar4 >> 3);
                if ((((uVar13 >> 0x12 & 1) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
                   (*(longlong *)(param_2 + 0x20) != 1)) {
                  piVar8 = param_1 + 0x134;
                }
                else {
                  piVar8 = *(int **)(param_2 + 0x1c);
                }
                uVar1 = *(ulonglong *)(param_2 + 6);
                uVar2 = *(ulonglong *)(param_2 + 8);
                local_48 = *(int **)(param_2 + 4);
                local_58 = *(int **)(param_2 + 10);
LAB_1400a5b30:
                local_res8 = 4;
                iVar12 = param_1[0x21];
                while (iVar12 != 0) {
                  if (puVar25 == puVar20) goto LAB_1400a5e37;
                  iVar12 = iVar12 + -1;
                  puVar20 = (uint *)((longlong)puVar20 + 1);
                  param_1[0x21] = iVar12;
                }
                do {
                  iVar12 = param_1[0x1e];
                  if (iVar12 == param_1[10]) {
                    param_1[0x1f] = param_1[0x1f] + param_1[0x20];
                    param_1[0x1e] = 0;
                    if ((uint)param_1[0xb] <= (uint)param_1[0x1f]) {
                      if (param_1[0xb] != 0) {
                        param_1[0x21] = param_1[0xd];
                      }
                      pcVar5 = (char *)0x0;
                      goto LAB_1400a5e41;
                    }
                    iVar12 = 0;
                    if (param_1[0xd] != 0) goto LAB_1400a5e14;
                  }
                  uVar14 = param_1[10] - iVar12;
                  uVar13 = 0x100;
                  if (uVar14 < 0x100) {
                    uVar13 = uVar14;
                  }
                  uVar7 = 0;
                  if (uVar13 != 0) {
                    do {
                      if (param_1[0x16] == 0x10) {
                        if ((ulonglong)((longlong)puVar25 - (longlong)puVar20) < 2) break;
                        uVar14 = (uint)(ushort)*puVar20;
                        lVar9 = 2;
                      }
                      else {
                        if ((ulonglong)((longlong)puVar25 - (longlong)puVar20) < 4) break;
                        uVar14 = *puVar20;
                        lVar9 = local_res8;
                      }
                      bVar11 = *(byte *)(param_1 + 0x1d);
                      uVar23 = (uint)bVar11;
                      puVar20 = (uint *)((longlong)puVar20 + lVar9);
                      if (bVar11 == 0) {
                        uVar15 = 0xff;
                        uVar17 = 0xff;
                      }
                      else {
                        uVar17 = (param_1[0x18] & uVar14) >> (*(byte *)(param_1 + 0x1c) & 0x1f);
                        if (bVar11 < 0x10) {
                          do {
                            bVar11 = (byte)uVar23;
                            uVar23 = uVar23 * 2;
                            uVar17 = uVar17 | uVar17 << (bVar11 & 0x1f);
                          } while (uVar23 < 0x10);
                        }
                        uVar17 = uVar17 >> ((char)uVar23 - 0x10U & 0x1f);
                        uVar15 = (undefined1)(uVar17 >> 8);
                      }
                      uVar23 = (int)uVar7 * 8;
                      *(char *)((longlong)param_1 + (ulonglong)uVar23 + 0xd0) = (char)uVar17;
                      *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar23 + 1) + 0xd0) = uVar15;
                      bVar11 = *(byte *)((longlong)param_1 + 0x75);
                      if (bVar11 == 0) {
                        uVar15 = 0xff;
                        uVar16 = 0xff;
                      }
                      else {
                        uVar16 = (param_1[0x19] & uVar14) >>
                                 (*(byte *)((longlong)param_1 + 0x71) & 0x1f);
                        uVar17 = (uint)bVar11;
                        if (bVar11 < 0x10) {
                          do {
                            bVar11 = (byte)uVar17;
                            uVar17 = uVar17 * 2;
                            uVar16 = uVar16 | uVar16 << (bVar11 & 0x1f);
                          } while (uVar17 < 0x10);
                        }
                        uVar16 = uVar16 >> ((char)uVar17 - 0x10U & 0x1f);
                        uVar15 = (undefined1)(uVar16 >> 8);
                      }
                      *(char *)((longlong)param_1 + (ulonglong)(uVar23 | 2) + 0xd0) = (char)uVar16;
                      *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar23 + 3) + 0xd0) = uVar15;
                      bVar11 = *(byte *)((longlong)param_1 + 0x76);
                      if (bVar11 == 0) {
                        uVar15 = 0xff;
                        uVar16 = 0xff;
                      }
                      else {
                        uVar16 = (param_1[0x1a] & uVar14) >>
                                 (*(byte *)((longlong)param_1 + 0x72) & 0x1f);
                        uVar17 = (uint)bVar11;
                        if (bVar11 < 0x10) {
                          do {
                            bVar11 = (byte)uVar17;
                            uVar17 = uVar17 * 2;
                            uVar16 = uVar16 | uVar16 << (bVar11 & 0x1f);
                          } while (uVar17 < 0x10);
                        }
                        uVar16 = uVar16 >> ((char)uVar17 - 0x10U & 0x1f);
                        uVar15 = (undefined1)(uVar16 >> 8);
                      }
                      *(char *)((longlong)param_1 + (ulonglong)(uVar23 | 4) + 0xd0) = (char)uVar16;
                      *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar23 + 5) + 0xd0) = uVar15;
                      bVar11 = *(byte *)((longlong)param_1 + 0x77);
                      if (bVar11 == 0) {
                        uVar15 = 0xff;
                        uVar17 = 0xff;
                      }
                      else {
                        uVar17 = (param_1[0x1b] & uVar14) >>
                                 (*(byte *)((longlong)param_1 + 0x73) & 0x1f);
                        uVar14 = (uint)bVar11;
                        if (bVar11 < 0x10) {
                          do {
                            bVar11 = (byte)uVar14;
                            uVar14 = uVar14 * 2;
                            uVar17 = uVar17 | uVar17 << (bVar11 & 0x1f);
                          } while (uVar14 < 0x10);
                        }
                        uVar17 = uVar17 >> ((char)uVar14 - 0x10U & 0x1f);
                        uVar15 = (undefined1)(uVar17 >> 8);
                      }
                      uVar14 = (int)uVar7 + 1;
                      uVar7 = (ulonglong)uVar14;
                      *(char *)((ulonglong)(uVar23 + 6) + 0xd0 + (longlong)param_1) = (char)uVar17;
                      *(undefined1 *)((longlong)param_1 + (ulonglong)(uVar23 | 7) + 0xd0) = uVar15;
                    } while (uVar14 < uVar13);
                  }
                  if ((uint)param_1[0x1f] < uVar2) {
                    uVar6 = uVar1;
                    if (uVar24 < uVar1) {
                      uVar6 = uVar24;
                    }
                    uVar10 = (ulonglong)(uint)param_1[0x1e] * (ulonglong)(uVar4 >> 3);
                    if (uVar10 < uVar6) {
                      if ((param_1 + 0x26 == (int *)0x0) ||
                         (pcVar3 = *(code **)(param_1 + 0x26), pcVar3 == (code *)0x0)) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = (*pcVar3)((longlong)local_48 +
                                          uVar10 + (ulonglong)(uint)param_1[0x1f] *
                                                   (longlong)local_58,uVar6 - uVar10,piVar8,0x400,
                                          param_1 + 0x34,(int)uVar7 * 8);
                      }
                    }
                  }
                  if (uVar7 == 0) goto LAB_1400a5e37;
                  uVar13 = (int)uVar7 + param_1[0x1e];
                  if (uVar13 < (uint)param_1[0x1e]) {
                    uVar13 = 0xffffffff;
                  }
                  param_1[0x1e] = uVar13;
                } while( true );
              }
              uVar4 = (&DAT_140482a50)[uVar13 & 0xf] +
                      (&DAT_140482a50)[uVar13 >> 0xc & 0xf] + (&DAT_140482a50)[uVar13 >> 8 & 0xf] +
                      (&DAT_140482a50)[uVar13 >> 4 & 0xf];
              if ((uVar4 & 7) == 0) goto LAB_1400a5a61;
              pcVar5 = "#base: unsupported option";
              goto LAB_1400a5e5b;
            }
            pcVar5 = (char *)FUN_1400a6900(param_1,param_2,param_3);
          }
          puVar19 = (uint *)(param_3[3] + *param_3);
        }
        goto LAB_1400a5e93;
      }
      if (iVar12 != 4) {
        param_1[0x31] = 0;
        goto LAB_1400a5eed;
      }
      goto LAB_1400a5eb0;
    }
    if (*(byte *)(param_1 + 0xc) != 0x40) {
      if (*(byte *)(param_1 + 0xc) < 0x40) {
        iVar12 = 1;
        param_3[3] = (longlong)puVar19 - lVar9;
        goto LAB_1400a54d8;
      }
      pcVar5 = "@base: end of data";
      goto LAB_1400a5edc;
    }
LAB_1400a55fb:
    iVar12 = 2;
    *(ulonglong *)(param_1 + 0x336) = (ulonglong)(uint)param_1[0x15];
    pcVar18 = pcVar5;
LAB_1400a560b:
    uVar24 = *(ulonglong *)(param_1 + 0x336);
    if ((ulonglong)((longlong)local_88 - (longlong)puVar19) < uVar24) goto LAB_1400a5622;
    puVar19 = (uint *)((longlong)puVar19 + uVar24);
    pcVar5 = pcVar18;
    if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
      param_1[0x1e] = 0;
      bVar26 = *(char *)((longlong)param_1 + 0x31) == '\0';
      iVar12 = 0;
      if (bVar26) {
        iVar12 = param_1[0xb] + -1;
      }
      param_1[0x1f] = iVar12;
      iVar12 = 1;
      if (bVar26) {
        iVar12 = -1;
      }
      param_1[0x20] = iVar12;
      local_48 = param_1 + 0x234;
      if ((((*param_2 >> 0x12 & 1) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
         (*(longlong *)(param_2 + 0x20) != 1)) {
        local_58 = param_1 + 0x134;
      }
      else {
        local_58 = *(int **)(param_2 + 0x1c);
      }
      local_40 = 0x400;
      local_50 = 0x400;
      pcVar5 = (char *)FUN_1400a24c0(param_1 + 0x26,*param_2,&local_58,param_1[0xe],&local_48,
                                     param_4);
      puVar20 = puVar19;
      if (pcVar5 == (char *)0x0) goto LAB_1400a5727;
      goto LAB_1400a5703;
    }
    goto LAB_1400a5ed8;
  }
  param_1[0x30] = 0;
  pcVar5 = (char *)0x0;
LAB_1400a5f5d:
  bVar11 = 0;
LAB_1400a5f60:
  param_1[1] = -(uint)bVar11 & 3;
  if (pcVar5 == (char *)0x0) {
    return (char *)0x0;
  }
  goto LAB_1400a5f70;
LAB_1400a59a5:
  param_1[0x21] = param_1[0xd];
  goto LAB_1400a5820;
LAB_1400a59c1:
  pcVar5 = "@bmp: internal note: short read";
  goto LAB_1400a5a07;
LAB_1400a5e14:
  param_1[0x21] = param_1[0xd];
  goto LAB_1400a5b30;
LAB_1400a5e37:
  pcVar5 = "@bmp: internal note: short read";
LAB_1400a5e41:
  puVar19 = (uint *)param_3[3];
LAB_1400a5e5b:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    param_3[3] = (longlong)puVar20 - lVar9;
    puVar19 = (uint *)(((longlong)puVar20 - lVar9) + lVar9);
  }
LAB_1400a5e93:
  iVar12 = 4;
  if (pcVar5 == (char *)0x0) {
    *(ulonglong *)(param_1 + 0x336) = (ulonglong)(uint)param_1[0x21];
LAB_1400a5eb0:
    uVar24 = *(ulonglong *)(param_1 + 0x336);
    if ((ulonglong)((longlong)local_88 - (longlong)puVar19) < uVar24) {
LAB_1400a5622:
      pcVar5 = "$base: short read";
      *(ulonglong *)(param_1 + 0x336) = (uVar24 - (longlong)local_88) + (longlong)puVar19;
      puVar19 = local_88;
LAB_1400a563c:
      param_1[0x31] = iVar12;
    }
    else {
      puVar19 = (uint *)((longlong)puVar19 + uVar24);
      param_1[0x21] = 0;
      pcVar5 = pcVar18;
LAB_1400a5ed8:
      *(undefined1 *)(param_1 + 0xc) = 0x60;
LAB_1400a5edc:
      param_1[0x31] = 0;
    }
  }
  else {
    if (pcVar5 == "@bmp: internal note: short read") {
      pcVar5 = "$base: short read";
      iVar12 = 3;
      goto LAB_1400a563c;
    }
LAB_1400a5703:
    if (*pcVar5 != '#') {
      if (*pcVar5 != '$') goto LAB_1400a5edc;
      pcVar5 = "#base: cannot return a suspension";
    }
  }
LAB_1400a5eed:
  bVar11 = 1;
  if (*param_3 != 0) {
    param_3[3] = (longlong)puVar19 - *param_3;
  }
  if ((pcVar5 == "$base: short read") && ((char)param_3[5] != '\0')) {
    pcVar5 = "#bmp: truncated input";
    goto LAB_1400a5f75;
  }
  if (pcVar5 == (char *)0x0) {
    param_1[0x30] = 0;
    return (char *)0x0;
  }
  if (*pcVar5 == '$') {
    param_1[0x30] = 1;
    if (*pcVar5 != '$') goto LAB_1400a5f5d;
    goto LAB_1400a5f60;
  }
LAB_1400a5f70:
  if (*pcVar5 != '#') {
    return pcVar5;
  }
LAB_1400a5f75:
  *param_1 = 0x75ae3d2;
  return pcVar5;
}

