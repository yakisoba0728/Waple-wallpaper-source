// Function: FUN_1404b9198
// Addr: 1404b9198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9198(longlong param_1,longlong param_2)

{
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

