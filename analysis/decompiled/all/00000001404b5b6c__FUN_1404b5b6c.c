// Function: FUN_1404b5b6c
// Addr: 1404b5b6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5b6c(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

