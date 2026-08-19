// Function: FUN_1404aa738
// Addr: 1404aa738
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa738(char *param_1,undefined8 param_2)

{
  char unaff_SPL;
  char *unaff_RDI;
  
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + (char)unaff_RDI;
  unaff_RDI[-0x3bfff1bb] = unaff_RDI[-0x3bfff1bb] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

