// Function: FUN_1400be000
// Addr: 1400be000
// Size: 2419 bytes


char * FUN_1400be000(longlong param_1,int *param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong local_res8;
  
  pcVar6 = (char *)0x0;
  puVar16 = (uint *)0x0;
  puVar15 = (uint *)0x0;
  uVar18 = 0;
  local_res8 = 0;
  if ((param_3 != (longlong *)0x0) && (lVar3 = *param_3, lVar3 != 0)) {
    puVar16 = (uint *)(param_3[3] + lVar3);
    puVar15 = (uint *)(param_3[2] + lVar3);
    local_res8 = lVar3;
  }
  iVar19 = *(int *)(param_1 + 0x6c);
  if (iVar19 != 0) {
    uVar18 = *(uint *)(param_1 + 0x888);
    switch(iVar19) {
    case 1:
      goto switchD_1400be09e_caseD_1;
    case 2:
      goto switchD_1400be09e_caseD_2;
    case 3:
      goto switchD_1400be09e_caseD_3;
    case 4:
      goto switchD_1400be09e_caseD_4;
    case 5:
      goto switchD_1400be09e_caseD_5;
    case 6:
      goto LAB_1400be1c4;
    case 7:
      goto joined_r0x0001400be1fa;
    case 8:
      goto LAB_1400be254;
    case 9:
      goto LAB_1400be2d6;
    case 10:
      goto LAB_1400be305;
    case 0xb:
      goto joined_r0x0001400be334;
    case 0xc:
      goto LAB_1400be394;
    case 0xd:
      goto joined_r0x0001400be444;
    case 0xe:
      goto switchD_1400be09e_caseD_e;
    case 0xf:
      goto switchD_1400be09e_caseD_f;
    case 0x10:
      goto switchD_1400be09e_caseD_10;
    case 0x11:
      goto switchD_1400be09e_caseD_11;
    case 0x12:
      goto switchD_1400be09e_caseD_12;
    case 0x13:
      goto switchD_1400be09e_caseD_13;
    case 0x14:
      goto switchD_1400be09e_caseD_14;
    case 0x15:
      goto switchD_1400be09e_caseD_15;
    case 0x16:
      goto switchD_1400be09e_caseD_16;
    default:
      bVar4 = false;
      goto LAB_1400be922;
    }
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    pcVar6 = "#base: bad call sequence";
    goto LAB_1400be935;
  }
  iVar19 = 1;
switchD_1400be09e_caseD_1:
  if (puVar16 != puVar15) {
    iVar19 = 2;
    *(byte *)(param_1 + 0x31) = (byte)*puVar16;
    puVar16 = (uint *)((longlong)puVar16 + 1);
switchD_1400be09e_caseD_2:
    if (puVar16 == puVar15) goto LAB_1400be91b;
    uVar17 = *puVar16;
    puVar16 = (uint *)((longlong)puVar16 + 1);
    *(byte *)(param_1 + 0x32) = (byte)uVar17;
    if ((byte)uVar17 < 2) {
      iVar19 = 3;
      goto switchD_1400be09e_caseD_3;
    }
    goto LAB_1400be0ed;
  }
  goto LAB_1400be91b;
switchD_1400be09e_caseD_3:
  if (puVar16 == puVar15) goto LAB_1400be91b;
  bVar5 = (byte)*puVar16;
  puVar16 = (uint *)((longlong)puVar16 + 1);
  *(byte *)(param_1 + 0x33) = bVar5;
  if ((2 < (byte)(bVar5 - 1)) && (2 < (byte)(bVar5 - 9))) {
    pcVar6 = "#tga: bad header";
    goto LAB_1400be935;
  }
switchD_1400be09e_caseD_4:
  if ((longlong)puVar15 - (longlong)puVar16 < 2) {
    *(undefined8 *)(param_1 + 0x890) = 0;
    iVar19 = 5;
switchD_1400be09e_caseD_5:
    while (puVar16 != puVar15) {
      uVar12 = *(ulonglong *)(param_1 + 0x890);
      uVar13 = uVar12 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0x890) = uVar13;
      bVar5 = (byte)(uVar12 >> 0x38);
      uVar17 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
      *(ulonglong *)(param_1 + 0x890) = uVar13;
      if (bVar5 == 8) goto LAB_1400be14c;
      *(ulonglong *)(param_1 + 0x890) = (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
    }
  }
  else {
    uVar13 = (ulonglong)(ushort)*puVar16;
    puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400be14c:
    *(short *)(param_1 + 0x34) = (short)uVar13;
LAB_1400be1c4:
    if ((longlong)puVar15 - (longlong)puVar16 < 2) {
      *(undefined8 *)(param_1 + 0x890) = 0;
      iVar19 = 7;
joined_r0x0001400be1fa:
      while (puVar16 != puVar15) {
        uVar12 = *(ulonglong *)(param_1 + 0x890);
        uVar13 = uVar12 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0x890) = uVar13;
        bVar5 = (byte)(uVar12 >> 0x38);
        uVar17 = *puVar16;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
        *(ulonglong *)(param_1 + 0x890) = uVar13;
        if (bVar5 == 8) goto LAB_1400be1d8;
        *(ulonglong *)(param_1 + 0x890) = (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
      }
    }
    else {
      uVar13 = (ulonglong)(ushort)*puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400be1d8:
      *(short *)(param_1 + 0x36) = (short)uVar13;
      iVar19 = 8;
LAB_1400be254:
      if (puVar16 != puVar15) {
        bVar5 = (byte)*puVar16;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        *(byte *)(param_1 + 0x38) = bVar5;
        if (*(char *)(param_1 + 0x32) == '\0') {
          if ((*(short *)(param_1 + 0x34) == 0) && (bVar5 == 0 && *(short *)(param_1 + 0x36) == 0))
          {
LAB_1400be2c0:
            *(undefined8 *)(param_1 + 0x890) = 4;
            iVar19 = 9;
LAB_1400be2d6:
            uVar12 = *(ulonglong *)(param_1 + 0x890);
            if ((ulonglong)((longlong)puVar15 - (longlong)puVar16) < uVar12) {
LAB_1400be2e8:
              *(byte **)(param_1 + 0x890) =
                   (byte *)((uVar12 - (longlong)puVar15) + (longlong)puVar16);
              puVar16 = puVar15;
            }
            else {
              puVar16 = (uint *)((longlong)puVar16 + uVar12);
LAB_1400be305:
              if ((longlong)puVar15 - (longlong)puVar16 < 2) {
                *(undefined8 *)(param_1 + 0x890) = 0;
                iVar19 = 0xb;
joined_r0x0001400be334:
                while (puVar16 != puVar15) {
                  uVar12 = *(ulonglong *)(param_1 + 0x890);
                  uVar13 = uVar12 & 0xffffffffffffff;
                  *(ulonglong *)(param_1 + 0x890) = uVar13;
                  bVar5 = (byte)(uVar12 >> 0x38);
                  uVar17 = *puVar16;
                  puVar16 = (uint *)((longlong)puVar16 + 1);
                  uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
                  *(ulonglong *)(param_1 + 0x890) = uVar13;
                  if (bVar5 == 8) goto LAB_1400be319;
                  *(ulonglong *)(param_1 + 0x890) = (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
                }
              }
              else {
                uVar13 = (ulonglong)(ushort)*puVar16;
                puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400be319:
                *(int *)(param_1 + 0x28) = (int)uVar13;
LAB_1400be394:
                if ((longlong)puVar15 - (longlong)puVar16 < 2) {
                  *(undefined8 *)(param_1 + 0x890) = 0;
                  iVar19 = 0xd;
joined_r0x0001400be444:
                  while (puVar16 != puVar15) {
                    uVar12 = *(ulonglong *)(param_1 + 0x890);
                    uVar13 = uVar12 & 0xffffffffffffff;
                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                    bVar5 = (byte)(uVar12 >> 0x38);
                    uVar17 = *puVar16;
                    puVar16 = (uint *)((longlong)puVar16 + 1);
                    uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                    if (bVar5 == 8) goto LAB_1400be3ac;
                    *(ulonglong *)(param_1 + 0x890) = (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
                  }
                }
                else {
                  uVar13 = (ulonglong)(ushort)*puVar16;
                  puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400be3ac:
                  *(int *)(param_1 + 0x2c) = (int)uVar13;
                  iVar19 = 0xe;
switchD_1400be09e_caseD_e:
                  if (puVar16 != puVar15) {
                    bVar5 = (byte)*puVar16;
                    puVar16 = (uint *)((longlong)puVar16 + 1);
                    *(byte *)(param_1 + 0x39) = bVar5;
                    if ((0x20 < bVar5) || ((0x101018102U >> ((ulonglong)bVar5 & 0x3f) & 1) == 0))
                    goto LAB_1400be0ed;
                    bVar7 = *(byte *)(param_1 + 0x33) | 8;
                    if (bVar7 == 9) {
                      *(undefined4 *)(param_1 + 0x3c) = 1;
                      *(undefined4 *)(param_1 + 0x40) = 1;
                      *(undefined4 *)(param_1 + 0x44) = 0x81040008;
                      if ((*(char *)(param_1 + 0x38) == '\x0f') ||
                         (*(char *)(param_1 + 0x38) == '\x18')) {
                        *(undefined1 *)(param_1 + 0x3b) = 1;
                      }
                      else {
                        *(undefined1 *)(param_1 + 0x3b) = 0;
                      }
LAB_1400be51c:
                      iVar19 = 0xf;
switchD_1400be09e_caseD_f:
                      if (puVar16 == puVar15) goto LAB_1400be91b;
                      uVar17 = *puVar16;
                      puVar16 = (uint *)((longlong)puVar16 + 1);
                      *(byte *)(param_1 + 0x3a) = (byte)uVar17;
                      if (((byte)uVar17 & 0x10) == 0) {
                        iVar19 = 0x10;
                        *(ulonglong *)(param_1 + 0x890) = (ulonglong)*(byte *)(param_1 + 0x31);
switchD_1400be09e_caseD_10:
                        uVar12 = *(ulonglong *)(param_1 + 0x890);
                        if (uVar12 <= (ulonglong)((longlong)puVar15 - (longlong)puVar16)) {
                          puVar16 = (uint *)((longlong)puVar16 + uVar12);
                          if (*(char *)(param_1 + 0x32) != '\0') {
                            while (uVar18 < *(ushort *)(param_1 + 0x36)) {
                              if (*(char *)(param_1 + 0x38) == '\x18') {
switchD_1400be09e_caseD_11:
                                if ((longlong)puVar15 - (longlong)puVar16 < 3) {
                                  *(undefined8 *)(param_1 + 0x890) = 0;
                                  iVar19 = 0x12;
switchD_1400be09e_caseD_12:
                                  while( true ) {
                                    if (puVar16 == puVar15) goto LAB_1400be91b;
                                    uVar12 = *(ulonglong *)(param_1 + 0x890);
                                    uVar13 = uVar12 & 0xffffffffffffff;
                                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                                    bVar5 = (byte)(uVar12 >> 0x38);
                                    uVar17 = *puVar16;
                                    puVar16 = (uint *)((longlong)puVar16 + 1);
                                    uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
                                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                                    if (bVar5 == 0x10) break;
                                    *(ulonglong *)(param_1 + 0x890) =
                                         (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
                                  }
                                }
                                else {
                                  uVar13 = (ulonglong)(uint3)*puVar16;
                                  puVar16 = (uint *)((longlong)puVar16 + 3);
                                }
                                uVar17 = (uVar18 & 0xff) * 4;
                                *(char *)((ulonglong)uVar17 + 0x480 + param_1) = (char)uVar13;
                                *(char *)((ulonglong)(uVar17 + 1) + 0x480 + param_1) =
                                     (char)(uVar13 >> 8);
                                *(char *)((ulonglong)(uVar17 + 2) + 0x480 + param_1) =
                                     (char)(uVar13 >> 0x10);
LAB_1400be7c7:
                                uVar18 = uVar18 + 1;
                                *(undefined1 *)((ulonglong)(uVar17 + 3) + 0x480 + param_1) = 0xff;
                              }
                              else {
                                if (*(char *)(param_1 + 0x38) != ' ') {
switchD_1400be09e_caseD_15:
                                  if ((longlong)puVar15 - (longlong)puVar16 < 2) {
                                    *(undefined8 *)(param_1 + 0x890) = 0;
                                    iVar19 = 0x16;
switchD_1400be09e_caseD_16:
                                    while( true ) {
                                      if (puVar16 == puVar15) goto LAB_1400be91b;
                                      uVar12 = *(ulonglong *)(param_1 + 0x890);
                                      uVar13 = uVar12 & 0xffffffffffffff;
                                      *(ulonglong *)(param_1 + 0x890) = uVar13;
                                      bVar5 = (byte)(uVar12 >> 0x38);
                                      uVar17 = *puVar16;
                                      puVar16 = (uint *)((longlong)puVar16 + 1);
                                      uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
                                      *(ulonglong *)(param_1 + 0x890) = uVar13;
                                      if (bVar5 == 8) break;
                                      *(ulonglong *)(param_1 + 0x890) =
                                           (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
                                    }
                                  }
                                  else {
                                    uVar13 = (ulonglong)(ushort)*puVar16;
                                    puVar16 = (uint *)((longlong)puVar16 + 2);
                                  }
                                  uVar11 = (uint)uVar13 & 0x1f;
                                  uVar17 = (uVar18 & 0xff) * 4;
                                  uVar8 = (uint)(uVar13 >> 5) & 0x1f;
                                  *(byte *)((ulonglong)uVar17 + 0x480 + param_1) =
                                       (byte)(uVar11 >> 2) | (char)uVar11 << 3;
                                  uVar11 = (uint)uVar13 >> 10 & 0x1f;
                                  *(byte *)((ulonglong)(uVar17 + 1) + 0x480 + param_1) =
                                       (byte)(uVar8 >> 2) | (char)uVar8 << 3;
                                  *(byte *)((ulonglong)(uVar17 + 2) + 0x480 + param_1) =
                                       (byte)(uVar11 >> 2) | (char)uVar11 << 3;
                                  goto LAB_1400be7c7;
                                }
switchD_1400be09e_caseD_13:
                                if ((longlong)puVar15 - (longlong)puVar16 < 4) {
                                  *(undefined8 *)(param_1 + 0x890) = 0;
                                  iVar19 = 0x14;
switchD_1400be09e_caseD_14:
                                  while( true ) {
                                    if (puVar16 == puVar15) goto LAB_1400be91b;
                                    uVar12 = *(ulonglong *)(param_1 + 0x890);
                                    uVar13 = uVar12 & 0xffffffffffffff;
                                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                                    bVar5 = (byte)(uVar12 >> 0x38);
                                    uVar17 = *puVar16;
                                    puVar16 = (uint *)((longlong)puVar16 + 1);
                                    uVar13 = (ulonglong)(byte)uVar17 << (bVar5 & 0x3f) | uVar13;
                                    *(ulonglong *)(param_1 + 0x890) = uVar13;
                                    if (bVar5 == 0x18) break;
                                    *(ulonglong *)(param_1 + 0x890) =
                                         (ulonglong)(bVar5 + 8) << 0x38 | uVar13;
                                  }
                                }
                                else {
                                  uVar13 = (ulonglong)*puVar16;
                                  puVar16 = puVar16 + 1;
                                }
                                uVar17 = (uVar18 & 0xff) * 4;
                                *(char *)((ulonglong)uVar17 + 0x480 + param_1) = (char)uVar13;
                                *(char *)((ulonglong)(uVar17 + 1) + 0x480 + param_1) =
                                     (char)(uVar13 >> 8);
                                *(char *)((ulonglong)(uVar17 + 2) + 0x480 + param_1) =
                                     (char)(uVar13 >> 0x10);
                                uVar18 = uVar18 + 1;
                                *(char *)((ulonglong)(uVar17 + 3) + 0x480 + param_1) =
                                     (char)(uVar13 >> 0x18);
                              }
                            }
                            for (; uVar18 < 0x100; uVar18 = uVar18 + 1) {
                              uVar17 = uVar18 * 4;
                              *(undefined1 *)(param_1 + 0x480 + (ulonglong)uVar17) = 0;
                              *(undefined1 *)(param_1 + 0x480 + (ulonglong)(uVar17 + 1)) = 0;
                              *(undefined1 *)(param_1 + 0x480 + (ulonglong)(uVar17 + 2)) = 0;
                              *(undefined1 *)(param_1 + 0x480 + (ulonglong)(uVar17 + 3)) = 0xff;
                            }
                          }
                          pbVar14 = (byte *)0x0;
                          if (param_3 != (longlong *)0x0) {
                            pbVar14 = (byte *)param_3[4];
                          }
                          pbVar10 = (byte *)((longlong)puVar16 + ((longlong)pbVar14 - local_res8));
                          if (pbVar10 < pbVar14) {
                            pbVar10 = (byte *)0xffffffffffffffff;
                          }
                          *(byte **)(param_1 + 0x48) = pbVar10;
                          if (param_2 != (int *)0x0) {
                            iVar19 = *(int *)(param_1 + 0x44);
                            uVar1 = *(undefined1 *)(param_1 + 0x3b);
                            iVar9 = *(int *)(param_1 + 0x2c);
                            iVar2 = *(int *)(param_1 + 0x28);
                            param_2[1] = 0;
                            if (iVar19 != 0) {
                              *param_2 = iVar19;
                              param_2[2] = iVar2;
                              param_2[3] = iVar9;
                              *(byte **)(param_2 + 4) = pbVar10;
                              *(undefined1 *)(param_2 + 6) = uVar1;
                              *(undefined1 *)(param_1 + 0x30) = 0x20;
                              *(undefined4 *)(param_1 + 0x6c) = 0;
                              goto LAB_1400be935;
                            }
                            *param_2 = 0;
                            param_2[2] = 0;
                            param_2[3] = 0;
                            param_2[4] = 0;
                            param_2[5] = 0;
                            *(undefined1 *)(param_2 + 6) = 0;
                          }
                          *(undefined1 *)(param_1 + 0x30) = 0x20;
                          *(undefined4 *)(param_1 + 0x6c) = 0;
                          goto LAB_1400be935;
                        }
                        goto LAB_1400be2e8;
                      }
                    }
                    else {
                      if (bVar7 == 10) {
                        if ((byte)(bVar5 - 0xf) < 2) {
                          *(undefined8 *)(param_1 + 0x3c) = 4;
                          *(undefined4 *)(param_1 + 0x44) = 0x81008888;
                        }
                        else {
                          if (bVar5 == 0x18) {
                            *(undefined4 *)(param_1 + 0x3c) = 3;
                            *(undefined4 *)(param_1 + 0x40) = 3;
                            *(undefined4 *)(param_1 + 0x44) = 0x80000888;
                            goto LAB_1400be518;
                          }
                          if (bVar5 != 0x20) goto LAB_1400be53a;
                          *(undefined4 *)(param_1 + 0x3c) = 4;
                          *(undefined4 *)(param_1 + 0x40) = 4;
                          *(undefined4 *)(param_1 + 0x44) = 0x81008888;
                        }
                        goto LAB_1400be51c;
                      }
                      if (bVar5 == 8) {
                        *(undefined4 *)(param_1 + 0x3c) = 1;
                        *(undefined4 *)(param_1 + 0x40) = 1;
                        *(undefined4 *)(param_1 + 0x44) = 0x20000008;
LAB_1400be518:
                        *(undefined1 *)(param_1 + 0x3b) = 1;
                        goto LAB_1400be51c;
                      }
                    }
LAB_1400be53a:
                    pcVar6 = "#tga: unsupported TGA file";
                    goto LAB_1400be935;
                  }
                }
              }
            }
            goto LAB_1400be91b;
          }
        }
        else {
          if ((*(short *)(param_1 + 0x34) != 0) || (0x100 < *(ushort *)(param_1 + 0x36)))
          goto LAB_1400be53a;
          if (bVar5 < 0x21) {
            if ((0x101018000U >> ((ulonglong)bVar5 & 0x3f) & 1) == 0) {
              pcVar6 = "#tga: bad header";
              goto LAB_1400be935;
            }
            goto LAB_1400be2c0;
          }
        }
LAB_1400be0ed:
        pcVar6 = "#tga: bad header";
        goto LAB_1400be935;
      }
    }
  }
LAB_1400be91b:
  bVar4 = true;
  pcVar6 = "$base: short read";
LAB_1400be922:
  *(uint *)(param_1 + 0x888) = uVar18;
  iVar9 = 0;
  if (bVar4) {
    iVar9 = iVar19;
  }
  *(int *)(param_1 + 0x6c) = iVar9;
LAB_1400be935:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar16 - *param_3;
  }
  return pcVar6;
}

