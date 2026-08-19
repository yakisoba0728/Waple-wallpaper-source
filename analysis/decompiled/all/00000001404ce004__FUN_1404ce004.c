// Function: FUN_1404ce004
// Addr: 1404ce004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce004(void)

{
  longlong in_RAX;
  char unaff_BH;
  char *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(short *)(in_RAX * 2 + 2) = (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

