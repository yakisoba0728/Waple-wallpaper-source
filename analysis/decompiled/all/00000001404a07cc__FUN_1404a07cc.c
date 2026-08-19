// Function: FUN_1404a07cc
// Addr: 1404a07cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a07e0) overlaps instruction at (ram,0x0001404a07df)
    */

void FUN_1404a07cc(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar5;
  undefined8 in_RAX;
  int *piVar4;
  int *unaff_RDI;
  
  cVar3 = (char)in_RAX;
  cVar5 = (char)((ulonglong)in_RAX >> 8) + cVar3;
  piVar4 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar5,cVar3));
  iVar2 = LocalDescriptorTableRegister();
  *piVar4 = iVar2;
  if (cVar5 == '\0') {
    *param_1 = *param_1;
  }
  else {
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    piVar4 = (int *)CONCAT71((int7)((ulonglong)piVar4 >> 8),cVar3);
    param_1 = param_1 + -1;
    if (param_1 != (undefined1 *)0x0 && cVar3 != '\0') {
      *unaff_RDI = *unaff_RDI + (int)param_1;
      sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar2 = *piVar4;
  *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
  pcVar1 = (char *)((ulonglong)(uint)((int)piVar4 + iVar2) + 0x21004a06);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

