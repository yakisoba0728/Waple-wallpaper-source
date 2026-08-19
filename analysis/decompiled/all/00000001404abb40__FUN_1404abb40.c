// Function: FUN_1404abb40
// Addr: 1404abb40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abb40(char *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *in_RAX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar2 = *in_RAX;
  *(int *)(&stack0x00000000 + CONCAT44(unaff_00000034,unaff_ESI) * 4) =
       *(int *)(&stack0x00000000 + CONCAT44(unaff_00000034,unaff_ESI) * 4) - unaff_ESI;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  piVar1 = (int *)((ulonglong)((uint)in_RAX | uVar2) * 2 + -0x1fe70fe6);
  *piVar1 = *piVar1 + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

