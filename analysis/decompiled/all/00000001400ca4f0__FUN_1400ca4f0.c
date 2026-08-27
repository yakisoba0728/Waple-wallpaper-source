// Function: FUN_1400ca4f0
// Addr: 1400ca4f0
// Size: 171 bytes


void FUN_1400ca4f0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar1[0x12];
    puVar3 = (undefined8 *)*puVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar1 + 0xb);
      puVar1[0x12] = 0;
    }
    plVar2 = (longlong *)puVar1[10];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar1 + 3);
      puVar1[10] = 0;
    }
    thunk_FUN_14028af80(puVar1,0xa0);
    puVar1 = puVar3;
  }
  thunk_FUN_14028af80(*param_1,0xa0);
  return;
}

