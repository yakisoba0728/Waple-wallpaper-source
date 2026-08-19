// Function: FUN_1404bb384
// Addr: 1404bb384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bb3b9) */

void FUN_1404bb384(longlong param_1,longlong param_2,ulonglong param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong *in_RAX;
  int *piVar3;
  longlong unaff_RBX;
  uint unaff_ESP;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char *pcVar4;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  LOCK();
  *in_RAX = *in_RAX & param_3;
  UNLOCK();
  *(uint *)(unaff_RBP + 0x21) = *(uint *)(unaff_RBP + 0x21) & (uint)param_1;
  *(char *)((longlong)in_RAX + 0xd) =
       *(char *)((longlong)in_RAX + 0xd) + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + (char)in_RAX;
  uVar2 = (int)in_RAX + 0x87d2fffb;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  piVar3 = (int *)((ulonglong)uVar2 & 0xffffffffffffff68);
  *piVar3 = *piVar3 + (int)piVar3;
  cVar1 = (char)piVar3 + 'B';
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)piVar3 >> 8),cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  *(int *)(pcVar4 + unaff_RDI) = *(int *)(pcVar4 + unaff_RDI) + (int)param_2;
  pcVar4[unaff_RBP * 2] = pcVar4[unaff_RBP * 2] + (char)param_2;
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

