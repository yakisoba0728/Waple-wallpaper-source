// Function: FUN_1404c5a74
// Addr: 1404c5a74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a74(int *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  int unaff_EBX;
  uint unaff_EBP;
  int unaff_EDI;
  int *piVar5;
  uint *puVar6;
  
  cVar3 = (char)in_RAX + -0x1e;
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *param_1 = *param_1 + (int)param_1;
  uVar4 = (int)piVar5 + *piVar5;
  puVar6 = (uint *)(ulonglong)uVar4;
  *(uint *)((longlong)puVar6 + 5) = *(uint *)((longlong)puVar6 + 5) | unaff_EBP;
  pcVar1 = (char *)(param_2 + (longlong)puVar6 * 8);
  cVar3 = (char)uVar4;
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *puVar6 = *puVar6 + unaff_EBX;
  uVar2 = *puVar6;
  *puVar6 = *puVar6 + uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *(int *)((longlong)puVar6 + (longlong)param_1) =
       *(int *)((longlong)puVar6 + (longlong)param_1) + unaff_EDI;
  (&stack0x00000000)
  [CONCAT71((int7)((ulonglong)param_2 >> 8),((char)param_2 - cVar3) - CARRY4(uVar2,uVar4)) * 2] =
       (&stack0x00000000)
       [CONCAT71((int7)((ulonglong)param_2 >> 8),((char)param_2 - cVar3) - CARRY4(uVar2,uVar4)) * 2]
       + (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

