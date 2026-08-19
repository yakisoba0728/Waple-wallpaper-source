// Function: FUN_14049f62c
// Addr: 14049f62c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f62c(undefined8 param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(ulonglong)param_2;
  *piVar1 = *piVar1 + param_2;
  piVar1 = (int *)((ulonglong)piVar1 ^ 0x92);
  *piVar1 = *piVar1 + (int)piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

