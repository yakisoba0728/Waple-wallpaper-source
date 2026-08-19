// Function: FUN_14049ee4c
// Addr: 14049ee4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee4c(longlong param_1)

{
  int *piVar1;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  
  piVar1 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + param_1);
  *piVar1 = *piVar1 + unaff_EBX;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

