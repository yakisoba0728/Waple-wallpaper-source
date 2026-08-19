// Function: FUN_1404c3c80
// Addr: 1404c3c80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3c80(char param_1,int *param_2)

{
  longlong in_RAX;
  char *unaff_RBX;
  int unaff_ESP;
  int unaff_EBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + in_RAX) = (*(int *)(unaff_RDI + in_RAX) - unaff_ESP) - (uint)in_CF;
  *unaff_RSI = *unaff_RSI + (char)param_2;
  *param_2 = *param_2 + unaff_EBP;
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

