// Function: FUN_1404d52e4
// Addr: 1404d52e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d52e4(longlong param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  byte *unaff_RSI;
  byte *pbVar2;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in_EAX + 0x27003c0;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *pbVar2 = *pbVar2 + (char)(uVar1 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar2 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)uVar1;
  pbVar2 = pbVar2 + (longlong)&stack0x00000000;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

