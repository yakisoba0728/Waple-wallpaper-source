// Function: FUN_1404b9aa4
// Addr: 1404b9aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9aa4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar16;
  undefined8 in_RAX;
  undefined6 uVar18;
  undefined7 uVar17;
  int *piVar11;
  byte *pbVar13;
  ulonglong uVar15;
  byte bVar19;
  uint uVar20;
  byte bVar21;
  char cVar22;
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
  char in_CF;
  bool bVar23;
  uint *puVar12;
  char *pcVar14;
  
  uVar20 = (uint)param_1;
  uVar18 = (undefined6)((ulonglong)in_RAX >> 0x10);
  puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(-in_CF,(char)in_RAX));
  *puVar12 = *puVar12 | (uint)puVar12;
  bVar21 = (char)in_RAX - 0x2c;
  uVar17 = (undefined7)((ulonglong)puVar12 >> 8);
  bVar19 = *(byte *)CONCAT71(uVar17,bVar21);
  pcVar14 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_1);
  cVar22 = (char)((ulonglong)param_2 >> 8);
  *pcVar14 = *pcVar14 + cVar22;
  piVar11 = (int *)(CONCAT71(uVar17,bVar21 | bVar19) | 100);
  *piVar11 = *piVar11 + (int)piVar11;
  bVar21 = (byte)param_2;
  *(byte *)((longlong)piVar11 + param_2) = *(byte *)((longlong)piVar11 + param_2) | bVar21;
  cVar3 = (char)piVar11 + '4';
  puVar12 = (uint *)CONCAT71(uVar17,cVar3);
  uVar9 = LocalDescriptorTableRegister();
  *puVar12 = uVar9;
  bVar19 = (byte)param_1;
  if ((char)piVar11 < -0x34) {
    cVar6 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar6,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar16 = -in_CF + bVar21;
    puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar16,cVar3));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar19;
    *puVar12 = *puVar12 & (uint)puVar12;
    cVar3 = cVar3 + (char)*puVar12;
    cVar16 = cVar16 * '\x02';
    puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar16,cVar3));
    *puVar12 = *puVar12 | (uint)puVar12;
    pcVar14 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
    *pcVar14 = *pcVar14 + unaff_BH;
    cVar6 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar6,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') goto code_r0x0001404b9af6;
    puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar16 + bVar21,cVar3));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar19;
    *puVar12 = *puVar12 & (uint)puVar12;
  }
  bVar4 = (byte)puVar12;
  *(byte *)puVar12 = (char)*puVar12 + bVar4;
  pcVar14 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1f);
  *pcVar14 = *pcVar14 + unaff_BH;
  bVar5 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  cVar3 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       bVar21;
  if (SCARRY1(cVar3,bVar21) ==
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < '\0')
  {
    *puVar12 = *puVar12 + (int)puVar12 + (uint)CARRY1(bVar5,bVar21);
  }
  else {
    uVar18 = (undefined6)((ulonglong)puVar12 >> 0x10);
    cVar3 = (char)((ulonglong)puVar12 >> 8) + bVar21;
    puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar3,bVar4));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar19;
    *puVar12 = *puVar12 & (uint)puVar12;
    *(byte *)puVar12 = (char)*puVar12 + bVar4;
    cVar3 = cVar3 + cVar22;
    pbVar13 = (byte *)CONCAT62(uVar18,CONCAT11(cVar3,bVar4));
    *pbVar13 = *pbVar13 | bVar4;
    puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar3 * '\x02',bVar4));
  }
