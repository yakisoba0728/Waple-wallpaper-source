// Function: FUN_1404a9de0
// Addr: 1404a9de0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9de0(char *param_1)

{
  char in_AL;
  
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

