// Function: FUN_14049e4d4
// Addr: 14049e4d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e4d4(longlong param_1)

{
  longlong unaff_RBX;
  int unaff_EBP;
  char *unaff_RSI;
  
  *(int *)(&stack0xffffffffc1e4ac00 + param_1) =
       *(int *)(&stack0xffffffffc1e4ac00 + param_1) + unaff_EBP;
  *(char *)(unaff_RBX + 0x1d00c264) = *(char *)(unaff_RBX + 0x1d00c264) + (char)unaff_RBX;
  *unaff_RSI = *unaff_RSI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

