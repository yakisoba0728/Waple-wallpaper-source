// Function: FUN_14038af80
// Addr: 14038af80
// Size: 129 bytes


undefined8 * FUN_14038af80(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (*param_1 <= param_1[1]) {
    cVar2 = FUN_1403a4c80(param_1,param_1[1] + 1,0);
    if (cVar2 == '\0') {
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      DAT_1404e4f20 = DAT_14045dd10;
      return &DAT_1404e4f20;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[1] * 0xc);
  param_1[1] = param_1[1] + 1;
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  return puVar1;
}

