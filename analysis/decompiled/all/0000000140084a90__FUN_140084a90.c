// Function: FUN_140084a90
// Addr: 140084a90
// Size: 40 bytes


void FUN_140084a90(longlong param_1)

{
  UnregisterWaitEx(*(HANDLE *)(param_1 + 8),(HANDLE)0xffffffffffffffff);
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  return;
}

