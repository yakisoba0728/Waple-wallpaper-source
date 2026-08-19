// Function: FUN_1404d5a1c
// Addr: 1404d5a1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5a1c(undefined8 param_1,char param_2)

{
  int in_EAX;
  char *pcVar1;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(ulonglong)(in_EAX + 0x10000834U);
  pcVar1[unaff_RSI * 8 + 0x210049] = pcVar1[unaff_RSI * 8 + 0x210049] + param_2;
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x10000834U);
  pcVar1[unaff_RSI * 8 + 0x210049] = pcVar1[unaff_RSI * 8 + 0x210049] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

