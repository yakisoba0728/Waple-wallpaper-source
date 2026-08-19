// Function: FUN_1404c85f0
// Addr: 1404c85f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c85f0(char param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint *in_RAX;
  uint *puVar4;
  char *pcVar6;
  int *unaff_RBX;
  char *pcVar5;
  
  *(char *)unaff_RBX = (char)*unaff_RBX >> 1;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  uVar1 = (ulonglong)param_2 << 0x20 | (ulonglong)in_RAX & 0xffffffff;
  uVar2 = (longlong)uVar1 / (longlong)*unaff_RBX;
  puVar4 = (uint *)(uVar2 & 0xffffffff);
  pcVar6 = (char *)((longlong)uVar1 % (longlong)*unaff_RBX & 0xffffffff);
  *puVar4 = *puVar4 ^ (uint)uVar2;
  cVar3 = in((short)pcVar6);
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)puVar4 >> 8),cVar3);
  *pcVar6 = *pcVar6 + param_1;
  *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

