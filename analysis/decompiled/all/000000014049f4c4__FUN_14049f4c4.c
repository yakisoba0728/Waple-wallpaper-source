// Function: FUN_14049f4c4
// Addr: 14049f4c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f500) overlaps instruction at (ram,0x00014049f4ff)
    */

void FUN_14049f4c4(undefined8 param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_RAX;
  undefined6 uVar11;
  longlong lVar10;
  char cVar12;
  char cVar13;
  undefined4 uVar15;
  char cVar16;
  byte bVar17;
  undefined6 uVar18;
  char unaff_BL;
  char cVar19;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar8;
  char *pcVar9;
  uint uVar14;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2;
  uVar15 = (undefined4)((ulonglong)param_1 >> 0x20);
  bVar4 = (byte)param_1;
  *(int *)(unaff_RDI + 1) = *(int *)(unaff_RDI + 1) >> (bVar4 & 0x1f);
  *param_4 = *param_4 + unaff_SPL;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + unaff_BL) | 0x640d0004;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  iVar7 = uVar6 + 0xd3000f54;
  cVar12 = bVar4 + unaff_BH;
  if (cVar12 != '\0' && SCARRY1(bVar4,unaff_BH) == cVar12 < '\0') {
    uVar3 = in(0xf3);
    iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),uVar3);
    *param_4 = *param_4 + unaff_SPL;
  }
  uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),
                   CONCAT11((char)((uint)iVar7 >> 8) * '\x02',(char)iVar7));
  pcVar9 = (char *)(ulonglong)uVar6;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar9 = *pcVar9 + (char)iVar7;
  cVar19 = unaff_BL + cVar16;
  cVar13 = cVar12 + unaff_BH;
  uVar14 = CONCAT31((int3)((ulonglong)param_1 >> 8),cVar13);
  if (cVar13 != '\0' && SCARRY1(cVar12,unaff_BH) == cVar13 < '\0') {
    uVar3 = in(0xf3);
    pcVar9 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar3);
    *param_4 = *param_4 + unaff_SPL;
  }
  uVar11 = (undefined6)((ulonglong)pcVar9 >> 0x10);
  cVar2 = (char)pcVar9;
  cVar1 = (char)((ulonglong)pcVar9 >> 8) * '\x02';
  pcVar8 = (char *)CONCAT62(uVar11,CONCAT11(cVar1,cVar2));
  *param_4 = *param_4 + unaff_SPL;
  *pcVar8 = *pcVar8 + cVar2;
  pcVar9 = pcVar8 + -0x2cfffe81;
  cVar12 = *pcVar9;
  *pcVar9 = *pcVar9 + bVar17;
  if (*pcVar9 != '\0' && SCARRY1(cVar12,bVar17) == *pcVar9 < '\0') {
    *param_4 = *param_4 + cVar2;
  }
  bVar4 = cVar2 + cVar19;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),bVar4);
  *param_4 = *param_4 + bVar4;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar19)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar19)) | bVar4;
  *pcVar9 = *pcVar9 + cVar13;
  cVar12 = bVar4 - 0x10;
  pcVar9 = (char *)CONCAT62(uVar11,CONCAT11(cVar1 + cVar12,cVar12));
  *pcVar9 = *pcVar9 + cVar12;
  *param_2 = *param_2 & uVar14;
  lVar10 = CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar12);
  bVar17 = bVar17 | *(byte *)(CONCAT71(unaff_00000021,unaff_SPL) + lVar10);
  uVar6 = (int)lVar10 + 0x834;
  *(int *)CONCAT44(uVar15,uVar14) = *(int *)CONCAT44(uVar15,uVar14) + 0x1812200;
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar9 = *pcVar9 + bVar17;
  *param_4 = *param_4 + unaff_SPL;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11((byte)(uVar6 >> 8) |
                            *(byte *)(CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) +
                                     CONCAT44(uVar15,uVar14)),
                            (byte)uVar6 | *(byte *)((ulonglong)uVar6 * 2))) + 0x22000954;
  pcVar9 = (char *)(ulonglong)uVar6;
  *(int *)CONCAT44(uVar15,uVar14) = *(int *)CONCAT44(uVar15,uVar14) + 0x1813e00;
  bVar5 = (byte)uVar6;
  pcVar9[-0xc] = pcVar9[-0xc] + bVar5;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar9 = *pcVar9 + bVar5;
  *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) + (char)(uVar6 >> 8);
  *(int *)CONCAT44(uVar15,uVar14) = *(int *)CONCAT44(uVar15,uVar14) + 0x1813e00;
  pcVar9[-0xc] = pcVar9[-0xc] + bVar5;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar9 = *pcVar9 + bVar5;
  *pcVar9 = *pcVar9 + bVar5;
  *(int *)CONCAT44(uVar15,uVar14) = *(int *)CONCAT44(uVar15,uVar14) + 0x1812200;
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar9 = *pcVar9 + bVar17;
  bVar4 = *param_4;
  *param_4 = *param_4 + bVar5;
  iRam00000001484b0667 = iRam00000001484b0667 + uVar6 + (uint)CARRY1(bVar4,bVar5);
  *(uint *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) =
       *(int *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) + uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

