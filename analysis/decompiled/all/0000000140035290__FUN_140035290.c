// Function: FUN_140035290
// Addr: 140035290
// Size: 76 bytes


void FUN_140035290(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_140017240(puVar2 + 2);
    thunk_FUN_14028af80(puVar2,0x38);
    puVar2 = puVar1;
  }
  return;
}

