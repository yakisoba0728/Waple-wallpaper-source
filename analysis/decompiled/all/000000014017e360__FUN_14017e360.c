// Function: FUN_14017e360
// Addr: 14017e360
// Size: 127 bytes


void FUN_14017e360(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_14000dcc0(puVar1 + 10);
    FUN_140017240(puVar1 + 6);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0x68);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x68);
  return;
}

