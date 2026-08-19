// Function: FUN_1404b8d90
// Addr: 1404b8d90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8d90(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + unaff_RBP) =
       *(byte *)(unaff_RSI + unaff_RBP) | (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_1 + -0x35) = *(char *)(param_1 + -0x35) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

