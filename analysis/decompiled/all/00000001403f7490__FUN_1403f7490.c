// Function: FUN_1403f7490
// Addr: 1403f7490
// Size: 112 bytes


longlong FUN_1403f7490(longlong param_1,int *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  lVar1 = *(longlong *)(param_1 + 8);
  bVar2 = lVar1 == 0;
  if (bVar2) {
    *(longlong *)(param_1 + 8) = (longlong)param_2;
    lVar1 = 0;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_140397110(param_2 + 8);
    if (1 < param_2[4] + 1U) {
      param_2[5] = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 6));
    }
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if (1 < *param_2 + 1U) {
      param_2[1] = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 2));
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar1 = thunk_FUN_1402d9040(param_2);
  }
  return lVar1;
}

