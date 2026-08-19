// Function: FUN_14038af60
// Addr: 14038af60
// Size: 21 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14038af60(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (*param_1 <= param_1[1]) {
    cVar3 = func_0x0001403a49d0(param_1,param_1[1] + 1,0);
    if (cVar3 == '\0') {
      DAT_1404e5000 = (undefined4)DAT_14045ddf0;
      DAT_1404e4ff0 = DAT_14045dde0;
      DAT_1404e4ff8 = _DAT_14045dde8;
      return &DAT_1404e4ff0;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[1] * 0x14);
  param_1[1] = param_1[1] + 1;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  return puVar1;
}

