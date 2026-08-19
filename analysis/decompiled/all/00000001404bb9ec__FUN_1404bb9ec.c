// Function: FUN_1404bb9ec
// Addr: 1404bb9ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb9ec(void)

{
  uint *unaff_RBP;
  
  *unaff_RBP = *unaff_RBP & (uint)unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

