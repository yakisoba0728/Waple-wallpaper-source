// Function: FUN_1404b3de4
// Addr: 1404b3de4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3de4(void)

{
  char *pcVar1;
  longlong in_RAX;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & unaff_EBX;
  pcVar1 = (char *)(in_RAX + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

