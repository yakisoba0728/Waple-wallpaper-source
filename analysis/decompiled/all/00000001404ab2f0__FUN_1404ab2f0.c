// Function: FUN_1404ab2f0
// Addr: 1404ab2f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab2f0(longlong param_1,longlong param_2)

{
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

