// Function: FUN_1404bdce8
// Addr: 1404bdce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bdd14) overlaps instruction at (ram,0x0001404bdd11)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bdda0) */

void FUN_1404bdce8(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  char cVar14;
  undefined8 in_RAX;
  undefined6 uVar18;
  uint *puVar9;
  char *pcVar10;
  longlong lVar11;
  byte bVar16;
  ulonglong uVar12;
  char *pcVar13;
  char cVar19;
  byte bVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  byte bVar23;
  byte bVar24;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  uint *puVar25;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  float10 in_ST0;
  float10 in_ST1;
  undefined8 uStack_8;
  char cVar15;
  undefined7 uVar17;
  
  bVar24 = (byte)((ulonglong)param_2 >> 8);
  bVar23 = (byte)param_2;
  uVar22 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar21 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar20 = (byte)((ulonglong)param_1 >> 8);
  cVar19 = (char)param_1;
  unaff_RDI[0x25] = unaff_RDI[0x25] & bVar20;
  cVar15 = (char)((ulonglong)in_RAX >> 8);
  uVar18 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar6 = (char)in_RAX;
  cVar14 = cVar15 + bVar20;
  pcVar10 = (char *)CONCAT62(uVar18,CONCAT11(cVar14,cVar6));
  uVar2 = (uint3)((ulonglong)pcVar10 >> 8);
  if (!SCARRY1(cVar15,bVar20)) {
    uVar17 = (undefined7)((ulonglong)pcVar10 >> 8);
    puVar9 = (uint *)CONCAT71(uVar17,cVar6 + bVar24);
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         (int)in_ST0;
    *puVar9 = *puVar9 & (uint)puVar9;
    pcVar10 = (char *)(CONCAT71(uVar17,cVar6 + bVar24 + (char)*puVar9) + 0x6f200008);
    *pcVar10 = *pcVar10 + bVar20;
    puVar9 = (uint *)(ulonglong)(CONCAT31(uVar2,bVar24) & 0x2570ecff);
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         (int)in_ST1;
    *puVar9 = *puVar9 & (uint)param_2;
    pcVar10 = (char *)(ulonglong)(CONCAT31(uVar2,bVar24) & 0x2570ecff);
    pcVar10[10] = pcVar10[10] + unaff_BH;
    *pcVar10 = *pcVar10 + cVar19;
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    uStack_8 = 0x75f9000b;
    pcVar10 = (char *)(ulonglong)((uVar2 & 0x257004) << 8);
code_r0x0001404bdd1b:
    *(char *)((longlong)register0x00000020 +
             CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8) =
         *(char *)((longlong)register0x00000020 +
                  CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8)
         + (char)((ulonglong)pcVar10 >> 8);
    *param_4 = *param_4 + (char)register0x00000020;
    *param_2 = *param_2 | (uint)pcVar10;
    *param_1 = *param_1 + cVar19;
    uVar8 = (uint)(short)pcVar10;
    *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar14 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar23;
  if (!CARRY1(bVar7,bVar23) && *unaff_RDI != 0) goto code_r0x0001404bdd1b;
  *param_4 = *param_4;
  *pcVar10 = *pcVar10 + cVar6;
  cVar19 = cVar19 + unaff_BH;
  if (cVar19 == '\0') {
    bVar7 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + bVar23;
    if (!CARRY1(bVar7,bVar23) && *unaff_RDI != 0) {
      (&stack0x00000000)
      [CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8] =
           (&stack0x00000000)
           [CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8];
      *param_4 = *param_4;
      *pcVar10 = *pcVar10 + cVar6;
      *pcVar10 = *pcVar10;
      out(*unaff_RSI,(short)param_2);
      uVar8 = CONCAT31(uVar2,bVar24) & 0x2570ecff;
      *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           (int)in_ST0;
      *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 & uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[0x25] = unaff_RDI[0x25] & bVar20;
    uVar12 = CONCAT62(uVar18,CONCAT11(bVar20,cVar6));
  }
  else {
    pcVar10[0xb] = pcVar10[0xb] + bVar20;
    *pcVar10 = *pcVar10;
    out(*unaff_RSI,(short)param_2);
    uVar12 = (ulonglong)((uint)pcVar10 & 0x2570ec00);
  }
  lVar11 = CONCAT71((int7)(uVar12 >> 8),(char)uVar12 + bVar24);
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       (int)in_ST0;
  *(int *)(&stack0x00000000 + lVar11) =
       *(int *)(&stack0x00000000 + lVar11) + CONCAT22(uVar21,CONCAT11(bVar20,cVar19));
  *(char *)((longlong)param_2 * 9) = *(char *)((longlong)param_2 * 9) + cVar19;
  uVar8 = (int)lVar11 + 0x26003f0;
  puVar9 = (uint *)(ulonglong)uVar8;
  *puVar9 = *puVar9 & CONCAT22(uVar21,CONCAT11(bVar20,cVar19));
  uVar2 = (uint3)(uVar8 >> 8);
  cVar6 = (char)uVar8 + (char)*puVar9;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar24;
  pcVar10 = (char *)((ulonglong)CONCAT31(uVar2,cVar6) + 0x78);
  *pcVar10 = *pcVar10 + cVar6;
  uVar3 = uVar2 & 0x257895;
  pcVar10 = (char *)((ulonglong)uVar3 * 0x100 + 0x21004bdc);
  *pcVar10 = *pcVar10 + bVar24;
  *(undefined1 *)((ulonglong)uVar3 << 9) = 0;
  uVar2 = uVar2 & 0x257895;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   (longlong)param_2);
  *pbVar1 = *pbVar1 | bVar24;
  cVar6 = cRam21004bdcbc002578;
  puVar9 = (uint *)(ulonglong)unaff_EBP;
  puVar25 = (uint *)((ulonglong)uVar2 * 0x100);
  uVar4 = (uint3)(unaff_EBP >> 8);
  if ((char)*pbVar1 < '\0') {
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,cRam21004bdcbc002578);
    *pcVar10 = *pcVar10 + cRam21004bdcbc002578;
    pcVar10[0x78] = pcVar10[0x78] + cVar6;
    uVar8 = (uVar4 & 0x257895) << 8;
    *(char *)((ulonglong)uVar8 + 0x1004bdc) = *(char *)((ulonglong)uVar8 + 0x1004bdc) + bVar24;
code_r0x0001404bdded:
    uVar12 = (ulonglong)
             (uVar8 | *(uint *)CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         cVar19;
    *(int *)(uVar12 * 2) =
         *(int *)(uVar12 * 2) + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  }
  else {
    bVar16 = (byte)(unaff_EBP >> 8);
    *(byte *)(puVar9 + -0x10fff6a2) = (char)puVar9[-0x10fff6a2] + bVar16;
    *puVar9 = *puVar9 & unaff_EBP;
    cVar6 = (char)unaff_EBP + (char)*puVar9;
    bVar7 = cVar6 + CARRY1(bVar16,bVar16);
    uVar8 = CONCAT31((int3)(CONCAT22((short)(unaff_EBP >> 0x10),CONCAT11(bVar16 * '\x02',cVar6)) >>
                           8),bVar7);
    puVar9 = (uint *)(ulonglong)uVar8;
    if ((char)bVar7 < '\0') {
      uVar8 = (uint)CONCAT71((uint7)uVar3,0xdc);
      *param_4 = *param_4 + -0x24;
      goto code_r0x0001404bdded;
    }
    *(char *)(puVar25 + -0x10fff6a2) = (char)puVar25[-0x10fff6a2] + (char)uVar3;
    *puVar25 = *puVar25 & (uint)uVar2 << 8;
    *(char *)puVar25 = (char)*puVar25;
    if ((char)*puVar25 < '\0') goto code_r0x0001404bddf8;
    *(byte *)(puVar9 + -0x10fff6a2) = (byte)puVar9[-0x10fff6a2] + bVar16 * '\x02';
    *puVar9 = *puVar9 & uVar8;
    uVar5 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar7;
    if ((char)(byte)*puVar9 < '\0') {
      cVar6 = unaff_BL + *(byte *)((longlong)puVar9 + -0x77f2fff6) + CARRY1((byte)uVar5,bVar7);
      uVar8 = uVar8 | *puVar9;
      pbVar1 = (byte *)((ulonglong)uVar8 + 0xc);
      *pbVar1 = *pbVar1 | unaff_BH;
      pcVar10 = (char *)((ulonglong)uVar8 + (ulonglong)uVar2 * 0x200);
      *pcVar10 = *pcVar10 + (char)uVar8;
      pcVar13 = (char *)(ulonglong)(uVar8 | 0x257d7000);
      pcVar10 = (char *)((longlong)puVar25 + (longlong)unaff_RDI * 2 + -0x22e3ffdb);
      *pcVar10 = *pcVar10 + cVar19;
      *param_4 = *param_4 + (char)&uStack_8;
      *pcVar13 = *pcVar13 + (char)uVar8;
      pcVar13[0x7d] = pcVar13[0x7d] + bVar24;
      pcVar10 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar6)))
                         * 8 + 0xb01004b);
      *pcVar10 = *pcVar10 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(puVar25 + -0x13fff6a2) = (char)puVar25[-0x13fff6a2] + bVar23;
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         CONCAT22(uVar21,CONCAT11(bVar20,cVar19));
    uVar12 = (ulonglong)
             (uVar8 + *puVar9 | *(uint *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(bVar20,cVar19))));
  }
  cVar6 = (char)uVar12 + '0';
  pcVar10 = (char *)CONCAT71((int7)(uVar12 >> 8),cVar6);
  *pcVar10 = *pcVar10 + cVar6;
code_r0x0001404bddf8:
  *(uint *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(bVar20,cVar19))) =
       *(uint *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(bVar20,cVar19))) & (uint)&uStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

