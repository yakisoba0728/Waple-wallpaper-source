// Function: FUN_1404a5ed0
// Addr: 1404a5ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5ed0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  uint *puVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  char cVar16;
  longlong in_RAX;
  undefined4 *puVar12;
  char *pcVar13;
  byte bVar17;
  byte *pbVar15;
  undefined1 uVar18;
  char cVar19;
  char cVar20;
  undefined6 uVar21;
  byte bVar22;
  undefined7 uVar23;
  char unaff_BH;
  uint uVar2;
  int *piVar14;
  
  uVar23 = (undefined7)((ulonglong)param_2 >> 8);
  uVar21 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar20 = (char)((ulonglong)param_1 >> 8);
  uVar18 = SUB81(param_1,0);
  cVar16 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar16;
  cVar9 = (char)in_RAX;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + cVar9;
  cVar16 = cVar16 * '\x02';
  puVar12 = (undefined4 *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar16,cVar9));
  uVar3 = LocalDescriptorTableRegister();
  *puVar12 = uVar3;
  pcVar13 = (char *)(CONCAT71((int7)((ulonglong)puVar12 >> 8),cVar9) ^ 0xe);
  bVar17 = (byte)pcVar13;
  pcVar13[-0x5fff740] = pcVar13[-0x5fff740] + bVar17;
  *pcVar13 = *pcVar13;
  *param_1 = *param_1 + cVar16;
  *pcVar13 = *pcVar13 + bVar17;
  pcVar13[-0x5fff740] = pcVar13[-0x5fff740] + bVar17;
  *pcVar13 = *pcVar13;
  bVar8 = *param_1;
  *param_1 = *param_1 + bVar17;
  uVar10 = (int)pcVar13 + (uint)CARRY1(bVar8,bVar17) + 0xf924f708;
  piVar14 = (int *)(ulonglong)uVar10;
  bVar22 = (byte)param_2 + *(byte *)((longlong)piVar14 + 0x21);
  puVar7 = (uint *)((longlong)piVar14 * 2);
  uVar4 = (uint)CARRY1((byte)param_2,*(byte *)((longlong)piVar14 + 0x21));
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = (uVar2 - uVar10) - uVar4;
  cVar16 = -(uVar1 < uVar10 || uVar2 - uVar10 < uVar4);
  iVar11 = uVar10 - *piVar14;
  uVar5 = (undefined2)((uint)iVar11 >> 0x10);
  bVar8 = (byte)iVar11;
  bVar17 = (byte)((uint)iVar11 >> 8) | bVar22;
  uVar6 = (undefined3)(CONCAT22(uVar5,CONCAT11(bVar17,bVar8)) >> 8);
  pbVar15 = (byte *)(ulonglong)CONCAT31(uVar6,bVar8);
  cVar19 = cVar20 + '\b';
  pcVar13 = (char *)(CONCAT71(uVar23,bVar22) + -0x39);
  *pcVar13 = *pcVar13 + unaff_BH;
  *pbVar15 = *pbVar15 | bVar8;
  cVar9 = bVar8 + 0xa2;
  *(char *)CONCAT62(uVar21,CONCAT11(cVar19,uVar18)) =
       *(char *)CONCAT62(uVar21,CONCAT11(cVar19,uVar18)) + cVar16;
  pcVar13 = (char *)((ulonglong)CONCAT31(uVar6,cVar9) * 2);
  *pcVar13 = *pcVar13 + cVar9;
  uVar1 = CONCAT22(uVar5,CONCAT11(bVar17 * '\x02',cVar9));
  iVar11 = uVar1 - *(int *)(ulonglong)uVar1;
  bVar8 = (byte)iVar11;
  uVar6 = (undefined3)
          (CONCAT22((short)((uint)iVar11 >> 0x10),CONCAT11((char)((uint)iVar11 >> 8) + bVar22,bVar8)
                   ) >> 8);
  pbVar15 = (byte *)(ulonglong)CONCAT31(uVar6,bVar8);
  cVar20 = cVar20 + '\x10';
  pcVar13 = (char *)(CONCAT71(uVar23,bVar22) + -0x39);
  *pcVar13 = *pcVar13 + unaff_BH;
  *pbVar15 = *pbVar15 | bVar8;
  cVar9 = bVar8 + 0xa2;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar6,cVar9);
  *(char *)CONCAT62(uVar21,CONCAT11(cVar20,uVar18)) =
       *(char *)CONCAT62(uVar21,CONCAT11(cVar20,uVar18)) + cVar16;
  *pcVar13 = *pcVar13 + cVar9;
  pcVar13[0x7a0008c5] = pcVar13[0x7a0008c5] + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

