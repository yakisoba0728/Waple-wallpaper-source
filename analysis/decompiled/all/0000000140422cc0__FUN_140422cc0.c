// Function: FUN_140422cc0
// Addr: 140422cc0
// Size: 23 bytes


void FUN_140422cc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140016840(param_2 + 0x168);
  }
  return;
}

