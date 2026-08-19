// Function: FUN_1404c3b80
// Addr: 1404c3b80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3b80(uint param_1)

{
  uint uVar1;
  int *in_RAX;
  uint *unaff_RDI;
  int *piVar2;
  
  uVar1 = (int)in_RAX - *in_RAX;
  piVar2 = (int *)(ulonglong)uVar1;
  *piVar2 = *piVar2 + uVar1;
  *(char *)piVar2 = (char)*piVar2 + (char)uVar1;
  *unaff_RDI = *unaff_RDI | param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

