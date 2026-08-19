// Function: FUN_1404d173c
// Addr: 1404d173c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d173c(undefined8 param_1,byte param_2,char param_3,char *param_4)

{
  byte *pbVar1;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  char unaff_R12B;
  
  pbVar1 = (byte *)(unaff_RDI & 0xffffffff);
  *(char *)(unaff_RSI + 1) = (*(char *)(unaff_RSI + 1) - param_2) - (*pbVar1 < (byte)pbVar1);
  *param_4 = *param_4 + unaff_R12B;
  *pbVar1 = *pbVar1 + (byte)pbVar1;
  *pbVar1 = *pbVar1 + (char)((ulonglong)pbVar1 >> 8);
  *(byte *)(unaff_RSI + 3) = *(byte *)(unaff_RSI + 3) | param_2;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

