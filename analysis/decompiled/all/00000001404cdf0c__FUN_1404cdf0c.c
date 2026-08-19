// Function: FUN_1404cdf0c
// Addr: 1404cdf0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdf0c(uint param_1)

{
  char in_AL;
  uint *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI & param_1;
  cRam00000001b04ce70d = cRam00000001b04ce70d + in_AL + -0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

