// Function: FUN_140396110
// Addr: 140396110
// Size: 162 bytes


void FUN_140396110(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0xffff2153;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 != 0) {
    FUN_1403c3220(lVar1);
    thunk_FUN_1402d9040(lVar1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (1 < param_1[8] + 1) {
    param_1[9] = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 10));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (1 < param_1[0xc] + 1) {
    param_1[0xd] = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xe));
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  if (1 < param_1[8] + 1) {
    param_1[9] = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 10));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}

