// Function: FUN_140014ef0
// Addr: 140014ef0
// Size: 5 bytes


void FUN_140014ef0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

