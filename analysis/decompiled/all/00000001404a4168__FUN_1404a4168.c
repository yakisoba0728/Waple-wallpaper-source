// Function: FUN_1404a4168
// Addr: 1404a4168
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4168(uint *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *in_RAX;
  int *piVar4;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_RDI;
  
  *param_1 = *param_1 + unaff_EBX;
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar3 = *param_1;
  uVar2 = (uint)piVar4;
  *param_1 = *param_1 - uVar2;
  uVar3 = (uVar2 - *piVar4) - (uint)(uVar3 < uVar2) | 0x9e00bf0;
  piVar4 = (int *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar1 = *(char *)((longlong)piVar4 + 1);
  *(byte *)param_1 = (byte)*param_1 & (byte)param_1;
  *(char *)piVar4 = (char)*piVar4 + (char)(uVar3 >> 8);
  *piVar4 = *piVar4 + unaff_EBP;
  *(char *)piVar4 = (char)*piVar4 + param_2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