code_r0x0001404b9af6:
  *puVar12 = *puVar12 | (uint)puVar12;
  uVar18 = (undefined6)((ulonglong)puVar12 >> 0x10);
  cVar3 = (char)((ulonglong)puVar12 >> 8) + bVar21;
  bVar5 = (byte)puVar12 | *(byte *)CONCAT62(uVar18,CONCAT11(cVar3,(byte)puVar12));
  puVar12 = (uint *)CONCAT62(uVar18,CONCAT11(cVar3 + bVar5,bVar5));
  uVar7 = (uint)puVar12 | *puVar12;
  puVar12 = (uint *)(ulonglong)uVar7;
  pcVar14 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_1);
  *pcVar14 = *pcVar14 + cVar22;
  cVar3 = (char)(uVar7 >> 8);
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar3;
  *(byte *)((longlong)puVar12 + param_2) = *(byte *)((longlong)puVar12 + param_2) + bVar21;
  unaff_RDI[param_1] = unaff_RDI[param_1] + cVar22;
  bVar5 = (byte)uVar7;
  bVar23 = CARRY1((byte)*puVar12,bVar5);
  uVar9 = *puVar12;
  *(byte *)puVar12 = (byte)*puVar12 + bVar5;
  if (SCARRY1((byte)uVar9,bVar5) != (char)(byte)*puVar12 < '\0') {
    cVar6 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         bVar21;
    if (SCARRY1(cVar6,bVar21) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (undefined2)(uVar7 >> 0x10);
    cVar3 = cVar3 + bVar21;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         bVar19;
    *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
    pcVar14 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI * 8);
    *pcVar14 = *pcVar14 + bVar21;
    uVar9 = CONCAT22(uVar1,CONCAT11(cVar3 * '\x02',
                                    bVar5 | *(byte *)(ulonglong)
                                                     CONCAT22(uVar1,CONCAT11(cVar3,bVar5))));
    piVar11 = (int *)((ulonglong)(uVar9 | *(uint *)(ulonglong)uVar9) | 0x74);
    iVar10 = (int)piVar11 + *piVar11;
    *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((uint)iVar10 >> 8);
    bVar23 = 0xab < (byte)iVar10;
    puVar12 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),(byte)iVar10 + 0x54);
  }
  uVar9 = *puVar12;
  uVar8 = (uint)puVar12;
  uVar7 = *puVar12;
  *puVar12 = uVar7 + uVar8 + (uint)bVar23;
  if (*puVar12 != 0 &&
      (SCARRY4(uVar9,uVar8) != SCARRY4(uVar7 + uVar8,(uint)bVar23)) == (int)*puVar12 < 0) {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar20;
    *puVar12 = *puVar12 & uVar8;
    uVar9 = *puVar12;
    bVar5 = (byte)puVar12;
    uVar7 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    if ((byte)*puVar12 == 0 || SCARRY1((byte)uVar7,bVar5) != (char)(byte)*puVar12 < '\0') {
      *puVar12 = *puVar12 + uVar8 + (uint)CARRY1((byte)uVar9,bVar5);
    }
    else {
      *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           uVar20;
      *puVar12 = *puVar12 & uVar8;
      puVar12 = (uint *)CONCAT62((int6)((ulonglong)puVar12 >> 0x10),
                                 CONCAT11((char)((ulonglong)puVar12 >> 8) + cVar22,
                                          bVar5 | (byte)*puVar12));
    }
  }
  puVar12 = (uint *)CONCAT62((int6)((ulonglong)puVar12 >> 0x10),
                             CONCAT11((char)((ulonglong)puVar12 >> 8) * '\x02',
                                      (byte)puVar12 | (byte)*puVar12));
  uVar9 = (uint)puVar12 | *puVar12;
  pcVar14 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    param_2);
  *pcVar14 = *pcVar14 + cVar22;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar9 >> 8);
  pcVar14 = (char *)(param_1 + param_2);
  cVar3 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar21;
  if (*pcVar14 != '\0' && SCARRY1(cVar3,bVar21) == *pcVar14 < '\0') {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar20;
    *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar10 = uVar9 + 0xdc40500;
  uVar2 = (undefined3)((uint)iVar10 >> 8);
  cVar6 = (char)iVar10 + bVar21;
  pcVar14 = (char *)(ulonglong)CONCAT31(uVar2,cVar6);
  *unaff_RDI = *unaff_RDI + bVar19;
  LOCK();
  cVar3 = *unaff_RDI;
  *unaff_RDI = unaff_BL;
  UNLOCK();
  cVar16 = (char)((uint)iVar10 >> 8);
  pcVar14[0xd] = pcVar14[0xd] + cVar16;
  *param_4 = *param_4 + (char)unaff_ESP;
  *pcVar14 = *pcVar14 + cVar6;
  uVar15 = (ulonglong)CONCAT31(uVar2,cVar6 + bVar21);
  *unaff_RDI = *unaff_RDI + bVar19;
  LOCK();
  *unaff_RDI = cVar3;
  UNLOCK();
  pcVar14 = (char *)(uVar15 + 0xd);
  *pcVar14 = *pcVar14 + cVar16;
  *param_4 = *param_4 + (char)unaff_ESP;
  pcVar14 = (char *)(uVar15 * 2);
  *pcVar14 = *pcVar14 + bVar19;
  uVar9 = CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11((cVar16 + cVar22) * '\x02',cVar6 + bVar21)
                  ) + 0x6d40000;
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

