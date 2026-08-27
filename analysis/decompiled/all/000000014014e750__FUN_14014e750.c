// Function: FUN_14014e750
// Addr: 14014e750
// Size: 139 bytes


void FUN_14014e750(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400efd70(puVar1 + 0x14);
    FUN_14000d9e0(puVar1 + 0xd);
    FUN_14000da50(puVar1 + 0xb);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0xb8);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0xb8);
  return;
}

