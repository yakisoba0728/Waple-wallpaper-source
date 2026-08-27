// Function: FUN_1401417e0
// Addr: 1401417e0
// Size: 105 bytes


void FUN_1401417e0(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    LOCK();
    *puVar1 = 0;
    UNLOCK();
    SetEvent(*(HANDLE *)(puVar1 + 8));
    FUN_1400150a0(puVar1 + 0x10);
    CloseHandle(*(HANDLE *)(puVar1 + 8));
    FUN_14000d9e0(puVar1 + 0x20);
    if (*(int *)(puVar1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140015110();
    }
    thunk_FUN_14028af80(puVar1,0x38);
    *param_1 = 0;
  }
  return;
}

