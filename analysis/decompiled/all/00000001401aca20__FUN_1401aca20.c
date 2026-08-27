// Function: FUN_1401aca20
// Addr: 1401aca20
// Size: 205 bytes


void FUN_1401aca20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if (*(longlong *)(puVar2[3] + 8) != 0) {
        FUN_1402ee990();
      }
      thunk_FUN_14028af80(puVar2[3],0x48);
    }
    thunk_FUN_14028af80(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_14028af80(*(undefined8 *)(param_1 + 0x28));
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_14000d9e0(param_1 + 0x70);
    FUN_14003de70(param_1 + 0x60);
    FUN_1401b46a0(param_1 + 0x40);
    thunk_FUN_14028af80(param_1,0x98);
  }
  return;
}

