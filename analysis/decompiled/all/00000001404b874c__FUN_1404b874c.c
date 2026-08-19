// Function: FUN_1404b874c
// Addr: 1404b874c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b874c(void)

{
  uint *unaff_RBX;
  uint unaff_ESP;
  
  *unaff_RBX = *unaff_RBX & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

