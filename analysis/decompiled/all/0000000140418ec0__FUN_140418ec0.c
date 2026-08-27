// Function: FUN_140418ec0
// Addr: 140418ec0
// Size: 107 bytes


void FUN_140418ec0(int *param_1)

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
      FUN_140396110(param_1);
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

