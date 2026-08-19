// Function: FUN_1404abfa4
// Addr: 1404abfa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abfa4(char *param_1)

{
  undefined4 uVar1;
  longlong unaff_RSI;
  
  uVar1 = in(0x49);
  *param_1 = *param_1 + (char)((uint)uVar1 >> 8);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)uVar1 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

