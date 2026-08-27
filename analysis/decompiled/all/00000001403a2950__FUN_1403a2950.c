// Function: FUN_1403a2950
// Addr: 1403a2950
// Size: 72 bytes


longlong FUN_1403a2950(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      LOCK();
      bVar2 = lVar1 == *(longlong *)(param_1 + 0x30);
      if (bVar2) {
        *(longlong *)(param_1 + 0x30) = 0;
      }
      UNLOCK();
      if (bVar2) {
        return lVar1;
      }
    }
    lVar1 = _calloc_base(1,0x98);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}

