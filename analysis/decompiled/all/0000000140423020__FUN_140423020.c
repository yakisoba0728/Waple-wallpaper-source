// Function: FUN_140423020
// Addr: 140423020
// Size: 23 bytes


void FUN_140423020(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140017310(param_2 + 0x168);
  }
  return;
}

