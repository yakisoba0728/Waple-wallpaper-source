// Function: FUN_1404cadc0
// Addr: 1404cadc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cadc0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(param_2 + 0x33) = *(char *)(param_2 + 0x33) + unaff_BL + in_CF;
  *(char *)(unaff_RSI + 0x5a) = *(char *)(unaff_RSI + 0x5a) + unaff_BH;
  uVar1 = (uint)in_RAX ^ *in_RAX;
  (&stack0x02002100)[param_1 * 2] = (byte)(&stack0x02002100)[param_1 * 2] >> 1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

