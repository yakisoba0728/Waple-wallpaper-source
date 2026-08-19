// Function: FUN_1404c9970
// Addr: 1404c9970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9970(int *param_1)

{
  short in_AX;
  uint uVar1;
  char unaff_BL;
  int *unaff_RDI;
  char in_R11B;
  int *piVar2;
  
  uVar1 = (uint)in_AX;
  piVar2 = (int *)(ulonglong)uVar1;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI - uVar1;
  *(char *)piVar2 = (char)*piVar2 + unaff_BL;
  *piVar2 = *piVar2 + uVar1;
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

