// Function: FUN_1404ca694
// Addr: 1404ca694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca694(char *param_1)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

