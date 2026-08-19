// Function: FUN_1404a0ae8
// Addr: 1404a0ae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0ae8(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *in_RAX;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RSI;
  char *pcVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(unaff_RSI + 3) = *(char *)(unaff_RSI + 3) + (char)((ulonglong)param_2 >> 8);
  cRam00000000d44a0e6b = cRam00000000d44a0e6b + unaff_BH;
  pbVar1 = (byte *)((longlong)in_RAX + -0x7f01fffd);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  uVar2 = (uint)in_RAX + *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + (char)param_1;
  *pcVar3 = *pcVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

