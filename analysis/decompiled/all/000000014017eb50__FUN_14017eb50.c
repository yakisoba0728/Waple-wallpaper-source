// Function: FUN_14017eb50
// Addr: 14017eb50
// Size: 1321 bytes


void FUN_14017eb50(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  
  puVar14 = auStack_68;
  puVar15 = auStack_68;
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) | 0x4000000;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x48))();
  (**(code **)(*(longlong *)param_1[0x2d] + 0x40))((longlong *)param_1[0x2d],0,0);
  iVar10 = FUN_140290d80(param_1 + 0x294);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x14ec) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x14ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar2 = (undefined8 *)param_1[0x2a0];
  for (puVar11 = (undefined8 *)param_1[0x29f]; puVar11 != puVar2; puVar11 = puVar11 + 0x1b) {
    if ((*(uint *)(puVar11 + 9) & 0x40000000) != 0) {
      (**(code **)(*(longlong *)param_1[0x2d] + 0x18))
                ((longlong *)param_1[0x2d],*(undefined4 *)((longlong)puVar11 + 0x3c),puVar11[0x19],
                 *(undefined4 *)(puVar11 + 0x1a));
    }
    piVar3 = (int *)*puVar11;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      thunk_FUN_14028af80(*(undefined8 *)(piVar3 + 2));
      thunk_FUN_14028af80(piVar3,0x18);
    }
  }
  if (param_1[0x29f] != param_1[0x2a0]) {
    FUN_14017e540();
    param_1[0x2a0] = param_1[0x29f];
  }
  FUN_140290ea0(param_1 + 0x294);
  puVar11 = (undefined8 *)*param_1;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  *param_1 = 0;
  param_1[0x2ef] = 0;
  if ((longlong *)param_1[0x308] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x308] + 0x10))();
  }
  param_1[0x62a] = 0;
  plVar12 = param_1 + 0x625;
  param_1[0x62d] = 0;
  param_1[0x62c] = 0;
  param_1[0x62e] = 0;
  param_1[0x62f] = 0;
  param_1[0x630] = 0;
  param_1[0x62b] = 0;
  param_1[0x633] = 0;
  param_1[0x632] = 0;
  param_1[0x634] = 0;
  param_1[0x635] = 0;
  param_1[0x631] = 0;
  param_1[0x627] = 0;
  if (0xf < (ulonglong)param_1[0x628]) {
    plVar12 = (longlong *)*plVar12;
  }
  *(undefined1 *)plVar12 = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x33c] = 0;
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  puVar11 = (undefined8 *)param_1[0x33f];
  for (puVar2 = (undefined8 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined8 *)*puVar2) {
    if (*(longlong *)(puVar2[6] + 0x70) != 0) {
      puVar4 = *(undefined8 **)(*(longlong *)(puVar2[6] + 0x70) + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(undefined8 *)(*(longlong *)(puVar2[6] + 0x70) + 0x18) = 0;
    }
    puVar4 = *(undefined8 **)(puVar2[6] + 0x80);
    for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
      puVar6 = *(undefined8 **)(puVar5[3] + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      *(undefined8 *)(puVar5[3] + 0x18) = 0;
      puVar6 = *(undefined8 **)(puVar5[3] + 0x30);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      *(undefined8 *)(puVar5[3] + 0x30) = 0;
    }
  }
  FUN_1401b3f80(param_1 + 0x316);
  FUN_1401c3840(param_1 + 0x34e);
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  plVar12 = *(longlong **)param_1[0x2c9];
  plVar13 = local_48;
  plVar9 = plStack_40;
  if (plVar12 != (longlong *)param_1[0x2c9]) {
    do {
      if ((*(uint *)(plVar12[6] + 0x1f8) >> 10 & 1) == 0) {
        if (plStack_40 == local_38) {
          FUN_14005ffa0(&local_48,plStack_40,plVar12 + 6);
        }
        else {
          *plStack_40 = plVar12[6];
          plStack_40 = plStack_40 + 1;
        }
      }
      plVar12 = (longlong *)*plVar12;
      plVar13 = local_48;
      plVar9 = plStack_40;
    } while (plVar12 != (longlong *)param_1[0x2c9]);
  }
  for (; plVar12 = plStack_40, plVar13 != plStack_40; plVar13 = plVar13 + 1) {
    plStack_40 = plVar9;
    FUN_1401575b0(*plVar13);
    plVar9 = plStack_40;
    plStack_40 = plVar12;
  }
  plStack_40 = plVar9;
  if (local_48 != (longlong *)0x0) {
    uVar1 = ((longlong)local_38 - (longlong)local_48 >> 3) * 8;
    plVar12 = local_48;
    if (0xfff < uVar1) {
      plVar12 = (longlong *)((longlong)local_48 + (-8 - local_48[-1]));
      if (plVar12 < &DAT_00000020) {
        thunk_FUN_14028af80(local_48[-1],uVar1 + 0x27);
        puVar15 = auStack_68;
        goto LAB_14017ef5c;
      }
      pcVar7 = (code *)swi(0x29);
      (*pcVar7)(5);
      puVar14 = auStack_60;
    }
    *(undefined8 *)(puVar14 + -8) = 0x14017ef57;
    thunk_FUN_14028af80(plVar12);
    puVar15 = puVar14;
  }
LAB_14017ef5c:
  plVar12 = (longlong *)param_1[0x2c9];
  plVar13 = (longlong *)*plVar12;
  if (plVar13 != plVar12) {
    do {
      puVar11 = (undefined8 *)plVar13[6];
      if (puVar11 != (undefined8 *)0x0) {
        pcVar7 = *(code **)*puVar11;
        *(undefined8 *)(puVar15 + -8) = 0x14017ef83;
        (*pcVar7)(puVar11,1);
      }
      plVar13 = (longlong *)*plVar13;
    } while (plVar13 != (longlong *)param_1[0x2c9]);
  }
  *(undefined8 *)(puVar15 + -8) = 0x14017ef97;
  FUN_140151e70(param_1 + 0x2c8);
  *(undefined8 *)(puVar15 + -8) = 0x14017efa3;
  FUN_140077f50(param_1 + 0x2d0);
  *(undefined8 *)(puVar15 + -8) = 0x14017efaf;
  FUN_14014e5b0(param_1 + 0x2a6);
  plVar12 = *(longlong **)param_1[0x2c0];
  if (plVar12 != (longlong *)param_1[0x2c0]) {
    do {
      puVar11 = (undefined8 *)plVar12[6];
      if (puVar11 != (undefined8 *)0x0) {
        pcVar7 = *(code **)*puVar11;
        *(undefined8 *)(puVar15 + -8) = 0x14017efd3;
        (*pcVar7)(puVar11,1);
      }
      plVar12 = (longlong *)*plVar12;
    } while (plVar12 != (longlong *)param_1[0x2c0]);
  }
  *(undefined8 *)(puVar15 + -8) = 0x14017efeb;
  FUN_1400f1000(param_1 + 0x2bf);
  *(undefined8 *)(puVar15 + -8) = 0x14017eff7;
  FUN_1401a7580(param_1 + 0x2b7);
  lVar8 = param_1[0x2c7];
  *(undefined8 *)(puVar15 + -8) = 0x14017f00a;
  FUN_140165850(lVar8 + 0x1410);
  *(undefined8 *)(puVar15 + -8) = 0x14017f016;
  FUN_1401712d0(param_1 + 0x2e3);
  param_1[0x393] = 0;
  *(undefined8 *)(puVar15 + -8) = 0x14017f029;
  FUN_140077f50(param_1 + 0x394);
  *(undefined8 *)(puVar15 + -8) = 0x14017f032;
  FUN_14017e790(param_1 + 2);
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) & 0xfbffffff;
  return;
}

