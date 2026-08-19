// Function: FUN_1404c8434
// Addr: 1404c8434
// Size: 1 bytes


void FUN_1404c8434(uint *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar10;
  longlong in_RAX;
  ulonglong uVar7;
  undefined7 uVar11;
  char *pcVar8;
  uint *puVar9;
  char cVar12;
  char cVar13;
  char unaff_BL;
  char unaff_BH;
  char cVar14;
  undefined6 unaff_0000001a;
  uint uVar15;
  char *pcVar16;
  char unaff_R12B;
  float10 in_ST0;
  uint uStackX_8;
  byte bStackX_10;
  undefined7 uStackX_11;
  
  cVar13 = (char)((ulonglong)param_1 >> 8);
  cVar12 = (char)param_1;
  *(char *)(in_RAX + -0x7d) = *(char *)(in_RAX + -0x7d) + (char)in_RAX;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  uVar6 = (int)in_RAX + 0xf4050002;
  uVar15 = *param_1;
  uVar5 = *param_1;
  pcVar1 = (char *)((ulonglong)uVar6 - 0x7d);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  uVar7 = (ulonglong)uVar6 & 0xffffffffffffff04;
  bVar10 = (byte)(uVar7 >> 8);
  bVar4 = bStackX_10 + bVar10;
  uVar11 = (undefined7)(uVar7 >> 8);
  pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + unaff_BL,unaff_BL)) + param_2);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
  cVar14 = unaff_BH + unaff_BL + unaff_BL;
  uVar15 = uStackX_8 | uVar15 | uVar5 | *param_1;
  *(char *)(ulonglong)uVar15 = *(char *)(ulonglong)uVar15 + cVar12;
  pcVar8 = (char *)(CONCAT71(uVar11,(char)uVar7 + CARRY1(bStackX_10,bVar10)) | 0x31);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar14,unaff_BL)) + 0x4c + (longlong)pcVar8 * 4
                   );
  *pcVar1 = *pcVar1 + cVar13;
  *(byte *)param_1 = (char)*param_1 + bVar10;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  cVar14 = cVar14 + unaff_BL;
  pcVar16 = (char *)(ulonglong)(uVar15 | *param_1);
  *pcVar16 = *pcVar16 + cVar12;
  puVar9 = (uint *)(CONCAT71(uVar11,(char)pcVar8) | 0x31);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar14,unaff_BL)) + 0x4c + (longlong)puVar9 * 4
                   );
  *pcVar1 = *pcVar1 + cVar13;
  *(byte *)param_1 = (char)*param_1 + bVar10;
  *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
  pcVar16[0xb] = pcVar16[0xb] + unaff_BL;
  *puVar9 = *puVar9 ^ (uint)puVar9;
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(cVar14,unaff_BL)) = (short)in_ST0;
  *puVar9 = *puVar9 ^ (uint)puVar9;
  puVar9 = (uint *)CONCAT71(uStackX_11,bVar4);
  puVar3 = (undefined4 *)((longlong)puVar9 * 2 + 0x21);
  *puVar3 = *puVar3;
  uVar15 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar14,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar14,unaff_BL)) + cVar12 +
       CARRY1((byte)uVar15,bVar4);
  *puVar9 = *puVar9 ^ (uint)puVar9;
  *(byte *)((longlong)puVar9 + -0x7d) = *(byte *)((longlong)puVar9 + -0x7d) + bVar4;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *(byte *)puVar9 = (byte)*puVar9 + cVar12;
  *(byte *)puVar9 = (byte)*puVar9 + bVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

