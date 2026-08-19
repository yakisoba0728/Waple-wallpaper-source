// Function: FUN_1404c9f40
// Addr: 1404c9f40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9f4f) overlaps instruction at (ram,0x0001404c9f4e)
    */

void FUN_1404c9f40(longlong param_1)

{
  longlong in_RAX;
  byte *pbVar1;
  char *unaff_RSI;
  
  *(int *)(unaff_RSI + in_RAX + 0x564a400) =
       *(int *)(unaff_RSI + in_RAX + 0x564a400) + (int)&stack0x00000000;
  *unaff_RSI = *unaff_RSI + (char)in_RAX;
  pbVar1 = (byte *)(param_1 + -1);
  if (pbVar1 != (byte *)0x0 && *unaff_RSI != '\0') {
    *pbVar1 = *pbVar1 ^ (byte)((ulonglong)in_RAX >> 8);
  }
  uRam00000001b4599f5a = uRam00000001b4599f5a & (uint)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

