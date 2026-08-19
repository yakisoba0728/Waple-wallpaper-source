// Function: FUN_1404a3210
// Addr: 1404a3210
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3210(char *param_1,int *param_2)

{
  char unaff_BL;
  int unaff_EDI;
  
  *param_2 = *param_2 + unaff_EDI;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

