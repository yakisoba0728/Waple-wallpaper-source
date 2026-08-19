// Function: FUN_1402f1070
// Addr: 1402f1070
// Size: 89 bytes


void FUN_1402f1070(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_1[4] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = param_1[3];
  param_1[0xd] = param_1[4];
  param_1[0xe] = param_1[5];
  param_1[0xf] = param_1[6];
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[8];
  param_1[0x12] = param_1[9];
  param_1[0x13] = param_1[10];
  param_1[0x14] = param_1[0xb];
  return;
}

