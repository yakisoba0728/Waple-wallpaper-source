// Function: FUN_1404ac14c
// Addr: 1404ac14c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac14c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -0x50) = *(char *)(unaff_RSI + -0x50) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

