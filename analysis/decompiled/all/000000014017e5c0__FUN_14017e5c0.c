// Function: FUN_14017e5c0
// Addr: 14017e5c0
// Size: 127 bytes


void FUN_14017e5c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_140017240(puVar2 + 0x16);
    FUN_14000d9e0(puVar2 + 0x11);
    FUN_1400f8d70(puVar2 + 0xf);
    FUN_14000d9e0(puVar2 + 9);
    FUN_140164020(puVar2 + 7);
    FUN_140017240(puVar2 + 2);
    thunk_FUN_14028af80(puVar2,0xd0);
    puVar2 = puVar1;
  }
  return;
}

