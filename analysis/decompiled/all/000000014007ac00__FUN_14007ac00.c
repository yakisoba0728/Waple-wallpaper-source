// Function: FUN_14007ac00
// Addr: 14007ac00
// Size: 109 bytes


void FUN_14007ac00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140016770(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0x30);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x30);
  return;
}

