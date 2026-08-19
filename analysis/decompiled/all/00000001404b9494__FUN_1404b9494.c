// Function: FUN_1404b9494
// Addr: 1404b9494
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9494(void)

{
  uint *unaff_RBX;
  uint unaff_EBP;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

