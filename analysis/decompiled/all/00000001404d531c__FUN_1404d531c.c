// Function: FUN_1404d531c
// Addr: 1404d531c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d531c(uint param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  byte *unaff_RSI;
  byte *pbVar2;
  
  uVar1 = in_EAX + 0x27003c0;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *pbVar2 = *pbVar2 + (char)(uVar1 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar2 = *pbVar2 + (char)param_1;
  *pbVar2 = *pbVar2 + (byte)uVar1;
  *(uint *)(pbVar2 + (longlong)&stack0x00000000) =
       *(uint *)(pbVar2 + (longlong)&stack0x00000000) & param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

