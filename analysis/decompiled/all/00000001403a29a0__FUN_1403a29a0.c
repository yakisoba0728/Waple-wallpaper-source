// Function: FUN_1403a29a0
// Addr: 1403a29a0
// Size: 52 bytes


longlong FUN_1403a29a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while( true ) {
    if (lVar1 == 0) {
      lVar1 = FUN_1403bc8b0(param_2);
      return lVar1;
    }
    LOCK();
    bVar2 = lVar1 == *(longlong *)(param_1 + 8);
    if (bVar2) {
      *(longlong *)(param_1 + 8) = 0;
    }
    UNLOCK();
    if (bVar2) break;
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return lVar1;
}

