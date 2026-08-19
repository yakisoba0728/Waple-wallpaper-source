// Function: FUN_1404c6870
// Addr: 1404c6870
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6870(longlong param_1)

{
  *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

