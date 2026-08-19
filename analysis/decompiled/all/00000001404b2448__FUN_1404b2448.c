// Function: FUN_1404b2448
// Addr: 1404b2448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2448(void)

{
  uint *unaff_RBX;
  uint unaff_ESP;
  
  *unaff_RBX = *unaff_RBX & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

