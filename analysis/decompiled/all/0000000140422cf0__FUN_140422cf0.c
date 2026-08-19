// Function: FUN_140422cf0
// Addr: 140422cf0
// Size: 41 bytes


void FUN_140422cf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140016840(param_2 + 0x128);
  }
  return;
}

