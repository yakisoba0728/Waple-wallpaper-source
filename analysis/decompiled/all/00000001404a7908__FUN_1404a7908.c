// Function: FUN_1404a7908
// Addr: 1404a7908
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7908(longlong param_1,longlong param_2)

{
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

