// Function: FUN_14038ae90
// Addr: 14038ae90
// Size: 125 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14038ae90(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (*param_1 <= param_1[1]) {
    cVar3 = FUN_1403a4900(param_1,param_1[1] + 1,0);
    if (cVar3 == '\0') {
      DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      return &DAT_1404e4f20;
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

