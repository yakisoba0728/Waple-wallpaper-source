// Function: FUN_1404ca254
// Addr: 1404ca254
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca254(void)

{
  char in_AL;
  char *unaff_RDI;
  
  *unaff_RDI = in_AL + -0x3c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

