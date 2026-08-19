// Function: FUN_1404ca7a4
// Addr: 1404ca7a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca7a4(undefined8 param_1,char param_2)

{
  char *pcVar1;
  longlong unaff_RSI;
  
  bRam000000016dd6a7dd = bRam000000016dd6a7dd ^ (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(unaff_RSI * 8 + 0x21004ca6);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

