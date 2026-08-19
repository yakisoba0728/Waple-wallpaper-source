// Function: FUN_1404a853c
// Addr: 1404a853c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a853c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte in_AL;
  char *unaff_RSI;
  
  pbVar1 = (byte *)(param_2 + 0x60e0100 + param_1 * 2);
  *pbVar1 = *pbVar1 & in_AL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

