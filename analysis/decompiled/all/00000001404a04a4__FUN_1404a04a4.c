// Function: FUN_1404a04a4
// Addr: 1404a04a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a04a4(char *param_1)

{
  undefined1 in_AL;
  undefined1 *unaff_RBX;
  char unaff_SPL;
  
  *unaff_RBX = in_AL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

