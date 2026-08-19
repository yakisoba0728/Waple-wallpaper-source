// Function: FUN_1404c23b4
// Addr: 1404c23b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c23b4(longlong param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char *in_RAX;
  char unaff_BL;
  byte unaff_BH;
  int unaff_EBP;
  uint *puVar5;
  
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + (char)((ulonglong)in_RAX >> 8);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | unaff_BH;
  iVar2 = param_2[0xb411480];
  bVar3 = (char)in_RAX + *in_RAX;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  uVar4 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar3;
  *param_2 = (*param_2 - unaff_EBP) - (uint)CARRY1((byte)uVar4,bVar3);
  uVar4 = (uint)puVar5 | *puVar5;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + (char)iVar2) +
                   (ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + -0x34));
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

