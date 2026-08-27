// Function: FUN_140103790
// Addr: 140103790
// Size: 178 bytes


void FUN_140103790(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar1[0x17];
    puVar3 = (undefined8 *)*puVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar1 + 0x10);
      puVar1[0x17] = 0;
    }
    FUN_14000d9e0(puVar1 + 0xb);
    FUN_140031340(puVar1 + 9);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0xc0);
    puVar1 = puVar3;
  }
  thunk_FUN_14028af80(*param_1,0xc0);
  return;
}

