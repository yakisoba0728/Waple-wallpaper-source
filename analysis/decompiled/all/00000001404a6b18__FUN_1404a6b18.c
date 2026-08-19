// Function: FUN_1404a6b18
// Addr: 1404a6b18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b18(char *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  uint3 uVar4;
  undefined2 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar11;
  undefined8 in_RAX;
  uint *puVar9;
  char *pcVar10;
  undefined1 uVar12;
  char cVar13;
  undefined6 uVar14;
  char cVar15;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  
  cVar15 = (char)((ulonglong)param_2 >> 8);
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  uVar12 = SUB81(param_1,0);
  uVar4 = (uint3)((ulonglong)in_RAX >> 8) &
          (uint3)((uint)*(undefined4 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '4')
                 >> 8);
  puVar9 = (uint *)CONCAT71((uint7)uVar4,0xb7);
  *puVar9 = *puVar9 | (uint)puVar9;
  uVar3 = (undefined2)param_2;
  cVar7 = in(uVar3);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar13;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + cVar7 + '\x02';
  bVar8 = in(uVar3);
  cVar7 = cVar13 + '\t';
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *(char *)CONCAT62(uVar14,CONCAT11(cVar7,uVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar7,uVar12)) + unaff_SPL;
  *(char *)(ulonglong)CONCAT31(uVar4,bVar8) = *(char *)(ulonglong)CONCAT31(uVar4,bVar8) + bVar8;
  uVar5 = (undefined2)(uVar4 >> 8);
  bVar11 = (char)uVar4 + cVar7;
  cVar13 = cVar13 + '\x12';
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) + unaff_SPL;
  pcVar1 = (char *)((ulonglong)CONCAT22(uVar5,CONCAT11(bVar11,bVar8)) * 2);
  *pcVar1 = *pcVar1 + bVar8;
  uVar6 = CONCAT22(uVar5,CONCAT11(bVar11 + bVar8,bVar8));
  iVar2 = *(int *)(ulonglong)uVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) +
                   CONCAT62(unaff_0000001a,CONCAT11(9,unaff_BL)));
  *pcVar1 = *pcVar1 + cVar15;
  uVar4 = (uint3)((uVar6 - iVar2) - (uint)CARRY1(bVar11,bVar8) >> 8);
  puVar9 = (uint *)CONCAT71((uint7)uVar4,0xb7);
  *puVar9 = *puVar9 | (uint)puVar9;
  cVar7 = in(uVar3);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,cVar7);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar13;
  *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) + unaff_SPL;
  *pcVar10 = *pcVar10 + cVar7;
  pcVar10[-0x13fff649] = pcVar10[-0x13fff649] + cVar15;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar13;
  *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

