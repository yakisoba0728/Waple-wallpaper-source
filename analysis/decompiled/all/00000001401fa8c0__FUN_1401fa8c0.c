// Function: FUN_1401fa8c0
// Addr: 1401fa8c0
// Size: 875 bytes


void FUN_1401fa8c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    thunk_FUN_14028af80(puVar1[0x68]);
    thunk_FUN_14028af80(puVar1[0x69]);
    puVar1[0x45] = 0;
    FUN_1402d3dd0(puVar1[0x46]);
    puVar1[0x46] = 0;
    FUN_1402d3dd0(puVar1[0x47]);
    puVar1[0x47] = 0;
    FUN_1402d3dd0(puVar1[0x48]);
    puVar1[0x48] = 0;
    FUN_1402d3dd0(puVar1[0x49]);
    puVar1[0x49] = 0;
    plVar2 = (longlong *)puVar1[0x7b];
    for (plVar5 = (longlong *)puVar1[0x7a]; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      puVar3 = (undefined8 *)*plVar5;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = (undefined8 *)puVar1[0x54];
    for (puVar6 = (undefined8 *)puVar1[0x53]; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      thunk_FUN_14028af80(*puVar6,0x1c);
    }
    FUN_1402671a0(puVar1 + 1);
    thunk_FUN_14028af80(*puVar1);
    puVar3 = (undefined8 *)puVar1[0x7f];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)puVar1[0x7e];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)puVar1[0x80];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    lVar4 = puVar1[0x7d];
    if ((lVar4 != 0) &&
       (*(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + -1, *(int *)(lVar4 + 0x2c) < 1)) {
      FUN_1401ab5f0(param_1 + 0x16c0);
    }
    if (puVar1[0x82] != 0) {
      FUN_140150ac0(param_1 + 0x1630);
    }
    if (puVar1[0x81] != 0) {
      FUN_140150ac0(param_1 + 0x1630);
    }
    if (puVar1[0x84] != 0) {
      FUN_140150ac0(param_1 + 0x1630);
    }
    if (puVar1[0x85] != 0) {
      FUN_140150ac0(param_1 + 0x1630);
    }
    FUN_14014cc70(param_1 + 0x1520,puVar1 + 0x83,1);
    puVar3 = (undefined8 *)puVar1[0x83];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_140031b80(puVar1 + 0x86);
    FUN_14000d9e0(puVar1 + 0x7a);
    FUN_140215de0(puVar1 + 0x77);
    FUN_140031b80(puVar1 + 0x74);
    if (puVar1[0x65] != 0) {
      FUN_1402d3dd0();
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      puVar1[0x67] = 0;
    }
    if (puVar1[0x62] != 0) {
      FUN_1402d3dd0();
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      puVar1[100] = 0;
    }
    if (puVar1[0x5f] != 0) {
      FUN_1402d3dd0();
      puVar1[0x5f] = 0;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
    }
    if (puVar1[0x5c] != 0) {
      FUN_1402d3dd0();
      puVar1[0x5c] = 0;
      puVar1[0x5d] = 0;
      puVar1[0x5e] = 0;
    }
    if (puVar1[0x59] != 0) {
      FUN_1402d3dd0();
      puVar1[0x59] = 0;
      puVar1[0x5a] = 0;
      puVar1[0x5b] = 0;
    }
    if (puVar1[0x56] != 0) {
      FUN_1402d3dd0();
      puVar1[0x56] = 0;
      puVar1[0x57] = 0;
      puVar1[0x58] = 0;
    }
    FUN_14000d9e0(puVar1 + 0x53);
    FUN_140031b80(puVar1 + 0x50);
    FUN_140031b80(puVar1 + 0x4d);
    FUN_140031b80(puVar1 + 0x4a);
    FUN_1401d5e20(puVar1 + 1);
    thunk_FUN_14028af80(puVar1,0x448);
    *param_2 = 0;
  }
  return;
}

