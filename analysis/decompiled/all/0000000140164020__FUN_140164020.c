// Function: FUN_140164020
// Addr: 140164020
// Size: 139 bytes


void FUN_140164020(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_14003a630(puVar1 + 0x11);
    FUN_140017240(puVar1 + 0xc);
    FUN_140017240(puVar1 + 8);
    FUN_140017240(puVar1 + 4);
    thunk_FUN_14028af80(puVar1,0xa0);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0xa0);
  return;
}

