// Function: FUN_1404b0c34
// Addr: 1404b0c34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b0c6f) overlaps instruction at (ram,0x0001404b0c6e)
    */

void FUN_1404b0c34(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint3 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar14;
  int in_EAX;
  uint uVar7;
  int iVar8;
  byte bVar15;
  uint uVar9;
  byte *pbVar10;
  byte bVar16;
  int *piVar11;
  uint *puVar12;
  char *pcVar13;
  byte bVar17;
  char *pcVar18;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  bVar17 = (byte)param_1;
  unaff_RBX[param_2] = unaff_RBX[param_2] + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)((uint)in_EAX >> 8);
  pbVar10 = (byte *)(param_1 + param_2);
  bVar5 = *pbVar10;
  bVar15 = (byte)param_2;
  *pbVar10 = *pbVar10 + bVar15;
  uVar7 = in_EAX + 0x15906900 + (uint)CARRY1(bVar5,bVar15);
  piVar11 = (int *)(ulonglong)uVar7;
  cVar14 = (char)(uVar7 >> 8);
  *(char *)((longlong)piVar11 + 9) = *(char *)((longlong)piVar11 + 9) + cVar14;
  *param_4 = *param_4 + unaff_SPL;
  if ((POPCOUNT(*param_4) & 1U) != 0) {
    *(char *)(param_2 + -0x3c) = *(char *)(param_2 + -0x3c) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar11 = (char)*piVar11 + bVar15;
  if ((char)*piVar11 == '\0') {
    *(char *)piVar11 = (char)*piVar11 + cVar14;
  }
  bVar5 = *(byte *)CONCAT71(unaff_00000021,unaff_SPL);
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) = *(char *)CONCAT71(unaff_00000021,unaff_SPL) + bVar17
  ;
  *piVar11 = *piVar11 + uVar7 + (uint)CARRY1(bVar5,bVar17);
  *(byte *)((longlong)piVar11 + param_2) = *(byte *)((longlong)piVar11 + param_2) | bVar15;
  bVar5 = (byte)uVar7 + 0x34;
  uVar9 = CONCAT31((int3)(uVar7 >> 8),bVar5);
  verr();
  iVar8 = (int)param_2 + 0x15923300 + (uint)(0xcb < (byte)uVar7);
  uVar2 = (undefined2)((uint)iVar8 >> 0x10);
  cVar14 = (char)((uint)iVar8 >> 8) + bVar5;
  uVar7 = CONCAT22(uVar2,CONCAT11(cVar14,(char)iVar8));
  puVar12 = (uint *)(ulonglong)uVar7;
  *unaff_RBX = *unaff_RBX | bVar17;
  *puVar12 = *puVar12 & uVar7;
  uVar1 = CONCAT22(uVar2,CONCAT11(cVar14 * '\x02',(char)iVar8 + (char)*puVar12));
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  pbVar10 = (byte *)((ulonglong)uVar9 - 0x6dccffeb);
  *pbVar10 = *pbVar10 & bVar5;
  uVar7 = uVar1 + 0x4b08d400;
  pbVar10 = (byte *)(ulonglong)uVar7;
  bVar15 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar15;
  cVar6 = (char)uVar7;
  *pbVar10 = *pbVar10 + cVar6;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar15;
  iVar8 = uVar9 + 0x15923300 + (uint)CARRY1(bVar5,bVar15);
  uVar2 = (undefined2)((uint)iVar8 >> 0x10);
  bVar5 = (byte)iVar8;
  cVar14 = (char)((uint)iVar8 >> 8) + cVar6;
  uVar9 = CONCAT22(uVar2,CONCAT11(cVar14,bVar5));
  puVar12 = (uint *)(ulonglong)uVar9;
  *unaff_RBX = *unaff_RBX | bVar17;
  *puVar12 = *puVar12 & uVar9;
  *(byte *)puVar12 = (char)*puVar12 + bVar5;
  cVar14 = cVar14 + bVar15;
  pbVar10 = (byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar14,bVar5));
  *pbVar10 = *pbVar10 | bVar5;
  cVar14 = cVar14 * '\x02';
  uVar9 = CONCAT22(uVar2,CONCAT11(cVar14,bVar5));
  *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 | uVar9;
  cVar14 = cVar14 + cVar6;
  bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar14,bVar5));
  uVar9 = CONCAT22(uVar2,CONCAT11(cVar14 + bVar5,bVar5));
  uVar9 = uVar9 | *(uint *)(ulonglong)uVar9;
  pbVar10 = (byte *)(ulonglong)uVar9;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + bVar15
  ;
  bVar16 = (byte)(uVar9 >> 8);
  param_1[uVar7] = param_1[uVar7] + bVar16;
  pbVar10[uVar7] = pbVar10[uVar7] + cVar6;
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar15;
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar16;
  pcVar18 = (char *)(ulonglong)uVar9;
  iVar8 = uVar1 + 0x609b0700 + (uint)CARRY1(bVar5,bVar16);
  uVar2 = (undefined2)((uint)iVar8 >> 0x10);
  cVar14 = (char)((uint)iVar8 >> 8) + (char)uVar9;
  *unaff_RBX = *unaff_RBX | bVar17;
  *(uint *)(pcVar18 + (longlong)param_1) = *(uint *)(pcVar18 + (longlong)param_1) & uVar9;
  pcVar13 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar13 = *pcVar13 + (char)uVar9;
  uVar7 = CONCAT22(uVar2,CONCAT11(cVar14 * '\x02',
                                  (byte)iVar8 |
                                  *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar14,(byte)iVar8))))
  ;
  piVar11 = (int *)((ulonglong)(uVar7 | *(uint *)(ulonglong)uVar7) | 0x74);
  iVar8 = (int)piVar11 + *piVar11;
  *(byte *)((longlong)pcVar18 * 2) = *(byte *)((longlong)pcVar18 * 2) | (byte)((uint)iVar8 >> 8);
  uVar3 = (uint3)((uint)iVar8 >> 8);
  uVar4 = CONCAT31(uVar3,(byte)iVar8 + 0x54);
  puVar12 = (uint *)(ulonglong)uVar4;
  uVar1 = (uint)(0xab < (byte)iVar8);
  uVar7 = *puVar12;
  uVar9 = *puVar12;
  *puVar12 = uVar9 + uVar4 + uVar1;
  uVar7 = (int)CONCAT71((uint7)uVar3,0x93) + 0x1593d900 +
          (uint)(CARRY4(uVar7,uVar4) || CARRY4(uVar9 + uVar4,uVar1));
  pcVar13 = (char *)(ulonglong)uVar7;
  pcVar13[9] = pcVar13[9] + (char)(uVar7 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar13 = *pcVar13 + (char)uVar7;
  pbVar10 = (byte *)(pcVar13 + -0x26ffea6d);
  bVar5 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar16;
  uVar7 = (int)unaff_RBX + 0x4b096000 + (uint)CARRY1(bVar5,bVar16);
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  *pcVar18 = *pcVar18 + bVar17;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

