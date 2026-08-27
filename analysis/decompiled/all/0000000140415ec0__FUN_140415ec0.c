// Function: FUN_140415ec0
// Addr: 140415ec0
// Size: 272 bytes


void FUN_140415ec0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      lVar2 = *(longlong *)(param_1 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if ((*(undefined8 **)(param_1 + 0x2c) != (undefined8 *)0x0) &&
         (*(undefined8 **)(param_1 + 0x2c) != &DAT_14045dd10)) {
        thunk_FUN_1402d9040();
      }
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      if (*(longlong **)(param_1 + 0x2e) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x2e) + 0x10))();
      }
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x26));
      }
      FUN_140415ec0(*(undefined8 *)(param_1 + 6));
      FUN_140415810(*(undefined8 *)(param_1 + 8));
      FUN_1404160c0(*(undefined8 *)(param_1 + 0x24));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x20));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x22));
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

