// Function: FUN_14018bbd0
// Addr: 14018bbd0
// Size: 2476 bytes


undefined8 FUN_14018bbd0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res20;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  ulonglong *local_a8;
  ulonglong *puStack_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *puStack_88;
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong local_58 [4];
  
  param_3 = param_3 & 0xffffffff;
  puVar7 = *(ulonglong **)(param_1 + 0x110);
  do {
    puVar5 = puVar7;
    if (puVar5 == *(ulonglong **)(param_1 + 0x118)) {
      return 0;
    }
    puVar7 = puVar5 + 1;
  } while (*puVar5 != param_2);
  FUN_1404210f0(puVar5,puVar7,(longlong)*(ulonglong **)(param_1 + 0x118) - (longlong)puVar7);
  lVar2 = *(longlong *)(param_1 + 0x118);
  puVar7 = (ulonglong *)(lVar2 + -8);
  *(ulonglong **)(param_1 + 0x118) = puVar7;
  uVar8 = (longlong)puVar7 - *(longlong *)(param_1 + 0x110) >> 3;
  if (uVar8 <= param_3) {
    param_3 = uVar8 & 0xffffffff;
  }
  puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x110) + param_3 * 8);
  local_res20 = param_2;
  if (puVar7 == *(ulonglong **)(param_1 + 0x120)) {
    FUN_1401a2430(param_1 + 0x110,puVar5,&local_res20);
  }
  else if (puVar5 == puVar7) {
    *puVar7 = param_2;
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 8;
  }
  else {
    *puVar7 = *(ulonglong *)(lVar2 + -0x10);
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 8;
    FUN_1404210f0((longlong)puVar7 - ((lVar2 + -0x10) - (longlong)puVar5),puVar5);
    *puVar5 = param_2;
  }
  local_60 = *(ulonglong **)(param_1 + 0x118);
  puVar5 = (ulonglong *)0x0;
  local_80 = (ulonglong *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  puVar7 = (ulonglong *)0x0;
  local_78 = (ulonglong *)0x0;
  local_98 = (ulonglong *)0x0;
  local_68 = *(ulonglong **)(param_1 + 0x110);
  uVar8 = 0;
  local_90 = (ulonglong *)0x0;
  puStack_88 = (ulonglong *)0x0;
  local_a8 = (ulonglong *)0x0;
  puStack_a0 = (ulonglong *)0x0;
  uVar4 = uVar8;
  if (local_68 != local_60) {
    do {
      uVar6 = *local_68;
      local_res20 = uVar6;
      lVar2 = thunk_FUN_14028d250(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                                  uVar6);
      puVar9 = puStack_88;
      if (lVar2 != *(longlong *)(param_1 + 0x188)) {
        if (puStack_88 == local_80) {
          uVar8 = (longlong)puStack_88 - (longlong)local_90;
          lVar2 = (longlong)uVar8 >> 3;
          if (lVar2 == 0x1fffffffffffffff) goto LAB_14018c573;
          uVar13 = (longlong)local_80 - (longlong)local_90 >> 3;
          puVar10 = auStack_c8;
          if (0x1fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_14018c56d;
          local_70 = lVar2 + 1;
          uVar13 = (uVar13 >> 1) + uVar13;
          uVar12 = local_70;
          if (local_70 <= uVar13) {
            uVar12 = uVar13;
          }
          puVar10 = auStack_c8;
          if (0x1fffffffffffffff < uVar12) goto LAB_14018c56d;
          uVar13 = uVar12 * 8;
          if (uVar13 == 0) {
            puVar11 = (ulonglong *)0x0;
          }
          else if (uVar13 < 0x1000) {
            puVar11 = (ulonglong *)FUN_14028af20(uVar13);
          }
          else {
            puVar10 = auStack_c8;
            if (uVar13 + 0x27 <= uVar13) goto LAB_14018c56d;
            uVar13 = FUN_14028af20();
            if (uVar13 == 0) goto LAB_14018c566;
            puVar11 = (ulonglong *)(uVar13 + 0x27 & 0xffffffffffffffe0);
            puVar11[-1] = uVar13;
          }
          uVar8 = uVar8 & 0xfffffffffffffff8;
          *(ulonglong *)((longlong)puVar11 + uVar8) = uVar6;
          if (puVar9 == puStack_88) {
            lVar2 = (longlong)puStack_88 - (longlong)local_90;
            puVar5 = puVar11;
            puVar9 = local_90;
          }
          else {
            FUN_1404210f0(puVar11,local_90,(longlong)puVar9 - (longlong)local_90);
            lVar2 = (longlong)puStack_88 - (longlong)puVar9;
            puVar5 = (ulonglong *)(uVar8 + 8 + (longlong)puVar11);
          }
          FUN_1404210f0(puVar5,puVar9,lVar2);
          if (local_90 != (ulonglong *)0x0) {
            uVar8 = ((longlong)local_80 - (longlong)local_90 >> 3) * 8;
            puVar5 = local_90;
            if (0xfff < uVar8) {
              puVar5 = (ulonglong *)local_90[-1];
              if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)puVar5)))
              goto LAB_14018c566;
              uVar8 = uVar8 + 0x27;
            }
            thunk_FUN_14028af80(puVar5,uVar8);
          }
          puStack_88 = puVar11 + local_70;
          local_80 = puVar11 + uVar12;
          puVar5 = local_78;
          local_90 = puVar11;
        }
        else {
          *puStack_88 = uVar6;
          puStack_88 = puStack_88 + 1;
        }
      }
      for (puVar9 = *(ulonglong **)(param_1 + 0x1b0); uVar8 = uVar4,
          puVar9 != *(ulonglong **)(param_1 + 0x1b8); puVar9 = puVar9 + 1) {
        if (*puVar9 == uVar6) {
          if (puVar7 == puVar5) {
            lVar2 = (longlong)puVar7 - uVar4;
            if (lVar2 == -8) goto LAB_14018c579;
            local_78 = (ulonglong *)((longlong)((longlong)puVar5 - uVar4) >> 3);
            puVar10 = auStack_c8;
            if ((ulonglong *)(0x1fffffffffffffff - ((ulonglong)local_78 >> 1)) < local_78)
            goto LAB_14018c56d;
            uVar8 = ((ulonglong)local_78 >> 1) + (longlong)local_78;
            local_70 = (lVar2 >> 3) + 1;
            uVar13 = local_70;
            if (local_70 <= uVar8) {
              uVar13 = uVar8;
            }
            puVar10 = auStack_c8;
            if (0x1fffffffffffffff < uVar13) goto LAB_14018c56d;
            uVar12 = (longlong)puVar7 - uVar4;
            uVar13 = uVar13 * 8;
            if (uVar13 == 0) {
              uVar8 = 0;
              *(ulonglong *)(uVar12 & 0xfffffffffffffff8) = uVar6;
            }
            else if (uVar13 < 0x1000) {
              uVar8 = FUN_14028af20(uVar13);
              *(ulonglong *)((uVar12 & 0xfffffffffffffff8) + uVar8) = uVar6;
            }
            else {
              puVar10 = auStack_c8;
              if (uVar13 + 0x27 <= uVar13) goto LAB_14018c56d;
              lVar3 = FUN_14028af20();
              if (lVar3 == 0) goto LAB_14018c566;
              uVar8 = lVar3 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar8 - 8) = lVar3;
              *(ulonglong *)((uVar12 & 0xfffffffffffffff8) + uVar8) = uVar6;
            }
            FUN_1404210f0(uVar8,uVar4,lVar2);
            if (uVar4 != 0) {
              uVar12 = (longlong)local_78 * 8;
              if (0xfff < uVar12) {
                if (0x1f < (uVar4 - *(ulonglong *)(uVar4 - 8)) - 8) goto LAB_14018c566;
                uVar12 = uVar12 + 0x27;
                uVar4 = *(ulonglong *)(uVar4 - 8);
              }
              thunk_FUN_14028af80(uVar4,uVar12);
            }
            puVar5 = (ulonglong *)(uVar13 + uVar8);
            puVar7 = (ulonglong *)(uVar8 + local_70 * 8);
            local_78 = puVar5;
          }
          else {
            *puVar7 = uVar6;
            puVar7 = puVar7 + 1;
          }
          break;
        }
      }
      puVar9 = puStack_a0;
      uVar4 = ((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_res20 >> 8 & 0xff)
                    * 0x100000001b3 ^ local_res20 >> 0x10 & 0xff) * 0x100000001b3 ^
                  local_res20 >> 0x18 & 0xff) * 0x100000001b3 ^ local_res20 >> 0x20 & 0xff) *
                 0x100000001b3 ^ local_res20 >> 0x28 & 0xff) * 0x100000001b3 ^
               local_res20 >> 0x30 & 0xff) * 0x100000001b3 ^ local_res20 >> 0x38) * 0x100000001b3 &
              *(ulonglong *)(param_1 + 0x170);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 8 + uVar4 * 0x10);
      if (lVar2 == *(longlong *)(param_1 + 0x148)) {
LAB_14018c0e7:
        lVar2 = 0;
      }
      else {
        uVar13 = *(ulonglong *)(lVar2 + 0x10);
        while (uVar6 != uVar13) {
          if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 0x158) + uVar4 * 0x10))
          goto LAB_14018c0e7;
          lVar2 = *(longlong *)(lVar2 + 8);
          uVar13 = *(ulonglong *)(lVar2 + 0x10);
        }
      }
      if ((lVar2 != 0) && (lVar2 != *(longlong *)(param_1 + 0x148))) {
        if (puStack_a0 == local_98) {
          uVar4 = (longlong)puStack_a0 - (longlong)local_a8;
          lVar2 = (longlong)uVar4 >> 3;
          if (lVar2 == 0x1fffffffffffffff) {
LAB_14018c573:
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar13 = (longlong)local_98 - (longlong)local_a8 >> 3;
          puVar10 = auStack_c8;
          if (0x1fffffffffffffff - (uVar13 >> 1) < uVar13) goto LAB_14018c56d;
          local_res20 = lVar2 + 1;
          uVar13 = (uVar13 >> 1) + uVar13;
          uVar12 = local_res20;
          if (local_res20 <= uVar13) {
            uVar12 = uVar13;
          }
          puVar10 = auStack_c8;
          if (0x1fffffffffffffff < uVar12) goto LAB_14018c56d;
          uVar13 = uVar12 * 8;
          if (uVar13 == 0) {
            puVar11 = (ulonglong *)0x0;
          }
          else if (uVar13 < 0x1000) {
            puVar11 = (ulonglong *)FUN_14028af20(uVar13);
          }
          else {
            puVar10 = auStack_c8;
            if (uVar13 + 0x27 <= uVar13) goto LAB_14018c56d;
            uVar13 = FUN_14028af20();
            if (uVar13 == 0) goto LAB_14018c566;
            puVar11 = (ulonglong *)(uVar13 + 0x27 & 0xffffffffffffffe0);
            puVar11[-1] = uVar13;
          }
          uVar4 = uVar4 & 0xfffffffffffffff8;
          *(ulonglong *)((longlong)puVar11 + uVar4) = uVar6;
          if (puVar9 == puStack_a0) {
            lVar2 = (longlong)puStack_a0 - (longlong)local_a8;
            puVar5 = puVar11;
            puVar9 = local_a8;
          }
          else {
            FUN_1404210f0(puVar11,local_a8,(longlong)puVar9 - (longlong)local_a8);
            lVar2 = (longlong)puStack_a0 - (longlong)puVar9;
            puVar5 = (ulonglong *)(uVar4 + 8 + (longlong)puVar11);
          }
          FUN_1404210f0(puVar5,puVar9,lVar2);
          if (local_a8 != (ulonglong *)0x0) {
            uVar4 = ((longlong)local_98 - (longlong)local_a8 >> 3) * 8;
            puVar5 = local_a8;
            if (0xfff < uVar4) {
              puVar5 = (ulonglong *)local_a8[-1];
              if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar5)))
              goto LAB_14018c566;
              uVar4 = uVar4 + 0x27;
            }
            thunk_FUN_14028af80(puVar5,uVar4);
          }
          puStack_a0 = puVar11 + local_res20;
          local_98 = puVar11 + uVar12;
          puVar5 = local_78;
          local_a8 = puVar11;
        }
        else {
          *puStack_a0 = uVar6;
          puStack_a0 = puStack_a0 + 1;
        }
      }
      local_68 = local_68 + 1;
      uVar4 = uVar8;
    } while (local_68 != local_60);
  }
  puVar9 = (ulonglong *)(param_1 + 0x1b0);
  FUN_14019eb00(param_1 + 0x180,&local_90);
  if (puVar9 == local_58) {
LAB_14018c459:
    FUN_14019eb00(param_1 + 0x128,&local_a8);
    if (local_a8 != (ulonglong *)0x0) {
      uVar4 = ((longlong)local_98 - (longlong)local_a8 >> 3) * 8;
      puVar7 = local_a8;
      if (0xfff < uVar4) {
        puVar7 = (ulonglong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar7))) goto LAB_14018c566;
        uVar4 = uVar4 + 0x27;
      }
      thunk_FUN_14028af80(puVar7,uVar4);
      local_98 = (ulonglong *)0x0;
      local_a8 = (ulonglong *)0x0;
      puStack_a0 = (ulonglong *)0x0;
    }
    if (uVar8 != 0) {
      uVar4 = ((longlong)((longlong)puVar5 - uVar8) >> 3) * 8;
      uVar6 = uVar8;
      if (0xfff < uVar4) {
        uVar6 = *(ulonglong *)(uVar8 - 8);
        if (0x1f < (uVar8 - uVar6) - 8) goto LAB_14018c566;
        uVar4 = uVar4 + 0x27;
      }
      thunk_FUN_14028af80(uVar6,uVar4);
    }
    if (local_90 == (ulonglong *)0x0) {
      return 1;
    }
    uVar8 = ((longlong)local_80 - (longlong)local_90 >> 3) * 8;
    puVar7 = local_90;
    if (uVar8 < 0x1000) {
LAB_14018c539:
      thunk_FUN_14028af80(puVar7,uVar8);
      return 1;
    }
    puVar7 = (ulonglong *)local_90[-1];
    if ((ulonglong)((longlong)local_90 + (-8 - (longlong)puVar7)) < 0x20) {
      uVar8 = uVar8 + 0x27;
      goto LAB_14018c539;
    }
  }
  else {
    uVar6 = *puVar9;
    uVar13 = (longlong)((longlong)puVar7 - uVar8) >> 3;
    uVar4 = (longlong)(*(longlong *)(param_1 + 0x1c0) - uVar6) >> 3;
    if (uVar13 <= uVar4) {
      uVar4 = (longlong)(*(longlong *)(param_1 + 0x1b8) - uVar6) >> 3;
      if (uVar4 < uVar13) {
        FUN_1404210f0(uVar6,uVar8,uVar4 * 8);
        lVar3 = *(longlong *)(param_1 + 0x1b8);
        lVar2 = (uVar13 - uVar4) * 8;
        FUN_1404210f0(lVar3,uVar4 * 8 + uVar8,lVar2);
        lVar2 = lVar2 + lVar3;
      }
      else {
        uVar4 = (longlong)puVar7 - uVar8 & 0xfffffffffffffff8;
        FUN_1404210f0(uVar6,uVar8,uVar4);
        lVar2 = uVar4 + uVar6;
      }
LAB_14018c452:
      *(longlong *)(param_1 + 0x1b8) = lVar2;
      goto LAB_14018c459;
    }
    if (0x1fffffffffffffff < uVar13) {
LAB_14018c579:
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar12 = 0x1fffffffffffffff;
    }
    else {
      uVar12 = (uVar4 >> 1) + uVar4;
      if (uVar12 < uVar13) {
        uVar12 = uVar13;
      }
    }
    if (uVar6 == 0) {
LAB_14018c367:
      uVar4 = 0;
      puVar10 = auStack_c8;
      if (0x1fffffffffffffff < uVar12) goto LAB_14018c56d;
      uVar12 = uVar12 * 8;
      if (uVar12 != 0) {
        if (uVar12 < 0x1000) {
          uVar4 = FUN_14028af20(uVar12);
        }
        else {
          puVar10 = auStack_c8;
          if (uVar12 + 0x27 <= uVar12) goto LAB_14018c56d;
          lVar2 = FUN_14028af20();
          if (lVar2 == 0) goto LAB_14018c566;
          uVar4 = lVar2 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar4 - 8) = lVar2;
        }
      }
      *puVar9 = uVar4;
      *(ulonglong *)(param_1 + 0x1b8) = uVar4;
      *(ulonglong *)(param_1 + 0x1c0) = uVar4 + uVar12;
      uVar4 = *puVar9;
      FUN_1404210f0(uVar4,uVar8,uVar13 * 8);
      lVar2 = uVar13 * 8 + uVar4;
      goto LAB_14018c452;
    }
    uVar4 = uVar4 * 8;
    if (uVar4 < 0x1000) {
LAB_14018c341:
      thunk_FUN_14028af80(uVar6,uVar4);
      *puVar9 = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      goto LAB_14018c367;
    }
    if ((uVar6 - *(ulonglong *)(uVar6 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 + 0x27;
      uVar6 = *(ulonglong *)(uVar6 - 8);
      goto LAB_14018c341;
    }
  }
LAB_14018c566:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar10 = auStack_c0;
LAB_14018c56d:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_14018c572;
  FUN_140017370();
}

