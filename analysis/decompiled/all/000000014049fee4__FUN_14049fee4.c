// Function: FUN_14049fee4
// Addr: 14049fee4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fee4(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int *in_RAX;
  char unaff_SPL;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI | (uint)param_1;
  if (param_1 == 1 || (int)in_RAX + *in_RAX == 0) {
    *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

