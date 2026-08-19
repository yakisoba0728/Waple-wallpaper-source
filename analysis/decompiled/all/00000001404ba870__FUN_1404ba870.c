// Function: FUN_1404ba870
// Addr: 1404ba870
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba870(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  longlong unaff_RSI;
  
  uRam000000012450a878 = uRam000000012450a878 & in_EAX;
  pcVar1 = (char *)(param_2 + 0x20 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x20f1d000) + 0x1f210049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

