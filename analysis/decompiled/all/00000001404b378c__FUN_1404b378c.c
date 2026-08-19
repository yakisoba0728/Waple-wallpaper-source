// Function: FUN_1404b378c
// Addr: 1404b378c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b378c(char *param_1)

{
  char in_AL;
  char in_CF;
  
  *param_1 = *param_1 + in_AL + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

