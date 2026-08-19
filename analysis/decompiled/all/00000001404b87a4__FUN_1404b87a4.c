// Function: FUN_1404b87a4
// Addr: 1404b87a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b87a4(char param_1)

{
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + 0x1e) = *(char *)(unaff_RSI + 0x1e) + param_1 + in_CF;
  *(char *)(unaff_RBX + 0x4e) = *(char *)(unaff_RBX + 0x4e) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

