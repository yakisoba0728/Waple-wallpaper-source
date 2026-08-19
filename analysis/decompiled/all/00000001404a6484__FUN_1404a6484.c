// Function: FUN_1404a6484
// Addr: 1404a6484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6484(longlong param_1)

{
  byte *pbVar1;
  byte in_AH;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(param_1 + unaff_RSI * 2);
  *pbVar1 = *pbVar1 | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

