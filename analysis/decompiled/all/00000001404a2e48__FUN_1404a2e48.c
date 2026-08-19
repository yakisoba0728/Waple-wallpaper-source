// Function: FUN_1404a2e48
// Addr: 1404a2e48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2e48(longlong param_1)

{
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

