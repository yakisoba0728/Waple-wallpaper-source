// Function: FUN_1401fb4e0
// Addr: 1401fb4e0
// Size: 1525 bytes


void FUN_1401fb4e0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  *param_1 = &PTR_FUN_1404911a8;
  puVar3 = (undefined8 *)param_1[0x98];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x97];
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = param_1[0x19];
    thunk_FUN_14028af80(puVar3[0x68]);
    thunk_FUN_14028af80(puVar3[0x69]);
    puVar3[0x45] = 0;
    FUN_1402d3dd0(puVar3[0x46]);
    puVar3[0x46] = 0;
    FUN_1402d3dd0(puVar3[0x47]);
    puVar3[0x47] = 0;
    FUN_1402d3dd0(puVar3[0x48]);
    puVar3[0x48] = 0;
    FUN_1402d3dd0(puVar3[0x49]);
    puVar3[0x49] = 0;
    plVar5 = (longlong *)puVar3[0x7b];
    for (plVar12 = (longlong *)puVar3[0x7a]; plVar12 != plVar5; plVar12 = plVar12 + 1) {
      puVar6 = (undefined8 *)*plVar12;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    puVar6 = (undefined8 *)puVar3[0x54];
    for (puVar13 = (undefined8 *)puVar3[0x53]; puVar13 != puVar6; puVar13 = puVar13 + 1) {
      thunk_FUN_14028af80(*puVar13,0x1c);
    }
    FUN_1402671a0(puVar3 + 1);
    thunk_FUN_14028af80(*puVar3);
    puVar6 = (undefined8 *)puVar3[0x7f];
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    puVar6 = (undefined8 *)puVar3[0x7e];
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    puVar6 = (undefined8 *)puVar3[0x80];
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    lVar7 = puVar3[0x7d];
    if ((lVar7 != 0) &&
       (*(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + -1, *(int *)(lVar7 + 0x2c) < 1)) {
      FUN_1401ab5f0(lVar4 + 0x16c0);
    }
    if (puVar3[0x82] != 0) {
      FUN_140150ac0(lVar4 + 0x1630);
    }
    if (puVar3[0x81] != 0) {
      FUN_140150ac0(lVar4 + 0x1630);
    }
    if (puVar3[0x84] != 0) {
      FUN_140150ac0(lVar4 + 0x1630);
    }
    if (puVar3[0x85] != 0) {
      FUN_140150ac0(lVar4 + 0x1630);
    }
    FUN_14014cc70(lVar4 + 0x1520,puVar3 + 0x83,1);
    puVar6 = (undefined8 *)puVar3[0x83];
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_140031b80(puVar3 + 0x86);
    FUN_14000d9e0(puVar3 + 0x7a);
    FUN_140215de0(puVar3 + 0x77);
    FUN_140031b80(puVar3 + 0x74);
    if (puVar3[0x65] != 0) {
      FUN_1402d3dd0();
      puVar3[0x65] = 0;
      puVar3[0x66] = 0;
      puVar3[0x67] = 0;
    }
    if (puVar3[0x62] != 0) {
      FUN_1402d3dd0();
      puVar3[0x62] = 0;
      puVar3[99] = 0;
      puVar3[100] = 0;
    }
    if (puVar3[0x5f] != 0) {
      FUN_1402d3dd0();
      puVar3[0x5f] = 0;
      puVar3[0x60] = 0;
      puVar3[0x61] = 0;
    }
    if (puVar3[0x5c] != 0) {
      FUN_1402d3dd0();
      puVar3[0x5c] = 0;
      puVar3[0x5d] = 0;
      puVar3[0x5e] = 0;
    }
    if (puVar3[0x59] != 0) {
      FUN_1402d3dd0();
      puVar3[0x59] = 0;
      puVar3[0x5a] = 0;
      puVar3[0x5b] = 0;
    }
    if (puVar3[0x56] != 0) {
      FUN_1402d3dd0();
      puVar3[0x56] = 0;
      puVar3[0x57] = 0;
      puVar3[0x58] = 0;
    }
    FUN_14000d9e0(puVar3 + 0x53);
    FUN_140031b80(puVar3 + 0x50);
    FUN_140031b80(puVar3 + 0x4d);
    FUN_140031b80(puVar3 + 0x4a);
    FUN_1401d5e20(puVar3 + 1);
    thunk_FUN_14028af80(puVar3,0x448);
    param_1[0x97] = 0;
  }
  if (param_1[0x95] != 0) {
    FUN_140150ac0(param_1[0x19] + 0x1630);
  }
  if (param_1[0x94] != 0) {
    FUN_140150ac0(param_1[0x19] + 0x1630);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x4b4);
  if (uVar2 != 0) {
    lVar4 = param_1[0x93];
    lVar7 = *(longlong *)(lVar4 + 0x2c8);
    lVar8 = *(longlong *)(lVar4 + 0x2d0);
    plVar5 = *(longlong **)(lVar4 + 0x2c0);
    uVar11 = *(ulonglong *)(lVar4 + 0x2e8) &
             (((((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar2 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x10) & 0xff)
              * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18)) * 0x100000001b3;
    plVar12 = *(longlong **)(lVar8 + 8 + uVar11 * 0x10);
    if (plVar12 == plVar5) {
LAB_1401fb959:
      plVar12 = (longlong *)0x0;
    }
    else {
      uVar1 = *(uint *)(plVar12 + 2);
      while (uVar2 != uVar1) {
        if (plVar12 == *(longlong **)(lVar8 + uVar11 * 0x10)) goto LAB_1401fb959;
        plVar12 = (longlong *)plVar12[1];
        uVar1 = *(uint *)(plVar12 + 2);
      }
    }
    if ((plVar12 != (longlong *)0x0) && (plVar12 != plVar5)) {
      uVar11 = *(ulonglong *)(lVar4 + 0x2e8) &
               (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3;
      plVar9 = *(longlong **)(lVar8 + uVar11 * 0x10);
      if (*(longlong **)(lVar8 + 8 + uVar11 * 0x10) == plVar12) {
        if (plVar9 == plVar12) {
          *(longlong **)(lVar8 + uVar11 * 0x10) = plVar5;
          *(longlong **)(lVar8 + 8 + uVar11 * 0x10) = plVar5;
        }
        else {
          *(longlong *)(lVar8 + 8 + uVar11 * 0x10) = plVar12[1];
        }
      }
      else if (plVar9 == plVar12) {
        *(longlong *)(lVar8 + uVar11 * 0x10) = *plVar12;
      }
      lVar10 = *plVar12;
      *(longlong *)(lVar4 + 0x2c8) = *(longlong *)(lVar4 + 0x2c8) + -1;
      *(longlong *)plVar12[1] = lVar10;
      *(longlong *)(lVar10 + 8) = plVar12[1];
      plVar5 = (longlong *)plVar12[10];
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x20))
                  (plVar5,CONCAT71((int7)((ulonglong)lVar8 >> 8),plVar5 != plVar12 + 3));
        plVar12[10] = 0;
      }
      thunk_FUN_14028af80(plVar12,0x58);
    }
    if ((*(longlong *)(lVar4 + 0x2c8) == 0) && (lVar7 != 0)) {
      if (*(longlong *)(lVar4 + 0xd0) != 0) {
        FUN_14015f7b0(*(longlong *)(lVar4 + 0xd0),*(undefined4 *)(lVar4 + 0x2f8));
      }
      *(undefined4 *)(lVar4 + 0x2f8) = 0;
    }
  }
  puVar3 = (undefined8 *)param_1[0x92];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((*(uint *)(param_1[0x93] + 0x1f8) >> 10 & 1) != 0) {
    FUN_140150ac0(param_1[0x19] + 0x1630);
  }
  FUN_14000d9e0(param_1 + 0x85);
  FUN_14015a700(param_1 + 0x83);
  FUN_14000d9e0(param_1 + 0x7d);
  FUN_14015a780(param_1 + 0x7b);
  FUN_1401e6b40(param_1);
  return;
}

