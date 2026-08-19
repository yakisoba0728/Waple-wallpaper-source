// Function: FUN_1404b5b3c
// Addr: 1404b5b3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5b3c(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
    *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

