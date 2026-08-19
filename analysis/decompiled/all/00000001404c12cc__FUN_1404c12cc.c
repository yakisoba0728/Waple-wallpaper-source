// Function: FUN_1404c12cc
// Addr: 1404c12cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c12cc(char *param_1)

{
  char unaff_BL;
  char *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

