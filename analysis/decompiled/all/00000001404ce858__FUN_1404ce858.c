// Function: FUN_1404ce858
// Addr: 1404ce858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce858(char *param_1)

{
  char cVar1;
  char unaff_BL;
  char *unaff_RSI;
  char *unaff_RDI;
  
  *param_1 = *param_1;
  cVar1 = (char)unaff_RDI;
  *unaff_RSI = *unaff_RSI + cVar1;
  *unaff_RDI = *unaff_RDI + cVar1;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[-0x61ffc5bb] = unaff_RDI[-0x61ffc5bb] + cVar1;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

