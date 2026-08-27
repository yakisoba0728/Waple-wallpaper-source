// Function: FUN_1401b4540
// Addr: 1401b4540
// Size: 127 bytes


void FUN_1401b4540(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_14000d9e0(puVar1 + 10);
    FUN_1401b8010(puVar1 + 8);
    FUN_1400efc60(puVar1 + 3);
    thunk_FUN_14028af80(puVar1,0x78);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x78);
  return;
}

