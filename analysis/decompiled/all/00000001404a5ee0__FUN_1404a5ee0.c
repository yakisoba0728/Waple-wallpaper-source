// Function: FUN_1404a5ee0
// Addr: 1404a5ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5ee0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar3;
  undefined2 uVar4;
  undefined3 uVar5;
  char cVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined8 in_RAX;
  byte *pbVar15;
  undefined1 uVar16;
  char cVar17;
  char cVar18;
  undefined6 uVar19;
  byte bVar20;
  byte bVar21;
  undefined7 uVar22;
  char unaff_BH;
  uint uVar2;
  char *pcVar13;
  int *piVar14;
  
  uVar22 = (undefined7)((ulonglong)param_2 >> 8);
  uVar19 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar18 = (char)((ulonglong)param_1 >> 8);
  uVar16 = SUB81(param_1,0);
  bVar8 = (char)in_RAX + 8;
  pcVar13 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar8);
  bVar20 = (char)param_2 + unaff_BH;
  *pcVar13 = *pcVar13;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *pcVar13 = *pcVar13 + bVar8;
  pcVar13[-0x5fff740] = pcVar13[-0x5fff740] + bVar8;
  *pcVar13 = *pcVar13;
  bVar9 = *param_1;
  *param_1 = *param_1 + bVar8;
  uVar11 = (int)pcVar13 + (uint)CARRY1(bVar9,bVar8) + 0xf924f708;
  piVar14 = (int *)(ulonglong)uVar11;
  bVar21 = bVar20 + *(byte *)((longlong)piVar14 + 0x21);
  puVar7 = (uint *)((longlong)piVar14 * 2);
  uVar3 = (uint)CARRY1(bVar20,*(byte *)((longlong)piVar14 + 0x21));
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = (uVar2 - uVar11) - uVar3;
  cVar6 = -(uVar1 < uVar11 || uVar2 - uVar11 < uVar3);
  iVar12 = uVar11 - *piVar14;
  uVar4 = (undefined2)((uint)iVar12 >> 0x10);
  bVar9 = (byte)iVar12;
  bVar8 = (byte)((uint)iVar12 >> 8) | bVar21;
  uVar5 = (undefined3)(CONCAT22(uVar4,CONCAT11(bVar8,bVar9)) >> 8);
  pbVar15 = (byte *)(ulonglong)CONCAT31(uVar5,bVar9);
  cVar17 = cVar18 + '\b';
  pcVar13 = (char *)(CONCAT71(uVar22,bVar21) + -0x39);
  *pcVar13 = *pcVar13 + unaff_BH;
  *pbVar15 = *pbVar15 | bVar9;
  cVar10 = bVar9 + 0xa2;
  *(char *)CONCAT62(uVar19,CONCAT11(cVar17,uVar16)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar17,uVar16)) + cVar6;
  pcVar13 = (char *)((ulonglong)CONCAT31(uVar5,cVar10) * 2);
  *pcVar13 = *pcVar13 + cVar10;
  uVar1 = CONCAT22(uVar4,CONCAT11(bVar8 * '\x02',cVar10));
  iVar12 = uVar1 - *(int *)(ulonglong)uVar1;
  bVar9 = (byte)iVar12;
  uVar5 = (undefined3)
          (CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11((char)((uint)iVar12 >> 8) + bVar21,bVar9)
                   ) >> 8);
  pbVar15 = (byte *)(ulonglong)CONCAT31(uVar5,bVar9);
  cVar18 = cVar18 + '\x10';
  pcVar13 = (char *)(CONCAT71(uVar22,bVar21) + -0x39);
  *pcVar13 = *pcVar13 + unaff_BH;
  *pbVar15 = *pbVar15 | bVar9;
  cVar10 = bVar9 + 0xa2;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar5,cVar10);
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar16)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar16)) + cVar6;
  *pcVar13 = *pcVar13 + cVar10;
  pcVar13[0x7a0008c5] = pcVar13[0x7a0008c5] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

