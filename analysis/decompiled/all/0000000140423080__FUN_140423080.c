// Function: FUN_140423080
// Addr: 140423080
// Size: 41 bytes


void FUN_140423080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140017310(param_2 + 0xe8);
  }
  return;
}

