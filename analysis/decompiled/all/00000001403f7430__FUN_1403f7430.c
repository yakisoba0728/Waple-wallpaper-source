// Function: FUN_1403f7430
// Addr: 1403f7430
// Size: 84 bytes


longlong FUN_1403f7430(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  lVar1 = *(longlong *)(param_1 + 8);
  bVar2 = lVar1 == 0;
  if (bVar2) {
    *(longlong *)(param_1 + 8) = param_2;
    lVar1 = 0;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_1403975d0(param_2 + 0x18);
    if (1 < *(int *)(param_2 + 8) + 1U) {
      *(undefined4 *)(param_2 + 0xc) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 0x10));
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    lVar1 = thunk_FUN_1402d9040(param_2);
  }
  return lVar1;
}

