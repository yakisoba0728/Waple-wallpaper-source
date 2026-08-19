// Function: FUN_1404a7808
// Addr: 1404a7808
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7808(int param_1)

{
  char *in_RAX;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *(int *)(unaff_RSI + 0xe) = *(int *)(unaff_RSI + 0xe) + param_1;
  *(char *)(unaff_RSI + -0x68) = *(char *)(unaff_RSI + -0x68) + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

