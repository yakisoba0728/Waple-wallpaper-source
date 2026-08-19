// Function: FUN_1404c0ce4
// Addr: 1404c0ce4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0ce4(uint param_1,char *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar12;
  undefined8 in_RAX;
  undefined7 uVar13;
  uint *puVar8;
  int *piVar10;
  char *pcVar11;
  char *pcVar14;
  byte bVar15;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  byte *pbVar9;
  
  bVar15 = (byte)param_2;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)(param_1 >> 8);
  param_1 = param_1 | *(uint *)(CONCAT71(uVar13,cVar3) * 2 + 1);
  puVar8 = (uint *)CONCAT71(uVar13,cVar3 + -6);
  pbVar9 = (byte *)((ulonglong)param_1 + (longlong)puVar8);
  bVar12 = *pbVar9;
  *pbVar9 = *pbVar9 + unaff_BL;
  bVar6 = bRam00000001619c195d;
  uVar1 = (uint)puVar8 - *puVar8;
  uVar7 = (uVar1 - CARRY1(bVar12,unaff_BL)) + unaff_ESI +
          (uint)((uint)puVar8 < *puVar8 || uVar1 < CARRY1(bVar12,unaff_BL));
  pcVar14 = (char *)(ulonglong)CONCAT31((int3)(param_1 >> 8),bRam00000001619c195d);
  bVar5 = (byte)uVar7;
  bRam00000001619c195d = bRam00000001619c195d + (char)param_1;
  *(byte *)((ulonglong)uVar7 * 2) = *(byte *)((ulonglong)uVar7 * 2) | bVar5;
  param_2[CONCAT71(unaff_00000019,unaff_BL)] =
       param_2[CONCAT71(unaff_00000019,unaff_BL)] | (byte)((ulonglong)param_2 >> 8);
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar4 = bVar5 + 0x34;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  *pbVar9 = *pbVar9 & bVar4;
  pcVar14[-0x56bfffd8] = pcVar14[-0x56bfffd8] + (char)(param_1 >> 8);
  bVar12 = *pbVar9;
  *pbVar9 = *pbVar9 - bVar4;
  bVar5 = (bVar5 + 0x28) - (bVar12 < bVar4);
  *pcVar14 = *pcVar14 + unaff_R12B;
  bVar12 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar6;
  *(char *)(ulonglong)CONCAT31(uVar2,bVar5) =
       (*(char *)(ulonglong)CONCAT31(uVar2,bVar5) - bVar5) - CARRY1(bVar12,bVar6);
  uVar1 = CONCAT31(uVar2,bVar5 - 0x2c);
  piVar10 = (int *)(ulonglong)uVar1;
  *piVar10 = (*piVar10 - uVar1) - (uint)(0x2b < bVar5);
  *(byte *)piVar10 = (char)*piVar10 - (bVar5 - 0x2c);
  bVar6 = bVar5 - 0x38;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar6);
  *pcVar14 = *pcVar14 + unaff_R12B;
  *param_2 = *param_2 + bVar6;
  *pbVar9 = *pbVar9 + bVar6;
  *pbVar9 = *pbVar9 - bVar6;
  *pcVar14 = *pcVar14 + unaff_R12B;
  *pbVar9 = *pbVar9 + bVar6;
  pbVar9[-0x57] = pbVar9[-0x57] + bVar6;
  *pbVar9 = *pbVar9 - bVar6;
  *pcVar14 = *pcVar14 + unaff_R12B;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar6;
  bVar12 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  *pbVar9 = (*pbVar9 - bVar6) - CARRY1(bVar12,bVar6);
  bVar12 = (byte)(uVar7 >> 8);
  uVar1 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar12 + bVar15,bVar6));
  piVar10 = (int *)(ulonglong)uVar1;
  *piVar10 = (*piVar10 - uVar1) - (uint)CARRY1(bVar12,bVar15);
  *(byte *)piVar10 = (char)*piVar10 - bVar6;
  cVar3 = bVar5 + 0xbc;
  pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar3);
  *pcVar14 = *pcVar14 + unaff_R12B;
  *pcVar11 = *pcVar11 + cVar3;
  *pcVar11 = *pcVar11 + bVar15;
  *pcVar11 = *pcVar11 - cVar3;
  *pcVar14 = *pcVar14 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

