// Function: FUN_1404d4048
// Addr: 1404d4048
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4048(longlong param_1)

{
  char *pcVar1;
  int in_EAX;
  uint *unaff_RSI;
  char in_R10B;
  
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x3600470) + 0x68004d3f);
  *pcVar1 = *pcVar1 + (char)param_1;
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  *(char *)(param_1 + 0xa004d3f) = *(char *)(param_1 + 0xa004d3f) + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

