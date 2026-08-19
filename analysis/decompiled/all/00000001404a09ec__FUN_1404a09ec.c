// Function: FUN_1404a09ec
// Addr: 1404a09ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a09ec(char *param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar5;
  char unaff_SPL;
  longlong unaff_RDI;
  int *piVar4;
  
  cVar2 = in(8);
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)piVar4 = (char)*piVar4 + cVar2;
  *(char *)(unaff_RDI + 0x6c) = *(char *)(unaff_RDI + 0x6c) + (char)((ulonglong)in_RAX >> 8);
  iVar3 = (int)piVar4 + *piVar4;
  uVar1 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11((char)((uint)iVar3 >> 8) + (byte)param_1,(char)iVar3));
  puVar5 = (uint *)(ulonglong)uVar1;
  *param_2 = *param_2 | (byte)param_1;
  *puVar5 = *puVar5 & uVar1;
  *(char *)puVar5 = (char)*puVar5 + (char)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

