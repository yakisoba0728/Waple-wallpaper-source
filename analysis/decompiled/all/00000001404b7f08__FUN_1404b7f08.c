// Function: FUN_1404b7f08
// Addr: 1404b7f08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7f08(char *param_1,char param_2)

{
  int in_EAX;
  longlong unaff_RSI;
  byte in_CF;
  unkbyte10 in_ST7;
  
  ffree(in_ST7);
  *param_1 = *param_1 + (char)((in_EAX + -0x4a155000) - (uint)in_CF >> 8);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

