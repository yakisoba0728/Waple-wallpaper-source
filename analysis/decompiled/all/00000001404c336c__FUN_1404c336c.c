// Function: FUN_1404c336c
// Addr: 1404c336c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c336c(longlong param_1,longlong param_2)

{
  char in_AL;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

