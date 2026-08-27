// Function: FUN_1400e9fe0
// Addr: 1400e9fe0
// Size: 188 bytes


undefined8 * FUN_1400e9fe0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_140486c28;
  puVar3 = (undefined8 *)param_1[5];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (undefined8 *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined8 *)0x0))) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      puVar4 = puVar3;
    }
  }
  *param_1 = &PTR_FUN_140486c30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x30);
  }
  return param_1;
}

