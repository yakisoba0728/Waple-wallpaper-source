// Function: FUN_1400355f0
// Addr: 1400355f0
// Size: 130 bytes


void FUN_1400355f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_140017240(puVar2 + 0x18);
    FUN_140017240(puVar2 + 0x14);
    FUN_140031b80(puVar2 + 0x11);
    FUN_140031170(puVar2 + 10);
    FUN_140031170(puVar2 + 7);
    FUN_140017240(puVar2 + 2);
    thunk_FUN_14028af80(puVar2,0xe8);
    puVar2 = puVar1;
  }
  return;
}

