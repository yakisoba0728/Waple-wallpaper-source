// Function: FUN_140256d20
// Addr: 140256d20
// Size: 196 bytes


undefined8 * FUN_140256d20(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_140491950;
  puVar1 = (undefined8 *)param_1[0xb6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1401b3240();
  FUN_140017240(param_1 + 0x96);
  FUN_140017240(param_1 + 0x92);
  FUN_140017240(param_1 + 0x8e);
  FUN_140017240(param_1 + 0x8a);
  FUN_14000d9e0(param_1 + 0x85);
  FUN_14015a700(param_1 + 0x83);
  FUN_14000d9e0(param_1 + 0x7d);
  FUN_14015a780(param_1 + 0x7b);
  FUN_1401e6b40(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x5d0);
  }
  return param_1;
}

