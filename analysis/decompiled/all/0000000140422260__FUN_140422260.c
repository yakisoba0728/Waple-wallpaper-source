// Function: FUN_140422260
// Addr: 140422260
// Size: 45 bytes


void FUN_140422260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_140017160(&PTR_vftable_1404dc190);
  }
  return;
}

