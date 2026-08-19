// Function: FUN_1403c60c0
// Addr: 1403c60c0
// Size: 86 bytes


int FUN_1403c60c0(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint local_res8 [2];
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  if (param_2 < (uint)param_1[1]) {
    local_res8[0] = *param_1 - 1U;
    puVar2 = local_res10;
    if (*param_1 - 1U < param_2) {
      puVar2 = local_res8;
    }
    puVar1 = &DAT_14045dde0;
    if (*(undefined8 **)(param_1 + 6) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 6);
    }
    return (uint)*(byte *)(puVar1[2] + 1 + (ulonglong)*puVar2 * 4) +
           (uint)*(byte *)(puVar1[2] + (ulonglong)*puVar2 * 4) * 0x100;
  }
  if (param_1[2] == 0) {
    return param_1[4];
  }
  return 0;
}

