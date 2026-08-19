// Function: FUN_1404a19ac
// Addr: 1404a19ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a19f2) overlaps instruction at (ram,0x0001404a19f1)
    */

void FUN_1404a19ac(byte *param_1,int *param_2,char param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 in_RAX;
  undefined7 uVar11;
  ulonglong uVar9;
  uint *puVar10;
  char cVar12;
  uint uVar13;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char in_R10B;
  undefined1 auStack_8 [8];
  char *pcVar8;
  
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = (char)in_RAX + 'P';
  pcVar8 = (char *)CONCAT71(uVar11,cVar4);
  *pcVar8 = *pcVar8 + cVar4;
  uRam00000001245f19be = uRam00000001245f19be & (uint)param_2;
  *param_1 = *param_1 + in_R10B;
  cVar12 = (char)param_1;
  puVar14 = (undefined1 *)register0x00000020;
  if (*param_1 != 0) {
    cRam00000001444a6e25 = cRam00000001444a6e25 + cVar12;
    uVar9 = CONCAT71(uVar11,cVar4) ^ 0x53;
    pcVar8 = (char *)(uVar9 + 0x1c);
    *pcVar8 = *pcVar8 + (char)((ulonglong)param_2 >> 8);
    cVar4 = (char)uVar9;
    param_2 = (int *)(ulonglong)(uint)((int)CONCAT71(uVar11,cVar4) >> 0x1f);
    bVar5 = cVar4 - 4;
    bVar6 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
    cVar4 = bVar5 + bVar6;
    puVar10 = (uint *)CONCAT71(uVar11,cVar4);
    *(char *)param_2 = ((char)*param_2 - cVar12) - CARRY1(bVar5,bVar6);
    *puVar10 = *puVar10 & (uint)puVar10;
    uVar13 = *puVar10;
    *(char *)puVar10 = (char)*puVar10 + cVar4;
    if (SCARRY1((char)uVar13,cVar4)) {
      register0x00000020 = (BADSPACEBASE *)auStack_8;
    }
    else {
      param_2 = (int *)(ulonglong)(uint)((int)CONCAT71(uVar11,cVar4) >> 0x1f);
      bVar5 = (cVar4 - 4U) + bVar6;
      puVar10 = (uint *)CONCAT71(uVar11,bVar5);
      *(char *)param_2 = ((char)*param_2 - cVar12) - CARRY1(cVar4 - 4U,bVar6);
      *puVar10 = *puVar10 & (uint)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 | bVar5;
      puVar10 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                 CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',bVar5));
      *(char *)puVar10 = (char)*puVar10 + param_3;
      if ((char)*puVar10 == '\0') goto code_r0x0001404a1a38;
    }
    *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
    puVar14 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
    uVar11 = (undefined7)((ulonglong)puVar10 >> 8);
    pcVar8 = (char *)(((ulonglong)puVar10 ^ 0x53) + 0x1c);
    *pcVar8 = *pcVar8 + (char)((ulonglong)param_2 >> 8);
    cVar4 = (char)((ulonglong)puVar10 ^ 0x53);
    uVar13 = (int)CONCAT71(uVar11,cVar4) >> 0x1f;
    bVar5 = cVar4 - 4;
    bVar6 = (char)((ulonglong)puVar10 >> 0x18) >> 7;
    cVar4 = bVar5 + bVar6;
    *(char *)(ulonglong)uVar13 = (*(char *)(ulonglong)uVar13 - cVar12) - CARRY1(bVar5,bVar6);
    *(uint *)param_1 = *(int *)param_1 + (uint)param_1;
    cVar4 = cVar4 + *(char *)CONCAT71(uVar11,cVar4);
    param_2 = (int *)(ulonglong)(uVar13 | unaff_ESI);
    pcVar8 = (char *)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),
                              CONCAT11((char)((ulonglong)puVar10 >> 8) + cVar4,cVar4));
  }
  param_2[2] = param_2[2] & (uint)param_1;
  *(char *)(param_2 + -0xb) = (char)param_2[-0xb] + cVar12;
  uVar13 = (uint)pcVar8 | 0xec43300;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + cVar12;
    pcVar8 = (char *)(((ulonglong)uVar13 ^ 0x13) - 0x43fffbd9);
    *pcVar8 = *pcVar8 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)puVar14;
  puVar10 = (uint *)(ulonglong)(uVar13 + 0xf4050002);
  register0x00000020 = (BADSPACEBASE *)0x91000427;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - (char)(uVar13 + 0xf4050002);
code_r0x0001404a1a38:
  bVar5 = *param_1;
  *param_1 = *param_1 + (byte)register0x00000020;
  uVar13 = (uint)CARRY1(bVar5,(byte)register0x00000020);
  uVar1 = (uint)puVar10 - *(uint *)((longlong)puVar10 * 2);
  uVar7 = uVar1 - uVar13;
  uVar15 = (ulonglong)
           (((int)register0x00000020 - *(int *)(unaff_RBP + (longlong)param_2)) -
           (uint)((uint)puVar10 < *(uint *)((longlong)puVar10 * 2) || uVar1 < uVar13));
  *(byte *)(uVar15 + (longlong)param_2) = *(byte *)(uVar15 + (longlong)param_2) | (byte)param_2;
  pbVar3 = (byte *)(((ulonglong)param_1 & 0xffffffff) * 2);
  bVar5 = *pbVar3;
  bVar6 = (byte)((ulonglong)param_1 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar6;
  *(longlong *)(uVar15 - 8) = unaff_RBP;
  puVar10 = *(uint **)(uVar15 - 0x431);
  *param_2 = (*param_2 - uVar7) - (uint)(bVar5 < bVar6);
  *puVar10 = *puVar10 & (uint)puVar10;
  *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
  pbVar3 = (byte *)((ulonglong)uVar7 * 2);
  bVar5 = *pbVar3;
  *pbVar3 = *pbVar3 - (byte)uVar7;
  *(ulonglong *)(uVar15 - 0x431) = uVar15 - 8;
  puVar2 = *(uint **)(uVar15 - 0x85a);
  *param_2 = (*param_2 - (uint)puVar10) - (uint)(bVar5 < (byte)uVar7);
  *puVar2 = *puVar2 & (uint)puVar2;
  *(char *)((uVar15 - 0x431) + (longlong)param_2) =
       *(char *)((uVar15 - 0x431) + (longlong)param_2) + (char)((ulonglong)puVar2 >> 8);
  *(char *)((uVar15 - 0x852) + (longlong)param_2) =
       *(char *)((uVar15 - 0x852) + (longlong)param_2) + (byte)param_2;
  pcVar8 = (char *)((ulonglong)puVar2 & 0xffffffff);
  pbVar3 = (byte *)(((ulonglong)puVar10 & 0xffffffff) * 2);
  bVar5 = *pbVar3;
  bVar6 = (byte)((ulonglong)puVar10 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar6;
  *(ulonglong *)(uVar15 - 0x85a) = uVar15 - 0x431;
  puVar10 = *(uint **)(uVar15 - 0xc83);
  *param_2 = (*param_2 - (uint)puVar2) - (uint)(bVar5 < bVar6);
  *puVar10 = *puVar10 & (uint)puVar10;
  cVar4 = (char)puVar10;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - cVar4;
  *pcVar8 = *pcVar8 + '\'';
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)pcVar8;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

