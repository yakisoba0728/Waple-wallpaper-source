// Function: FUN_1404c60dc
// Addr: 1404c60dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c60dc(longlong param_1,byte param_2)

{
  *(byte *)(param_1 * 2) = *(byte *)(param_1 * 2) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

