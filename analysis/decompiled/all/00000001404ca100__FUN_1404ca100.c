// Function: FUN_1404ca100
// Addr: 1404ca100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca100(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char in_AL;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(param_2 + 0x4c9ffc00 + unaff_RSI);
  *pbVar1 = ~*pbVar1;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

