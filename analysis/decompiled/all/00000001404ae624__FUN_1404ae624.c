// Function: FUN_1404ae624
// Addr: 1404ae624
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae624(longlong param_1,longlong param_2)

{
  char in_AH;
  char cVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar1;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + in_AH;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)param_2;
  *(char *)(param_1 + 0x13447000) = *(char *)(param_1 + 0x13447000) + cVar1;
  *(char *)(unaff_RSI + 0x28001344) = *(char *)(unaff_RSI + 0x28001344) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

