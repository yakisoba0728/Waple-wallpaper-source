// Function: FUN_14017f080
// Addr: 14017f080
// Size: 290 bytes


void FUN_14017f080(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) | 0xc000000;
  param_1[0x2ef] = 0;
  if ((longlong *)param_1[0x308] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x308] + 0x10))();
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xb];
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x614] = 0;
  param_1[0x615] = 0;
  param_1[0x616] = 0;
  param_1[0xb] = 0;
  param_1[0x612] = 0;
  param_1[0x613] = 0;
  param_1[0x61f] = 0;
  param_1[0x620] = 0;
  param_1[0x617] = 0;
  param_1[0x618] = 0;
  param_1[0x619] = 0;
  param_1[0x61a] = 0;
  param_1[0x61b] = 0;
  param_1[0x61c] = 0;
  param_1[0x61d] = 0;
  param_1[0x61e] = 0;
  param_1[0x2a2] = 0;
  param_1[0x63a] = 0;
  param_1[0x63b] = 0;
  param_1[0x63c] = 0;
  *(undefined4 *)(param_1 + 0x63d) = 0;
  puVar1 = (undefined8 *)param_1[0x2db];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    puVar3 = (undefined8 *)puVar2[6];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_140151e70(param_1 + 0x2da);
  FUN_14017eb50(param_1);
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) & 0xf3ffffff;
  return;
}

