// Function: FUN_1404d176c
// Addr: 1404d176c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d176c(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *in_R9;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[1] = unaff_RSI[1];
  *in_R9 = *in_R9 + unaff_R12B;
  unaff_RDI[2] = unaff_RSI[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

