// Function: FUN_1404a982c
// Addr: 1404a982c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a98a7) overlaps instruction at (ram,0x0001404a98a6)
    */

void FUN_1404a982c(char *param_1,undefined8 param_2)

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
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  char cVar16;
  byte bVar17;
  byte bVar18;
  undefined6 uVar19;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar20;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  bool bVar21;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  char *pcVar7;
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2;
  *(longlong *)((ulonglong)(in_EAX + 0xa0000634) * 2) = (longlong)in_ST0;
  *(longlong *)((ulonglong)(in_EAX + 0xa0000634) * 2) = (longlong)in_ST1;
  *param_1 = *param_1;
  uVar5 = unaff_EDI + 0x74050003;
  pbVar11 = (byte *)(ulonglong)uVar5;
  *pbVar11 = *pbVar11 | (byte)uVar5;
  *(longlong *)((longlong)pbVar11 * 2) = (longlong)in_ST2;
  *param_1 = *param_1;
  cRam0000000054000cdd = cRam0000000054000cdd + -0x23;
  *(char *)(unaff_RSI + -0x40fff321) = *(char *)(unaff_RSI + -0x40fff321) + '\f';
  lRam00000000a80019ba = (longlong)in_ST3;
  pcVar7 = (char *)(ulonglong)uVar5;
  bVar20 = (byte)&stack0xfffffffffffffff8;
  *param_1 = *param_1 + bVar20;
  *pcVar7 = *pcVar7 + (byte)uVar5;
  pcVar7[-0x59fff323] = pcVar7[-0x59fff323] + (char)(uVar5 >> 8);
  *(longlong *)((longlong)pcVar7 * 2) = (longlong)in_ST4;
  *param_1 = *param_1 + bVar20;
  bVar18 = bVar17 | 0xc;
  uVar5 = (int)CONCAT71(0x54000c,(byte)lRam00000000a80019ba | 0xdd) + 0x30000be4;
  pcVar7 = (char *)(ulonglong)uVar5;
  pbVar11 = (byte *)(param_1 + -1);
  if (pbVar11 == (byte *)0x0 || uVar5 == 0) {
    pcVar7[0x6214000c] = pcVar7[0x6214000c] + (char)uVar5;
    bVar1 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar20;
    uVar5 = uVar5 + *(int *)((longlong)pcVar7 * 2) + (uint)CARRY1(bVar1,bVar20) + 0x84000864;
    pcVar7 = (char *)(ulonglong)uVar5;
    bVar21 = uVar5 == 0;
  }
  else {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar16;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cRam00000000c44aa0f9 = cRam00000000c44aa0f9 + (char)uVar5;
    bVar21 = cRam00000000c44aa0f9 == '\0';
  }
  pcVar12 = param_1 + -2;
  cVar3 = (char)pcVar7;
  cVar10 = (char)((ulonglong)pcVar7 >> 8);
  if (pcVar12 == (char *)0x0 || bVar21) {
    cVar16 = cVar16 + (char)((ulonglong)pcVar12 >> 8);
    pcVar12 = param_1 + -3;
    if (pcVar12 == (char *)0x0 || cVar16 == '\0') {
      pcVar7[0x21004a97] = pcVar7[0x21004a97] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar16 = cVar16 + (char)((ulonglong)pcVar12 >> 8);
    cVar15 = cVar16;
  }
  else {
    cRam000000012a4aa36d = cRam000000012a4aa36d + cVar3;
    cVar15 = cRam000000012a4aa36d;
  }
  pcVar12 = pcVar12 + -1;
  if (pcVar12 == (char *)0x0 || cVar15 == '\0') {
    cVar15 = (char)((ulonglong)pcVar12 >> 8) + unaff_BH;
    pcVar12 = (char *)(CONCAT62((int6)((ulonglong)pcVar12 >> 0x10),CONCAT11(cVar15,(char)pcVar12)) +
                      -1);
    if (pcVar12 == (char *)0x0 || cVar15 == '\0') {
      pcVar7[0x21004a97] = pcVar7[0x21004a97] + unaff_BH;
      *pcVar7 = *pcVar7 + cVar3;
      goto code_r0x0001404a98b7;
    }
  }
  else {
code_r0x0001404a98b7:
    cVar16 = cVar16 + (char)((ulonglong)pcVar12 >> 8);
    pcVar12 = pcVar12 + -1;
    if (pcVar12 != (char *)0x0 && cVar16 != '\0') goto code_r0x0001404a98c7;
  }
  cVar15 = (char)((ulonglong)pcVar12 >> 8) + unaff_BH;
  lVar13 = CONCAT62((int6)((ulonglong)pcVar12 >> 0x10),CONCAT11(cVar15,(char)pcVar12));
  if (lVar13 + -1 == 0 || cVar15 == '\0') {
    pcVar7[0x21004a97] = pcVar7[0x21004a97] + unaff_BH;
    *pcVar7 = *pcVar7 + cVar3;
code_r0x0001404a98c7:
    pcVar7[-0x1f15fff4] = pcVar7[-0x1f15fff4] + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar16 = cVar16 + (char)((ulonglong)(lVar13 + -1) >> 8);
  pcVar12 = (char *)(lVar13 + -2);
  if (pcVar12 == (char *)0x0 || cVar16 == '\0') {
    pcVar7[0x21004a97] = pcVar7[0x21004a97] + cVar10;
    *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + cVar3;
    puVar6 = (uint *)CONCAT62((int6)((ulonglong)pcVar7 >> 0x10),
                              CONCAT11((cVar10 + bVar18) * '\x02',cVar3));
    uVar5 = (uint)puVar6 | *puVar6;
    pcVar7 = (char *)(ulonglong)
                     CONCAT31((int3)(uVar5 >> 8),((byte)uVar5 ^ (byte)(uVar5 >> 8)) + 0x62);
code_r0x0001404a98ea:
    *pcVar12 = *pcVar12 + bVar20;
    *pcVar7 = *pcVar7 + (char)pcVar7;
  }
  else {
    *pcVar7 = *pcVar7 + cVar3;
    cVar3 = in(0xb);
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar3);
    *pcVar7 = *pcVar7 + bVar18;
    pcVar12 = (char *)(lVar13 + -3);
    if (pcVar12 == (char *)0x0 || *pcVar7 == '\0') {
      pcVar7[0x6214000c] = pcVar7[0x6214000c] + cVar3;
      goto code_r0x0001404a98ea;
    }
  }
  *pcVar7 = *pcVar7 + bVar18;
  pcVar14 = pcVar12 + -1;
  if (pcVar14 == (char *)0x0 || *pcVar7 == '\0') {
    pcVar7[0x6214000c] = pcVar7[0x6214000c] + (char)pcVar7;
    *pcVar14 = *pcVar14 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001704a9f59 = cRam00000001704a9f59 + (char)pcVar7;
  if (pcVar12 + -2 != (char *)0x0) {
    *pcVar7 = *pcVar7 + bVar18;
  }
  *(char *)(unaff_RBP + -0x1e) = *(char *)(unaff_RBP + -0x1e) + (char)(pcVar12 + -2);
  uVar2 = (undefined7)((ulonglong)pcVar7 >> 8);
  piVar9 = (int *)CONCAT71(uVar2,cRam3000000021004a1d);
  pcVar12 = pcVar12 + -3;
  if (pcVar12 == (char *)0x0) {
    *(undefined1 *)(unaff_RBP + -0x1e) = *(undefined1 *)(unaff_RBP + -0x1e);
    uVar8 = CONCAT71(uVar2,uRam0500020521004a1d) ^ 8;
    pcVar7 = (char *)(uVar8 - 0x1d);
    *pcVar7 = *pcVar7 + bVar18;
    cVar3 = (char)uVar8;
    piVar9 = (int *)CONCAT71(uVar2,cVar3);
    if (cVar3 < '\0') goto code_r0x0001404a9951;
code_r0x0001404a9932:
    *pcVar12 = *pcVar12 + bVar20;
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
  }
  else {
    cRam00000001b04aa15d = cRam00000001b04aa15d + cRam3000000021004a1d;
    if (pcVar12 != (char *)0x0) {
      *(char *)(CONCAT62(uVar19,CONCAT11(bVar17,cVar16)) | 0xc00) =
           *(char *)(CONCAT62(uVar19,CONCAT11(bVar17,cVar16)) | 0xc00) + unaff_BH;
      uVar4 = in(0xc);
      piVar9 = (int *)CONCAT71(uVar2,uVar4);
      *(char *)((longlong)piVar9 + 0x1f) = *(char *)((longlong)piVar9 + 0x1f) + unaff_BH;
      goto code_r0x0001404a9932;
    }
  }
  *(char *)((longlong)piVar9 + -0x1d) = *(char *)((longlong)piVar9 + -0x1d) + bVar18;
  if ((char)piVar9 < '\0') {
    *(int *)((longlong)piVar9 * 2) = *(int *)((longlong)piVar9 * 2) + (int)&stack0xfffffffffffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar12 = *pcVar12 + (char)piVar9;
  *(char *)(CONCAT62(uVar19,CONCAT11(bVar17,cVar16)) | 0xc00) =
       *(char *)(CONCAT62(uVar19,CONCAT11(bVar17,cVar16)) | 0xc00) + cVar16;
  piVar9 = (int *)((ulonglong)piVar9 & 0xffffffffffffff00);
  cVar3 = bVar18 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar19,CONCAT11(cVar3,cVar16)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar3,cVar16)) + cVar16;
code_r0x0001404a9951:
  *piVar9 = *piVar9 + (int)&stack0xfffffffffffffff8;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)pcVar12;
  *pcVar12 = *pcVar12 + (char)piVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

