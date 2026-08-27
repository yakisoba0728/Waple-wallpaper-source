// Function: FUN_14005f6d0
// Addr: 14005f6d0
// Size: 92 bytes


void FUN_14005f6d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_14028af80(puVar1,0x38);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x38);
  return;
}

