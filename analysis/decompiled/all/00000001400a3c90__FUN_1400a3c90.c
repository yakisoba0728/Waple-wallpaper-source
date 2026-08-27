// Function: FUN_1400a3c90
// Addr: 1400a3c90
// Size: 5030 bytes


char * FUN_1400a3c90(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  byte bVar10;
  byte bVar11;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint uVar12;
  
  puVar9 = (uint *)0x0;
  puVar21 = puVar9;
  puVar17 = puVar9;
  puVar20 = puVar9;
  if ((param_3 != (longlong *)0x0) &&
     (puVar19 = (uint *)*param_3, puVar21 = (uint *)0x0, puVar17 = (uint *)0x0,
     puVar20 = (uint *)0x0, puVar19 != (uint *)0x0)) {
    puVar17 = (uint *)(param_3[3] + (longlong)puVar19);
    puVar20 = (uint *)(param_3[2] + (longlong)puVar19);
    puVar21 = puVar19;
  }
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar6 = 0;
  uVar22 = 0x81008888;
  bVar11 = 0;
  pcVar2 = (char *)puVar9;
  iVar15 = iVar6;
  switch(iVar4) {
  case 0:
    if ((*(char *)(param_1 + 0x30) != '\0') || (*(int *)(param_1 + 0x3c) == 1)) {
      pcVar2 = "#base: bad call sequence";
      goto LAB_1400a4ffc;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      pcVar2 = "@base: I/O redirect";
      *(undefined4 *)(param_1 + 0xb4) = 0;
      goto LAB_1400a4ffc;
    }
    break;
  case 1:
    break;
  case 2:
    goto switchD_1400a3d1d_caseD_2;
  case 3:
    goto switchD_1400a3d1d_caseD_3;
  case 4:
    goto switchD_1400a3d1d_caseD_4;
  case 5:
    goto switchD_1400a3d1d_caseD_5;
  case 6:
    goto switchD_1400a3d1d_caseD_6;
  case 7:
    goto switchD_1400a3d1d_caseD_7;
  case 8:
    goto switchD_1400a3d1d_caseD_8;
  case 9:
    goto switchD_1400a3d1d_caseD_9;
  case 10:
    goto switchD_1400a3d1d_caseD_a;
  case 0xb:
    goto switchD_1400a3d1d_caseD_b;
  case 0xc:
    goto switchD_1400a3d1d_caseD_c;
  case 0xd:
    goto switchD_1400a3d1d_caseD_d;
  case 0xe:
    goto switchD_1400a3d1d_caseD_e;
  case 0xf:
    goto switchD_1400a3d1d_caseD_f;
  case 0x10:
    goto switchD_1400a3d1d_caseD_10;
  case 0x11:
    goto switchD_1400a3d1d_caseD_11;
  case 0x12:
    goto switchD_1400a3d1d_caseD_12;
  case 0x13:
    goto switchD_1400a3d1d_caseD_13;
  case 0x14:
    goto switchD_1400a3d1d_caseD_14;
  case 0x15:
    goto switchD_1400a3d1d_caseD_15;
  case 0x16:
    goto switchD_1400a3d1d_caseD_16;
  case 0x17:
    goto switchD_1400a3d1d_caseD_17;
  case 0x18:
    goto switchD_1400a3d1d_caseD_18;
  case 0x19:
    goto switchD_1400a3d1d_caseD_19;
  case 0x1a:
    goto switchD_1400a3d1d_caseD_1a;
  case 0x1b:
    goto switchD_1400a3d1d_caseD_1b;
  case 0x1c:
    goto switchD_1400a3d1d_caseD_1c;
  case 0x1d:
    goto switchD_1400a3d1d_caseD_1d;
  case 0x1e:
    goto switchD_1400a3d1d_caseD_1e;
  case 0x1f:
    goto switchD_1400a3d1d_caseD_1f;
  case 0x20:
    goto switchD_1400a3d1d_caseD_20;
  case 0x21:
    goto switchD_1400a3d1d_caseD_21;
  case 0x22:
    goto switchD_1400a3d1d_caseD_22;
  case 0x23:
    goto switchD_1400a3d1d_caseD_23;
  case 0x24:
    goto switchD_1400a3d1d_caseD_24;
  case 0x25:
    goto switchD_1400a3d1d_caseD_25;
  case 0x26:
    goto switchD_1400a3d1d_caseD_26;
  case 0x27:
    goto switchD_1400a3d1d_caseD_27;
  case 0x28:
    goto switchD_1400a3d1d_caseD_28;
  case 0x29:
    goto switchD_1400a3d1d_caseD_29;
  case 0x2a:
    goto switchD_1400a3d1d_caseD_2a;
  case 0x2b:
    goto switchD_1400a3d1d_caseD_2b;
  case 0x2c:
    goto switchD_1400a3d1d_caseD_2c;
  case 0x2d:
    goto switchD_1400a3d1d_caseD_2d;
  case 0x2e:
    goto switchD_1400a3d1d_caseD_2e;
  case 0x2f:
    goto switchD_1400a3d1d_caseD_2f;
  default:
    goto switchD_1400a3d1d_default;
  }
  if ((longlong)puVar20 - (longlong)puVar17 < 2) {
    *(undefined8 *)(param_1 + 0xcd0) = 0;
    iVar4 = 2;
switchD_1400a3d1d_caseD_2:
    if (puVar17 == puVar20) goto LAB_1400a3e20;
    do {
      uVar16 = *(ulonglong *)(param_1 + 0xcd0);
      uVar3 = uVar16 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
      bVar10 = (byte)(uVar16 >> 0x38);
      uVar18 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
      if (bVar10 == 8) goto LAB_1400a3d63;
      *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
    } while (puVar17 != puVar20);
    pcVar2 = "$base: short read";
    iVar15 = 1;
    goto switchD_1400a3d1d_default;
  }
  uVar3 = (ulonglong)(ushort)*puVar17;
  puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a3d63:
  if ((int)uVar3 == 0x4d42) {
    *(undefined8 *)(param_1 + 0xcd0) = 8;
    iVar4 = 3;
switchD_1400a3d1d_caseD_3:
    uVar16 = *(ulonglong *)(param_1 + 0xcd0);
    if ((ulonglong)((longlong)puVar20 - (longlong)puVar17) < uVar16) {
LAB_1400a3e10:
      *(byte **)(param_1 + 0xcd0) = (byte *)((uVar16 - (longlong)puVar20) + (longlong)puVar17);
      puVar17 = puVar20;
      goto LAB_1400a3e20;
    }
    puVar17 = (uint *)((longlong)puVar17 + uVar16);
switchD_1400a3d1d_caseD_4:
    if ((longlong)puVar20 - (longlong)puVar17 < 4) {
      *(undefined8 *)(param_1 + 0xcd0) = 0;
      iVar4 = 5;
switchD_1400a3d1d_caseD_5:
      if (puVar17 == puVar20) goto LAB_1400a3e20;
      do {
        uVar16 = *(ulonglong *)(param_1 + 0xcd0);
        uVar3 = uVar16 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xcd0) = uVar3;
        bVar10 = (byte)(uVar16 >> 0x38);
        uVar18 = *puVar17;
        puVar17 = (uint *)((longlong)puVar17 + 1);
        uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
        *(ulonglong *)(param_1 + 0xcd0) = uVar3;
        if (bVar10 == 0x18) goto LAB_1400a3e47;
        *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
      } while (puVar17 != puVar20);
      pcVar2 = "$base: short read";
      iVar15 = 1;
    }
    else {
      uVar3 = (ulonglong)*puVar17;
      puVar17 = puVar17 + 1;
LAB_1400a3e47:
      uVar18 = (uint)uVar3;
      *(uint *)(param_1 + 0x54) = uVar18;
      if (uVar18 < 0xe) {
        pcVar2 = "#bmp: bad header";
        goto LAB_1400a4ffc;
      }
      uVar18 = uVar18 - 0xe;
      *(uint *)(param_1 + 0x54) = uVar18;
      puVar19 = puVar9;
      if (param_3 != (longlong *)0x0) {
        puVar19 = (uint *)param_3[4];
      }
      puVar7 = (uint *)(((longlong)puVar17 - (longlong)puVar21) + (longlong)puVar19);
      if (puVar7 < puVar19) {
        puVar7 = (uint *)0xffffffffffffffff;
      }
      pbVar8 = (byte *)((longlong)puVar7 + (longlong)(ulonglong)uVar18);
      if (pbVar8 < (byte *)(ulonglong)uVar18) {
        pbVar8 = (byte *)0xffffffffffffffff;
      }
      *(byte **)(param_1 + 0x40) = pbVar8;
switchD_1400a3d1d_caseD_6:
      if ((longlong)puVar20 - (longlong)puVar17 < 4) {
        *(undefined8 *)(param_1 + 0xcd0) = 0;
        iVar4 = 7;
switchD_1400a3d1d_caseD_7:
        if (puVar17 == puVar20) goto LAB_1400a3e20;
        do {
          uVar16 = *(ulonglong *)(param_1 + 0xcd0);
          uVar3 = uVar16 & 0xffffffffffffff;
          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
          bVar10 = (byte)(uVar16 >> 0x38);
          uVar18 = *puVar17;
          puVar17 = (uint *)((longlong)puVar17 + 1);
          uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
          if (bVar10 == 0x18) goto LAB_1400a3f1c;
          *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
        } while (puVar17 != puVar20);
        pcVar2 = "$base: short read";
        iVar15 = 1;
      }
      else {
        uVar3 = (ulonglong)*puVar17;
        puVar17 = puVar17 + 1;
LAB_1400a3f1c:
        uVar18 = (uint)uVar3;
        *(uint *)(param_1 + 0x50) = uVar18;
        if (*(uint *)(param_1 + 0x54) < uVar18) {
          pcVar2 = "#bmp: bad header";
          goto LAB_1400a4ffc;
        }
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) - uVar18;
        if (uVar18 == 0xc) {
switchD_1400a3d1d_caseD_8:
          if ((longlong)puVar20 - (longlong)puVar17 < 2) {
            *(undefined8 *)(param_1 + 0xcd0) = 0;
            iVar4 = 9;
switchD_1400a3d1d_caseD_9:
            if (puVar17 == puVar20) goto LAB_1400a3e20;
            do {
              uVar16 = *(ulonglong *)(param_1 + 0xcd0);
              uVar3 = uVar16 & 0xffffffffffffff;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              bVar10 = (byte)(uVar16 >> 0x38);
              uVar18 = *puVar17;
              puVar17 = (uint *)((longlong)puVar17 + 1);
              uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              if (bVar10 == 8) goto LAB_1400a4007;
              *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
            } while (puVar17 != puVar20);
            pcVar2 = "$base: short read";
            iVar15 = 1;
          }
          else {
            uVar3 = (ulonglong)(ushort)*puVar17;
            puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a4007:
            *(int *)(param_1 + 0x28) = (int)uVar3;
switchD_1400a3d1d_caseD_a:
            if ((longlong)puVar20 - (longlong)puVar17 < 2) {
              *(undefined8 *)(param_1 + 0xcd0) = 0;
              iVar4 = 0xb;
switchD_1400a3d1d_caseD_b:
              if (puVar17 == puVar20) goto LAB_1400a3e20;
              do {
                uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                uVar3 = uVar16 & 0xffffffffffffff;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                bVar10 = (byte)(uVar16 >> 0x38);
                uVar18 = *puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 1);
                uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                if (bVar10 == 8) goto LAB_1400a4023;
                *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
              } while (puVar17 != puVar20);
              pcVar2 = "$base: short read";
              iVar15 = 1;
            }
            else {
              uVar3 = (ulonglong)(ushort)*puVar17;
              puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a4023:
              *(int *)(param_1 + 0x2c) = (int)uVar3;
switchD_1400a3d1d_caseD_c:
              if (1 < (longlong)puVar20 - (longlong)puVar17) {
                uVar16 = (ulonglong)(ushort)*puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a403f:
                if ((int)uVar16 == 1) {
switchD_1400a3d1d_caseD_e:
                  if ((longlong)puVar20 - (longlong)puVar17 < 2) {
                    *(undefined8 *)(param_1 + 0xcd0) = 0;
                    iVar4 = 0xf;
switchD_1400a3d1d_caseD_f:
                    if (puVar17 == puVar20) goto LAB_1400a3e20;
                    do {
                      uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                      uVar3 = uVar16 & 0xffffffffffffff;
                      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                      bVar10 = (byte)(uVar16 >> 0x38);
                      uVar18 = *puVar17;
                      puVar17 = (uint *)((longlong)puVar17 + 1);
                      uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                      if (bVar10 == 8) goto LAB_1400a44d5;
                      *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                    } while (puVar17 != puVar20);
                    pcVar2 = "$base: short read";
                    iVar15 = 1;
                    goto switchD_1400a3d1d_default;
                  }
LAB_1400a44cd:
                  uVar3 = (ulonglong)(ushort)*puVar17;
                  puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a44d5:
                  *(int *)(param_1 + 0x58) = (int)uVar3;
                  pcVar2 = (char *)(uint *)0x0;
LAB_1400a49b4:
                  if ((*(int *)(param_1 + 0x5c) != 3) && (*(uint *)(param_1 + 0x58) < 0x10)) {
                    if (param_3 != (longlong *)0x0) {
                      param_3[3] = (longlong)puVar17 - *param_3;
                    }
                    iVar4 = 0x2e;
switchD_1400a3d1d_caseD_2e:
                    pcVar2 = (char *)FUN_1400a74d0(param_1,param_3);
                    if (param_3 != (longlong *)0x0) {
                      puVar17 = (uint *)(param_3[3] + *param_3);
                    }
                    if ((uint *)pcVar2 != (uint *)0x0) {
LAB_1400a4c84:
                      if ((byte)*(uint *)pcVar2 == 0x24) {
                        iVar15 = 1;
                      }
                      goto switchD_1400a3d1d_default;
                    }
                  }
                  iVar4 = *(int *)(param_1 + 0x5c);
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(param_1 + 0x58);
                    if (((iVar4 - 1U & 0xfffffffc) == 0) && (iVar4 != 3)) {
                      *(undefined4 *)(param_1 + 0x5c) = 0x100;
                      uVar5 = 0x83040008;
                    }
                    else if (iVar4 == 8) {
                      uVar5 = 0x83040008;
                    }
                    else {
                      if (iVar4 == 0x10) {
                        *(undefined4 *)(param_1 + 0x5c) = 3;
                        iVar4 = 0x2f;
                        *(undefined4 *)(param_1 + 0x60) = 0x1f;
                        *(undefined4 *)(param_1 + 100) = 0x3e0;
                        *(undefined8 *)(param_1 + 0x68) = 0x7c00;
switchD_1400a3d1d_caseD_2f:
                        uVar18 = *(uint *)(param_1 + 0x60);
                        if (uVar18 != 0) {
                          uVar12 = uVar18 & 1;
                          puVar20 = puVar9;
                          bVar10 = bVar11;
                          while (uVar12 == 0) {
                            uVar12 = (int)puVar20 + 1;
                            puVar20 = (uint *)(ulonglong)uVar12;
                            bVar10 = (byte)uVar12;
                            uVar12 = uVar18 & 2;
                            uVar18 = uVar18 >> 1;
                          }
                          *(byte *)(param_1 + 0x70) = bVar10 & 0x1f;
                          uVar14 = 0;
                          uVar12 = uVar18 & 1;
                          uVar13 = uVar14;
                          puVar20 = puVar9;
                          while (uVar12 != 0) {
                            uVar13 = (int)puVar20 + 1;
                            uVar12 = uVar18 & 2;
                            uVar18 = uVar18 >> 1;
                            puVar20 = (uint *)(ulonglong)uVar13;
                          }
                          if ((uVar18 == 0) && (uVar13 < 0x21)) {
                            *(char *)(param_1 + 0x74) = (char)uVar13;
                            uVar18 = *(uint *)(param_1 + 100);
                            if (uVar18 != 0) {
                              uVar12 = uVar18 & 1;
                              puVar20 = puVar9;
                              bVar10 = bVar11;
                              while (uVar12 == 0) {
                                uVar12 = (int)puVar20 + 1;
                                puVar20 = (uint *)(ulonglong)uVar12;
                                bVar10 = (byte)uVar12;
                                uVar12 = uVar18 & 2;
                                uVar18 = uVar18 >> 1;
                              }
                              *(byte *)(param_1 + 0x71) = bVar10 & 0x1f;
                              uVar12 = uVar18 & 1;
                              puVar20 = puVar9;
                              uVar13 = uVar14;
                              while (uVar12 != 0) {
                                uVar13 = (int)puVar20 + 1;
                                puVar20 = (uint *)(ulonglong)uVar13;
                                uVar12 = uVar18 & 2;
                                uVar18 = uVar18 >> 1;
                              }
                              if ((uVar18 == 0) && (uVar13 < 0x21)) {
                                *(char *)(param_1 + 0x75) = (char)uVar13;
                                uVar18 = *(uint *)(param_1 + 0x68);
                                if (uVar18 != 0) {
                                  uVar12 = uVar18 & 1;
                                  puVar20 = puVar9;
                                  bVar10 = bVar11;
                                  while (uVar12 == 0) {
                                    uVar12 = (int)puVar20 + 1;
                                    puVar20 = (uint *)(ulonglong)uVar12;
                                    bVar10 = (byte)uVar12;
                                    uVar12 = uVar18 & 2;
                                    uVar18 = uVar18 >> 1;
                                  }
                                  *(byte *)(param_1 + 0x72) = bVar10 & 0x1f;
                                  uVar12 = uVar18 & 1;
                                  puVar20 = puVar9;
                                  uVar13 = uVar14;
                                  while (uVar12 != 0) {
                                    uVar13 = (int)puVar20 + 1;
                                    puVar20 = (uint *)(ulonglong)uVar13;
                                    uVar12 = uVar18 & 2;
                                    uVar18 = uVar18 >> 1;
                                  }
                                  if ((uVar18 == 0) && (uVar13 < 0x21)) {
                                    *(char *)(param_1 + 0x76) = (char)uVar13;
                                    uVar18 = *(uint *)(param_1 + 0x6c);
                                    pcVar2 = (char *)puVar9;
                                    if (uVar18 != 0) {
                                      uVar12 = uVar18 & 1;
                                      puVar20 = puVar9;
                                      while (uVar12 == 0) {
                                        uVar12 = (int)puVar20 + 1;
                                        puVar20 = (uint *)(ulonglong)uVar12;
                                        bVar11 = (byte)uVar12;
                                        uVar12 = uVar18 & 2;
                                        uVar18 = uVar18 >> 1;
                                      }
                                      *(byte *)(param_1 + 0x73) = bVar11 & 0x1f;
                                      uVar12 = uVar18 & 1;
                                      puVar20 = puVar9;
                                      while (uVar12 != 0) {
                                        uVar14 = (int)puVar20 + 1;
                                        puVar20 = (uint *)(ulonglong)uVar14;
                                        uVar12 = uVar18 & 2;
                                        uVar18 = uVar18 >> 1;
                                      }
                                      if ((uVar18 != 0) || (0x20 < uVar14)) goto LAB_1400a4fe4;
                                      *(char *)(param_1 + 0x77) = (char)uVar14;
                                    }
LAB_1400a4e11:
                                    uVar5 = 0x8100bbbb;
                                    goto LAB_1400a4e16;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_1400a4fe4:
                        pcVar2 = "#bmp: bad header";
                        goto switchD_1400a3d1d_default;
                      }
                      if (iVar4 == 0x18) {
                        uVar5 = 0x80000888;
                      }
                      else {
                        if (iVar4 != 0x20) goto LAB_1400a4049;
                        uVar5 = 0x90008888;
                        if (*(int *)(param_1 + 0x6c) != 0) {
                          uVar5 = 0x81008888;
                        }
                      }
                    }
LAB_1400a4e16:
                    *(undefined4 *)(param_1 + 0x38) = uVar5;
                    if (((0x27 < *(uint *)(param_1 + 0x50)) && (*(uint *)(param_1 + 0x50) != 0x40))
                       || ((*(uint *)(param_1 + 0x58) < 0x19 &&
                           ((0x1000112U >> (*(uint *)(param_1 + 0x58) & 0x1f) & 1) != 0)))) {
                      iVar4 = *(int *)(param_1 + 0x58);
                      if (iVar4 == 1) {
                        *(uint *)(param_1 + 0x34) =
                             -(((*(uint *)(param_1 + 0x28) & 7) + 7 >> 3) +
                              (*(uint *)(param_1 + 0x28) >> 3)) & 3;
                      }
                      else if (iVar4 == 2) {
                        *(uint *)(param_1 + 0x34) =
                             -(((*(uint *)(param_1 + 0x28) & 3) + 3 >> 2) +
                              (*(uint *)(param_1 + 0x28) >> 2)) & 3;
                      }
                      else if (iVar4 == 4) {
                        *(uint *)(param_1 + 0x34) =
                             -((*(uint *)(param_1 + 0x28) >> 1) + (*(uint *)(param_1 + 0x28) & 1)) &
                             3;
                      }
                      else if (iVar4 == 8) {
                        *(uint *)(param_1 + 0x34) = -*(int *)(param_1 + 0x28) & 3;
                      }
                      else if (iVar4 == 0x10) {
                        *(uint *)(param_1 + 0x34) = (*(uint *)(param_1 + 0x28) & 1) * 2;
                      }
                      else if (iVar4 == 0x18) {
                        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x28) & 3;
                      }
                      else if (iVar4 == 0x20) {
                        *(undefined4 *)(param_1 + 0x34) = 0;
                      }
                      if (param_3 != (longlong *)0x0) {
                        puVar9 = (uint *)param_3[4];
                      }
                      puVar21 = (uint *)(((longlong)puVar17 - (longlong)puVar21) + (longlong)puVar9)
                      ;
                      if (puVar21 < puVar9) {
                        puVar21 = (uint *)0xffffffffffffffff;
                      }
                      *(uint **)(param_1 + 0x48) = puVar21;
                      if (param_2 != (undefined4 *)0x0) {
                        if ((((8 < *(byte *)(param_1 + 0x74)) || (8 < *(byte *)(param_1 + 0x75))) ||
                            (8 < *(byte *)(param_1 + 0x76))) || (8 < *(byte *)(param_1 + 0x77))) {
                          uVar22 = 0x8100bbbb;
                        }
                        iVar4 = *(int *)(param_1 + 0x6c);
                        uVar5 = *(undefined4 *)(param_1 + 0x28);
                        uVar1 = *(undefined4 *)(param_1 + 0x2c);
                        param_2[1] = 0;
                        param_2[2] = uVar5;
                        *(bool *)(param_2 + 6) = iVar4 == 0;
                        *param_2 = uVar22;
                        param_2[3] = uVar1;
                        *(uint **)(param_2 + 4) = puVar21;
                      }
                      *(undefined1 *)(param_1 + 0x30) = 0x20;
                      *(undefined4 *)(param_1 + 0xb4) = 0;
                      goto LAB_1400a4ffc;
                    }
                    goto LAB_1400a3d70;
                  }
                  if (iVar4 == 1) {
                    if (*(int *)(param_1 + 0x58) == 8) {
                      uVar5 = 0x83040008;
                      goto LAB_1400a4e16;
                    }
                  }
                  else if (iVar4 == 2) {
                    if (*(int *)(param_1 + 0x58) == 4) {
                      uVar5 = 0x83040008;
                      goto LAB_1400a4e16;
                    }
                  }
                  else if (iVar4 == 3) {
                    if ((*(int *)(param_1 + 0x58) - 0x10U & 0xffffffef) != 0) {
                      pcVar2 = "#bmp: unsupported BMP file";
                      goto LAB_1400a4ffc;
                    }
                    goto LAB_1400a4e11;
                  }
                }
LAB_1400a4049:
                pcVar2 = "#bmp: unsupported BMP file";
                goto LAB_1400a4ffc;
              }
              *(undefined8 *)(param_1 + 0xcd0) = 0;
              iVar4 = 0xd;
switchD_1400a3d1d_caseD_d:
              if (puVar17 == puVar20) goto LAB_1400a3e20;
              do {
                uVar3 = *(ulonglong *)(param_1 + 0xcd0);
                uVar16 = uVar3 & 0xffffffffffffff;
                *(ulonglong *)(param_1 + 0xcd0) = uVar16;
                bVar10 = (byte)(uVar3 >> 0x38);
                uVar18 = *puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 1);
                uVar16 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar16;
                *(ulonglong *)(param_1 + 0xcd0) = uVar16;
                if (bVar10 == 8) goto LAB_1400a403f;
                *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar16;
              } while (puVar17 != puVar20);
              pcVar2 = "$base: short read";
              iVar15 = 1;
            }
          }
        }
        else if (uVar18 == 0x10) {
switchD_1400a3d1d_caseD_10:
          if ((longlong)puVar20 - (longlong)puVar17 < 4) {
            *(undefined8 *)(param_1 + 0xcd0) = 0;
            iVar4 = 0x11;
switchD_1400a3d1d_caseD_11:
            if (puVar17 == puVar20) goto LAB_1400a3e20;
            do {
              uVar16 = *(ulonglong *)(param_1 + 0xcd0);
              uVar3 = uVar16 & 0xffffffffffffff;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              bVar10 = (byte)(uVar16 >> 0x38);
              uVar18 = *puVar17;
              puVar17 = (uint *)((longlong)puVar17 + 1);
              uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              if (bVar10 == 0x18) goto LAB_1400a4274;
              *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
            } while (puVar17 != puVar20);
            pcVar2 = "$base: short read";
            iVar15 = 1;
          }
          else {
            uVar3 = (ulonglong)*puVar17;
            puVar17 = puVar17 + 1;
LAB_1400a4274:
            if (0x7fffffff < (uint)uVar3) {
              pcVar2 = "#bmp: bad header";
              goto LAB_1400a4ffc;
            }
            *(uint *)(param_1 + 0x28) = (uint)uVar3;
switchD_1400a3d1d_caseD_12:
            if ((longlong)puVar20 - (longlong)puVar17 < 4) {
              *(undefined8 *)(param_1 + 0xcd0) = 0;
              iVar4 = 0x13;
switchD_1400a3d1d_caseD_13:
              if (puVar17 == puVar20) goto LAB_1400a3e20;
              do {
                uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                uVar3 = uVar16 & 0xffffffffffffff;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                bVar10 = (byte)(uVar16 >> 0x38);
                uVar18 = *puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 1);
                uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                if (bVar10 == 0x18) goto LAB_1400a4316;
                *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
              } while (puVar17 != puVar20);
              pcVar2 = "$base: short read";
              iVar15 = 1;
            }
            else {
              uVar3 = (ulonglong)*puVar17;
              puVar17 = puVar17 + 1;
LAB_1400a4316:
              if (0x7fffffff < (uint)uVar3) {
                pcVar2 = "#bmp: bad header";
                goto LAB_1400a4ffc;
              }
              *(uint *)(param_1 + 0x2c) = (uint)uVar3;
switchD_1400a3d1d_caseD_14:
              if ((longlong)puVar20 - (longlong)puVar17 < 2) {
                *(undefined8 *)(param_1 + 0xcd0) = 0;
                iVar4 = 0x15;
switchD_1400a3d1d_caseD_15:
                if (puVar17 == puVar20) goto LAB_1400a3e20;
                do {
                  uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                  uVar3 = uVar16 & 0xffffffffffffff;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  bVar10 = (byte)(uVar16 >> 0x38);
                  uVar18 = *puVar17;
                  puVar17 = (uint *)((longlong)puVar17 + 1);
                  uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  if (bVar10 == 8) goto LAB_1400a43c5;
                  *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                } while (puVar17 != puVar20);
                pcVar2 = "$base: short read";
                iVar15 = 1;
              }
              else {
                uVar3 = (ulonglong)(ushort)*puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a43c5:
                if ((int)uVar3 != 1) {
                  pcVar2 = "#bmp: unsupported BMP file";
                  goto LAB_1400a4ffc;
                }
switchD_1400a3d1d_caseD_16:
                if (1 < (longlong)puVar20 - (longlong)puVar17) goto LAB_1400a44cd;
                *(undefined8 *)(param_1 + 0xcd0) = 0;
                iVar4 = 0x17;
switchD_1400a3d1d_caseD_17:
                if (puVar17 == puVar20) goto LAB_1400a3e20;
                do {
                  uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                  uVar3 = uVar16 & 0xffffffffffffff;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  bVar10 = (byte)(uVar16 >> 0x38);
                  uVar18 = *puVar17;
                  puVar17 = (uint *)((longlong)puVar17 + 1);
                  uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  if (bVar10 == 8) goto LAB_1400a44d5;
                  *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                } while (puVar17 != puVar20);
                pcVar2 = "$base: short read";
                iVar15 = 1;
              }
            }
          }
        }
        else {
switchD_1400a3d1d_caseD_18:
          if ((longlong)puVar20 - (longlong)puVar17 < 4) {
            *(undefined8 *)(param_1 + 0xcd0) = 0;
            iVar4 = 0x19;
switchD_1400a3d1d_caseD_19:
            if (puVar17 == puVar20) goto LAB_1400a3e20;
            do {
              uVar16 = *(ulonglong *)(param_1 + 0xcd0);
              uVar3 = uVar16 & 0xffffffffffffff;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              bVar10 = (byte)(uVar16 >> 0x38);
              uVar18 = *puVar17;
              puVar17 = (uint *)((longlong)puVar17 + 1);
              uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
              if (bVar10 == 0x18) goto LAB_1400a3fda;
              *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
            } while (puVar17 != puVar20);
            pcVar2 = "$base: short read";
            iVar15 = 1;
          }
          else {
            uVar3 = (ulonglong)*puVar17;
            puVar17 = puVar17 + 1;
LAB_1400a3fda:
            if (0x7fffffff < (uint)uVar3) {
              pcVar2 = "#bmp: bad header";
              goto LAB_1400a4ffc;
            }
            *(uint *)(param_1 + 0x28) = (uint)uVar3;
switchD_1400a3d1d_caseD_1a:
            if ((longlong)puVar20 - (longlong)puVar17 < 4) {
              *(undefined8 *)(param_1 + 0xcd0) = 0;
              iVar4 = 0x1b;
switchD_1400a3d1d_caseD_1b:
              if (puVar17 == puVar20) goto LAB_1400a3e20;
              do {
                uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                uVar3 = uVar16 & 0xffffffffffffff;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                bVar10 = (byte)(uVar16 >> 0x38);
                uVar18 = *puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 1);
                uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                if (bVar10 == 0x18) goto LAB_1400a456b;
                *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
              } while (puVar17 != puVar20);
              pcVar2 = "$base: short read";
              iVar15 = 1;
            }
            else {
              uVar3 = (ulonglong)*puVar17;
              puVar17 = puVar17 + 1;
LAB_1400a456b:
              uVar18 = (uint)uVar3;
              if (uVar18 == 0x80000000) {
                pcVar2 = "#bmp: bad header";
                goto LAB_1400a4ffc;
              }
              if (0x7fffffff < uVar18) {
                *(undefined1 *)(param_1 + 0x31) = 1;
                uVar18 = -uVar18 & 0x7fffffff;
              }
              *(uint *)(param_1 + 0x2c) = uVar18;
switchD_1400a3d1d_caseD_1c:
              if ((longlong)puVar20 - (longlong)puVar17 < 2) {
                *(undefined8 *)(param_1 + 0xcd0) = 0;
                iVar4 = 0x1d;
switchD_1400a3d1d_caseD_1d:
                if (puVar17 == puVar20) goto LAB_1400a3e20;
                do {
                  uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                  uVar3 = uVar16 & 0xffffffffffffff;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  bVar10 = (byte)(uVar16 >> 0x38);
                  uVar18 = *puVar17;
                  puVar17 = (uint *)((longlong)puVar17 + 1);
                  uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                  *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                  if (bVar10 == 8) goto LAB_1400a4623;
                  *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                } while (puVar17 != puVar20);
                pcVar2 = "$base: short read";
                iVar15 = 1;
              }
              else {
                uVar3 = (ulonglong)(ushort)*puVar17;
                puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a4623:
                if ((int)uVar3 != 1) {
                  pcVar2 = "#bmp: unsupported BMP file";
                  goto LAB_1400a4ffc;
                }
switchD_1400a3d1d_caseD_1e:
                if ((longlong)puVar20 - (longlong)puVar17 < 2) {
                  *(undefined8 *)(param_1 + 0xcd0) = 0;
                  iVar4 = 0x1f;
switchD_1400a3d1d_caseD_1f:
                  if (puVar17 == puVar20) goto LAB_1400a3e20;
                  do {
                    uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                    uVar3 = uVar16 & 0xffffffffffffff;
                    *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                    bVar10 = (byte)(uVar16 >> 0x38);
                    uVar18 = *puVar17;
                    puVar17 = (uint *)((longlong)puVar17 + 1);
                    uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                    *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                    if (bVar10 == 8) goto LAB_1400a46c1;
                    *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                  } while (puVar17 != puVar20);
                  pcVar2 = "$base: short read";
                  iVar15 = 1;
                }
                else {
                  uVar3 = (ulonglong)(ushort)*puVar17;
                  puVar17 = (uint *)((longlong)puVar17 + 2);
LAB_1400a46c1:
                  *(int *)(param_1 + 0x58) = (int)uVar3;
switchD_1400a3d1d_caseD_20:
                  if ((longlong)puVar20 - (longlong)puVar17 < 4) {
                    *(undefined8 *)(param_1 + 0xcd0) = 0;
                    iVar4 = 0x21;
switchD_1400a3d1d_caseD_21:
                    if (puVar17 == puVar20) goto LAB_1400a3e20;
                    do {
                      uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                      uVar3 = uVar16 & 0xffffffffffffff;
                      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                      bVar10 = (byte)(uVar16 >> 0x38);
                      uVar18 = *puVar17;
                      puVar17 = (uint *)((longlong)puVar17 + 1);
                      uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                      *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                      if (bVar10 == 0x18) goto LAB_1400a46dc;
                      *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                    } while (puVar17 != puVar20);
                    pcVar2 = "$base: short read";
                    iVar15 = 1;
                  }
                  else {
                    uVar3 = (ulonglong)*puVar17;
                    puVar17 = puVar17 + 1;
LAB_1400a46dc:
                    iVar4 = (int)uVar3;
                    *(int *)(param_1 + 0x5c) = iVar4;
                    if (*(int *)(param_1 + 0x58) == 0) {
                      if (iVar4 == 4) {
                        *(undefined4 *)(param_1 + 0x3c) = 0x4a504547;
                        pcVar2 = "@base: I/O redirect";
                        *(undefined4 *)(param_1 + 0xb4) = 0;
                        goto LAB_1400a4ffc;
                      }
                      if (iVar4 == 5) {
                        *(undefined4 *)(param_1 + 0x3c) = 0x504e4720;
                        pcVar2 = "@base: I/O redirect";
                        *(undefined4 *)(param_1 + 0xb4) = 0;
                        goto LAB_1400a4ffc;
                      }
                      goto LAB_1400a4049;
                    }
                    *(undefined8 *)(param_1 + 0xcd0) = 0x14;
                    iVar4 = 0x22;
switchD_1400a3d1d_caseD_22:
                    uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                    if ((ulonglong)((longlong)puVar20 - (longlong)puVar17) < uVar16)
                    goto LAB_1400a3e10;
                    puVar17 = (uint *)((longlong)puVar17 + uVar16);
                    uVar18 = *(uint *)(param_1 + 0x50);
                    if (uVar18 == 0x28) {
                      if (0xf < *(uint *)(param_1 + 0x58)) {
                        uVar12 = *(uint *)(param_1 + 0x54);
                        if (uVar12 < 0x10) {
                          if (uVar12 < 0xc) goto LAB_1400a4872;
                          uVar18 = 0x34;
                          iVar4 = uVar12 - 0xc;
                          *(undefined4 *)(param_1 + 0x50) = 0x34;
                        }
                        else {
                          uVar18 = 0x38;
                          iVar4 = uVar12 - 0x10;
                          *(undefined4 *)(param_1 + 0x50) = 0x38;
                        }
                        *(int *)(param_1 + 0x54) = iVar4;
                      }
                    }
                    else if ((((uVar18 != 0x34) && (uVar18 != 0x38)) && (uVar18 != 0x40)) &&
                            ((uVar18 != 0x6c && (uVar18 != 0x7c)))) {
                      pcVar2 = "#bmp: unsupported BMP file";
                      goto LAB_1400a4ffc;
                    }
LAB_1400a4872:
                    if (*(int *)(param_1 + 0x5c) == 6) {
                      *(undefined4 *)(param_1 + 0x5c) = 3;
                    }
                    else if (*(int *)(param_1 + 0x5c) != 3) {
                      if (0x27 < uVar18) {
                        iVar4 = 0x2d;
                        *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(uVar18 - 0x28);
switchD_1400a3d1d_caseD_2d:
                        uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                        if ((ulonglong)((longlong)puVar20 - (longlong)puVar17) < uVar16)
                        goto LAB_1400a3e10;
                        puVar17 = (uint *)((longlong)puVar17 + uVar16);
                        goto LAB_1400a49b4;
                      }
                      goto LAB_1400a4049;
                    }
                    pcVar2 = (char *)(uint *)0x0;
                    if (uVar18 < 0x34) goto LAB_1400a49b4;
switchD_1400a3d1d_caseD_23:
                    if ((longlong)puVar20 - (longlong)puVar17 < 4) {
                      *(undefined8 *)(param_1 + 0xcd0) = 0;
                      iVar4 = 0x24;
switchD_1400a3d1d_caseD_24:
                      if (puVar17 == puVar20) {
LAB_1400a3e20:
                        pcVar2 = "$base: short read";
                        iVar15 = 1;
                      }
                      else {
                        do {
                          uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                          uVar3 = uVar16 & 0xffffffffffffff;
                          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                          bVar10 = (byte)(uVar16 >> 0x38);
                          uVar18 = *puVar17;
                          puVar17 = (uint *)((longlong)puVar17 + 1);
                          uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                          if (bVar10 == 0x18) goto LAB_1400a48e2;
                          *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                        } while (puVar17 != puVar20);
                        pcVar2 = "$base: short read";
                        iVar15 = 1;
                      }
                    }
                    else {
                      uVar3 = (ulonglong)*puVar17;
                      puVar17 = puVar17 + 1;
LAB_1400a48e2:
                      *(int *)(param_1 + 0x68) = (int)uVar3;
switchD_1400a3d1d_caseD_25:
                      if ((longlong)puVar20 - (longlong)puVar17 < 4) {
                        *(undefined8 *)(param_1 + 0xcd0) = 0;
                        iVar4 = 0x26;
switchD_1400a3d1d_caseD_26:
                        if (puVar17 == puVar20) goto LAB_1400a3e20;
                        do {
                          uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                          uVar3 = uVar16 & 0xffffffffffffff;
                          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                          bVar10 = (byte)(uVar16 >> 0x38);
                          uVar18 = *puVar17;
                          puVar17 = (uint *)((longlong)puVar17 + 1);
                          uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                          *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                          if (bVar10 == 0x18) goto LAB_1400a48fb;
                          *(ulonglong *)(param_1 + 0xcd0) = (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                        } while (puVar17 != puVar20);
                        pcVar2 = "$base: short read";
                        iVar15 = 1;
                      }
                      else {
                        uVar3 = (ulonglong)*puVar17;
                        puVar17 = puVar17 + 1;
LAB_1400a48fb:
                        *(int *)(param_1 + 100) = (int)uVar3;
switchD_1400a3d1d_caseD_27:
                        if ((longlong)puVar20 - (longlong)puVar17 < 4) {
                          *(undefined8 *)(param_1 + 0xcd0) = 0;
                          iVar4 = 0x28;
switchD_1400a3d1d_caseD_28:
                          if (puVar17 == puVar20) goto LAB_1400a3e20;
                          do {
                            uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                            uVar3 = uVar16 & 0xffffffffffffff;
                            *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                            bVar10 = (byte)(uVar16 >> 0x38);
                            uVar18 = *puVar17;
                            puVar17 = (uint *)((longlong)puVar17 + 1);
                            uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                            *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                            if (bVar10 == 0x18) goto LAB_1400a4914;
                            *(ulonglong *)(param_1 + 0xcd0) =
                                 (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                          } while (puVar17 != puVar20);
                          pcVar2 = "$base: short read";
                          iVar15 = 1;
                        }
                        else {
                          uVar3 = (ulonglong)*puVar17;
                          puVar17 = puVar17 + 1;
LAB_1400a4914:
                          *(int *)(param_1 + 0x60) = (int)uVar3;
                          if (*(uint *)(param_1 + 0x50) < 0x38) {
LAB_1400a4c33:
                            if ((((*(int *)(param_1 + 0x60) == 0xff) &&
                                 (*(int *)(param_1 + 100) == 0xff00)) &&
                                (*(int *)(param_1 + 0x68) == 0xff0000)) &&
                               ((*(int *)(param_1 + 0x58) == 0x18 ||
                                ((*(int *)(param_1 + 0x58) == 0x20 &&
                                 ((*(int *)(param_1 + 0x6c) + 0x1000000U & 0xfeffffff) == 0)))))) {
                              *(undefined4 *)(param_1 + 0x5c) = 0;
                            }
                            iVar4 = 0x2c;
switchD_1400a3d1d_caseD_2c:
                            pcVar2 = (char *)FUN_1400a7800(param_1);
                            if ((uint *)pcVar2 == (uint *)0x0) goto LAB_1400a49b4;
                            goto LAB_1400a4c84;
                          }
switchD_1400a3d1d_caseD_29:
                          if ((longlong)puVar20 - (longlong)puVar17 < 4) {
                            *(undefined8 *)(param_1 + 0xcd0) = 0;
                            iVar4 = 0x2a;
switchD_1400a3d1d_caseD_2a:
                            if (puVar17 == puVar20) goto LAB_1400a3e20;
                            do {
                              uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                              uVar3 = uVar16 & 0xffffffffffffff;
                              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                              bVar10 = (byte)(uVar16 >> 0x38);
                              uVar18 = *puVar17;
                              puVar17 = (uint *)((longlong)puVar17 + 1);
                              uVar3 = (ulonglong)(byte)uVar18 << (bVar10 & 0x3f) | uVar3;
                              *(ulonglong *)(param_1 + 0xcd0) = uVar3;
                              if (bVar10 == 0x18) goto LAB_1400a4937;
                              *(ulonglong *)(param_1 + 0xcd0) =
                                   (ulonglong)(bVar10 + 8) << 0x38 | uVar3;
                            } while (puVar17 != puVar20);
                            pcVar2 = "$base: short read";
                            iVar15 = 1;
                          }
                          else {
                            uVar3 = (ulonglong)*puVar17;
                            puVar17 = puVar17 + 1;
LAB_1400a4937:
                            iVar4 = 0x2b;
                            *(int *)(param_1 + 0x6c) = (int)uVar3;
                            *(ulonglong *)(param_1 + 0xcd0) =
                                 (ulonglong)(*(int *)(param_1 + 0x50) - 0x38);
switchD_1400a3d1d_caseD_2b:
                            uVar16 = *(ulonglong *)(param_1 + 0xcd0);
                            if (uVar16 <= (ulonglong)((longlong)puVar20 - (longlong)puVar17)) {
                              puVar17 = (uint *)((longlong)puVar17 + uVar16);
                              goto LAB_1400a4c33;
                            }
                            *(byte **)(param_1 + 0xcd0) =
                                 (byte *)((uVar16 - (longlong)puVar20) + (longlong)puVar17);
                            pcVar2 = "$base: short read";
                            puVar17 = puVar20;
                            iVar15 = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
switchD_1400a3d1d_default:
    if (iVar15 != 0) {
      iVar6 = iVar4;
    }
    *(int *)(param_1 + 0xb4) = iVar6;
  }
  else {
LAB_1400a3d70:
    pcVar2 = "#bmp: bad header";
  }
LAB_1400a4ffc:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar17 - *param_3;
  }
  return pcVar2;
}

