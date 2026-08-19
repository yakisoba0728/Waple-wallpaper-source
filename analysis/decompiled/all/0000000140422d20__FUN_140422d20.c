// Function: FUN_140422d20
// Addr: 140422d20
// Size: 41 bytes


void FUN_140422d20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140016840(param_2 + 0x108);
  }
  return;
}

