// Function: FUN_1404c9d20
// Addr: 1404c9d20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d20(char *param_1)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RSI;
  char unaff_R12B;
  
  *(byte *)(unaff_RSI + 0x32) = *(byte *)(unaff_RSI + 0x32) & (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x1800326e) = *(char *)(unaff_RSI + 0x1800326e) + (char)((uint)in_EAX >> 8);
  *param_1 = *param_1 + unaff_R12B;
  uVar1 = in_EAX + 0x54050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  cRam00000001184ccfa1 = cRam00000001184ccfa1 + (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

