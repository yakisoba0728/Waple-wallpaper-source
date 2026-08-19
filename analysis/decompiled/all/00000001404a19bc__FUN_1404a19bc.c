// Function: FUN_1404a19bc
// Addr: 1404a19bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a19f2) overlaps instruction at (ram,0x0001404a19f1)
    */

void FUN_1404a19bc(byte *param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  int3 iVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar11;
  char cVar12;
  char *pcVar13;
  int *piVar14;
  char unaff_BL;
  undefined7 unaff_00000019;
  ulonglong uVar15;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 auStack_8 [8];
  uint *puVar10;
  
  uVar7 = in_EAX | 0x4005464;
  pcVar13 = (char *)(((ulonglong)uVar7 ^ 0x53) + 0x1c);
  *pcVar13 = *pcVar13 + (char)((ulonglong)param_2 >> 8);
  iVar2 = (int3)(uVar7 >> 8);
  piVar14 = (int *)(ulonglong)(uint)((int)iVar2 >> 0x17);
  bVar5 = (char)((ulonglong)uVar7 ^ 0x53) - 4;
  bVar6 = (byte)((int)uVar7 >> 0x1f);
  cVar4 = bVar5 + bVar6;
  puVar10 = (uint *)(ulonglong)CONCAT31(iVar2,cVar4);
  cVar12 = (char)param_1;
  *(char *)piVar14 = ((char)*piVar14 - cVar12) - CARRY1(bVar5,bVar6);
  *puVar10 = *puVar10 & CONCAT31(iVar2,cVar4);
  uVar8 = *puVar10;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  if (SCARRY1((char)uVar8,cVar4)) {
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  else {
    piVar14 = (int *)(ulonglong)(uint)((int)iVar2 >> 0x17);
    bVar5 = (cVar4 - 4U) + bVar6;
    puVar10 = (uint *)(ulonglong)CONCAT31(iVar2,bVar5);
    *(char *)piVar14 = ((char)*piVar14 - cVar12) - CARRY1(cVar4 - 4U,bVar6);
    *puVar10 = *puVar10 & CONCAT31(iVar2,bVar5);
    *(byte *)puVar10 = (byte)*puVar10 | bVar5;
    puVar10 = (uint *)(ulonglong)
                      CONCAT22((short)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8) * '\x02',bVar5));
    *(char *)puVar10 = (char)*puVar10 + param_3;
    if ((char)*puVar10 == '\0') goto code_r0x0001404a1a38;
  }
  *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
  uVar11 = (undefined7)((ulonglong)puVar10 >> 8);
  pcVar13 = (char *)(((ulonglong)puVar10 ^ 0x53) + 0x1c);
  *pcVar13 = *pcVar13 + (char)((ulonglong)piVar14 >> 8);
  cVar4 = (char)((ulonglong)puVar10 ^ 0x53);
  uVar7 = (int)CONCAT71(uVar11,cVar4) >> 0x1f;
  bVar5 = cVar4 - 4;
  bVar6 = (char)((ulonglong)puVar10 >> 0x18) >> 7;
  cVar4 = bVar5 + bVar6;
  *(char *)(ulonglong)uVar7 = (*(char *)(ulonglong)uVar7 - cVar12) - CARRY1(bVar5,bVar6);
  *(uint *)param_1 = *(int *)param_1 + (uint)param_1;
  cVar4 = cVar4 + *(char *)CONCAT71(uVar11,cVar4);
  piVar14 = (int *)(ulonglong)(uVar7 | unaff_ESI);
  piVar14[2] = piVar14[2] & (uint)param_1;
  *(char *)(piVar14 + -0xb) = (char)piVar14[-0xb] + cVar12;
  uVar8 = (uint)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),
                         CONCAT11((char)((ulonglong)puVar10 >> 8) + cVar4,cVar4)) | 0xec43300;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar12;
    pcVar13 = (char *)(((ulonglong)uVar8 ^ 0x13) - 0x43fffbd9);
    *pcVar13 = *pcVar13 + (char)(uVar7 | unaff_ESI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
  puVar10 = (uint *)(ulonglong)(uVar8 + 0xf4050002);
  register0x00000020 = (BADSPACEBASE *)0x91000427;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - (char)(uVar8 + 0xf4050002);
code_r0x0001404a1a38:
  bVar5 = *param_1;
  *param_1 = *param_1 + (byte)register0x00000020;
  uVar8 = (uint)CARRY1(bVar5,(byte)register0x00000020);
  uVar7 = (uint)puVar10 - *(uint *)((longlong)puVar10 * 2);
  uVar9 = uVar7 - uVar8;
  uVar15 = (ulonglong)
           (((int)register0x00000020 - *(int *)(unaff_RBP + (longlong)piVar14)) -
           (uint)((uint)puVar10 < *(uint *)((longlong)puVar10 * 2) || uVar7 < uVar8));
  *(byte *)(uVar15 + (longlong)piVar14) = *(byte *)(uVar15 + (longlong)piVar14) | (byte)piVar14;
  pbVar3 = (byte *)(((ulonglong)param_1 & 0xffffffff) * 2);
  bVar5 = *pbVar3;
  bVar6 = (byte)((ulonglong)param_1 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar6;
  *(longlong *)(uVar15 - 8) = unaff_RBP;
  puVar10 = *(uint **)(uVar15 - 0x431);
  *piVar14 = (*piVar14 - uVar9) - (uint)(bVar5 < bVar6);
  *puVar10 = *puVar10 & (uint)puVar10;
  *(char *)puVar10 = (char)*puVar10 + (char)puVar10;
  pbVar3 = (byte *)((ulonglong)uVar9 * 2);
  bVar5 = *pbVar3;
  *pbVar3 = *pbVar3 - (byte)uVar9;
  *(ulonglong *)(uVar15 - 0x431) = uVar15 - 8;
  puVar1 = *(uint **)(uVar15 - 0x85a);
  *piVar14 = (*piVar14 - (uint)puVar10) - (uint)(bVar5 < (byte)uVar9);
  *puVar1 = *puVar1 & (uint)puVar1;
  *(char *)((uVar15 - 0x431) + (longlong)piVar14) =
       *(char *)((uVar15 - 0x431) + (longlong)piVar14) + (char)((ulonglong)puVar1 >> 8);
  *(char *)((uVar15 - 0x852) + (longlong)piVar14) =
       *(char *)((uVar15 - 0x852) + (longlong)piVar14) + (byte)piVar14;
  pcVar13 = (char *)((ulonglong)puVar1 & 0xffffffff);
  pbVar3 = (byte *)(((ulonglong)puVar10 & 0xffffffff) * 2);
  bVar5 = *pbVar3;
  bVar6 = (byte)((ulonglong)puVar10 & 0xffffffff);
  *pbVar3 = *pbVar3 - bVar6;
  *(ulonglong *)(uVar15 - 0x85a) = uVar15 - 0x431;
  puVar10 = *(uint **)(uVar15 - 0xc83);
  *piVar14 = (*piVar14 - (uint)puVar1) - (uint)(bVar5 < bVar6);
  *puVar10 = *puVar10 & (uint)puVar10;
  cVar4 = (char)puVar10;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  *(char *)((longlong)puVar10 * 2) = *(char *)((longlong)puVar10 * 2) - cVar4;
  *pcVar13 = *pcVar13 + '\'';
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)pcVar13;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

