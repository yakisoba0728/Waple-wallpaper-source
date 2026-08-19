// Function: FUN_1404b1a7c
// Addr: 1404b1a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1a7c(char *param_1)

{
  char in_AH;
  
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

