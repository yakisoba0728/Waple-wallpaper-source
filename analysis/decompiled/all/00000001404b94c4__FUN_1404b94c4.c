// Function: FUN_1404b94c4
// Addr: 1404b94c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b94c4(void)

{
  uint *unaff_RBX;
  uint unaff_EBP;
  
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

