// Function: FUN_1404a9874
// Addr: 1404a9874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a98a7) overlaps instruction at (ram,0x0001404a98a6)
    */

void FUN_1404a9874(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined7 uVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar10;
  int in_EAX;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar8;
  int *piVar9;
  char cVar15;
  byte *pbVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  char cVar16;
  byte bVar17;
  undefined6 uVar18;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar19;
  int unaff_ESP;
  longlong unaff_RBP;
  bool bVar20;
  char *pcVar7;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar16 = (char)param_2;
  bVar17 = (byte)((ulonglong)param_2 >> 8) | (byte)((uint)in_EAX >> 8);
  uVar5 = in_EAX + 0x30000be4;
  pcVar7 = (char *)(ulonglong)uVar5;
  pbVar11 = (byte *)(param_1 + -1);
  bVar19 = (byte)unaff_ESP;
  if (pbVar11 == (byte *)0x0 || uVar5 == 0) {
    pcVar7[0x6214000c] = pcVar7[0x6214000c] + (char)uVar5;
    bVar1 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar19;
    uVar5 = uVar5 + *(int *)((longlong)pcVar7 * 2) + (uint)CARRY1(bVar1,bVar19) + 0x84000864;
    pcVar7 = (char *)(ulonglong)uVar5;
    bVar20 = uVar5 == 0;
  }
  else {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar16;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cRam00000000c44aa0f9 = cRam00000000c44aa0f9 + (char)uVar5;
    bVar20 = cRam00000000c44aa0f9 == '\0';
  }
  lVar12 = param_1 + -2;
  cVar3 = (char)pcVar7;
  cVar10 = (char)((ulonglong)pcVar7 >> 8);
  if (lVar12 == 0 || bVar20) {
    cVar16 = cVar16 + (char)((ulonglong)lVar12 >> 8);
    lVar12 = param_1 + -3;
    if (lVar12 == 0 || cVar16 == '\0') {
      pcVar7[0x21004a97] = pcVar7[0x21004a97] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar16 = cVar16 + (char)((ulonglong)lVar12 >> 8);
    cVar15 = cVar16;
  }
  else {
    cRam000000012a4aa36d = cRam000000012a4aa36d + cVar3;
    cVar15 = cRam000000012a4aa36d;
  }
  lVar12 = lVar12 + -1;
  if (lVar12 == 0 || cVar15 == '\0') {
    cVar15 = (char)((ulonglong)lVar12 >> 8) + unaff_BH;
    lVar12 = CONCAT62((int6)((ulonglong)lVar12 >> 0x10),CONCAT11(cVar15,(char)lVar12)) + -1;
    if (lVar12 == 0 || cVar15 == '\0') {
      pcVar7[0x21004a97] = pcVar7[0x21004a97] + unaff_BH;
      *pcVar7 = *pcVar7 + cVar3;
      goto code_r0x0001404a98b7;
    }
  }
  else {
code_r0x0001404a98b7:
    cVar16 = cVar16 + (char)((ulonglong)lVar12 >> 8);
    lVar12 = lVar12 + -1;
    if (lVar12 != 0 && cVar16 != '\0') goto code_r0x0001404a98c7;
  }
  cVar15 = (char)((ulonglong)lVar12 >> 8) + unaff_BH;
  lVar12 = CONCAT62((int6)((ulonglong)lVar12 >> 0x10),CONCAT11(cVar15,(char)lVar12));
  if (lVar12 + -1 == 0 || cVar15 == '\0') {
    pcVar7[0x21004a97] = pcVar7[0x21004a97] + unaff_BH;
    *pcVar7 = *pcVar7 + cVar3;
code_r0x0001404a98c7:
    pcVar7[-0x1f15fff4] = pcVar7[-0x1f15fff4] + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar16 = cVar16 + (char)((ulonglong)(lVar12 + -1) >> 8);
  pcVar13 = (char *)(lVar12 + -2);
  if (pcVar13 == (char *)0x0 || cVar16 == '\0') {
    pcVar7[0x21004a97] = pcVar7[0x21004a97] + cVar10;
    *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + cVar3;
    puVar6 = (uint *)CONCAT62((int6)((ulonglong)pcVar7 >> 0x10),
                              CONCAT11((cVar10 + bVar17) * '\x02',cVar3));
    uVar5 = (uint)puVar6 | *puVar6;
    pcVar7 = (char *)(ulonglong)
                     CONCAT31((int3)(uVar5 >> 8),((byte)uVar5 ^ (byte)(uVar5 >> 8)) + 0x62);
code_r0x0001404a98ea:
    *pcVar13 = *pcVar13 + bVar19;
    *pcVar7 = *pcVar7 + (char)pcVar7;
  }
  else {
    *pcVar7 = *pcVar7 + cVar3;
    cVar3 = in(0xb);
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar3);
    *pcVar7 = *pcVar7 + bVar17;
    pcVar13 = (char *)(lVar12 + -3);
    if (pcVar13 == (char *)0x0 || *pcVar7 == '\0') {
      pcVar7[0x6214000c] = pcVar7[0x6214000c] + cVar3;
      goto code_r0x0001404a98ea;
    }
  }
  *pcVar7 = *pcVar7 + bVar17;
  pcVar14 = pcVar13 + -1;
  if (pcVar14 == (char *)0x0 || *pcVar7 == '\0') {
    pcVar7[0x6214000c] = pcVar7[0x6214000c] + (char)pcVar7;
    *pcVar14 = *pcVar14 + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001704a9f59 = cRam00000001704a9f59 + (char)pcVar7;
  if (pcVar13 + -2 != (char *)0x0) {
    *pcVar7 = *pcVar7 + bVar17;
  }
  *(char *)(unaff_RBP + -0x1e) = *(char *)(unaff_RBP + -0x1e) + (char)(pcVar13 + -2);
  uVar2 = (undefined7)((ulonglong)pcVar7 >> 8);
  piVar9 = (int *)CONCAT71(uVar2,cRam3000000021004a1d);
  pcVar13 = pcVar13 + -3;
  if (pcVar13 == (char *)0x0) {
    *(undefined1 *)(unaff_RBP + -0x1e) = *(undefined1 *)(unaff_RBP + -0x1e);
    uVar8 = CONCAT71(uVar2,uRam0500020521004a1d) ^ 8;
    pcVar7 = (char *)(uVar8 - 0x1d);
    *pcVar7 = *pcVar7 + bVar17;
    cVar3 = (char)uVar8;
    piVar9 = (int *)CONCAT71(uVar2,cVar3);
    if (cVar3 < '\0') goto code_r0x0001404a9951;
code_r0x0001404a9932:
    *pcVar13 = *pcVar13 + bVar19;
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
  }
  else {
    cRam00000001b04aa15d = cRam00000001b04aa15d + cRam3000000021004a1d;
    if (pcVar13 != (char *)0x0) {
      *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) =
           *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) + unaff_BH;
      uVar4 = in(0xc);
      piVar9 = (int *)CONCAT71(uVar2,uVar4);
      *(char *)((longlong)piVar9 + 0x1f) = *(char *)((longlong)piVar9 + 0x1f) + unaff_BH;
      goto code_r0x0001404a9932;
    }
  }
  *(char *)((longlong)piVar9 + -0x1d) = *(char *)((longlong)piVar9 + -0x1d) + bVar17;
  if ((char)piVar9 < '\0') {
    *(int *)((longlong)piVar9 * 2) = *(int *)((longlong)piVar9 * 2) + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + (char)piVar9;
  *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar16)) + cVar16;
  piVar9 = (int *)((ulonglong)piVar9 & 0xffffffffffffff00);
  cVar3 = bVar17 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar18,CONCAT11(cVar3,cVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar3,cVar16)) + cVar16;
code_r0x0001404a9951:
  *piVar9 = *piVar9 + unaff_ESP;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)pcVar13;
  *pcVar13 = *pcVar13 + (char)piVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

