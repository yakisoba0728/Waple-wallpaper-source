// Function: FUN_1404b72f0
// Addr: 1404b72f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b72f0(void)

{
  int in_EAX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -0x3fffe2c9) =
       *(char *)(unaff_RSI + -0x3fffe2c9) + (char)((uint)(in_EAX + 0x6c40500) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

