// Function: FUN_1404d2e0c
// Addr: 1404d2e0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2e0c(int param_1)

{
  int in_EAX;
  uint uVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char *unaff_RDI;
  int *piVar2;
  
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) = *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + param_1;
  uVar1 = in_EAX + 0x780b00;
  piVar2 = (int *)(ulonglong)uVar1;
  *unaff_RDI = *unaff_RDI + (char)uVar1;
  *(int **)((ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)piVar2 + 2)) - 8) = piVar2;
  *(char *)piVar2 = (char)*piVar2 + (char)uVar1;
  *(uint *)(unaff_RDI + 0xc) = *(uint *)(unaff_RDI + 0xc) & unaff_EBX;
  unaff_RDI[0x68] = unaff_RDI[0x68] + (char)unaff_EBX;
  *piVar2 = *piVar2 + uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

