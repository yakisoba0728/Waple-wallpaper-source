// Function: FUN_1404b73b8
// Addr: 1404b73b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b73b8(char *param_1)

{
  char in_AL;
  
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

