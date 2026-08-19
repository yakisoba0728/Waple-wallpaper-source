// Function: FUN_1404230b0
// Addr: 1404230b0
// Size: 41 bytes


void FUN_1404230b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_140017310(param_2 + 0x148);
  }
  return;
}

