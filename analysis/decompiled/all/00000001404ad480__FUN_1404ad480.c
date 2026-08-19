// Function: FUN_1404ad480
// Addr: 1404ad480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad480(char *param_1,longlong param_2)

{
  int unaff_ESI;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + param_2) = *(int *)(unaff_RDI + param_2) + unaff_ESI + (uint)in_CF;
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

