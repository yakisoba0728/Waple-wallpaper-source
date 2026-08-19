// Function: FUN_1404ac5a8
// Addr: 1404ac5a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac5a8(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  char *pcVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  uint unaff_EDI;
  
  uVar2 = in((short)param_2);
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) + 0x521004a;
  iVar1 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  pcVar5 = (char *)((ulonglong)(iVar1 + 0xd0000854) + 0x210049ea);
  *pcVar5 = *pcVar5 + (char)((uint)param_2 >> 8);
  uVar3 = iVar1 + 0x34050856;
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 | uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3 + (unaff_EDI < *param_1);
  pcVar5 = (char *)((ulonglong)uVar3 & 0xffffffffffffff39);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
  uVar3 = (int)pcVar5 + 0xf4050002;
  pcVar5 = (char *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3)
                   & 0xffffffffffffff39);
  *pcVar5 = *pcVar5 + (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

