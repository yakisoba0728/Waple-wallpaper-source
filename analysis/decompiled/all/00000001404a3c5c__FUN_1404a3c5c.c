// Function: FUN_1404a3c5c
// Addr: 1404a3c5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c5c(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr & (uint)unaff_retaddr;
  *(char *)unaff_retaddr = (char)*unaff_retaddr + (char)unaff_retaddr;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

