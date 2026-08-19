// Function: FUN_1404c02d4
// Addr: 1404c02d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c02d4(char *param_1)

{
  char in_AL;
  char unaff_R12B;
  
  *param_1 = in_AL;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

