// Function: FUN_1404b96c0
// Addr: 1404b96c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b96c0(longlong param_1,longlong param_2)

{
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

