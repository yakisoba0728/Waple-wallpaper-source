// Function: FUN_1404a28bc
// Addr: 1404a28bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a28bc(int *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  undefined7 uVar5;
  uint unaff_ESI;
  char *pcVar4;
  
  bVar1 = (byte)in_RAX;
  bRam000000018a71d8c3 = bRam000000018a71d8c3 & bVar1;
  *in_RAX = *in_RAX + bVar1;
  *in_RAX = *in_RAX + bVar1;
  *(byte *)param_1 = (char)*param_1 + bVar1;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = bVar1 + 1;
  pcVar4 = (char *)CONCAT71(uVar5,cVar2);
  *(char *)(param_2 + (longlong)pcVar4 * 2) = (char)param_2[(longlong)pcVar4 * 2] + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *param_1 = *param_1 + (int)param_1;
  *param_2 = *param_2 | unaff_ESI;
  uVar3 = (int)CONCAT71(uVar5,cVar2) + 0x27003e0;
  uRam00000001a47f28e8 = uRam00000001a47f28e8 & unaff_ESI;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

