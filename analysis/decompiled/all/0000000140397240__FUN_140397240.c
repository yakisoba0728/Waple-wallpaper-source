// Function: FUN_140397240
// Addr: 140397240
// Size: 94 bytes


void FUN_140397240(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0xffff2153;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 != 0) {
    FUN_1403c3220(lVar1);
    thunk_FUN_1402d9040(lVar1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    thunk_FUN_1402d9040();
    *(undefined8 *)(param_1 + 10) = 0;
  }
  *(undefined8 *)(param_1 + 5) = 0;
  return;
}

