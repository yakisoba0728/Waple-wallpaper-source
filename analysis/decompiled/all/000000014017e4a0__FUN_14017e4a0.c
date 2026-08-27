// Function: FUN_14017e4a0
// Addr: 14017e4a0
// Size: 160 bytes


void FUN_14017e4a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140017240(puVar1 + 0x16);
    FUN_14000d9e0(puVar1 + 0x11);
    FUN_1400f8d70(puVar1 + 0xf);
    FUN_14000d9e0(puVar1 + 9);
    FUN_140164020(puVar1 + 7);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0xd0);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0xd0);
  return;
}

