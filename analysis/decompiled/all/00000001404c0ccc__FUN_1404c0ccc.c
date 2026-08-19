// Function: FUN_1404c0ccc
// Addr: 1404c0ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0ccc(uint param_1,char *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar13;
  char *in_RAX;
  undefined7 uVar14;
  uint *puVar9;
  int *piVar11;
  char *pcVar12;
  byte bVar15;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  char *pcVar8;
  byte *pbVar10;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  param_2[CONCAT44(unaff_00000034,unaff_ESI)] = param_2[CONCAT44(unaff_00000034,unaff_ESI)] | bVar4;
  pcVar12 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x58);
  *pcVar12 = *pcVar12 + unaff_BL;
  *in_RAX = *in_RAX - (char)in_RAX;
  uVar14 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)(param_1 >> 8);
  pcVar8 = (char *)CONCAT71(uVar14,cVar3);
  param_1 = param_1 | *(uint *)((longlong)pcVar8 * 2 + 0x21);
  *pcVar8 = *pcVar8 + cVar3;
  pcVar12 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x58);
  *pcVar12 = *pcVar12 + unaff_BL;
  *pcVar8 = *pcVar8 - cVar3;
  cVar3 = cVar3 + (char)(param_1 >> 8);
  param_1 = param_1 | *(uint *)(CONCAT71(uVar14,cVar3) * 2 + 1);
  puVar9 = (uint *)CONCAT71(uVar14,cVar3 + -6);
  pbVar10 = (byte *)((ulonglong)param_1 + (longlong)puVar9);
  bVar13 = *pbVar10;
  *pbVar10 = *pbVar10 + unaff_BL;
  bVar6 = bRam00000001619c195d;
  uVar1 = (uint)puVar9 - *puVar9;
  uVar7 = (uVar1 - CARRY1(bVar13,unaff_BL)) + unaff_ESI +
          (uint)((uint)puVar9 < *puVar9 || uVar1 < CARRY1(bVar13,unaff_BL));
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(param_1 >> 8),bRam00000001619c195d);
  bVar5 = (byte)uVar7;
  bRam00000001619c195d = bRam00000001619c195d + (char)param_1;
  *(byte *)((ulonglong)uVar7 * 2) = *(byte *)((ulonglong)uVar7 * 2) | bVar5;
  param_2[CONCAT71(unaff_00000019,unaff_BL)] = param_2[CONCAT71(unaff_00000019,unaff_BL)] | bVar4;
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar4 = bVar5 + 0x34;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  *pbVar10 = *pbVar10 & bVar4;
  pcVar8[-0x56bfffd8] = pcVar8[-0x56bfffd8] + (char)(param_1 >> 8);
  bVar13 = *pbVar10;
  *pbVar10 = *pbVar10 - bVar4;
  bVar5 = (bVar5 + 0x28) - (bVar13 < bVar4);
  *pcVar8 = *pcVar8 + unaff_R12B;
  bVar13 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar6;
  *(char *)(ulonglong)CONCAT31(uVar2,bVar5) =
       (*(char *)(ulonglong)CONCAT31(uVar2,bVar5) - bVar5) - CARRY1(bVar13,bVar6);
  uVar1 = CONCAT31(uVar2,bVar5 - 0x2c);
  piVar11 = (int *)(ulonglong)uVar1;
  *piVar11 = (*piVar11 - uVar1) - (uint)(0x2b < bVar5);
  *(byte *)piVar11 = (char)*piVar11 - (bVar5 - 0x2c);
  bVar6 = bVar5 - 0x38;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar2,bVar6);
  *pcVar8 = *pcVar8 + unaff_R12B;
  *param_2 = *param_2 + bVar6;
  *pbVar10 = *pbVar10 + bVar6;
  *pbVar10 = *pbVar10 - bVar6;
  *pcVar8 = *pcVar8 + unaff_R12B;
  *pbVar10 = *pbVar10 + bVar6;
  pbVar10[-0x57] = pbVar10[-0x57] + bVar6;
  *pbVar10 = *pbVar10 - bVar6;
  *pcVar8 = *pcVar8 + unaff_R12B;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar6;
  bVar13 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  *pbVar10 = (*pbVar10 - bVar6) - CARRY1(bVar13,bVar6);
  bVar13 = (byte)(uVar7 >> 8);
  uVar1 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar13 + bVar15,bVar6));
  piVar11 = (int *)(ulonglong)uVar1;
  *piVar11 = (*piVar11 - uVar1) - (uint)CARRY1(bVar13,bVar15);
  *(byte *)piVar11 = (char)*piVar11 - bVar6;
  cVar3 = bVar5 + 0xbc;
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar3);
  *pcVar8 = *pcVar8 + unaff_R12B;
  *pcVar12 = *pcVar12 + cVar3;
  *pcVar12 = *pcVar12 + bVar15;
  *pcVar12 = *pcVar12 - cVar3;
  *pcVar8 = *pcVar8 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

