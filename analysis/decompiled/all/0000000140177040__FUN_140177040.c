// Function: FUN_140177040
// Addr: 140177040
// Size: 83 bytes


/* WARNING: Removing unreachable block (ram,0x000140177b37) */
/* WARNING: Removing unreachable block (ram,0x000140177b4f) */
/* WARNING: Removing unreachable block (ram,0x000140177b60) */
/* WARNING: Removing unreachable block (ram,0x00014017796c) */
/* WARNING: Removing unreachable block (ram,0x000140177b92) */
/* WARNING: Removing unreachable block (ram,0x000140177979) */
/* WARNING: Removing unreachable block (ram,0x000140177b66) */
/* WARNING: Removing unreachable block (ram,0x000140177987) */
/* WARNING: Removing unreachable block (ram,0x000140177945) */
/* WARNING: Removing unreachable block (ram,0x00014017795f) */
/* WARNING: Removing unreachable block (ram,0x000140177b8c) */

void FUN_140177040(longlong param_1,ulonglong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plStackX_8;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong uStackX_20;
  longlong *plStack_60;
  
  lVar8 = *(longlong *)(param_1 + 0x100);
  plVar11 = *(longlong **)(param_1 + 0xf0);
  uStackX_20 = 0xcbf29ce484222325;
  uVar18 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x10 & 0xffU
                ) * 0x100000001b3 ^ (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
              (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x28 & 0xffU
             ) * 0x100000001b3 ^ (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^
           (longlong)param_2 >> 0x38 & 0xffU) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x118);
  plVar12 = *(longlong **)(lVar8 + 8 + uVar18 * 0x10);
  if (plVar12 == plVar11) {
code_r0x000140177151:
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar13 = plVar12[2];
    while (param_2 != uVar13) {
      if (plVar12 == *(longlong **)(lVar8 + uVar18 * 0x10)) goto code_r0x000140177151;
      plVar12 = (longlong *)plVar12[1];
      uVar13 = plVar12[2];
    }
  }
  if ((plVar12 != (longlong *)0x0) && (plVar12 != plVar11)) {
    local_res10 = param_2;
    local_res18 = param_3;
    if (param_3 == 0) {
      lVar7 = func_0x00014017ae70(param_1 + 0xe8,plVar12 + 2);
      plVar17 = *(longlong **)(lVar8 + lVar7 * 0x10);
      if (*(longlong **)(lVar8 + 8 + lVar7 * 0x10) == plVar12) {
        if (plVar17 == plVar12) {
          *(longlong **)(lVar8 + lVar7 * 0x10) = plVar11;
          *(longlong **)(lVar8 + 8 + lVar7 * 0x10) = plVar11;
        }
        else {
          *(longlong *)(lVar8 + 8 + lVar7 * 0x10) = plVar12[1];
        }
      }
      else if (plVar17 == plVar12) {
        *(longlong *)(lVar8 + lVar7 * 0x10) = *plVar12;
      }
      lVar8 = *plVar12;
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -1;
      *(longlong *)plVar12[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar12[1];
      func_0x00014028b040(plVar12);
    }
    plVar11 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar11 != *(longlong **)(param_1 + 0xa0)) {
      do {
        for (plVar12 = (longlong *)plVar11[6]; plVar12 != (longlong *)plVar11[7];
            plVar12 = plVar12 + 1) {
          puVar2 = (undefined8 *)*plVar12;
          if ((puVar2[1] == param_2) && ((param_3 == 0 || (puVar2[2] == param_3)))) {
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar12,plVar12 + 1,plVar11[7] - (longlong)(plVar12 + 1));
          }
        }
        if ((longlong *)plVar11[6] == (longlong *)plVar11[7]) {
          if ((ulonglong)plVar11[5] < 0x10) {
            plVar12 = plVar11 + 2;
          }
          else {
            plVar12 = (longlong *)plVar11[2];
          }
          uVar13 = 0;
          uVar18 = 0xcbf29ce484222325;
          if (plVar11[4] != 0) {
            do {
              pbVar1 = (byte *)((longlong)plVar12 + uVar13);
              uVar13 = uVar13 + 1;
              uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
            } while (uVar13 < (ulonglong)plVar11[4]);
          }
          lVar8 = *(longlong *)(param_1 + 0xb0);
          uVar18 = *(ulonglong *)(param_1 + 200) & uVar18;
          plVar12 = *(longlong **)(lVar8 + uVar18 * 0x10);
          if (*(longlong **)(lVar8 + 8 + uVar18 * 0x10) == plVar11) {
            if (plVar12 == plVar11) {
              uVar3 = *(undefined8 *)(param_1 + 0xa0);
              *(undefined8 *)(lVar8 + uVar18 * 0x10) = uVar3;
              *(undefined8 *)(lVar8 + 8 + uVar18 * 0x10) = uVar3;
            }
            else {
              *(longlong *)(lVar8 + 8 + uVar18 * 0x10) = plVar11[1];
            }
          }
          else if (plVar12 == plVar11) {
            *(longlong *)(lVar8 + uVar18 * 0x10) = *plVar11;
          }
          lVar8 = *plVar11;
          *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -1;
          *(longlong *)plVar11[1] = lVar8;
          *(longlong *)(lVar8 + 8) = plVar11[1];
          func_0x00014000dab0(plVar11 + 6);
                    /* WARNING: Subroutine does not return */
          FUN_140017310(plVar11 + 2);
        }
        plVar11 = (longlong *)*plVar11;
      } while (plVar11 != *(longlong **)(param_1 + 0xa0));
    }
    puVar14 = *(ulonglong **)(param_1 + 0x68);
    if (puVar14 != *(ulonglong **)(param_1 + 0x70)) {
      do {
        uVar18 = *puVar14;
        if ((*(ulonglong *)(uVar18 + 8) == param_2) &&
           ((param_3 == 0 || (*(longlong *)(uVar18 + 0x10) == param_3)))) {
          lVar8 = *(longlong *)(uVar18 + 0xb0);
          if (lVar8 == 0) {
            if (*(longlong *)(uVar18 + 0xa0) != 0) {
              lVar8 = func_0x00014028f030(*(undefined8 *)(param_1 + 0x80),
                                          *(undefined8 *)(param_1 + 0x88),uVar18);
              if (lVar8 != *(longlong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar8,lVar8 + 8,*(longlong *)(param_1 + 0x88) - (lVar8 + 8));
              }
            }
            goto code_r0x000140177567;
          }
          lVar7 = *(longlong *)(lVar8 + 0xd0);
          plVar11 = *(longlong **)(lVar8 + 0xc0);
          uVar13 = *(ulonglong *)(lVar8 + 0xe8) &
                   ((((((((uVar18 & 0xff ^ uStackX_20) * 0x100000001b3 ^
                         (longlong)uVar18 >> 8 & 0xffU) * 0x100000001b3 ^
                        (longlong)uVar18 >> 0x10 & 0xffU) * 0x100000001b3 ^
                       (longlong)uVar18 >> 0x18 & 0xffU) * 0x100000001b3 ^
                      (longlong)uVar18 >> 0x20 & 0xffU) * 0x100000001b3 ^
                     (longlong)uVar18 >> 0x28 & 0xffU) * 0x100000001b3 ^
                    (longlong)uVar18 >> 0x30 & 0xffU) * 0x100000001b3 ^
                   (longlong)uVar18 >> 0x38 & 0xffU) * 0x100000001b3;
          plVar12 = *(longlong **)(lVar7 + 8 + uVar13 * 0x10);
          if (plVar12 == plVar11) goto code_r0x000140177451;
          uVar4 = plVar12[2];
          goto joined_r0x00014017743d;
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != *(ulonglong **)(param_1 + 0x70));
    }
    plVar12 = (longlong *)0x0;
    plVar17 = (longlong *)0x0;
    plVar11 = (longlong *)**(longlong **)(param_1 + 0xd8);
    if (plVar11 != *(longlong **)(param_1 + 0xd8)) {
      do {
        lVar8 = plVar11[2];
        if (((lVar8 == 0) || (*(ulonglong *)(lVar8 + 8) != local_res10)) ||
           ((param_3 != 0 && (*(longlong *)(lVar8 + 0x10) != param_3)))) {
          plVar10 = (longlong *)*plVar11;
        }
        else {
          if (plVar17 == (longlong *)0x0) {
            plStackX_8 = (longlong *)0x1;
            plVar11 = (longlong *)func_0x00014028aff0(8);
            *plVar11 = lVar8;
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar11,0,0);
          }
          *plVar17 = lVar8;
          plVar17 = plVar17 + 1;
          plVar10 = (longlong *)*plVar11;
          *(longlong **)plVar11[1] = plVar10;
          *(longlong *)(*plVar11 + 8) = plVar11[1];
          *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + -1;
          func_0x00014028b040(plVar11,0x18);
        }
        plVar11 = plVar10;
      } while (plVar10 != *(longlong **)(param_1 + 0xd8));
    }
    bVar6 = false;
    if (plVar17 != (longlong *)0x0) {
      do {
        if (((*(byte *)(*plVar12 + 0x40) & 8) != 0) &&
           ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0xc000000) == 0)) {
          if (!bVar6) {
            plStack_60 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*plStack_60 + 0x20))(plStack_60);
            bVar6 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(*plVar12 + 0x38),
                     *(undefined8 *)(*plVar12 + 0x48),3);
        }
        lVar8 = *(longlong *)(*plVar12 + 0x38);
        if (lVar8 != 0) {
          if (!bVar6) {
            plStack_60 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*plStack_60 + 0x20))(plStack_60);
            bVar6 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x38))
                    (*(longlong **)(param_1 + 0x128),lVar8);
        }
        puVar2 = (undefined8 *)*plVar12;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar17);
      if (bVar6) {
        (**(code **)(*plStack_60 + 0x28))(plStack_60);
      }
    }
  }
  return;
