// Function: FUN_1404bda50
// Addr: 1404bda50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bda50(char param_1,char param_2)

{
  int unaff_EBP;
  char *unaff_RSI;
  int *unaff_RDI;
  
  *unaff_RSI = *unaff_RSI + param_2;
  *unaff_RDI = *unaff_RDI + unaff_EBP;
  *(char *)unaff_RDI = (char)*unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

