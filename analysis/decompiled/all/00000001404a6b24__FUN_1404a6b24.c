// Function: FUN_1404a6b24
// Addr: 1404a6b24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b24(char *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar8;
  undefined8 in_RAX;
  undefined6 uVar9;
  int *piVar5;
  uint *puVar6;
  char *pcVar7;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  char cVar14;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  uVar10 = SUB81(param_1,0);
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)in_RAX + -0x68;
  bVar4 = in((short)param_2);
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  cVar11 = cVar12 + '\t';
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *(char *)CONCAT62(uVar13,CONCAT11(cVar11,uVar10)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar11,uVar10)) + unaff_SPL;
  *pcVar7 = *pcVar7 + bVar4;
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar8 = (char)((ulonglong)in_RAX >> 8) + cVar11;
  cVar12 = cVar12 + '\x12';
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) + unaff_SPL;
  pcVar1 = (char *)(CONCAT62(uVar9,CONCAT11(bVar8,bVar4)) * 2);
  *pcVar1 = *pcVar1 + bVar4;
  piVar5 = (int *)CONCAT62(uVar9,CONCAT11(bVar8 + bVar4,bVar4));
  iVar2 = *piVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) +
                   CONCAT62(unaff_0000001a,CONCAT11(9,unaff_BL)));
  *pcVar1 = *pcVar1 + cVar14;
  uVar3 = (uint3)(((int)piVar5 - iVar2) - (uint)CARRY1(bVar8,bVar4) >> 8);
  puVar6 = (uint *)CONCAT71((uint7)uVar3,0xb7);
  *puVar6 = *puVar6 | (uint)puVar6;
  cVar11 = in((short)param_2);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,cVar11);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) + unaff_SPL;
  *pcVar7 = *pcVar7 + cVar11;
  pcVar7[-0x13fff649] = pcVar7[-0x13fff649] + cVar14;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

