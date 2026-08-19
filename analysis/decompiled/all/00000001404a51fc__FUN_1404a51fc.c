// Function: FUN_1404a51fc
// Addr: 1404a51fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a51fc(longlong param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  *(char *)(param_1 + 0x7f27000) = *(char *)(param_1 + 0x7f27000) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + 0x280007f2) = *(char *)(unaff_RSI + 0x280007f2) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

