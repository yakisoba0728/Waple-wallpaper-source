// Function: FUN_1404b9a70
// Addr: 1404b9a70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9a70(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar17;
  longlong in_RAX;
  longlong lVar10;
  char cVar18;
  undefined6 uVar19;
  byte *pbVar12;
  int *piVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte bVar20;
  undefined4 uVar22;
  byte bVar23;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  bool bVar24;
  uint *puVar11;
  byte bVar16;
  uint uVar21;
  
  uVar22 = (undefined4)((ulonglong)param_1 >> 0x20);
  bVar16 = (byte)((ulonglong)in_RAX >> 8);
  bVar20 = bVar16 - *(byte *)(in_RAX + param_1);
  lVar10 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar20 - in_CF,(char)in_RAX));
  *(uint *)(unaff_RDI + lVar10) =
       *(int *)(unaff_RDI + lVar10) + (uint)param_2 +
       (uint)(bVar16 < *(byte *)(in_RAX + param_1) || bVar20 < in_CF);
  iVar9 = (int)lVar10;
  uVar6 = iVar9 + 0x80000634;
  puVar11 = (uint *)(ulonglong)uVar6;
  if (iVar9 < 0x7ffff9cc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar16 = (byte)param_2;
  *(char *)(param_1 + -0x4bffe084) = *(char *)(param_1 + -0x4bffe084) + bVar16;
  bVar20 = (byte)param_1 | *param_2;
  uVar21 = CONCAT31((int3)((ulonglong)param_1 >> 8),bVar20);
  *puVar11 = *puVar11 & uVar6;
  cVar18 = (char)uVar6;
  *(char *)puVar11 = (char)*puVar11 + cVar18;
  bVar23 = (byte)((ulonglong)param_2 >> 8);
  if (-0x70 < unaff_RDI[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                )]) {
    param_2 = param_2 + CONCAT44(uVar22,uVar21) + 0x7a21004a;
    bVar20 = *param_2;
    *param_2 = *param_2 + bVar23;
    *(char *)puVar11 = (char)*puVar11 + cVar18 + CARRY1(bVar20,bVar23);
    if ((POPCOUNT((char)*puVar11) & 1U) != 0) {
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar11 = *puVar11 + uVar6 +
             (uint)((byte)unaff_RDI[CONCAT44(unaff_0000001c,
                                             CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))]
                   < 0x91);
  *(byte *)((longlong)puVar11 + (longlong)param_2) =
       *(byte *)((longlong)puVar11 + (longlong)param_2) | bVar16;
  cVar3 = cVar18 + '4';
  puVar11 = (uint *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar3);
  uVar7 = LocalDescriptorTableRegister();
  *puVar11 = uVar7;
  if (cVar18 < -0x34) {
    cVar18 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar16;
    if (SCARRY1(cVar18,bVar16) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (undefined2)(uVar6 >> 0x10);
    cVar17 = (char)(uVar6 >> 8) + bVar16;
    uVar6 = CONCAT22(uVar1,CONCAT11(cVar17,cVar3));
    puVar11 = (uint *)(ulonglong)uVar6;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar11 = *puVar11 & uVar6;
    cVar3 = cVar3 + (char)*puVar11;
    cVar17 = cVar17 * '\x02';
    uVar6 = CONCAT22(uVar1,CONCAT11(cVar17,cVar3));
    puVar11 = (uint *)(ulonglong)uVar6;
    *puVar11 = *puVar11 | uVar6;
    pcVar14 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
    *pcVar14 = *pcVar14 + unaff_BH;
    cVar18 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar16;
    if (SCARRY1(cVar18,bVar16) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') goto code_r0x0001404b9af6;
    uVar6 = CONCAT22(uVar1,CONCAT11(cVar17 + bVar16,cVar3));
    puVar11 = (uint *)(ulonglong)uVar6;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar11 = *puVar11 & uVar6;
  }
  bVar4 = (byte)puVar11;
  *(byte *)puVar11 = (char)*puVar11 + bVar4;
  pcVar14 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
  *pcVar14 = *pcVar14 + unaff_BH;
  bVar5 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  cVar18 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       bVar16;
  if (SCARRY1(cVar18,bVar16) ==
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < '\0')
  {
    *puVar11 = *puVar11 + (int)puVar11 + (uint)CARRY1(bVar5,bVar16);
  }
  else {
    uVar19 = (undefined6)((ulonglong)puVar11 >> 0x10);
    cVar18 = (char)((ulonglong)puVar11 >> 8) + bVar16;
    puVar11 = (uint *)CONCAT62(uVar19,CONCAT11(cVar18,bVar4));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar11 = *puVar11 & (uint)puVar11;
    *(byte *)puVar11 = (char)*puVar11 + bVar4;
    cVar18 = cVar18 + bVar23;
    pbVar12 = (byte *)CONCAT62(uVar19,CONCAT11(cVar18,bVar4));
    *pbVar12 = *pbVar12 | bVar4;
    puVar11 = (uint *)CONCAT62(uVar19,CONCAT11(cVar18 * '\x02',bVar4));
  }
code_r0x0001404b9af6:
  *puVar11 = *puVar11 | (uint)puVar11;
  uVar19 = (undefined6)((ulonglong)puVar11 >> 0x10);
  cVar18 = (char)((ulonglong)puVar11 >> 8) + bVar16;
  bVar5 = (byte)puVar11 | *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,(byte)puVar11));
  puVar11 = (uint *)CONCAT62(uVar19,CONCAT11(cVar18 + bVar5,bVar5));
  uVar7 = (uint)puVar11 | *puVar11;
  puVar11 = (uint *)(ulonglong)uVar7;
  pcVar14 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT44(uVar22,uVar21));
  *pcVar14 = *pcVar14 + bVar23;
  cVar18 = (char)(uVar7 >> 8);
  param_2[CONCAT44(uVar22,uVar21)] = param_2[CONCAT44(uVar22,uVar21)] + cVar18;
  *(byte *)((longlong)puVar11 + (longlong)param_2) =
       *(byte *)((longlong)puVar11 + (longlong)param_2) + bVar16;
  unaff_RDI[CONCAT44(uVar22,uVar21)] = unaff_RDI[CONCAT44(uVar22,uVar21)] + bVar23;
  bVar5 = (byte)uVar7;
  bVar24 = CARRY1((byte)*puVar11,bVar5);
  uVar6 = *puVar11;
  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
  if (SCARRY1((byte)uVar6,bVar5) != (char)(byte)*puVar11 < '\0') {
    cVar3 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar16;
    if (SCARRY1(cVar3,bVar16) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (undefined2)(uVar7 >> 0x10);
    cVar18 = cVar18 + bVar16;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *(uint *)(param_2 + CONCAT44(uVar22,uVar21)) =
         *(uint *)(param_2 + CONCAT44(uVar22,uVar21)) & (uint)param_2;
    pcVar14 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 8);
    *pcVar14 = *pcVar14 + bVar16;
    uVar6 = CONCAT22(uVar1,CONCAT11(cVar18 * '\x02',
                                    bVar5 | *(byte *)(ulonglong)
                                                     CONCAT22(uVar1,CONCAT11(cVar18,bVar5))));
    piVar13 = (int *)((ulonglong)(uVar6 | *(uint *)(ulonglong)uVar6) | 0x74);
    iVar9 = (int)piVar13 + *piVar13;
    *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar9 >> 8);
    bVar24 = 0xab < (byte)iVar9;
    puVar11 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),(byte)iVar9 + 0x54);
  }
  uVar7 = *puVar11;
  uVar8 = (uint)puVar11;
  uVar6 = *puVar11;
  *puVar11 = uVar6 + uVar8 + (uint)bVar24;
  if (*puVar11 != 0 &&
      (SCARRY4(uVar7,uVar8) != SCARRY4(uVar6 + uVar8,(uint)bVar24)) == (int)*puVar11 < 0) {
    pcVar14 = (char *)(CONCAT44(uVar22,uVar21) + 0x60001f7e);
    *pcVar14 = *pcVar14 + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar21;
    *puVar11 = *puVar11 & uVar8;
    uVar6 = *puVar11;
    bVar5 = (byte)puVar11;
    uVar7 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
    if ((byte)*puVar11 == 0 || SCARRY1((byte)uVar7,bVar5) != (char)(byte)*puVar11 < '\0') {
      *puVar11 = *puVar11 + uVar8 + (uint)CARRY1((byte)uVar6,bVar5);
    }
    else {
      pcVar14 = (char *)(CONCAT44(uVar22,uVar21) + 0x60001f7e);
      *pcVar14 = *pcVar14 + unaff_BH;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           uVar21;
      *puVar11 = *puVar11 & uVar8;
      puVar11 = (uint *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),
                                 CONCAT11((char)((ulonglong)puVar11 >> 8) + bVar23,
                                          bVar5 | (byte)*puVar11));
    }
  }
  puVar11 = (uint *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),
                             CONCAT11((char)((ulonglong)puVar11 >> 8) * '\x02',
                                      (byte)puVar11 | (byte)*puVar11));
  uVar6 = (uint)puVar11 | *puVar11;
  param_2[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))] =
       param_2[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))] +
       bVar23;
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + (char)(uVar6 >> 8);
  param_2 = param_2 + CONCAT44(uVar22,uVar21);
  bVar5 = *param_2;
  *param_2 = *param_2 + bVar16;
  if (*param_2 == 0 || SCARRY1(bVar5,bVar16) != (char)*param_2 < '\0') {
    iVar9 = uVar6 + 0xdc40500;
    uVar2 = (undefined3)((uint)iVar9 >> 8);
    cVar3 = (char)iVar9 + bVar16;
    pcVar14 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
    *unaff_RDI = *unaff_RDI + bVar20;
    LOCK();
    cVar18 = *unaff_RDI;
    *unaff_RDI = unaff_BL;
    UNLOCK();
    cVar17 = (char)((uint)iVar9 >> 8);
    pcVar14[0xd] = pcVar14[0xd] + cVar17;
    *param_4 = *param_4 + (char)unaff_ESP;
    *pcVar14 = *pcVar14 + cVar3;
    uVar15 = (ulonglong)CONCAT31(uVar2,cVar3 + bVar16);
    *unaff_RDI = *unaff_RDI + bVar20;
    LOCK();
    *unaff_RDI = cVar18;
    UNLOCK();
    pcVar14 = (char *)(uVar15 + 0xd);
    *pcVar14 = *pcVar14 + cVar17;
    *param_4 = *param_4 + (char)unaff_ESP;
    pcVar14 = (char *)(uVar15 * 2);
    *pcVar14 = *pcVar14 + bVar20;
    uVar6 = CONCAT22((short)((uint)iVar9 >> 0x10),
                     CONCAT11((cVar17 + bVar23) * '\x02',cVar3 + bVar16)) + 0x6d40000;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar14 = (char *)(CONCAT44(uVar22,uVar21) + 0x60001f7e);
  *pcVar14 = *pcVar14 + unaff_BH;
  *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
       uVar21;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

