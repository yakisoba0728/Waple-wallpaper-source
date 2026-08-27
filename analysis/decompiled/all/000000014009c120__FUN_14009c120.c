// Function: FUN_14009c120
// Addr: 14009c120
// Size: 121 bytes


undefined4 * FUN_14009c120(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 0x12) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x12);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_1 + 4);
    *(undefined8 *)(param_1 + 0x12) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x22);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x22) = uVar2;
  }
  return param_1;
}

