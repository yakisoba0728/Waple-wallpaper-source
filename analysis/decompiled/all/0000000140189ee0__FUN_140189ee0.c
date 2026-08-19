// Function: FUN_140189ee0
// Addr: 140189ee0
// Size: 294 bytes


void FUN_140189ee0(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  float extraout_XMM0_Da;
  float fVar24;
  float extraout_XMM0_Da_00;
  undefined8 uStack_1d8;
  float fStack_1d0;
  longlong *plStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 ***pppuStack_198;
  longlong lStack_190;
  longlong local_188;
  ulonglong uStack_180;
  float local_178;
  float local_174;
  undefined4 uStack_170;
  undefined8 ***pppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  longlong *plStack_120;
  longlong *plStack_110;
  longlong *plStack_100;
  longlong *plStack_f0;
  longlong *plStack_e0;
  longlong *plStack_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [40];
  
  if (*(char *)(param_1[0x1b] + 0x1838) != '\0') {
    (**(code **)(param_1[9] + 0xb0))(param_1 + 9,local_a0,local_c0);
    (**(code **)(*param_1 + 0x40))(param_1,local_90,local_b0);
    (**(code **)(param_1[9] + 0xa8))(param_1 + 9,&local_178,0);
    lVar3 = param_1[0x1b];
    if ((local_178 != *(float *)(param_1 + 0x60)) ||
       (bVar8 = false, local_174 != *(float *)((longlong)param_1 + 0x304))) {
      bVar8 = true;
    }
    local_188 = param_1[0x5a];
    uVar11 = *(uint *)(param_1 + 0x1c);
    bVar2 = *(byte *)(param_1 + 0x61);
    *(float *)(param_1 + 0x60) = local_178;
    *(float *)((longlong)param_1 + 0x304) = local_174;
    bVar15 = *(byte *)(lVar3 + 0xa4) & 1;
    if (((uVar11 >> 8 & 1) == 0) || ((uVar11 >> 3 & 1) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    fStack_1b0 = local_178;
    fStack_1ac = local_174;
    uStack_158 = 0;
    uStack_150 = 0xf;
    uStack_1a4 = 0;
    uStack_19c = 0;
    pppuStack_198 = (undefined8 ****)0x0;
    uStack_160 = 0;
    pppuStack_168 = (undefined8 ****)0x0;
    uStack_1a8 = uStack_170;
    if ((bVar15 != bVar2) && (bVar15 != 0)) {
      uVar11 = uVar11 | 0x10000000;
      *(uint *)(param_1 + 0x1c) = uVar11;
    }
    if ((uVar11 >> 3 & 1) == 0) {
      plVar20 = param_1 + 0x4d;
      FUN_14019ebd0(plVar20,param_1 + 0x2b);
      func_0x000140186690(plVar20,param_1[0x1b] + 0x160);
    }
    else {
      plVar20 = param_1 + 0x2b;
    }
    uVar18 = (ulonglong)bVar15;
    uVar11 = (int)(plVar20[1] - *plVar20 >> 3) - 1;
    uStack_180 = (ulonglong)uVar11;
    bVar16 = bVar15;
    if (-1 < (int)uVar11) {
      plStack_140 = param_1 + 0x58;
      plStack_148 = param_1 + 0x50;
      do {
        plVar12 = *(longlong **)(*plVar20 + uStack_180 * 8);
        if ((*(ushort *)(plVar12 + 0x24) & 0x2000) != 0) {
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if ((iVar10 == 1) || (plVar17 = (longlong *)0x0, iVar10 == 4)) {
            plVar17 = plVar12;
          }
          plVar19 = plVar12;
          if (iVar10 != 5) {
            plVar19 = (longlong *)0x0;
          }
          if ((plVar17 == (longlong *)0x0) && (plVar19 == (longlong *)0x0)) {
            uVar18 = (ulonglong)bVar15;
          }
          else {
            uStack_1d8 = 0;
            puVar21 = local_c0;
            if ((*(ushort *)(plVar12 + 0x24) & 0x80) != 0) {
              puVar21 = local_b0;
            }
            fStack_1d0 = 0.0;
            puVar22 = local_a0;
            if ((*(ushort *)(plVar12 + 0x24) & 0x80) != 0) {
              puVar22 = local_90;
            }
            fVar24 = extraout_XMM0_Da;
            if ((bVar7) && (plVar17 != (longlong *)0x0)) {
              fVar1 = *(float *)((longlong)param_1 + 0x334);
              fStack_1d0 = fVar1 * 0.0;
              fVar24 = fVar1 * (*(float *)((longlong)plVar17 + 300) -
                               *(float *)((longlong)param_1 + 0x344)) *
                       *(float *)((longlong)plVar17 + 0x174);
              uStack_1d8 = CONCAT44(fVar24,fVar1 * (*(float *)(plVar17 + 0x25) -
                                                   *(float *)(param_1 + 0x68)) *
                                           *(float *)(plVar17 + 0x2e));
            }
            lStack_190 = param_1[0x59];
            plVar23 = (longlong *)
                      ((((((((((ulonglong)plVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (longlong)plVar12 >> 8 & 0xffU) * 0x100000001b3 ^
                            (longlong)plVar12 >> 0x10 & 0xffU) * 0x100000001b3 ^
                           (longlong)plVar12 >> 0x18 & 0xffU) * 0x100000001b3 ^
                          (longlong)plVar12 >> 0x20 & 0xffU) * 0x100000001b3 ^
                         (longlong)plVar12 >> 0x28 & 0xffU) * 0x100000001b3 ^
                        (longlong)plVar12 >> 0x30 & 0xffU) * 0x100000001b3 ^
                       (longlong)plVar12 >> 0x38 & 0xffU) * 0x100000001b3);
            lVar14 = *(longlong *)(param_1[0x5b] + 8 + ((ulonglong)plVar23 & param_1[0x5e]) * 0x10);
            if (lVar14 == lStack_190) {
code_r0x00014018a2d7:
              lVar14 = 0;
            }
            else {
              plVar4 = *(longlong **)(lVar14 + 0x10);
              while (plVar12 != plVar4) {
                if (lVar14 == *(longlong *)
                               (param_1[0x5b] + ((ulonglong)plVar23 & param_1[0x5e]) * 0x10))
                goto code_r0x00014018a2d7;
                lVar14 = *(longlong *)(lVar14 + 8);
                plVar4 = *(longlong **)(lVar14 + 0x10);
              }
            }
            if (lVar14 == 0) {
              lVar14 = lStack_190;
            }
            uStack_1c0 = 0;
            uStack_1b8 = 0;
            plStack_1c8 = plVar23;
            lStack_138 = lVar14;
            if (((plVar17 == (longlong *)0x0) ||
                (cVar9 = func_0x00014019dc80(param_1[0x1b],plVar17,&uStack_1d8,puVar22,puVar21,
                                             &uStack_1c0), fVar24 = extraout_XMM0_Da_00,
                cVar9 == '\0')) &&
               ((plVar19 == (longlong *)0x0 ||
                (cVar9 = FUN_1401855f0(fVar24,plVar19), cVar9 == '\0')))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            pppuStack_198 = (undefined8 ****)0x0;
            if ((((local_188 != 0) || (bVar15 != bVar2)) &&
                (cVar9 = (**(code **)(*plVar12 + 0x88))
                                   (plVar12,&uStack_1d8,puVar22,puVar21,&uStack_1c0,&pppuStack_168),
                cVar9 != '\0')) && (pppuStack_198 = &pppuStack_168, 0xf < uStack_150)) {
              pppuStack_198 = pppuStack_168;
            }
            uVar18 = (ulonglong)bVar15;
            uStack_19c = uStack_1b8;
            uStack_1a4 = uStack_1c0;
            if ((local_188 == 0) || (bVar15 == 0)) {
              if (bVar6) {
                lVar14 = *(longlong *)
                          (param_1[0x53] + 8 + ((ulonglong)plVar23 & param_1[0x56]) * 0x10);
                if (lVar14 == param_1[0x51]) {
code_r0x00014018a5c6:
                  lVar14 = 0;
                }
                else {
                  plVar17 = *(longlong **)(lVar14 + 0x10);
                  while (plVar12 != plVar17) {
                    if (lVar14 == *(longlong *)
                                   (param_1[0x53] + ((ulonglong)plVar23 & param_1[0x56]) * 0x10))
                    goto code_r0x00014018a5c6;
                    lVar14 = *(longlong *)(lVar14 + 8);
                    plVar17 = *(longlong **)(lVar14 + 0x10);
                  }
                }
                if (((lVar14 == 0) || (lVar14 == param_1[0x51])) &&
                   (plStack_1c8 = plVar12, FUN_1401a0e40(plStack_148,auStack_78,&plStack_1c8),
                   (*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)) {
                  plVar17 = *(longlong **)(lVar3 + 0x17e0);
                  bVar6 = false;
                  plVar19 = (longlong *)*plVar17;
                  if (plVar19 != plVar17) {
                    do {
                      lVar14 = plVar19[2];
                      if (((lVar14 != 0) &&
                          (((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                            (*(longlong *)(lVar14 + 8) == 0)) &&
                           ((*(uint *)(lVar14 + 0x40) & 0x100) != 0)))) &&
                         (*(int *)(lVar14 + 0x44) == 2)) {
                        if (!bVar6) {
                          plStack_120 = *(longlong **)(lVar3 + 0x1830);
                          (**(code **)(*plStack_120 + 0x20))();
                          bVar6 = true;
                        }
                        (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                  (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                                   *(undefined8 *)(lVar14 + 0x48),8,&fStack_1b0,0);
                      }
                      plVar19 = (longlong *)*plVar19;
                    } while (plVar19 != plVar17);
                    if (bVar6) {
                      (**(code **)(*plStack_120 + 0x28))();
                    }
                  }
                }
                if ((bVar8) && ((*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)
                   ) {
                  plVar17 = *(longlong **)(lVar3 + 0x17e0);
                  bVar6 = false;
                  plVar19 = (longlong *)*plVar17;
                  if (plVar19 != plVar17) {
                    do {
                      lVar14 = plVar19[2];
                      if (((lVar14 != 0) &&
                          ((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                           (*(longlong *)(lVar14 + 8) == 0)))) &&
                         (((*(uint *)(lVar14 + 0x40) & 0x400) != 0 && (*(int *)(lVar14 + 0x44) == 2)
                          ))) {
                        if (!bVar6) {
                          plStack_110 = *(longlong **)(lVar3 + 0x1830);
                          (**(code **)(*plStack_110 + 0x20))();
                          bVar6 = true;
                        }
                        (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                  (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                                   *(undefined8 *)(lVar14 + 0x48),10,&fStack_1b0,0);
                      }
                      plVar19 = (longlong *)*plVar19;
                    } while (plVar19 != plVar17);
                    if (bVar6) {
                      (**(code **)(*plStack_110 + 0x28))();
                    }
                  }
                }
                if (bVar15 != bVar2) {
                  if ((*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0) {
                    plVar17 = *(longlong **)(lVar3 + 0x17e0);
                    bVar6 = false;
                    plVar19 = (longlong *)*plVar17;
                    if (plVar19 != plVar17) {
                      do {
                        lVar14 = plVar19[2];
                        if (((lVar14 != 0) &&
                            (((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                              (*(longlong *)(lVar14 + 8) == 0)) &&
                             ((*(uint *)(lVar14 + 0x40) >> (bVar15 ^ 1 | 0xc) & 1) != 0)))) &&
                           (*(int *)(lVar14 + 0x44) == 2)) {
                          if (!bVar6) {
                            plStack_100 = *(longlong **)(lVar3 + 0x1830);
                            (**(code **)(*plStack_100 + 0x20))();
                            bVar6 = true;
                          }
                          (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                    (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                                     *(undefined8 *)(lVar14 + 0x48),bVar15 ^ 1 | 0xc,&fStack_1b0,0);
                        }
                        plVar19 = (longlong *)*plVar19;
                      } while (plVar19 != plVar17);
                      if (bVar6) {
                        (**(code **)(*plStack_100 + 0x28))();
                      }
                    }
                  }
                  if (bVar15 == 0) {
                    if ((lStack_138 != lStack_190) &&
                       ((*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)) {
                      plVar17 = *(longlong **)(lVar3 + 0x17e0);
                      bVar6 = false;
                      plVar19 = (longlong *)*plVar17;
                      if (plVar19 != plVar17) {
                        do {
                          lVar14 = plVar19[2];
                          if ((((lVar14 != 0) &&
                               ((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                                (*(longlong *)(lVar14 + 8) == 0)))) &&
                              ((*(uint *)(lVar14 + 0x40) & 0x800) != 0)) &&
                             (*(int *)(lVar14 + 0x44) == 2)) {
                            if (!bVar6) {
                              plStack_f0 = *(longlong **)(lVar3 + 0x1830);
                              (**(code **)(*plStack_f0 + 0x20))();
                              bVar6 = true;
                            }
                            (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                      (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38)
                                       ,*(undefined8 *)(lVar14 + 0x48),0xb,&fStack_1b0,0);
                          }
                          plVar19 = (longlong *)*plVar19;
                        } while (plVar19 != plVar17);
                        if (bVar6) {
                          (**(code **)(*plStack_f0 + 0x28))();
                        }
                      }
                    }
                  }
                  else {
                    plStack_1c8 = plVar12;
                    FUN_1401a0e40(plStack_140,auStack_68,&plStack_1c8);
                  }
                }
                uVar18 = (ulonglong)bVar15;
                if (((*(ushort *)(plVar12 + 0x24) >> 0xe & 1) != 0) &&
                   ((*(ushort *)(plVar12 + 0x24) & 1) != 0)) {
                  bVar16 = bVar15;
                  if (plVar12[0x30] == 0) break;
                  cVar9 = FUN_1401850e0();
                  bVar16 = (byte)uVar18;
                  if (cVar9 != '\0') break;
                }
              }
              else {
                if ((((bVar15 == 0) && (bVar2 != 0)) && (lVar14 != lStack_190)) &&
                   ((*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)) {
                  plVar17 = *(longlong **)(lVar3 + 0x17e0);
                  bVar6 = false;
                  plVar19 = (longlong *)*plVar17;
                  if (plVar19 != plVar17) {
                    do {
                      lVar14 = plVar19[2];
                      if (((lVar14 != 0) &&
                          ((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                           (*(longlong *)(lVar14 + 8) == 0)))) &&
                         (((*(uint *)(lVar14 + 0x40) & 0x2000) != 0 &&
                          (*(int *)(lVar14 + 0x44) == 2)))) {
                        if (!bVar6) {
                          plStack_e0 = *(longlong **)(lVar3 + 0x1830);
                          (**(code **)(*plStack_e0 + 0x20))(plStack_e0);
                          bVar6 = true;
                        }
                        (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                  (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                                   *(undefined8 *)(lVar14 + 0x48),0xd,&fStack_1b0,0);
                      }
                      plVar23 = plStack_1c8;
                      plVar19 = (longlong *)*plVar19;
                    } while (plVar19 != plVar17);
                    if (bVar6) {
                      (**(code **)(*plStack_e0 + 0x28))();
                    }
                  }
                }
                lVar14 = *(longlong *)
                          (param_1[0x53] + 8 + ((ulonglong)plVar23 & param_1[0x56]) * 0x10);
                if (lVar14 == param_1[0x51]) {
code_r0x00014018aa7a:
                  lVar14 = 0;
                }
                else {
                  plVar17 = *(longlong **)(lVar14 + 0x10);
                  while (plVar12 != plVar17) {
                    if (lVar14 == *(longlong *)
                                   (param_1[0x53] + ((ulonglong)plVar23 & param_1[0x56]) * 0x10))
                    goto code_r0x00014018aa7a;
                    lVar14 = *(longlong *)(lVar14 + 8);
                    plVar17 = *(longlong **)(lVar14 + 0x10);
                  }
                }
                if (((lVar14 != 0) && (lVar14 != param_1[0x51])) &&
                   (FUN_14019ee30(param_1 + 0x50,auStack_80),
                   (*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)) {
                  plVar17 = *(longlong **)(lVar3 + 0x17e0);
                  bVar6 = false;
                  plVar19 = (longlong *)*plVar17;
                  if (plVar19 != plVar17) {
                    do {
                      lVar14 = plVar19[2];
                      if (((lVar14 != 0) &&
                          (((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                            (*(longlong *)(lVar14 + 8) == 0)) &&
                           ((*(uint *)(lVar14 + 0x40) & 0x200) != 0)))) &&
                         (*(int *)(lVar14 + 0x44) == 2)) {
                        if (!bVar6) {
                          plStack_d0 = *(longlong **)(lVar3 + 0x1830);
                          (**(code **)(*plStack_d0 + 0x20))();
                          bVar6 = true;
                        }
                        (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                                  (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                                   *(undefined8 *)(lVar14 + 0x48),9,&fStack_1b0,0);
                      }
                      plVar19 = (longlong *)*plVar19;
                    } while (plVar19 != plVar17);
                    plVar12 = plStack_d0;
                    if (bVar6) goto code_r0x00014018a4ab;
                  }
                }
code_r0x00014018a4b8:
                uVar18 = (ulonglong)bVar15;
              }
            }
            else if (((lVar14 != lStack_190) && (bVar8)) &&
                    ((*(uint *)(*(longlong *)(lVar3 + 0x1710) + 0x118) & 0xc000000) == 0)) {
              plVar17 = *(longlong **)(lVar3 + 0x17e0);
              bVar6 = false;
              plVar19 = (longlong *)*plVar17;
              if (plVar19 != plVar17) {
                do {
                  lVar14 = plVar19[2];
                  if ((((lVar14 != 0) &&
                       ((*(longlong **)(lVar14 + 0x48) == plVar12 ||
                        (*(longlong *)(lVar14 + 8) == 0)))) &&
                      ((*(uint *)(lVar14 + 0x40) & 0x400) != 0)) && (*(int *)(lVar14 + 0x44) == 2))
                  {
                    if (!bVar6) {
                      plStack_130 = *(longlong **)(lVar3 + 0x1830);
                      (**(code **)(*plStack_130 + 0x20))();
                      bVar6 = true;
                    }
                    (**(code **)(**(longlong **)(lVar3 + 0x1830) + 0x40))
                              (*(longlong **)(lVar3 + 0x1830),*(undefined8 *)(lVar14 + 0x38),
                               *(undefined8 *)(lVar14 + 0x48),10,&fStack_1b0,0);
                  }
                  plVar19 = (longlong *)*plVar19;
                } while (plVar19 != plVar17);
                plVar12 = plStack_130;
                if (bVar6) {
code_r0x00014018a4ab:
                  (**(code **)(*plVar12 + 0x28))();
                }
                goto code_r0x00014018a4b8;
              }
            }
          }
        }
        uVar11 = (int)uStack_180 - 1;
        uStack_180 = (ulonglong)uVar11;
        bVar16 = (byte)uVar18;
      } while (-1 < (int)uVar11);
    }
    *(byte *)(param_1 + 0x61) = bVar16;
    if (bVar16 == 0) {
      if (bVar2 != 0) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xefffffff;
      }
      FUN_140078020(param_1 + 0x58);
    }
    if (0xf < uStack_150) {
      uVar18 = uStack_150 + 1;
      ppppuVar13 = (undefined8 ****)pppuStack_168;
      if (0xfff < uVar18) {
        ppppuVar13 = (undefined8 ****)pppuStack_168[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_168 + (-8 - (longlong)ppppuVar13))) {
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = uStack_150 + 0x28;
      }
      func_0x00014028b040(ppppuVar13,uVar18);
    }
  }
  return;
}

