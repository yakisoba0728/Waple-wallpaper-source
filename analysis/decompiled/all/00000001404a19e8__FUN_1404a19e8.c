// Function: FUN_1404a19e8
// Addr: 1404a19e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a19e8(byte *param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  longlong in_RAX;
  char cVar10;
  char *pcVar11;
  byte bVar12;
  uint uVar13;
  int *piVar14;
  char unaff_BL;
  undefined7 unaff_00000019;
  ulonglong uVar15;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  pcVar11 = (char *)(unaff_RBP + (longlong)param_1 * 2);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *pcVar11 = *pcVar11 + cVar4;
  cVar9 = (char)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + cVar9;
  pcVar11 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_2 * 2);
  *pcVar11 = *pcVar11 + cVar4;
  *(char *)(in_RAX + 0x1c) = *(char *)(in_RAX + 0x1c) + cVar4;
  uVar13 = (int)in_RAX >> 0x1f;
  bVar12 = (char)in_RAX - 4;
  bVar6 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
  cVar4 = bVar12 + bVar6;
  cVar10 = (char)param_1;
  *(char *)(ulonglong)uVar13 = (*(char *)(ulonglong)uVar13 - cVar10) - CARRY1(bVar12,bVar6);
  *(uint *)param_1 = *(int *)param_1 + (uint)param_1;
  cVar4 = cVar4 + *(char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  piVar14 = (int *)(ulonglong)(uVar13 | unaff_ESI);
  piVar14[2] = piVar14[2] & (uint)param_1;
  *(char *)(piVar14 + -0xb) = (char)piVar14[-0xb] + cVar10;
  uVar7 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar9 + cVar4,cVar4)) |
          0xec43300;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  bVar12 = (byte)(uVar13 | unaff_ESI);
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar10;
    pcVar11 = (char *)(((ulonglong)uVar7 ^ 0x13) - 0x43fffbd9);
    *pcVar11 = *pcVar11 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  uVar7 = uVar7 + 0xf4050002;
  pcVar11 = (char *)((ulonglong)uVar7 * 2);
  *pcVar11 = *pcVar11 - (char)uVar7;
  bVar6 = *param_1;
  *param_1 = *param_1 + 0x27;
  puVar1 = (uint *)((ulonglong)uVar7 * 2);
  uVar13 = uVar7 - *puVar1;
  uVar8 = uVar13 - (0xd8 < bVar6);
  uVar15 = (ulonglong)
           ((-0x6efffbd9 - *(int *)(unaff_RBP + (longlong)piVar14)) -
           (uint)(uVar7 < *puVar1 || uVar13 < (0xd8 < bVar6)));
  *(byte *)(uVar15 + (longlong)piVar14) = *(byte *)(uVar15 + (longlong)piVar14) | bVar12;
  pbVar3 = (byte *)(((ulonglong)param_1 & 0xffffffff) * 2);
  bVar6 = *pbVar3;
  bVar5 = (byte)((ulonglong)param_1 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar5;
  *(longlong *)(uVar15 - 8) = unaff_RBP;
  puVar1 = *(uint **)(uVar15 - 0x431);
  *piVar14 = (*piVar14 - uVar8) - (uint)(bVar6 < bVar5);
  *puVar1 = *puVar1 & (uint)puVar1;
  *(char *)puVar1 = (char)*puVar1 + (char)puVar1;
  pbVar3 = (byte *)((ulonglong)uVar8 * 2);
  bVar6 = *pbVar3;
  *pbVar3 = *pbVar3 - (byte)uVar8;
  *(ulonglong *)(uVar15 - 0x431) = uVar15 - 8;
  puVar2 = *(uint **)(uVar15 - 0x85a);
  *piVar14 = (*piVar14 - (uint)puVar1) - (uint)(bVar6 < (byte)uVar8);
  *puVar2 = *puVar2 & (uint)puVar2;
  *(char *)((uVar15 - 0x431) + (longlong)piVar14) =
       *(char *)((uVar15 - 0x431) + (longlong)piVar14) + (char)((ulonglong)puVar2 >> 8);
  *(char *)((uVar15 - 0x852) + (longlong)piVar14) =
       *(char *)((uVar15 - 0x852) + (longlong)piVar14) + bVar12;
  pcVar11 = (char *)((ulonglong)puVar2 & 0xffffffff);
  pbVar3 = (byte *)(((ulonglong)puVar1 & 0xffffffff) * 2);
  bVar12 = *pbVar3;
  bVar6 = (byte)((ulonglong)puVar1 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar6;
  *(ulonglong *)(uVar15 - 0x85a) = uVar15 - 0x431;
  puVar1 = *(uint **)(uVar15 - 0xc83);
  *piVar14 = (*piVar14 - (uint)puVar2) - (uint)(bVar12 < bVar6);
  *puVar1 = *puVar1 & (uint)puVar1;
  cVar4 = (char)puVar1;
  *(char *)puVar1 = (char)*puVar1 + cVar4;
  *(char *)((longlong)puVar1 * 2) = *(char *)((longlong)puVar1 * 2) - cVar4;
  *pcVar11 = *pcVar11 + '\'';
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)pcVar11;
  *(char *)puVar1 = (char)*puVar1 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

