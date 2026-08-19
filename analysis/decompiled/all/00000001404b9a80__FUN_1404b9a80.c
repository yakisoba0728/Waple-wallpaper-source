// Function: FUN_1404b9a80
// Addr: 1404b9a80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9a80(ulonglong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar17;
  uint in_EAX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined7 uVar18;
  byte *pbVar12;
  undefined6 uVar19;
  int *piVar14;
  ulonglong uVar16;
  byte bVar20;
  byte bVar21;
  byte bVar22;
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
  bool bVar23;
  char in_SF;
  char in_OF;
  uint *puVar13;
  char *pcVar15;
  
  pbVar12 = (byte *)(param_1 & 0xffffffff);
  uVar16 = (ulonglong)in_EAX;
  bVar22 = (byte)((ulonglong)param_2 >> 8);
  bVar20 = (byte)pbVar12;
  if (in_OF == in_SF) {
    pcVar15 = (char *)(param_2 + 0x21004a + uVar16);
    *pcVar15 = *pcVar15 + bVar22;
    *pbVar12 = *pbVar12 + bVar20;
    bVar23 = (byte)unaff_RDI[CONCAT44(unaff_0000001c,
                                      CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))] < 0x91;
    if (-0x70 < unaff_RDI[CONCAT44(unaff_0000001c,
                                   CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))]) {
      pbVar1 = (byte *)(param_2 + 0x7a21004a + uVar16);
      bVar21 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar22;
      *pbVar12 = *pbVar12 + bVar20 + CARRY1(bVar21,bVar22);
      if ((POPCOUNT(*pbVar12) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar12 = *pbVar12 | bVar20;
    puVar13 = (uint *)CONCAT62((int6)((ulonglong)pbVar12 >> 0x10),(ushort)bVar20);
    *puVar13 = *puVar13 | (uint)puVar13;
    uVar18 = (undefined7)((ulonglong)puVar13 >> 8);
    bVar21 = *(byte *)CONCAT71(uVar18,bVar20 - 0x2c);
    pcVar15 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + uVar16);
    *pcVar15 = *pcVar15 + bVar22;
    bVar23 = false;
    pbVar12 = (byte *)(CONCAT71(uVar18,bVar20 - 0x2c | bVar21) | 100);
  }
  *(uint *)pbVar12 = *(int *)pbVar12 + (int)pbVar12 + (uint)bVar23;
  bVar21 = (byte)param_2;
  pbVar12[param_2] = pbVar12[param_2] | bVar21;
  cVar4 = (char)pbVar12 + '4';
  puVar13 = (uint *)CONCAT71((int7)((ulonglong)pbVar12 >> 8),cVar4);
  uVar10 = LocalDescriptorTableRegister();
  *puVar13 = uVar10;
  bVar20 = (byte)in_EAX;
  if ((char)pbVar12 < -0x34) {
    cVar7 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar7,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar19 = (undefined6)((ulonglong)pbVar12 >> 0x10);
    cVar17 = (char)((ulonglong)pbVar12 >> 8) + bVar21;
    puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar17,cVar4));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar13 = *puVar13 & (uint)puVar13;
    cVar4 = cVar4 + (char)*puVar13;
    cVar17 = cVar17 * '\x02';
    puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar17,cVar4));
    *puVar13 = *puVar13 | (uint)puVar13;
    pcVar15 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
    *pcVar15 = *pcVar15 + unaff_BH;
    cVar7 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar7,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') goto code_r0x0001404b9af6;
    puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar17 + bVar21,cVar4));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar13 = *puVar13 & (uint)puVar13;
  }
  bVar5 = (byte)puVar13;
  *(byte *)puVar13 = (char)*puVar13 + bVar5;
  pcVar15 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
  *pcVar15 = *pcVar15 + unaff_BH;
  bVar6 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  cVar4 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       bVar21;
  if (SCARRY1(cVar4,bVar21) ==
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < '\0')
  {
    *puVar13 = *puVar13 + (int)puVar13 + (uint)CARRY1(bVar6,bVar21);
  }
  else {
    uVar19 = (undefined6)((ulonglong)puVar13 >> 0x10);
    cVar4 = (char)((ulonglong)puVar13 >> 8) + bVar21;
    puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar4,bVar5));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *puVar13 = *puVar13 & (uint)puVar13;
    *(byte *)puVar13 = (char)*puVar13 + bVar5;
    cVar4 = cVar4 + bVar22;
    pbVar12 = (byte *)CONCAT62(uVar19,CONCAT11(cVar4,bVar5));
    *pbVar12 = *pbVar12 | bVar5;
    puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar4 * '\x02',bVar5));
  }
