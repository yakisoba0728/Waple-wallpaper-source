// Function: FUN_140031040
// Addr: 140031040
// Size: 163 bytes


void FUN_140031040(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140017240(puVar1 + 0x18);
    FUN_140017240(puVar1 + 0x14);
    FUN_140031b80(puVar1 + 0x11);
    FUN_140031170(puVar1 + 10);
    FUN_140031170(puVar1 + 7);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0xe8);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0xe8);
  return;
}

