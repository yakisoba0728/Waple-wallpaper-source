// Function: FUN_14039d540
// Addr: 14039d540
// Size: 47 bytes


void FUN_14039d540(longlong param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_1402efa80(*(undefined8 *)(param_1 + 0x30));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  thunk_FUN_1402d9040(param_1);
  return;
}

