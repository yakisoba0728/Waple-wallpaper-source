// Function: FUN_1404bb06c
// Addr: 1404bb06c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb06c(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_DR0;
  
  *(byte *)(unaff_RBP + param_2) = *(byte *)(unaff_RBP + param_2) | (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + 0x2421004b) = *(char *)(unaff_RDI + 0x2421004b) + -6;
  (&stack0x00000000)[unaff_RSI * 8] =
       (&stack0x00000000)[unaff_RSI * 8] + (char)((ulonglong)in_DR0 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

