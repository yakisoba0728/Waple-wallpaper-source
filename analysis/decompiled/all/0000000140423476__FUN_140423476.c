// Function: FUN_140423476
// Addr: 140423476
// Size: 34 bytes


void FUN_140423476(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402bbec0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1402bbec0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

