// Function: FUN_1404a1abc
// Addr: 1404a1abc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1abc(uint *param_1)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  int *in_RAX;
  int *piVar5;
  char cVar6;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RDI;
  byte in_CF;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar4 = (uint)in_RAX;
  uVar2 = *param_1;
  *param_1 = (uVar2 - uVar4) - (uint)in_CF;
  iVar3 = *in_RAX;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar6 = (char)((uint)((int)param_1 - *(int *)CONCAT44(unaff_0000001c,unaff_EBX)) >> 8);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + cVar6;
  piVar5 = (int *)((ulonglong)
                   (uVar4 + iVar3 + (uint)(uVar1 < uVar4 || uVar2 - uVar4 < (uint)in_CF) | 0x9e00bf0
                   ) ^ 0x20);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + cVar6;
  *piVar5 = *piVar5 + unaff_EBX;
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

