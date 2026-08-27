// Function: FUN_1400e9e70
// Addr: 1400e9e70
// Size: 129 bytes


undefined8 * FUN_1400e9e70(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_140486c08;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *param_1 = &PTR_FUN_140486c30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x28);
  }
  return param_1;
}

