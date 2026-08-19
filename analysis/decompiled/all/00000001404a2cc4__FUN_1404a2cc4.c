// Function: FUN_1404a2cc4
// Addr: 1404a2cc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2cc4(undefined4 param_1,int *param_2)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  uVar1 = in_EAX + 0x56f6500;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)(uVar1 >> 8);
  *param_2 = *param_2 + CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + (char)*param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