code_r0x0001404b9af6:
  *puVar13 = *puVar13 | (uint)puVar13;
  uVar19 = (undefined6)((ulonglong)puVar13 >> 0x10);
  cVar4 = (char)((ulonglong)puVar13 >> 8) + bVar21;
  bVar6 = (byte)puVar13 | *(byte *)CONCAT62(uVar19,CONCAT11(cVar4,(byte)puVar13));
  puVar13 = (uint *)CONCAT62(uVar19,CONCAT11(cVar4 + bVar6,bVar6));
  uVar8 = (uint)puVar13 | *puVar13;
  puVar13 = (uint *)(ulonglong)uVar8;
  pcVar15 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + uVar16);
  *pcVar15 = *pcVar15 + bVar22;
  cVar4 = (char)(uVar8 >> 8);
  *(char *)(uVar16 + param_2) = *(char *)(uVar16 + param_2) + cVar4;
  *(byte *)((longlong)puVar13 + param_2) = *(byte *)((longlong)puVar13 + param_2) + bVar21;
  unaff_RDI[uVar16] = unaff_RDI[uVar16] + bVar22;
  bVar6 = (byte)uVar8;
  bVar23 = CARRY1((byte)*puVar13,bVar6);
  uVar10 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar6;
  if (SCARRY1((byte)uVar10,bVar6) != (char)(byte)*puVar13 < '\0') {
    cVar7 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar7,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = (undefined2)(uVar8 >> 0x10);
    cVar4 = cVar4 + bVar21;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar20;
    *(uint *)(param_2 + uVar16) = *(uint *)(param_2 + uVar16) & (uint)param_2;
    pcVar15 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 8);
    *pcVar15 = *pcVar15 + bVar21;
    uVar10 = CONCAT22(uVar2,CONCAT11(cVar4 * '\x02',
                                     bVar6 | *(byte *)(ulonglong)
                                                      CONCAT22(uVar2,CONCAT11(cVar4,bVar6))));
    piVar14 = (int *)((ulonglong)(uVar10 | *(uint *)(ulonglong)uVar10) | 0x74);
    iVar11 = (int)piVar14 + *piVar14;
    *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((uint)iVar11 >> 8);
    bVar23 = 0xab < (byte)iVar11;
    puVar13 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar11 >> 8),(byte)iVar11 + 0x54);
  }
  uVar10 = *puVar13;
  uVar9 = (uint)puVar13;
  uVar8 = *puVar13;
  *puVar13 = uVar8 + uVar9 + (uint)bVar23;
  if (*puVar13 != 0 &&
      (SCARRY4(uVar10,uVar9) != SCARRY4(uVar8 + uVar9,(uint)bVar23)) == (int)*puVar13 < 0) {
    *(char *)(uVar16 + 0x60001f7e) = *(char *)(uVar16 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         in_EAX;
    *puVar13 = *puVar13 & uVar9;
    uVar10 = *puVar13;
    bVar6 = (byte)puVar13;
    uVar8 = *puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar6;
    if ((byte)*puVar13 == 0 || SCARRY1((byte)uVar8,bVar6) != (char)(byte)*puVar13 < '\0') {
      *puVar13 = *puVar13 + uVar9 + (uint)CARRY1((byte)uVar10,bVar6);
    }
    else {
      *(char *)(uVar16 + 0x60001f7e) = *(char *)(uVar16 + 0x60001f7e) + unaff_BH;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           in_EAX;
      *puVar13 = *puVar13 & uVar9;
      puVar13 = (uint *)CONCAT62((int6)((ulonglong)puVar13 >> 0x10),
                                 CONCAT11((char)((ulonglong)puVar13 >> 8) + bVar22,
                                          bVar6 | (byte)*puVar13));
    }
  }
  puVar13 = (uint *)CONCAT62((int6)((ulonglong)puVar13 >> 0x10),
                             CONCAT11((char)((ulonglong)puVar13 >> 8) * '\x02',
                                      (byte)puVar13 | (byte)*puVar13));
  uVar10 = (uint)puVar13 | *puVar13;
  pcVar15 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    param_2);
  *pcVar15 = *pcVar15 + bVar22;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar10 >> 8);
  pcVar15 = (char *)(uVar16 + param_2);
  cVar4 = *pcVar15;
  *pcVar15 = *pcVar15 + bVar21;
  if (*pcVar15 != '\0' && SCARRY1(cVar4,bVar21) == *pcVar15 < '\0') {
    *(char *)(uVar16 + 0x60001f7e) = *(char *)(uVar16 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         in_EAX;
    *(uint *)(ulonglong)uVar10 = *(uint *)(ulonglong)uVar10 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar11 = uVar10 + 0xdc40500;
  uVar3 = (undefined3)((uint)iVar11 >> 8);
  cVar7 = (char)iVar11 + bVar21;
  pcVar15 = (char *)(ulonglong)CONCAT31(uVar3,cVar7);
  *unaff_RDI = *unaff_RDI + bVar20;
  LOCK();
  cVar4 = *unaff_RDI;
  *unaff_RDI = unaff_BL;
  UNLOCK();
  cVar17 = (char)((uint)iVar11 >> 8);
  pcVar15[0xd] = pcVar15[0xd] + cVar17;
  *param_4 = *param_4 + (char)unaff_ESP;
  *pcVar15 = *pcVar15 + cVar7;
  uVar16 = (ulonglong)CONCAT31(uVar3,cVar7 + bVar21);
  *unaff_RDI = *unaff_RDI + bVar20;
  LOCK();
  *unaff_RDI = cVar4;
  UNLOCK();
  pcVar15 = (char *)(uVar16 + 0xd);
  *pcVar15 = *pcVar15 + cVar17;
  *param_4 = *param_4 + (char)unaff_ESP;
  pcVar15 = (char *)(uVar16 * 2);
  *pcVar15 = *pcVar15 + bVar20;
  uVar10 = CONCAT22((short)((uint)iVar11 >> 0x10),
                    CONCAT11((cVar17 + bVar22) * '\x02',cVar7 + bVar21)) + 0x6d40000;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

