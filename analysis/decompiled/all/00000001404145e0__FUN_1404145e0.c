// Function: FUN_1404145e0
// Addr: 1404145e0
// Size: 154 bytes


void FUN_1404145e0(int *param_1)

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
      FUN_140419a90(*(undefined8 *)(param_1 + 4));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x1c));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x20));
      if (*(code **)(param_1 + 0x3e) != (code *)0x0) {
        (**(code **)(param_1 + 0x3e))(*(undefined8 *)(param_1 + 0x3c));
      }
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

