// Function: FUN_1404230e0
// Addr: 1404230e0
// Size: 41 bytes


void FUN_1404230e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140017310(param_2 + 0x188);
  }
  return;
}

