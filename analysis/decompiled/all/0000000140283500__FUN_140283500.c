// Function: FUN_140283500
// Addr: 140283500
// Size: 2144 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140283500(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  double *pdVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 unaff_XMM6 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  longlong *local_res18;
  double local_res20;
  int iStack_2b4;
  int iStack_2b0;
  double dStack_2a0;
  double dStack_298;
  longlong *plStack_288;
  double dStack_280;
  double dStack_278;
  undefined1 auStack_270 [24];
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_240;
  longlong lStack_238;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  longlong *plStack_190;
  undefined1 *puStack_188;
  longlong *plStack_178;
  int iStack_170;
  double *local_168;
  double *pdStack_160;
  longlong local_158;
  uint local_150;
  undefined4 local_14c;
  uint local_148;
  longlong local_140 [7];
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [96];
  undefined1 local_88 [64];
  
  plVar22 = (longlong *)*param_1;
  plStack_190 = (longlong *)0x140283526;
  local_res18 = param_3;
  local_res20 = (double)FUN_14041f210();
  dVar10 = _UNK_140492ef8;
  dVar9 = _DAT_140492ef0;
  dVar8 = DAT_1404927c8;
  dVar3 = DAT_1404927c0;
  dVar2 = DAT_140492798;
  uVar27 = 6;
  local_158 = 0;
  local_168 = (double *)0x0;
  pdStack_160 = (double *)0x0;
  if (plVar22 != (longlong *)param_1[1]) {
    pdVar15 = (double *)0x0;
    uVar41 = SUB84(DAT_140492758,0);
    uVar42 = (undefined4)((ulonglong)DAT_140492758 >> 0x20);
    do {
      if (*plVar22 != plVar22[1]) {
        if (pdVar15 != pdStack_160) {
          pdStack_160 = pdVar15;
        }
        plStack_190 = (longlong *)0x140283639;
        (**(code **)(**(longlong **)(plVar22[1] + -8) + 0x28))
                  (*(longlong **)(plVar22[1] + -8),&local_108,DAT_140492778);
        dVar39 = local_res20;
        plVar21 = (longlong *)plVar22[1];
        iVar34 = 0;
        plVar18 = (longlong *)*plVar22;
        local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
        if (plVar18 != plVar21) {
          do {
            plStack_190 = (longlong *)0x140283671;
            pdVar15 = (double *)
                      (**(code **)(*(longlong *)*plVar18 + 0x28))((longlong *)*plVar18,local_f8,0);
            dVar38 = pdVar15[1];
            dVar1 = *pdVar15;
            dVar37 = dVar38 * dVar38 + dVar1 * dVar1;
            if (dVar37 < 0.0) {
              plStack_190 = (longlong *)0x1402836a6;
              dVar37 = (double)FUN_14041f780();
            }
            else {
              dVar37 = SQRT(dVar37);
            }
            dVar12 = dStack_100;
            dVar11 = local_108;
            dVar7 = dVar9;
            dVar40 = dVar10;
            if (dVar37 != 0.0) {
              dVar7 = dVar1 / dVar37;
              dVar40 = dVar38 / dVar37;
            }
            dVar38 = dStack_100 * dStack_100 + local_108 * local_108;
            if (dVar38 < 0.0) {
              plStack_190 = (longlong *)0x140283702;
              dVar38 = (double)FUN_14041f780();
            }
            else {
              dVar38 = SQRT(dVar38);
            }
            dVar37 = dVar10;
            dVar1 = dVar9;
            if (dVar38 != 0.0) {
              dVar37 = dVar12 / dVar38;
              dVar1 = dVar11 / dVar38;
            }
            if ((dVar40 * dVar37 + dVar7 * dVar1 <= 0.0) ||
               (dVar38 = dVar40 * dVar1 - dVar7 * dVar37,
               dVar39 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_140492fd4,
                                         SUB84(dVar38,0) & _DAT_140492fd0))) {
              plStack_190 = (longlong *)0x14028376e;
              FUN_14007b9c0(&local_168,&local_res18);
            }
            plStack_190 = (longlong *)0x140283783;
            pdVar15 = (double *)
                      (**(code **)(*(longlong *)*plVar18 + 0x28))
                                ((longlong *)*plVar18,local_e8,DAT_140492778);
            plVar21 = (longlong *)plVar22[1];
            iVar34 = iVar34 + 1;
            plVar18 = plVar18 + 1;
            local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar34);
            local_108 = *pdVar15;
            dStack_100 = pdVar15[1];
          } while (plVar18 != plVar21);
          uVar41 = SUB84(DAT_140492758,0);
          uVar42 = (undefined4)((ulonglong)DAT_140492758 >> 0x20);
        }
        uVar25 = (int)uVar27 << 1;
        uVar35 = (int)uVar25 >> 3;
        uVar26 = uVar35 | uVar25 & 7;
        uVar27 = (ulonglong)uVar26;
        pdVar15 = local_168;
        if (local_168 == pdStack_160) {
          plVar18 = (longlong *)*plVar22;
          if (plVar18 != plVar21) {
            do {
              lVar16 = *plVar18;
              plVar18 = plVar18 + 1;
              *(uint *)(lVar16 + 8) = uVar26;
            } while (plVar18 != (longlong *)plVar22[1]);
          }
        }
        else if ((longlong)pdStack_160 - (longlong)local_168 == 4) {
          iVar34 = *(int *)local_168;
          local_150 = uVar26;
          local_14c = 7;
          uVar30 = (longlong)plVar21 - *plVar22 >> 3;
          uVar25 = (int)(uVar26 << 1) >> 3 | (uVar35 | uVar25 & 3) << 1;
          uVar27 = (ulonglong)uVar25;
          local_148 = uVar25;
          if (uVar30 < 3) {
            if (uVar30 != 0) {
              local_140[6] = 0;
              iVar20 = iVar34 * 3;
              local_140[0] = 0;
              local_140[1] = 0;
              local_140[2] = 0;
              local_140[3] = 0;
              local_140[4] = 0;
              local_140[5] = 0;
              plVar21 = *(longlong **)*plVar22;
              plStack_190 = (longlong *)0x140283b51;
              (**(code **)(*plVar21 + 0x70))
                        (plVar21,local_140 + iVar20,local_140 + (iVar20 + 1),
                         local_140 + (iVar20 + 2));
              if ((ulonglong)(plVar22[1] - *plVar22) < 0x10) {
                *(uint *)(local_140[0] + 8) = uVar26;
                *(undefined4 *)(local_140[1] + 8) = 7;
                lVar16 = local_140[2];
              }
              else {
                plVar21 = *(longlong **)(*plVar22 + 8);
                plStack_190 = (longlong *)0x140283ba2;
                (**(code **)(*plVar21 + 0x70))
                          (plVar21,local_140 + (iVar34 * -3 + 3),local_140 + (iVar34 * -3 + 4),
                           local_140 + (iVar34 * -3 + 5));
                *(uint *)(local_140[1] + 8) = uVar26;
                *(uint *)(local_140[0] + 8) = uVar26;
                *(undefined4 *)(local_140[3] + 8) = 7;
                *(undefined4 *)(local_140[2] + 8) = *(undefined4 *)(local_140[3] + 8);
                *(uint *)(local_140[5] + 8) = uVar25;
                lVar16 = local_140[4];
              }
              *(uint *)(lVar16 + 8) = uVar25;
              plVar21 = (longlong *)plVar22[1];
              plVar18 = (longlong *)*plVar22;
              if (plVar18 != plVar21) {
                do {
                  puVar4 = (undefined8 *)*plVar18;
                  if (puVar4 != (undefined8 *)0x0) {
                    plStack_190 = (longlong *)0x140283c1a;
                    (**(code **)*puVar4)(puVar4,1);
                  }
                  plVar18 = plVar18 + 1;
                } while (plVar18 != plVar21);
                plVar22[1] = *plVar22;
              }
              iVar34 = 0;
              lVar16 = local_140[0];
              while (pdVar15 = local_168, lVar16 != 0) {
                puVar4 = (undefined8 *)plVar22[1];
                plVar21 = (longlong *)local_140[iVar34];
                local_res18 = plVar21;
                if (puVar4 == (undefined8 *)plVar22[2]) {
                  plStack_190 = (longlong *)0x140283c8f;
                  FUN_140282410(plVar22,puVar4,&local_res18);
                }
                else if (plVar21 == (longlong *)0x0) {
                  *puVar4 = 0;
                  plVar22[1] = plVar22[1] + 8;
                }
                else {
                  plStack_190 = (longlong *)0x140283c67;
                  uVar17 = (**(code **)(*plVar21 + 8))(plVar21);
                  *puVar4 = uVar17;
                  plVar22[1] = plVar22[1] + 8;
                }
                if (plVar21 != (longlong *)0x0) {
                  plStack_190 = (longlong *)0x140283ca1;
                  (**(code **)*plVar21)(plVar21,1);
                }
                iVar34 = iVar34 + 1;
                lVar16 = local_140[iVar34];
              }
            }
          }
          else {
            iVar31 = 0;
            iVar20 = (int)uVar30;
            if (3 < iVar20) {
              dVar39 = (double)(iVar20 + -1);
              do {
                *(undefined4 *)
                 (*(longlong *)(*plVar22 + (longlong)((iVar31 + iVar34) % iVar20) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_158 +
                      (longlong)
                      (int)(((((double)iVar31 * dVar3) / dVar39 + dVar8) - dVar2) +
                           (double)CONCAT44(uVar42,uVar41)) * 4);
                *(undefined4 *)
                 (*(longlong *)(*plVar22 + (longlong)((iVar31 + iVar34 + 1) % iVar20) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_158 +
                      (longlong)
                      (int)(((((double)(iVar31 + 1) * dVar3) / dVar39 + dVar8) - dVar2) +
                           (double)CONCAT44(uVar42,uVar41)) * 4);
                *(undefined4 *)
                 (*(longlong *)(*plVar22 + (longlong)((iVar31 + iVar34 + 2) % iVar20) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_158 +
                      (longlong)
                      (int)(((((double)(iVar31 + 2) * dVar3) / dVar39 + dVar8) - dVar2) +
                           (double)CONCAT44(uVar42,uVar41)) * 4);
                iVar13 = iVar31 + 3;
                iVar14 = iVar31 + iVar34 + 3;
                iVar31 = iVar31 + 4;
                *(undefined4 *)(*(longlong *)(*plVar22 + (longlong)(iVar14 % iVar20) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_158 +
                      (longlong)
                      (int)(((((double)iVar13 * dVar3) / dVar39 + dVar8) - dVar2) +
                           (double)CONCAT44(uVar42,uVar41)) * 4);
              } while (iVar31 < iVar20 + -3);
            }
            if (iVar31 < iVar20) {
              do {
                dVar39 = (double)iVar31;
                iVar13 = iVar31 + iVar34;
                iVar31 = iVar31 + 1;
                *(undefined4 *)(*(longlong *)(*plVar22 + (longlong)(iVar13 % iVar20) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_158 +
                      (longlong)
                      (int)((((dVar39 * dVar3) / (double)(iVar20 + -1) + dVar8) - dVar2) +
                           (double)CONCAT44(uVar42,uVar41)) * 4);
              } while (iVar31 < iVar20);
            }
          }
        }
        else {
          iVar20 = 0;
          iVar34 = *(int *)local_168;
          iVar13 = 0;
          iVar31 = (int)((longlong)plVar21 - *plVar22 >> 3);
          if (0 < iVar31) {
            do {
              iVar14 = iVar20 + 1;
              iVar19 = (iVar13 + iVar34) % iVar31;
              iVar32 = (int)((longlong)pdStack_160 - (longlong)local_168 >> 2);
              if ((iVar14 < iVar32) &&
                 (*(int *)((longlong)local_168 + (longlong)iVar14 * 4) == iVar19)) {
                uVar26 = 0;
                if (iVar20 == iVar32 + -2) {
                  uVar26 = (uVar35 | uVar25) & (uint)uVar27;
                }
                iVar20 = iVar14;
                if (((uVar26 - 1 & 0xfffffffc) == 0) && (uVar26 != 3)) {
                  uVar27 = (ulonglong)(uVar26 ^ 7);
                }
                else {
                  uVar26 = (uint)uVar27 << 1;
                  uVar27 = (ulonglong)((int)uVar26 >> 3 | uVar26 & 7);
                }
              }
              iVar13 = iVar13 + 1;
              *(int *)(*(longlong *)(*plVar22 + (longlong)iVar19 * 8) + 8) = (int)uVar27;
            } while (iVar13 < iVar31);
          }
        }
      }
      plVar22 = plVar22 + 3;
    } while (plVar22 != (longlong *)param_1[1]);
    if (pdVar15 != (double *)0x0) {
      plVar21 = (longlong *)((local_158 - (longlong)pdVar15 >> 2) * 4);
      pdVar28 = pdVar15;
      if ((longlong *)0xfff < plVar21) {
        pdVar28 = (double *)pdVar15[-1];
        pdVar15 = (double *)((longlong)pdVar15 + (-8 - (longlong)pdVar28));
        if ((double *)0x1f < pdVar15) {
          plVar18 = (longlong *)&DAT_00000005;
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)();
          dVar2 = pdVar15[4];
          dVar3 = pdVar15[5];
          uVar25 = (uint)((char)plVar21[3] != '\0');
          if (*(uint *)((longlong)plVar18 + 0x14) != uVar25) {
            *(uint *)((longlong)plVar18 + 0x14) = uVar25;
            *plVar18 = *plVar18 +
                       (longlong)((*(int *)((longlong)plVar18 + 0xc) + -1) * (int)plVar18[2]) * 4;
            *(int *)(plVar18 + 2) = -(int)plVar18[2];
          }
          plStack_288 = plVar21;
          plStack_190 = plVar22;
          puStack_188 = local_88;
          plStack_178 = plVar18;
          local_168 = pdVar15;
          FUN_1402854d0(&dStack_280,plVar21);
          iVar34 = 0;
          for (plVar22 = (longlong *)*plVar21; plVar22 != (longlong *)plVar21[1];
              plVar22 = plVar22 + 3) {
            iVar34 = iVar34 + (int)(plVar22[1] - *plVar22 >> 3);
          }
          FUN_140280e00(&lStack_240,(longlong)iVar34);
          dVar8 = DAT_140492758;
          if (0 < *(int *)((longlong)plVar18 + 0xc)) {
            iVar34 = (int)plVar18[1];
            iStack_2b0 = 0;
            iStack_2b4 = 1;
            uStack_1d8 = unaff_XMM6._0_8_;
            uStack_1d0 = unaff_XMM6._8_8_;
            uStack_1b0 = 0;
            uStack_1a8 = uVar27;
            do {
              iStack_170 = iVar34 + -1;
              if (-1 < iStack_2b4) {
                iStack_170 = 0;
              }
              if (0 < iVar34) {
                pdStack_160 = (double *)((ulonglong)pdStack_160 & 0xffffffff00000000);
                lVar16 = *plVar18 + (longlong)(iStack_2b0 * (int)plVar18[2]) * 4;
                do {
                  iVar20 = iStack_170;
                  dStack_298 = ((double)iStack_2b0 + dVar8) / pdVar15[1] - pdVar15[3];
                  dStack_2a0 = ((double)iStack_170 + dVar8) / *pdVar15 - pdVar15[2];
                  lVar23 = lStack_258;
                  dStack_280 = dStack_2a0;
                  dStack_278 = dStack_298;
                  if (lStack_258 != lStack_250) {
                    do {
                      FUN_140284ac0(lVar23,&dStack_2a0);
                      lVar23 = lVar23 + 0xa0;
                    } while (lVar23 != lStack_250);
                  }
                  plVar22 = (longlong *)*plStack_288;
                  lVar23 = lStack_240;
                  if (lStack_240 == lStack_238) {
                    lVar23 = 0;
                  }
                  plVar21 = plStack_288;
                  if (plVar22 != (longlong *)plStack_288[1]) {
                    do {
                      puVar4 = (undefined8 *)plVar22[1];
                      puVar24 = (undefined8 *)*plVar22;
                      lVar36 = lVar23;
                      if (puVar24 != puVar4) {
                        uVar17 = puVar4[-1];
                        lVar33 = (longlong)((int)((longlong)plVar22 - *plVar21 >> 3) * -0x55555555)
                                 * 0xa0 + lStack_258;
                        if ((ulonglong)((longlong)puVar4 - (longlong)puVar24) < 0x10) {
                          uVar29 = *puVar24;
                        }
                        else {
                          uVar29 = puVar4[-2];
                        }
                        do {
                          uVar5 = *puVar24;
                          lVar36 = lVar23 + 0x38;
                          FUN_140284c20(lVar33,lVar23,uVar29,uVar17,uVar5);
                          puVar24 = puVar24 + 1;
                          plVar21 = plStack_288;
                          uVar29 = uVar17;
                          uVar17 = uVar5;
                          lVar23 = lVar36;
                        } while (puVar24 != (undefined8 *)plVar22[1]);
                      }
                      plVar22 = plVar22 + 3;
                      lVar23 = lVar36;
                      iVar20 = iStack_170;
                    } while (plVar22 != (longlong *)plVar21[1]);
                  }
                  FUN_140285730(&dStack_280,&dStack_228);
                  lVar23 = (longlong)(iVar20 * 3);
                  iStack_170 = iVar20 + iStack_2b4;
                  iVar20 = (int)pdStack_160 + 1;
                  pdStack_160 = (double *)CONCAT44(pdStack_160._4_4_,iVar20);
                  *(float *)(lVar16 + lVar23 * 4) = (float)((dVar3 + dStack_228) * dVar2);
                  *(float *)(lVar16 + 4 + lVar23 * 4) = (float)((dVar3 + dStack_220) * dVar2);
                  *(float *)(lVar16 + 8 + lVar23 * 4) = (float)((dVar3 + dStack_218) * dVar2);
                  pdVar15 = local_168;
                  plVar18 = plStack_178;
                } while (iVar20 < iVar34);
              }
              iStack_2b4 = -iStack_2b4;
              iStack_2b0 = iStack_2b0 + 1;
            } while (iStack_2b0 < *(int *)((longlong)plVar18 + 0xc));
          }
          FUN_140103850(&lStack_240);
          FUN_140284100(&lStack_258);
          FUN_140031b80(auStack_270);
          return;
        }
        plVar21 = (longlong *)((longlong)plVar21 + 0x27);
      }
      plStack_190 = (longlong *)0x1402838d8;
      thunk_FUN_14028af80(pdVar28,plVar21);
    }
  }
  return;
}

