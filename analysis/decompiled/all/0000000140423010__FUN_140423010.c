// Function: FUN_140423010
// Addr: 140423010
// Size: 41 bytes


void FUN_140423010(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    thunk_FUN_140017240(param_2 + 0x188);
  }
  return;
}

