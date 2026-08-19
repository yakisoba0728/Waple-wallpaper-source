// Function: FUN_1404aa720
// Addr: 1404aa720
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa720(char *param_1)

{
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

