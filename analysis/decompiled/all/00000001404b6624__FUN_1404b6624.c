// Function: FUN_1404b6624
// Addr: 1404b6624
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6676) overlaps instruction at (ram,0x0001404b6675)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b6796) */
/* WARNING: Removing unreachable block (ram,0x0001404b67af) */
/* WARNING: Removing unreachable block (ram,0x0001404b67a7) */
/* WARNING: Removing unreachable block (ram,0x0001404b682c) */
/* WARNING: Removing unreachable block (ram,0x0001404b67b2) */
/* WARNING: Removing unreachable block (ram,0x0001404b67c9) */
/* WARNING: Removing unreachable block (ram,0x0001404b67bf) */
/* WARNING: Removing unreachable block (ram,0x0001404b67d3) */
/* WARNING: Removing unreachable block (ram,0x0001404b67ee) */

void FUN_1404b6624(byte *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar14;
  uint *in_RAX;
  char *pcVar9;
  int *piVar10;
  byte bVar15;
  byte *pbVar11;
  uint *puVar13;
  char cVar16;
  char cVar17;
  byte bVar18;
  char cVar19;
  byte unaff_BL;
  byte unaff_BH;
  byte bVar20;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  longlong unaff_GS_OFFSET;
  bool bVar21;
  uint *puVar12;
  
  cVar16 = (char)((ulonglong)param_1 >> 8);
  bVar15 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar18;
  *unaff_RDI = *unaff_RDI + cVar16;
  cVar17 = (char)param_2;
  bVar20 = (byte)unaff_ESP;
  if (*unaff_RDI == 0) {
    *param_2 = *param_2 + cVar17;
    bVar14 = *param_1;
    *param_1 = *param_1 + bVar20;
    bVar2 = bVar4 - *(byte *)((longlong)in_RAX * 2);
    puVar12 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                               CONCAT11(-(bVar4 < *(byte *)((longlong)in_RAX * 2) ||
                                         bVar2 < CARRY1(bVar14,bVar20)),
                                        bVar2 - CARRY1(bVar14,bVar20)));
    uVar6 = (uint)puVar12 | *puVar12;
    bVar21 = 0x5ffff7cb < uVar6;
    uVar6 = uVar6 + 0xa0000834;
    in_RAX = (uint *)(ulonglong)uVar6;
    if (bVar21 || uVar6 == 0) goto code_r0x0001404b665e;
    bVar21 = CARRY1(unaff_BH,bVar15);
    unaff_BH = unaff_BH + bVar15;
    if (bVar21 || unaff_BH == 0) {
      bVar21 = CARRY1(*param_4,bVar20);
      *param_4 = *param_4 + bVar20;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)in_RAX + 0x15) = *(byte *)((longlong)in_RAX + 0x15) + cVar17;
  }
  bVar4 = *param_1;
  *param_1 = *param_1 + bVar20;
  pcVar9 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)unaff_RSI * 8);
  *pcVar9 = *pcVar9 + cVar17;
  uVar7 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\x04' + CARRY1(bVar4,bVar20)
                        );
  uVar6 = uVar7 + 0xcf000a54;
  in_RAX = (uint *)(ulonglong)uVar6;
  if (uVar7 < 0x30fff5ac && uVar6 != 0) {
    pbVar11 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar21 = CARRY1(*pbVar11,unaff_BL);
    *pbVar11 = *pbVar11 + unaff_BL;
code_r0x0001404b665e:
    uVar6 = ((int)in_RAX - *in_RAX) - (uint)bVar21;
    pbVar11 = (byte *)(ulonglong)uVar6;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + bVar20;
    *pbVar11 = *pbVar11 + (byte)uVar6;
    if (CARRY1(unaff_BH,bVar15) || (byte)(unaff_BH + bVar15) == '\0') {
      *pbVar11 = *pbVar11 | (byte)uVar6;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar11 = (byte *)(ulonglong)uVar6;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)uVar6;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar4,(byte)uVar6);
      *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar6 = (uVar6 - *(int *)pbVar11) - (uint)CARRY1(bVar4,unaff_BL);
    pcVar9 = (char *)(ulonglong)uVar6;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + bVar20;
    *pcVar9 = *pcVar9 + bVar15;
    *pcVar9 = *pcVar9 + (char)uVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)in_RAX = (byte)*in_RAX | (byte)uVar6;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11(((char)(uVar6 >> 8) + bVar18) * '\x02',(byte)uVar6));
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  piVar10 = (int *)(ulonglong)uVar6;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar17;
  *(byte *)((longlong)piVar10 + (longlong)param_1) =
       *(byte *)((longlong)piVar10 + (longlong)param_1) + bVar18;
  pbVar11 = (byte *)((longlong)piVar10 + -0x30ffe48a);
  bVar4 = *pbVar11;
  bVar14 = (byte)(uVar6 >> 8);
  *pbVar11 = *pbVar11 + bVar14;
  if (CARRY1(bVar4,bVar14) || *pbVar11 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar10 + 0x15) = *(char *)((longlong)piVar10 + 0x15) + cVar17;
  *param_1 = *param_1 + bVar20;
  *(char *)piVar10 = (char)*piVar10 + (char)uVar6;
  pbVar11 = (byte *)((longlong)piVar10 + -0x30ffe48a);
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar14;
  if (!CARRY1(bVar4,bVar14) && *pbVar11 != 0) {
    *(char *)((longlong)piVar10 + 0x15) = *(char *)((longlong)piVar10 + 0x15) + cVar17;
    bVar4 = *param_1;
    *param_1 = *param_1 + bVar20;
    *(byte *)piVar10 = ((char)*piVar10 - bVar15) - CARRY1(bVar4,bVar20);
    *(byte *)piVar10 = (char)*piVar10 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar6 = (uVar6 - *piVar10) - (uint)CARRY1(bVar4,bVar14);
  piVar10 = (int *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  if (-1 < (char)(bVar4 - *unaff_RDI)) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    *(byte *)piVar10 = (char)*piVar10 + bVar15;
    *(byte *)piVar10 = (char)*piVar10 + bVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar6 = (uVar6 - *piVar10) - (uint)(bVar4 < *unaff_RDI);
  pbVar11 = (byte *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  if (-1 < (char)(bVar4 - unaff_RDI[1])) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar15 = (byte)(uVar6 >> 8);
    *param_1 = *param_1 + bVar15;
    *pbVar11 = *pbVar11 + bVar4;
    pbVar1 = pbVar11 + -0x51ffe488;
    bVar21 = CARRY1(*pbVar1,bVar4);
    *pbVar1 = *pbVar1 + bVar4;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar14 = *param_1;
    *param_1 = *param_1 + bVar15;
    pbVar11 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar4 + 6 + CARRY1(bVar14,bVar15));
    pcVar9 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)unaff_RSI * 2);
    *pcVar9 = *pcVar9 + cVar17;
  }
  *pbVar11 = *pbVar11 | (byte)pbVar11;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar18;
  *(byte *)CONCAT44(unaff_00000024,unaff_ESP) =
       *(char *)CONCAT44(unaff_00000024,unaff_ESP) + (byte)pbVar11;
  pbVar11 = (byte *)(ulonglong)((int)pbVar11 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar21 = CARRY1(*pbVar1,bVar18);
  *pbVar1 = *pbVar1 + bVar18;
code_r0x0001404b670a:
  iVar8 = ((int)pbVar11 - *(int *)pbVar11) - (uint)bVar21;
  cVar5 = (char)iVar8;
  *param_1 = *param_1 + bVar20;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11(0x24,cVar5)) >> 8);
  cVar5 = cVar5 + '\x02';
  uVar6 = CONCAT31(uVar3,cVar5);
  puVar12 = (uint *)(ulonglong)uVar6;
  pcVar9 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)param_2 * 2);
  *pcVar9 = *pcVar9 + cVar5;
  *puVar12 = *puVar12 | uVar6;
  if (*puVar12 == 0) {
    if ((POPCOUNT(uVar6 - *puVar12 & 0xff) & 1U) != 0) {
      *unaff_RSI = *unaff_RSI + bVar18;
      *param_4 = *param_4 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar12 = (char)*puVar12 + cVar5;
  cVar19 = bVar18 + cVar17;
  if (SCARRY1(bVar18,cVar17) != cVar19 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar19) != (char)(unaff_BH + cVar19) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = CONCAT31(uVar3,cVar5 + cVar16);
  puVar13 = (uint *)(ulonglong)uVar6;
  *param_4 = *param_4 + bVar20;
  *(char *)puVar13 = (char)*puVar13 + cVar5 + cVar16;
  puVar12 = puVar13 + -0xa7ff921;
  uVar7 = *puVar12;
  *(char *)puVar12 = (char)*puVar12 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar7,cVar19) == (char)*puVar12 < '\0') {
    *(char *)puVar13 = (char)*puVar13 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9 = (char *)(ulonglong)(uVar6 | *puVar13);
  param_1[CONCAT44(unaff_00000024,unaff_ESP)] = param_1[CONCAT44(unaff_00000024,unaff_ESP)] + cVar17
  ;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar19;
  if (SCARRY1(cVar19,cVar17) == (char)(cVar19 + cVar17) < '\0') {
    *pcVar9 = *pcVar9 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

