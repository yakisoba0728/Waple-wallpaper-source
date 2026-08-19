// Function: FUN_1404d0370
// Addr: 1404d0370
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0370(int *param_1)

{
  int unaff_EDI;
  
  *param_1 = *param_1 + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

