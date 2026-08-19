// Function: FUN_140423050
// Addr: 140423050
// Size: 41 bytes


void FUN_140423050(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140017310(param_2 + 0x128);
  }
  return;
}

