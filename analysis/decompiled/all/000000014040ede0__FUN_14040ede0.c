// Function: FUN_14040ede0
// Addr: 14040ede0
// Size: 80 bytes


undefined8 FUN_14040ede0(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x1c) == 3) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440(&UNK_1404707e0,param_1,"bool __cdecl hb_blob_t::try_make_writable(void)",0,0,0,
                "current data is -> %p\n",*(undefined8 *)(param_1 + 0x10));
}

