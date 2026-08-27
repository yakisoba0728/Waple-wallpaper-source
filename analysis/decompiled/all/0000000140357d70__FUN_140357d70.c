// Function: FUN_140357d70
// Addr: 140357d70
// Size: 160 bytes


void FUN_140357d70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 3;
  if ((puVar1 != (undefined8 *)0x0) && (param_1[9] != 0)) {
    if (((code *)param_1[10] != (code *)0x0) &&
       (((puVar2 = (undefined8 *)param_1[8], puVar2 != (undefined8 *)0x0 &&
         ((undefined8 *)*puVar2 == puVar1)) && (*(int *)(puVar2 + 1) - 0x3f34U < 0x20)))) {
      if (puVar2[8] != 0) {
        (*(code *)param_1[10])(param_1[0xb]);
      }
      (*(code *)param_1[10])(param_1[0xb],param_1[8]);
      param_1[8] = 0;
    }
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *puVar1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

