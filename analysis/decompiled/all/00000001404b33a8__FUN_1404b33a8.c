// Function: FUN_1404b33a8
// Addr: 1404b33a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b33a8(char *param_1)

{
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

