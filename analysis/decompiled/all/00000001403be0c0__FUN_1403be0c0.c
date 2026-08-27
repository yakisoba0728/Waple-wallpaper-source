// Function: FUN_1403be0c0
// Addr: 1403be0c0
// Size: 146 bytes


void FUN_1403be0c0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (int *)0x0) && (param_1 != (int *)&DAT_14045dd10)) && (*param_1 != 0)) {
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
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

