// Function: FUN_1400d2120
// Addr: 1400d2120
// Size: 135 bytes


void FUN_1400d2120(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar1[10];
    puVar3 = (undefined8 *)*puVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar1 + 3);
      puVar1[10] = 0;
    }
    thunk_FUN_14028af80(puVar1,0x58);
    puVar1 = puVar3;
  }
  thunk_FUN_14028af80(*param_1,0x58);
  return;
}

