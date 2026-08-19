// Function: FUN_14049e848
// Addr: 14049e848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e848(void)

{
  char cVar1;
  longlong unaff_RSI;
  undefined1 *in_R9;
  
  cVar1 = func_0x000124b9e84e();
  *in_R9 = *in_R9;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cVar1 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

