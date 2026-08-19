// Function: FUN_1404a0874
// Addr: 1404a0874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0874(int param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint *in_RAX;
  longlong unaff_RSI;
  
  *(int *)(unaff_RSI + (longlong)in_RAX) = *(int *)(unaff_RSI + (longlong)in_RAX) + param_1;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_1;
  pbVar1 = (byte *)(((ulonglong)((uint)in_RAX | *in_RAX) | 0x32) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

