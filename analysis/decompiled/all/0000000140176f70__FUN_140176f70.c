// Function: FUN_140176f70
// Addr: 140176f70
// Size: 2902 bytes


void FUN_140176f70(longlong param_1,ulonglong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *local_res8;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  
  local_70 = 0x100000001b3;
  lVar8 = *(longlong *)(param_1 + 0x100);
  plVar12 = *(longlong **)(param_1 + 0xf0);
  local_res20 = 0xcbf29ce484222325;
  uVar19 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x10 & 0xffU
                ) * 0x100000001b3 ^ (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
              (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x28 & 0xffU
             ) * 0x100000001b3 ^ (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^
           (longlong)param_2 >> 0x38 & 0xffU) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x118);
  plVar17 = *(longlong **)(lVar8 + 8 + uVar19 * 0x10);
  if (plVar17 == plVar12) {
LAB_140177081:
    plVar17 = (longlong *)0x0;
  }
  else {
    uVar11 = plVar17[2];
    while (param_2 != uVar11) {
      if (plVar17 == *(longlong **)(lVar8 + uVar19 * 0x10)) goto LAB_140177081;
      plVar17 = (longlong *)plVar17[1];
      uVar11 = plVar17[2];
    }
  }
  if ((plVar17 != (longlong *)0x0) && (plVar17 != plVar12)) {
    local_res10 = param_2;
    local_res18 = param_3;
    if (param_3 == 0) {
      lVar7 = FUN_14017ada0(param_1 + 0xe8,plVar17 + 2);
      plVar9 = *(longlong **)(lVar8 + lVar7 * 0x10);
      if (*(longlong **)(lVar8 + 8 + lVar7 * 0x10) == plVar17) {
        if (plVar9 == plVar17) {
          *(longlong **)(lVar8 + lVar7 * 0x10) = plVar12;
          *(longlong **)(lVar8 + 8 + lVar7 * 0x10) = plVar12;
        }
        else {
          *(longlong *)(lVar8 + 8 + lVar7 * 0x10) = plVar17[1];
        }
      }
      else if (plVar9 == plVar17) {
        *(longlong *)(lVar8 + lVar7 * 0x10) = *plVar17;
      }
      lVar8 = *plVar17;
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -1;
      *(longlong *)plVar17[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar17[1];
      thunk_FUN_14028af80(plVar17);
    }
    plVar12 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar12 != *(longlong **)(param_1 + 0xa0)) {
      do {
        plVar17 = (longlong *)plVar12[6];
        plVar9 = (longlong *)plVar12[7];
        if (plVar17 != plVar9) {
          do {
            puVar13 = (undefined8 *)*plVar17;
            if ((puVar13[1] == param_2) && ((param_3 == 0 || (puVar13[2] == param_3)))) {
              if (puVar13 != (undefined8 *)0x0) {
                (**(code **)*puVar13)(puVar13,1);
              }
              FUN_1404210f0(plVar17,plVar17 + 1,plVar12[7] - (longlong)(plVar17 + 1));
              plVar12[7] = plVar12[7] + -8;
              plVar9 = (longlong *)plVar12[7];
            }
            else {
              plVar17 = plVar17 + 1;
            }
          } while (plVar17 != plVar9);
        }
        if ((longlong *)plVar12[6] == plVar9) {
          if ((ulonglong)plVar12[5] < 0x10) {
            puVar13 = plVar12 + 2;
          }
          else {
            puVar13 = (undefined8 *)plVar12[2];
          }
          uVar11 = 0;
          uVar19 = 0xcbf29ce484222325;
          if (plVar12[4] != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar13 + uVar11);
              uVar11 = uVar11 + 1;
              uVar19 = (uVar19 ^ *pbVar1) * 0x100000001b3;
            } while (uVar11 < (ulonglong)plVar12[4]);
          }
          lVar8 = *(longlong *)(param_1 + 0xb0);
          uVar19 = *(ulonglong *)(param_1 + 200) & uVar19;
          puVar13 = *(undefined8 **)(lVar8 + uVar19 * 0x10);
          if (*(undefined8 **)(lVar8 + 8 + uVar19 * 0x10) == plVar12) {
            if (puVar13 == plVar12) {
              uVar2 = *(undefined8 *)(param_1 + 0xa0);
              *(undefined8 *)(lVar8 + uVar19 * 0x10) = uVar2;
              *(undefined8 *)(lVar8 + 8 + uVar19 * 0x10) = uVar2;
            }
            else {
              *(longlong *)(lVar8 + 8 + uVar19 * 0x10) = plVar12[1];
            }
          }
          else if (puVar13 == plVar12) {
            *(longlong *)(lVar8 + uVar19 * 0x10) = *plVar12;
          }
          puVar13 = (undefined8 *)*plVar12;
          *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -1;
          *(undefined8 **)plVar12[1] = puVar13;
          puVar13[1] = plVar12[1];
          FUN_14000d9e0(plVar12 + 6);
          FUN_140017240(plVar12 + 2);
          thunk_FUN_14028af80(plVar12);
          param_2 = local_res10;
        }
        else {
          puVar13 = (undefined8 *)*plVar12;
        }
        plVar12 = puVar13;
      } while (puVar13 != *(undefined8 **)(param_1 + 0xa0));
    }
    puVar14 = *(ulonglong **)(param_1 + 0x68);
    if (puVar14 != *(ulonglong **)(param_1 + 0x70)) {
LAB_140177280:
      uVar19 = *puVar14;
      if ((*(ulonglong *)(uVar19 + 8) == param_2) &&
         ((param_3 == 0 || (*(longlong *)(uVar19 + 0x10) == param_3)))) {
        lVar8 = *(longlong *)(uVar19 + 0xb0);
        if (lVar8 == 0) {
          if (*(longlong *)(uVar19 + 0xa0) != 0) {
            lVar8 = thunk_FUN_14028d250(*(undefined8 *)(param_1 + 0x80),
                                        *(undefined8 *)(param_1 + 0x88),uVar19);
            if (lVar8 != *(longlong *)(param_1 + 0x88)) {
              FUN_1404210f0(lVar8,lVar8 + 8,*(longlong *)(param_1 + 0x88) - (lVar8 + 8));
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -8;
            }
          }
        }
        else {
          lVar7 = *(longlong *)(lVar8 + 0xd0);
          plVar12 = *(longlong **)(lVar8 + 0xc0);
          uVar11 = *(ulonglong *)(lVar8 + 0xe8) &
                   ((((((((uVar19 & 0xff ^ local_res20) * 0x100000001b3 ^
                         (longlong)uVar19 >> 8 & 0xffU) * 0x100000001b3 ^
                        (longlong)uVar19 >> 0x10 & 0xffU) * 0x100000001b3 ^
                       (longlong)uVar19 >> 0x18 & 0xffU) * 0x100000001b3 ^
                      (longlong)uVar19 >> 0x20 & 0xffU) * 0x100000001b3 ^
                     (longlong)uVar19 >> 0x28 & 0xffU) * 0x100000001b3 ^
                    (longlong)uVar19 >> 0x30 & 0xffU) * 0x100000001b3 ^
                   (longlong)uVar19 >> 0x38 & 0xffU) * 0x100000001b3;
          plVar17 = *(longlong **)(lVar7 + 8 + uVar11 * 0x10);
          if (plVar17 == plVar12) {
LAB_140177381:
            plVar17 = (longlong *)0x0;
          }
          else {
            uVar3 = plVar17[2];
            while (uVar19 != uVar3) {
              if (plVar17 == *(longlong **)(lVar7 + uVar11 * 0x10)) goto LAB_140177381;
              plVar17 = (longlong *)plVar17[1];
              uVar3 = plVar17[2];
            }
          }
          if ((plVar17 != (longlong *)0x0) && (plVar17 != plVar12)) {
            uVar11 = (((((((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar17 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar17 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar17 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar17 + 0x17)) * 0x100000001b3 &
                     *(ulonglong *)(lVar8 + 0xe8);
            plVar9 = *(longlong **)(lVar7 + uVar11 * 0x10);
            if (*(longlong **)(lVar7 + 8 + uVar11 * 0x10) == plVar17) {
              if (plVar9 == plVar17) {
                *(longlong **)(lVar7 + uVar11 * 0x10) = plVar12;
                *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar12;
              }
              else {
                *(longlong *)(lVar7 + 8 + uVar11 * 0x10) = plVar17[1];
              }
            }
            else if (plVar9 == plVar17) {
              *(longlong *)(lVar7 + uVar11 * 0x10) = *plVar17;
            }
            lVar7 = *plVar17;
            *(longlong *)(lVar8 + 200) = *(longlong *)(lVar8 + 200) + -1;
            *(longlong *)plVar17[1] = lVar7;
            *(longlong *)(lVar7 + 8) = plVar17[1];
            thunk_FUN_14028af80(plVar17,0x18);
          }
        }
        puVar13 = *(undefined8 **)(uVar19 + 0xc0);
        for (puVar4 = (undefined8 *)*puVar13; puVar4 != puVar13; puVar4 = (undefined8 *)*puVar4) {
          *(undefined8 *)(puVar4[2] + 0xb0) = 0;
        }
        if (*(ulonglong *)(uVar19 + 200) != 0) {
          plVar12 = *(longlong **)(uVar19 + 0xc0);
          if (*(ulonglong *)(uVar19 + 200) < *(ulonglong *)(uVar19 + 0xf0) >> 3) {
            plVar17 = (longlong *)*plVar12;
            param_3 = local_res18;
            if (plVar17 != plVar12) {
              local_res8 = (longlong *)plVar17[1];
              lVar8 = *(longlong *)(uVar19 + 0xd0);
              lVar7 = (*(ulonglong *)(uVar19 + 0xe8) &
                      ((((((((*(byte *)(plVar17 + 2) ^ local_res20) * local_70 ^
                            (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                           (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar17 + 0x14)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar17 + 0x15)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar17 + 0x16)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar17 + 0x17)) * 0x100000001b3) * 0x10;
              local_80 = (longlong *)(lVar8 + lVar7);
              local_60 = (longlong *)(lVar7 + 8 + lVar8);
              local_88 = *local_80;
              local_68 = (longlong *)*local_60;
              plVar9 = plVar17;
              local_78 = lVar8;
LAB_1401775c0:
              plVar10 = (longlong *)*plVar9;
              thunk_FUN_14028af80(plVar9,0x18);
              *(longlong *)(uVar19 + 200) = *(longlong *)(uVar19 + 200) + -1;
              if (plVar9 != local_68) goto code_r0x0001401775e1;
              plVar9 = local_res8;
              if ((longlong *)local_88 == plVar17) {
                *local_80 = (longlong)plVar12;
                plVar9 = plVar12;
              }
              *local_60 = (longlong)plVar9;
              while (plVar10 != plVar12) {
                uVar11 = (((((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x14)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x15)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x16)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x17)) *
                         0x100000001b3 & *(ulonglong *)(uVar19 + 0xe8);
                plVar17 = *(longlong **)(lVar8 + 8 + uVar11 * 0x10);
                plVar9 = plVar10;
                while( true ) {
                  plVar10 = (longlong *)*plVar9;
                  thunk_FUN_14028af80(plVar9,0x18);
                  *(longlong *)(uVar19 + 200) = *(longlong *)(uVar19 + 200) + -1;
                  if (plVar9 == plVar17) break;
                  plVar9 = plVar10;
                  if (plVar10 == plVar12) {
                    *(longlong **)(local_78 + uVar11 * 0x10) = plVar10;
                    goto LAB_1401775f5;
                  }
                }
                *(longlong **)(local_78 + uVar11 * 0x10) = plVar12;
                *(longlong **)(local_78 + 8 + uVar11 * 0x10) = plVar12;
                lVar8 = local_78;
              }
              goto LAB_1401775f5;
            }
          }
          else {
            *(undefined8 *)plVar12[1] = 0;
            puVar13 = (undefined8 *)*plVar12;
            while (puVar13 != (undefined8 *)0x0) {
              puVar4 = (undefined8 *)*puVar13;
              thunk_FUN_14028af80(puVar13,0x18);
              puVar13 = puVar4;
            }
            *(undefined8 *)*(undefined8 *)(uVar19 + 0xc0) = *(undefined8 *)(uVar19 + 0xc0);
            *(longlong *)(*(longlong *)(uVar19 + 0xc0) + 8) = *(longlong *)(uVar19 + 0xc0);
            *(undefined8 *)(uVar19 + 200) = 0;
            local_res8 = *(longlong **)(uVar19 + 0xc0);
            FUN_14000f7d0(*(undefined8 *)(uVar19 + 0xd0),*(undefined8 *)(uVar19 + 0xd8),&local_res8)
            ;
            param_3 = local_res18;
          }
        }
        goto LAB_140177783;
      }
      puVar14 = puVar14 + 1;
      goto LAB_1401777bb;
    }
LAB_1401777c5:
    plVar10 = (longlong *)0x0;
    plVar17 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
    plVar9 = (longlong *)**(longlong **)(param_1 + 0xd8);
    if (plVar9 != *(longlong **)(param_1 + 0xd8)) {
      do {
        lVar8 = plVar9[2];
        if (((lVar8 == 0) || (*(ulonglong *)(lVar8 + 8) != local_res10)) ||
           ((param_3 != 0 && (*(longlong *)(lVar8 + 0x10) != param_3)))) {
          plVar15 = (longlong *)*plVar9;
        }
        else {
          if (plVar17 == plVar12) {
            uVar19 = (longlong)plVar17 - (longlong)plVar10;
            if ((longlong)uVar19 >> 3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140013050();
            }
            uVar11 = (longlong)plVar12 - (longlong)plVar10 >> 3;
            if (0x1fffffffffffffff - (uVar11 >> 1) < uVar11) {
LAB_140177ac2:
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            local_res8 = (longlong *)(((longlong)uVar19 >> 3) + 1);
            plVar17 = (longlong *)((uVar11 >> 1) + uVar11);
            plVar12 = local_res8;
            if (local_res8 <= plVar17) {
              plVar12 = plVar17;
            }
            if ((longlong *)0x1fffffffffffffff < plVar12) goto LAB_140177ac2;
            uVar3 = (longlong)plVar12 * 8;
            if (uVar3 == 0) {
              plVar18 = (longlong *)0x0;
            }
            else if (uVar3 < 0x1000) {
              plVar18 = (longlong *)FUN_14028af20(uVar3);
            }
            else {
              if (uVar3 + 0x27 <= uVar3) goto LAB_140177ac2;
              lVar7 = FUN_14028af20();
              plVar17 = plVar10;
              if (lVar7 == 0) goto LAB_140177a96;
              plVar18 = (longlong *)(lVar7 + 0x27U & 0xffffffffffffffe0);
              plVar18[-1] = lVar7;
            }
            *(longlong *)((longlong)plVar18 + (uVar19 & 0xfffffffffffffff8)) = lVar8;
            FUN_1404210f0(plVar18,plVar10,uVar19);
            if (plVar10 != (longlong *)0x0) {
              uVar11 = uVar11 * 8;
              if (0xfff < uVar11) {
                plVar17 = (longlong *)((longlong)plVar10 + (-8 - plVar10[-1]));
                if ((longlong *)0x1f < plVar17) goto LAB_140177a96;
                uVar11 = uVar11 + 0x27;
                plVar10 = (longlong *)plVar10[-1];
              }
              thunk_FUN_14028af80(plVar10,uVar11);
            }
            plVar12 = plVar18 + (longlong)plVar12;
            plVar17 = plVar18 + (longlong)local_res8;
            param_3 = local_res18;
          }
          else {
            *plVar17 = lVar8;
            plVar17 = plVar17 + 1;
            plVar18 = plVar10;
          }
          plVar15 = (longlong *)*plVar9;
          *(longlong **)plVar9[1] = plVar15;
          *(longlong *)(*plVar9 + 8) = plVar9[1];
          *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + -1;
          thunk_FUN_14028af80(plVar9,0x18);
          plVar10 = plVar18;
        }
        plVar9 = plVar15;
      } while (plVar15 != *(longlong **)(param_1 + 0xd8));
    }
    bVar6 = false;
    plVar9 = local_60;
    plVar15 = plVar10;
    if (plVar10 != plVar17) {
      do {
        if (((*(byte *)(*plVar15 + 0x40) & 8) != 0) &&
           ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0xc000000) == 0)) {
          if (!bVar6) {
            plVar9 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*plVar9 + 0x20))(plVar9);
            bVar6 = true;
          }
          local_90 = 0;
          local_98 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(*plVar15 + 0x38),
                     *(undefined8 *)(*plVar15 + 0x48),3);
        }
        lVar8 = *(longlong *)(*plVar15 + 0x38);
        if (lVar8 != 0) {
          if (!bVar6) {
            plVar9 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*plVar9 + 0x20))(plVar9);
            bVar6 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x38))
                    (*(longlong **)(param_1 + 0x128),lVar8);
        }
        puVar13 = (undefined8 *)*plVar15;
        if (puVar13 != (undefined8 *)0x0) {
          (**(code **)*puVar13)(puVar13,1);
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar17);
      if (bVar6) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
      puVar16 = auStack_b8;
      if (0xfff < (ulonglong)(((longlong)plVar12 - (longlong)plVar10 >> 3) * 8)) {
        plVar9 = (longlong *)plVar10[-1];
        plVar17 = (longlong *)((longlong)plVar10 + (-8 - (longlong)plVar9));
        puVar16 = auStack_b8;
        if ((longlong *)0x1f < plVar17) {
LAB_140177a96:
          plVar9 = plVar17;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar16 = auStack_b0;
        }
      }
      *(undefined8 *)(puVar16 + -8) = 0x140177aa5;
      thunk_FUN_14028af80(plVar9);
    }
  }
  return;
code_r0x0001401775e1:
  plVar9 = plVar10;
  if (plVar10 == plVar12) goto code_r0x0001401775e6;
  goto LAB_1401775c0;
code_r0x0001401775e6:
  if ((longlong *)local_88 == plVar17) {
    *local_80 = (longlong)plVar10;
  }
LAB_1401775f5:
  *local_res8 = (longlong)plVar10;
  plVar10[1] = (longlong)local_res8;
  param_3 = local_res18;
LAB_140177783:
  puVar13 = (undefined8 *)*puVar14;
  if (puVar13 != (undefined8 *)0x0) {
    (**(code **)*puVar13)(puVar13,1);
  }
  FUN_1404210f0(puVar14,puVar14 + 1,*(longlong *)(param_1 + 0x70) - (longlong)(puVar14 + 1));
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -8;
  param_2 = local_res10;
LAB_1401777bb:
  if (puVar14 == *(ulonglong **)(param_1 + 0x70)) goto LAB_1401777c5;
  goto LAB_140177280;
}