joined_r0x00014017743d:
  if (uVar18 == uVar4) goto code_r0x000140177453;
  if (plVar12 == *(longlong **)(lVar7 + uVar13 * 0x10)) goto code_r0x000140177451;
  plVar12 = (longlong *)plVar12[1];
  uVar4 = plVar12[2];
  goto joined_r0x00014017743d;
code_r0x0001401776b1:
  plVar15 = plVar16;
  if (plVar16 == plVar11) goto code_r0x0001401776b6;
  goto code_r0x000140177690;
code_r0x0001401776b6:
  if ((longlong *)lVar7 == plVar12) {
    *plVar17 = (longlong)plVar16;
  }
code_r0x0001401776c5:
  *plStackX_8 = (longlong)plVar16;
  plVar16[1] = (longlong)plStackX_8;
  goto code_r0x000140177853;
code_r0x000140177451:
  plVar12 = (longlong *)0x0;
code_r0x000140177453:
  if ((plVar12 != (longlong *)0x0) && (plVar12 != plVar11)) {
    uVar13 = (((((((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar12 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar12 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar12 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)plVar12 + 0x17)) * 0x100000001b3 &
             *(ulonglong *)(lVar8 + 0xe8);
    plVar17 = *(longlong **)(lVar7 + uVar13 * 0x10);
    if (*(longlong **)(lVar7 + 8 + uVar13 * 0x10) == plVar12) {
      if (plVar17 == plVar12) {
        *(longlong **)(lVar7 + uVar13 * 0x10) = plVar11;
        *(longlong **)(lVar7 + 8 + uVar13 * 0x10) = plVar11;
      }
      else {
        *(longlong *)(lVar7 + 8 + uVar13 * 0x10) = plVar12[1];
      }
    }
    else if (plVar17 == plVar12) {
      *(longlong *)(lVar7 + uVar13 * 0x10) = *plVar12;
    }
    lVar7 = *plVar12;
    *(longlong *)(lVar8 + 200) = *(longlong *)(lVar8 + 200) + -1;
    *(longlong *)plVar12[1] = lVar7;
    *(longlong *)(lVar7 + 8) = plVar12[1];
    func_0x00014028b040(plVar12,0x18);
  }
code_r0x000140177567:
  puVar2 = *(undefined8 **)(uVar18 + 0xc0);
  for (puVar5 = (undefined8 *)*puVar2; puVar5 != puVar2; puVar5 = (undefined8 *)*puVar5) {
    *(undefined8 *)(puVar5[2] + 0xb0) = 0;
  }
  if (*(ulonglong *)(uVar18 + 200) != 0) {
    plVar11 = *(longlong **)(uVar18 + 0xc0);
    if (*(ulonglong *)(uVar18 + 200) < *(ulonglong *)(uVar18 + 0xf0) >> 3) {
      plVar12 = (longlong *)*plVar11;
      if (plVar12 != plVar11) {
        plStackX_8 = (longlong *)plVar12[1];
        lVar8 = *(longlong *)(uVar18 + 0xd0);
        lVar7 = (*(ulonglong *)(uVar18 + 0xe8) &
                ((((((((*(byte *)(plVar12 + 2) ^ uStackX_20) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar12 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar12 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar12 + 0x17)) * 0x100000001b3) * 0x10;
        plVar17 = (longlong *)(lVar8 + lVar7);
        plVar9 = (longlong *)(lVar7 + 8 + lVar8);
        lVar7 = *plVar17;
        plVar10 = (longlong *)*plVar9;
        plVar15 = plVar12;
code_r0x000140177690:
        plVar16 = (longlong *)*plVar15;
        func_0x00014028b040(plVar15,0x18);
        *(longlong *)(uVar18 + 200) = *(longlong *)(uVar18 + 200) + -1;
        if (plVar15 != plVar10) goto code_r0x0001401776b1;
        plVar10 = plStackX_8;
        if ((longlong *)lVar7 == plVar12) {
          *plVar17 = (longlong)plVar11;
          plVar10 = plVar11;
        }
        *plVar9 = (longlong)plVar10;
        while (plVar16 != plVar11) {
          uVar13 = (((((((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar16 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar16 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar16 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar16 + 0x17)) * 0x100000001b3 &
                   *(ulonglong *)(uVar18 + 0xe8);
          plVar12 = *(longlong **)(lVar8 + 8 + uVar13 * 0x10);
          plVar17 = plVar16;
          while( true ) {
            plVar16 = (longlong *)*plVar17;
            func_0x00014028b040(plVar17,0x18);
            *(longlong *)(uVar18 + 200) = *(longlong *)(uVar18 + 200) + -1;
            if (plVar17 == plVar12) break;
            plVar17 = plVar16;
            if (plVar16 == plVar11) {
              *(longlong **)(lVar8 + uVar13 * 0x10) = plVar16;
              goto code_r0x0001401776c5;
            }
          }
          *(longlong **)(lVar8 + uVar13 * 0x10) = plVar11;
          *(longlong **)(lVar8 + 8 + uVar13 * 0x10) = plVar11;
        }
        goto code_r0x0001401776c5;
      }
    }
    else {
      *(undefined8 *)plVar11[1] = 0;
      puVar2 = (undefined8 *)*plVar11;
      while (puVar2 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar2;
        func_0x00014028b040(puVar2,0x18);
        puVar2 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(uVar18 + 0xc0) = *(undefined8 *)(uVar18 + 0xc0);
      *(longlong *)(*(longlong *)(uVar18 + 0xc0) + 8) = *(longlong *)(uVar18 + 0xc0);
      *(undefined8 *)(uVar18 + 200) = 0;
      plStackX_8 = *(longlong **)(uVar18 + 0xc0);
      func_0x00014000f8a0(*(undefined8 *)(uVar18 + 0xd0),*(undefined8 *)(uVar18 + 0xd8),&plStackX_8)
      ;
    }
  }
code_r0x000140177853:
  puVar2 = (undefined8 *)*puVar14;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(puVar14,puVar14 + 1,*(longlong *)(param_1 + 0x70) - (longlong)(puVar14 + 1));
}

