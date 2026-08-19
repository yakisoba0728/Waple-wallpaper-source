// Function: FUN_1404c9900
// Addr: 1404c9900
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9900(void)

{
  longlong in_RAX;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

