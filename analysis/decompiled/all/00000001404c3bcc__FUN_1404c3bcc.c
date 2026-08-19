// Function: FUN_1404c3bcc
// Addr: 1404c3bcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3bcc(void)

{
  int *piVar1;
  uint uVar2;
  int *in_RAX;
  uint *puVar3;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  uVar2 = (int)in_RAX - *in_RAX;
  uVar2 = uVar2 - *(int *)(ulonglong)uVar2;
  puVar3 = (uint *)(ulonglong)uVar2;
  *puVar3 = *puVar3 + uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  piVar1 = (int *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x3b40fff5);
  *piVar1 = (*piVar1 - unaff_EDI) - (uint)(uVar2 < *puVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

