// Function: FUN_14002f0b0
// Addr: 14002f0b0
// Size: 1725 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14002f0b0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong *puVar20;
  bool bVar21;
  undefined8 *******local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 *******local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  longlong local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined8 *******local_68;
  ulonglong local_60;
  undefined8 *******local_58;
  ulonglong local_50;
  
  uVar19 = *(uint *)(param_2 + 1) & 0xff;
  if (((uVar19 == 6) || (uVar19 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    bVar5 = false;
    plVar15 = (longlong *)**(undefined8 **)*param_2;
  }
  else {
    plVar15 = (longlong *)0x0;
    bVar5 = true;
  }
  if (((uVar19 == 6) || (uVar19 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    plVar18 = *(longlong **)*param_2;
    bVar6 = false;
  }
  else {
    plVar18 = (longlong *)0x0;
    bVar6 = true;
  }
  do {
    bVar21 = bVar6;
    if (!bVar5) {
      bVar21 = plVar15 == plVar18;
    }
    if (bVar21) {
      return;
    }
    FUN_140088360(plVar15 + 6,&local_80);
    local_a8 = local_80;
    local_a0 = local_80;
    if (local_80 != local_78) {
      do {
        uVar14 = local_a8[2];
        pppppppuVar10 = (undefined8 *******)0x0;
        local_c8 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        puVar11 = local_a8;
        if (0xf < local_a8[3]) {
          puVar11 = (ulonglong *)*local_a8;
        }
        if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_1400172e0();
        }
        if (uVar14 < 0x10) {
          local_b0 = 0xf;
          local_c8 = (undefined8 *******)*puVar11;
          uStack_c0 = puVar11[1];
          local_b8 = uVar14;
        }
        else {
          uVar17 = uVar14 | 0xf;
          if (uVar17 < 0x8000000000000000) {
            if (uVar17 < 0x16) {
              uVar17 = 0x16;
            }
            uVar1 = uVar17 + 1;
            if (uVar1 != 0) {
              if (0xfff < uVar1) {
                uVar12 = uVar17 + 0x28;
                if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_14002f203;
              }
              pppppppuVar10 = (undefined8 *******)FUN_14028af20(uVar1);
            }
          }
          else {
            uVar17 = 0x7fffffffffffffff;
            uVar12 = 0x8000000000000027;
LAB_14002f203:
            ppppppuVar9 = (undefined8 ******)FUN_14028af20(uVar12);
            if (ppppppuVar9 == (undefined8 ******)0x0) goto LAB_14002f72d;
            pppppppuVar10 = (undefined8 *******)((longlong)ppppppuVar9 + 0x27U & 0xffffffffffffffe0)
            ;
            pppppppuVar10[-1] = ppppppuVar9;
          }
          local_c8 = pppppppuVar10;
          local_b8 = uVar14;
          local_b0 = uVar17;
          FUN_1404210f0(pppppppuVar10,puVar11,uVar14 + 1);
        }
        pppppppuVar10 = &local_c8;
        if (0xf < local_b0) {
          pppppppuVar10 = local_c8;
        }
        lVar8 = FUN_140086de0(plVar15 + 6,pppppppuVar10,local_b8 + (longlong)pppppppuVar10);
        if (*(char *)(lVar8 + 8) == '\a') {
          FUN_140088360(*param_1,&local_98);
          puVar11 = local_98;
          puVar13 = local_90;
          puVar20 = local_98;
          if (local_98 != local_90) {
            do {
              uVar14 = puVar20[2];
              pppppppuVar10 = (undefined8 *******)0x0;
              local_e8 = (undefined8 *******)0x0;
              uStack_e0 = 0;
              local_d8 = 0;
              local_d0 = 0;
              puVar16 = puVar20;
              if (0xf < puVar20[3]) {
                puVar16 = (ulonglong *)*puVar20;
              }
              if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_1400172e0();
              }
              if (uVar14 < 0x10) {
                local_d0 = 0xf;
                local_e8 = (undefined8 *******)*puVar16;
                uStack_e0 = puVar16[1];
                local_d8 = uVar14;
              }
              else {
                uVar17 = uVar14 | 0xf;
                if (uVar17 < 0x8000000000000000) {
                  if (uVar17 < 0x16) {
                    uVar17 = 0x16;
                  }
                  uVar1 = uVar17 + 1;
                  if (uVar1 != 0) {
                    if (0xfff < uVar1) {
                      uVar12 = uVar17 + 0x28;
                      if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_140017370();
                      }
                      goto LAB_14002f37f;
                    }
                    pppppppuVar10 = (undefined8 *******)FUN_14028af20(uVar1);
                  }
                }
                else {
                  uVar17 = 0x7fffffffffffffff;
                  uVar12 = 0x8000000000000027;
LAB_14002f37f:
                  ppppppuVar9 = (undefined8 ******)FUN_14028af20(uVar12);
                  if (ppppppuVar9 == (undefined8 ******)0x0) goto LAB_14002f72d;
                  pppppppuVar10 =
                       (undefined8 *******)((longlong)ppppppuVar9 + 0x27U & 0xffffffffffffffe0);
                  pppppppuVar10[-1] = ppppppuVar9;
                }
                local_e8 = pppppppuVar10;
                local_d8 = uVar14;
                local_d0 = uVar17;
                FUN_1404210f0(pppppppuVar10,puVar16,uVar14 + 1);
                puVar13 = local_90;
              }
              local_68 = &local_e8;
              if (0xf < local_d0) {
                local_68 = local_e8;
              }
              local_60 = local_d8;
              FUN_1400878f0(lVar8,&local_68);
              if (0xf < local_d0) {
                uVar14 = local_d0 + 1;
                pppppppuVar10 = local_e8;
                if (0xfff < uVar14) {
                  pppppppuVar10 = (undefined8 *******)local_e8[-1];
                  if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar10)))
                  goto LAB_14002f72d;
                  uVar14 = local_d0 + 0x28;
                }
                thunk_FUN_14028af80(pppppppuVar10,uVar14);
              }
              puVar20 = puVar20 + 4;
            } while (puVar20 != puVar13);
          }
          puVar20 = local_90;
          if (puVar11 != (ulonglong *)0x0) {
            puVar16 = puVar11;
            if (puVar11 != puVar13) {
              do {
                FUN_140017240(puVar16);
                puVar16 = puVar16 + 4;
              } while (puVar16 != puVar20);
            }
            uVar14 = local_88 - (longlong)puVar11 & 0xffffffffffffffe0;
            if (0xfff < uVar14) {
              if (0x1f < (ulonglong)((longlong)puVar11 + (-8 - (longlong)puVar11[-1])))
              goto LAB_14002f72d;
              uVar14 = uVar14 + 0x27;
              puVar11 = (ulonglong *)puVar11[-1];
            }
            thunk_FUN_14028af80(puVar11,uVar14);
          }
          puVar13 = (ulonglong *)((undefined8 *)param_1[1])[1];
          for (puVar11 = *(ulonglong **)param_1[1]; puVar11 != puVar13; puVar11 = puVar11 + 4) {
            uVar14 = puVar11[2];
            pppppppuVar10 = (undefined8 *******)0x0;
            local_e8 = (undefined8 *******)0x0;
            uStack_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            puVar20 = puVar11;
            if (0xf < puVar11[3]) {
              puVar20 = (ulonglong *)*puVar11;
            }
            if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_1400172e0();
            }
            if (uVar14 < 0x10) {
              local_d0 = 0xf;
              local_e8 = (undefined8 *******)*puVar20;
              uStack_e0 = puVar20[1];
              local_d8 = uVar14;
            }
            else {
              uVar17 = uVar14 | 0xf;
              if (uVar17 < 0x8000000000000000) {
                if (uVar17 < 0x16) {
                  uVar17 = 0x16;
                }
                uVar1 = uVar17 + 1;
                if (uVar1 != 0) {
                  if (0xfff < uVar1) {
                    uVar12 = uVar17 + 0x28;
                    if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                      FUN_140017370();
                    }
                    goto LAB_14002f54f;
                  }
                  pppppppuVar10 = (undefined8 *******)FUN_14028af20(uVar1);
                }
              }
              else {
                uVar17 = 0x7fffffffffffffff;
                uVar12 = 0x8000000000000027;
LAB_14002f54f:
                ppppppuVar9 = (undefined8 ******)FUN_14028af20(uVar12);
                if (ppppppuVar9 == (undefined8 ******)0x0) goto LAB_14002f72d;
                pppppppuVar10 =
                     (undefined8 *******)((longlong)ppppppuVar9 + 0x27U & 0xffffffffffffffe0);
                pppppppuVar10[-1] = ppppppuVar9;
              }
              local_e8 = pppppppuVar10;
              local_d8 = uVar14;
              local_d0 = uVar17;
              FUN_1404210f0(pppppppuVar10,puVar20,uVar14 + 1);
            }
            local_58 = &local_e8;
            if (0xf < local_d0) {
              local_58 = local_e8;
            }
            local_50 = local_d8;
            FUN_1400878f0(lVar8,&local_58);
            if (0xf < local_d0) {
              uVar14 = local_d0 + 1;
              pppppppuVar10 = local_e8;
              if (0xfff < uVar14) {
                pppppppuVar10 = (undefined8 *******)local_e8[-1];
                if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar10)))
                goto LAB_14002f72d;
                uVar14 = local_d0 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar10,uVar14);
            }
          }
          if (0xf < local_b0) {
            uVar14 = local_b0 + 1;
            pppppppuVar10 = local_c8;
            if (0xfff < uVar14) {
              pppppppuVar10 = (undefined8 *******)local_c8[-1];
              if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar10)))
              goto LAB_14002f72d;
              uVar14 = local_b0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar10,uVar14);
          }
        }
        else if (0xf < local_b0) {
          uVar14 = local_b0 + 1;
          pppppppuVar10 = local_c8;
          if (0xfff < uVar14) {
            pppppppuVar10 = (undefined8 *******)local_c8[-1];
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar10)))
            goto LAB_14002f72d;
            uVar14 = local_b0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar10,uVar14);
        }
        local_a8 = local_a8 + 4;
      } while (local_a8 != local_78);
    }
    puVar20 = local_78;
    puVar13 = local_a0;
    puVar11 = local_a0;
    if (local_a0 != (ulonglong *)0x0) {
      for (; puVar11 != puVar20; puVar11 = puVar11 + 4) {
        FUN_140017240(puVar11);
      }
      uVar14 = local_70 - (longlong)puVar13 & 0xffffffffffffffe0;
      if (0xfff < uVar14) {
        if (0x1f < (ulonglong)((longlong)puVar13 + (-8 - (longlong)puVar13[-1]))) {
LAB_14002f72d:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          return;
        }
        uVar14 = uVar14 + 0x27;
        puVar13 = (ulonglong *)puVar13[-1];
      }
      thunk_FUN_14028af80(puVar13,uVar14);
    }
    plVar3 = (longlong *)plVar15[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar3 + 0x19);
      plVar15 = plVar3;
      while (cVar2 == '\0') {
        plVar15 = (longlong *)*plVar15;
        cVar2 = *(char *)(*plVar15 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar15[1] + 0x19);
      plVar7 = (longlong *)plVar15[1];
      plVar3 = plVar15;
      while ((plVar15 = plVar7, cVar2 == '\0' && (plVar3 == (longlong *)plVar15[2]))) {
        cVar2 = *(char *)(plVar15[1] + 0x19);
        plVar7 = (longlong *)plVar15[1];
        plVar3 = plVar15;
      }
    }
  } while( true );
}

