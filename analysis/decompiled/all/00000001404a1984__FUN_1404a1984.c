// Function: FUN_1404a1984
// Addr: 1404a1984
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a19f2) overlaps instruction at (ram,0x0001404a19f1)
    */

void FUN_1404a1984(byte *param_1,int *param_2,char param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  char *in_RAX;
  undefined7 uVar11;
  char *pcVar12;
  uint uVar13;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char in_R10B;
  undefined2 in_DS;
  undefined1 auStack_8 [8];
  uint *puVar10;
  
  *(char *)param_2 = unaff_BL;
  *(undefined2 *)param_2 = in_DS;
  *in_RAX = unaff_BL;
  *param_1 = *param_1;
  cVar4 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar4;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[0x1a] = in_RAX[0x1a] + cVar7;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  *(char *)param_2 = unaff_BL;
  if (-1 < cVar4) {
    *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_R10B;
  cVar4 = (char)param_1;
  puVar14 = (undefined1 *)register0x00000020;
  if (*param_1 != 0) {
    cRam00000001444a6e25 = cRam00000001444a6e25 + cVar4;
    pcVar12 = (char *)(((ulonglong)in_RAX ^ 0x53) + 0x1c);
    *pcVar12 = *pcVar12 + (char)((ulonglong)param_2 >> 8);
    cVar5 = (char)((ulonglong)in_RAX ^ 0x53);
    param_2 = (int *)(ulonglong)(uint)((int)CONCAT71(uVar11,cVar5) >> 0x1f);
    bVar6 = cVar5 - 4;
    bVar8 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
    cVar5 = bVar6 + bVar8;
    puVar10 = (uint *)CONCAT71(uVar11,cVar5);
    *(char *)param_2 = ((char)*param_2 - cVar4) - CARRY1(bVar6,bVar8);
    *puVar10 = *puVar10 & (uint)puVar10;
    uVar13 = *puVar10;
    *(char *)puVar10 = (char)*puVar10 + cVar5;
    if (SCARRY1((char)uVar13,cVar5)) {
      register0x00000020 = (BADSPACEBASE *)auStack_8;
    }
    else {
      param_2 = (int *)(ulonglong)(uint)((int)CONCAT71(uVar11,cVar5) >> 0x1f);
      bVar6 = (cVar5 - 4U) + bVar8;
      puVar10 = (uint *)CONCAT71(uVar11,bVar6);
      *(char *)param_2 = ((char)*param_2 - cVar4) - CARRY1(cVar5 - 4U,bVar8);
      *puVar10 = *puVar10 & (uint)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 | bVar6;
      puVar10 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7 * '\x02',bVar6));
      *(char *)puVar10 = (char)*puVar10 + param_3;
      if ((char)*puVar10 == '\0') goto code_r0x0001404a1a38;
    }
    *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
    puVar14 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
    uVar11 = (undefined7)((ulonglong)puVar10 >> 8);
    pcVar12 = (char *)(((ulonglong)puVar10 ^ 0x53) + 0x1c);
    *pcVar12 = *pcVar12 + (char)((ulonglong)param_2 >> 8);
    cVar7 = (char)((ulonglong)puVar10 ^ 0x53);
    uVar13 = (int)CONCAT71(uVar11,cVar7) >> 0x1f;
    bVar6 = cVar7 - 4;
    bVar8 = (char)((ulonglong)puVar10 >> 0x18) >> 7;
    cVar7 = bVar6 + bVar8;
    *(char *)(ulonglong)uVar13 = (*(char *)(ulonglong)uVar13 - cVar4) - CARRY1(bVar6,bVar8);
    *(uint *)param_1 = *(int *)param_1 + (uint)param_1;
    cVar7 = cVar7 + *(char *)CONCAT71(uVar11,cVar7);
    param_2 = (int *)(ulonglong)(uVar13 | unaff_ESI);
    in_RAX = (char *)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),
                              CONCAT11((char)((ulonglong)puVar10 >> 8) + cVar7,cVar7));
  }
  param_2[2] = param_2[2] & (uint)param_1;
  *(char *)(param_2 + -0xb) = (char)param_2[-0xb] + cVar4;
  uVar13 = (uint)in_RAX | 0xec43300;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    *(char *)(ulonglong)uVar13 = *(char *)(ulonglong)uVar13 + cVar4;
    pcVar12 = (char *)(((ulonglong)uVar13 ^ 0x13) - 0x43fffbd9);
    *pcVar12 = *pcVar12 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)puVar14;
  puVar10 = (uint *)(ulonglong)(uVar13 + 0xf4050002);
  register0x00000020 = (BADSPACEBASE *)0x91000427;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - (char)(uVar13 + 0xf4050002);
code_r0x0001404a1a38:
  bVar6 = *param_1;
  *param_1 = *param_1 + (byte)register0x00000020;
  uVar13 = (uint)CARRY1(bVar6,(byte)register0x00000020);
  uVar1 = (uint)puVar10 - *(uint *)((longlong)puVar10 * 2);
  uVar9 = uVar1 - uVar13;
  uVar15 = (ulonglong)
           (((int)register0x00000020 - *(int *)(unaff_RBP + (longlong)param_2)) -
           (uint)((uint)puVar10 < *(uint *)((longlong)puVar10 * 2) || uVar1 < uVar13));
  *(byte *)(uVar15 + (longlong)param_2) = *(byte *)(uVar15 + (longlong)param_2) | (byte)param_2;
  pbVar3 = (byte *)(((ulonglong)param_1 & 0xffffffff) * 2);
  bVar6 = *pbVar3;
  bVar8 = (byte)((ulonglong)param_1 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar8;
  *(longlong *)(uVar15 - 8) = unaff_RBP;
  puVar10 = *(uint **)(uVar15 - 0x431);
  *param_2 = (*param_2 - uVar9) - (uint)(bVar6 < bVar8);
  *puVar10 = *puVar10 & (uint)puVar10;
  *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
  pbVar3 = (byte *)((ulonglong)uVar9 * 2);
  bVar6 = *pbVar3;
  *pbVar3 = *pbVar3 - (byte)uVar9;
  *(ulonglong *)(uVar15 - 0x431) = uVar15 - 8;
  puVar2 = *(uint **)(uVar15 - 0x85a);
  *param_2 = (*param_2 - (uint)puVar10) - (uint)(bVar6 < (byte)uVar9);
  *puVar2 = *puVar2 & (uint)puVar2;
  *(char *)((uVar15 - 0x431) + (longlong)param_2) =
       *(char *)((uVar15 - 0x431) + (longlong)param_2) + (char)((ulonglong)puVar2 >> 8);
  *(char *)((uVar15 - 0x852) + (longlong)param_2) =
       *(char *)((uVar15 - 0x852) + (longlong)param_2) + (byte)param_2;
  pcVar12 = (char *)((ulonglong)puVar2 & 0xffffffff);
  pbVar3 = (byte *)(((ulonglong)puVar10 & 0xffffffff) * 2);
  bVar6 = *pbVar3;
  bVar8 = (byte)((ulonglong)puVar10 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar8;
  *(ulonglong *)(uVar15 - 0x85a) = uVar15 - 0x431;
  puVar10 = *(uint **)(uVar15 - 0xc83);
  *param_2 = (*param_2 - (uint)puVar2) - (uint)(bVar6 < bVar8);
  *puVar10 = *puVar10 & (uint)puVar10;
  cVar4 = (char)puVar10;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - cVar4;
  *pcVar12 = *pcVar12 + '\'';
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)pcVar12;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

