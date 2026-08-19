// Function: FUN_14038b050
// Addr: 14038b050
// Size: 129 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14038b050(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (*param_1 <= param_1[1]) {
    cVar2 = FUN_1403a4d50(param_1,param_1[1] + 1,0);
    if (cVar2 == '\0') {
      DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
      DAT_1404e4ff0 = DAT_14045dde0;
      return &DAT_1404e4ff0;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[1] * 0xc);
  param_1[1] = param_1[1] + 1;
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  return puVar1;
}

