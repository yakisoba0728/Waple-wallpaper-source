// Function: FUN_1403f7560
// Addr: 1403f7560
// Size: 107 bytes


longlong FUN_1403f7560(longlong param_1,int *param_2)

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
  if (bVar2) {
    return lVar1;
  }
  FUN_1403971e0(param_2 + 8);
  if (1 < param_2[4] + 1U) {
    param_2[5] = 0;
    lVar1 = func_0x0001402bf8e0(*(undefined8 *)(param_2 + 6));
    return lVar1;
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if (*param_2 + 1U < 2) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar1 = func_0x0001402bf8e0(param_2);
    return lVar1;
  }
  param_2[1] = 0;
  lVar1 = func_0x0001402bf8e0(*(undefined8 *)(param_2 + 2));
  return lVar1;
}

