// Function: FUN_14014e2b0
// Addr: 14014e2b0
// Size: 181 bytes


undefined4 * FUN_14014e2b0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  lVar1 = FUN_14028af20(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 10) = lVar1;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  FUN_140011f50(param_1 + 0xe,*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0xe) >> 3,
                *(undefined8 *)(param_1 + 10));
  FUN_14014ef50(param_1 + 8,**(undefined8 **)(param_2 + 10),*(undefined8 **)(param_2 + 10));
  return param_1;
}

