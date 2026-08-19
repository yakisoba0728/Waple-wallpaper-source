// Function: FUN_1404a25ec
// Addr: 1404a25ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a25ec(char *param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  byte in_CF;
  
  uVar1 = in_EAX + 0x32000501 + (uint)in_CF;
  iRam000000018a6ee1f7 = iRam000000018a6ee1f7 + uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  cRam00000001454b3b03 = cRam00000001454b3b03 + (char)uVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

