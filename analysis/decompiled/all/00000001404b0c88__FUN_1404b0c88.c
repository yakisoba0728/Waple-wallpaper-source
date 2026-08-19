// Function: FUN_1404b0c88
// Addr: 1404b0c88
// Size: 1 bytes


void FUN_1404b0c88(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint3 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  char cVar14;
  uint uVar8;
  byte bVar13;
  byte *in_RAX;
  int *piVar10;
  uint *puVar11;
  char *pcVar12;
  byte bVar15;
  char cVar16;
  char cVar19;
  ulonglong uVar17;
  char *pcVar18;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar9;
  
  bVar15 = (byte)param_1;
  uVar8 = *(uint *)(param_2 + 0x8d40015);
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar6 = *in_RAX;
  bVar13 = (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar13;
  uVar17 = (ulonglong)in_RAX & 0xffffffff;
  iVar7 = ((uint)param_2 ^ uVar8) + 0x15923300 + (uint)CARRY1(bVar6,bVar13);
  uVar3 = (undefined2)((uint)iVar7 >> 0x10);
  bVar6 = (byte)iVar7;
  cVar16 = (char)uVar17;
  cVar14 = (char)((uint)iVar7 >> 8) + cVar16;
  uVar8 = CONCAT22(uVar3,CONCAT11(cVar14,bVar6));
  puVar11 = (uint *)(ulonglong)uVar8;
  *unaff_RBX = *unaff_RBX | bVar15;
  *puVar11 = *puVar11 & uVar8;
  *(byte *)puVar11 = (char)*puVar11 + bVar6;
  cVar19 = (char)(uVar17 >> 8);
  cVar14 = cVar14 + cVar19;
  pbVar9 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar14,bVar6));
  *pbVar9 = *pbVar9 | bVar6;
  cVar14 = cVar14 * '\x02';
  uVar8 = CONCAT22(uVar3,CONCAT11(cVar14,bVar6));
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
  cVar14 = cVar14 + cVar16;
  bVar6 = bVar6 | *(byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar14,bVar6));
  uVar8 = CONCAT22(uVar3,CONCAT11(cVar14 + bVar6,bVar6));
  uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
  pbVar9 = (byte *)(ulonglong)uVar8;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar19
  ;
  bVar13 = (byte)(uVar8 >> 8);
  param_1[uVar17] = param_1[uVar17] + bVar13;
  pbVar9[uVar17] = pbVar9[uVar17] + cVar16;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar19;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar13;
  pcVar18 = (char *)(ulonglong)uVar8;
  iVar7 = (int)in_RAX + 0x15923300 + (uint)CARRY1(bVar6,bVar13);
  uVar3 = (undefined2)((uint)iVar7 >> 0x10);
  cVar14 = (char)((uint)iVar7 >> 8) + (char)uVar8;
  *unaff_RBX = *unaff_RBX | bVar15;
  *(uint *)(pcVar18 + (longlong)param_1) = *(uint *)(pcVar18 + (longlong)param_1) & uVar8;
  pcVar12 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar12 = *pcVar12 + (char)uVar8;
  uVar8 = CONCAT22(uVar3,CONCAT11(cVar14 * '\x02',
                                  (byte)iVar7 |
                                  *(byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar14,(byte)iVar7))))
  ;
  piVar10 = (int *)((ulonglong)(uVar8 | *(uint *)(ulonglong)uVar8) | 0x74);
  iVar7 = (int)piVar10 + *piVar10;
  *(byte *)((longlong)pcVar18 * 2) = *(byte *)((longlong)pcVar18 * 2) | (byte)((uint)iVar7 >> 8);
  uVar4 = (uint3)((uint)iVar7 >> 8);
  uVar5 = CONCAT31(uVar4,(byte)iVar7 + 0x54);
  puVar11 = (uint *)(ulonglong)uVar5;
  uVar2 = (uint)(0xab < (byte)iVar7);
  uVar8 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar5 + uVar2;
  uVar8 = (int)CONCAT71((uint7)uVar4,0x93) + 0x1593d900 +
          (uint)(CARRY4(uVar8,uVar5) || CARRY4(uVar1 + uVar5,uVar2));
  pcVar12 = (char *)(ulonglong)uVar8;
  pcVar12[9] = pcVar12[9] + (char)(uVar8 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar12 = *pcVar12 + (char)uVar8;
  pbVar9 = (byte *)(pcVar12 + -0x26ffea6d);
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar13;
  uVar8 = (int)unaff_RBX + 0x4b096000 + (uint)CARRY1(bVar6,bVar13);
  *param_1 = *param_1 + (char)(uVar8 >> 8);
  *pcVar18 = *pcVar18 + bVar15;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

