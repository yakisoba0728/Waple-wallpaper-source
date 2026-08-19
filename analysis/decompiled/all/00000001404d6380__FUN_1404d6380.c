// Function: FUN_1404d6380
// Addr: 1404d6380
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6380(void)

{
  uint *unaff_RBX;
  uint unaff_EDI;
  
  *unaff_RBX = *unaff_RBX & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

