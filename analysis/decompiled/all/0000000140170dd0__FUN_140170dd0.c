// Function: FUN_140170dd0
// Addr: 140170dd0
// Size: 153 bytes


undefined8 * FUN_140170dd0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14048df78;
  puVar1 = (undefined8 *)param_1[0x1f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14000d9e0(param_1 + 0x1a);
  FUN_140049340(param_1 + 0x18);
  FUN_140017240(param_1 + 0x12);
  FUN_140017240(param_1 + 0xd);
  FUN_140179790(param_1 + 10);
  FUN_1401796d0(param_1 + 4);
  *param_1 = &PTR_FUN_14048b750;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x110);
  }
  return param_1;
}

