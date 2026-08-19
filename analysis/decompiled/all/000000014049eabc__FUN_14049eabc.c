// Function: FUN_14049eabc
// Addr: 14049eabc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eabc(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char unaff_BL;
  char *unaff_RSI;
  
  uVar1 = in_EAX + 0xb00008e4;
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *param_1 = *param_1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

