// Function: FUN_1404c67f8
// Addr: 1404c67f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c67f8(void)

{
  int in_EAX;
  longlong unaff_RSI;
  
  (&stack0x00000000)[unaff_RSI] =
       (&stack0x00000000)[unaff_RSI] + (char)((uint)(in_EAX + -0x44fff2ac) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

