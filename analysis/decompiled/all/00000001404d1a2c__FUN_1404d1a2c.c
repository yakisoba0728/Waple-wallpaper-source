// Function: FUN_1404d1a2c
// Addr: 1404d1a2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1a2c(void)

{
  int *unaff_RBX;
  int unaff_EBP;
  
  *unaff_RBX = *unaff_RBX + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

