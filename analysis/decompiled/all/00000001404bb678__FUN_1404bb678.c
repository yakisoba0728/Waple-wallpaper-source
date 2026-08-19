// Function: FUN_1404bb678
// Addr: 1404bb678
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb678(void)

{
  longlong unaff_RDI;
  char *in_R9;
  
  *(undefined1 *)(unaff_RDI + 0x21) = *(undefined1 *)(unaff_RDI + 0x21);
  *in_R9 = *in_R9 + -0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

