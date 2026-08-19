// Function: FUN_1404ae220
// Addr: 1404ae220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae32b) overlaps instruction at (ram,0x0001404ae328)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ae35a) */

void FUN_1404ae220(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 in_RAX;
  undefined7 uVar24;
  byte *pbVar19;
  int *piVar20;
  uint *puVar21;
  longlong lVar22;
  uint *puVar23;
  byte bVar25;
  undefined1 *in_RCX;
  byte *pbVar26;
  byte *pbVar27;
  char cVar28;
  byte bVar29;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar30;
  undefined4 *unaff_RSI;
  undefined4 *puVar31;
  undefined1 *unaff_RDI;
  undefined1 *puVar32;
  char in_CF;
  bool bVar33;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  char *pcVar18;
  
  bVar29 = (byte)((ulonglong)param_2 >> 8);
  cVar28 = (char)param_2;
  uVar24 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = (char)in_RAX + -0x2c + in_CF;
  pcVar18 = (char *)CONCAT71(uVar24,cVar5);
  bVar7 = (byte)in_RCX;
  *pcVar18 = *pcVar18 + bVar7;
  if (*pcVar18 == '\0') {
    *(undefined8 *)pcVar18 = param_1;
    *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar18 = *pcVar18 + cVar28;
  out(0x12,(int)pcVar18);
  uVar4 = SUB82(param_2,0);
  pbVar19 = param_2 + -0x18;
  bVar9 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  pbVar19 = (byte *)(CONCAT71(uVar24,cVar5 + *pcVar18 + CARRY1(bVar9,bVar7)) ^ 0xe1);
  *in_RCX = *in_RCX;
  bVar6 = (byte)pbVar19;
  *param_2 = *param_2 | bVar6;
  bVar9 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar7;
  puVar30 = auStack_8;
  cVar5 = bVar6 + *pbVar19 + CARRY1(bVar9,bVar7);
  bVar7 = cVar5 + *(char *)CONCAT71(uVar24,cVar5) +
          (CARRY1(bVar6,*pbVar19) || CARRY1(bVar6 + *pbVar19,CARRY1(bVar9,bVar7)));
  pbVar19 = (byte *)CONCAT71(uVar24,bVar7);
  pbVar26 = in_RCX + -1;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  cVar5 = (char)auStack_8;
  if (pbVar26 == (byte *)0x0 || bVar7 != 0) {
    *pbVar26 = *pbVar26 + bVar9;
    *pbVar19 = *pbVar19 + bVar7;
    pbVar27 = param_2 + -0x18;
    bVar6 = *pbVar27;
    bVar25 = (byte)pbVar26;
    *pbVar27 = *pbVar27 + bVar25;
    cVar8 = bVar7 + *pbVar19 + CARRY1(bVar6,bVar25);
    cVar8 = cVar8 + *(char *)CONCAT71(uVar24,cVar8) +
            (CARRY1(bVar7,*pbVar19) || CARRY1(bVar7 + *pbVar19,CARRY1(bVar6,bVar25)));
    iVar10 = (int)CONCAT71(uVar24,cVar8);
    pbVar26 = in_RCX + -2;
    if (pbVar26 == (byte *)0x0 || cVar8 != '\0') {
      *pbVar26 = *pbVar26 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar19 = *pbVar19 + bVar7;
    bVar7 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar9;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar7,bVar9);
    bVar7 = *pbVar26;
    *pbVar26 = *pbVar26 + unaff_BH;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar7,unaff_BH);
    iVar10 = in(uVar4);
    *param_4 = *param_4 + cVar5;
  }
  uVar11 = iVar10 + 0x34050002;
  pbVar19 = (byte *)(ulonglong)uVar11;
  *pbVar19 = *pbVar19 | (byte)uVar11;
  pbVar27 = pbVar26 + -1;
  bVar7 = (byte)((ulonglong)pbVar27 >> 8);
  if (pbVar27 == (byte *)0x0 || *pbVar19 == 0) {
    bVar9 = (byte)(uVar11 + *(int *)pbVar19);
    uVar13 = CONCAT31((int3)(uVar11 + *(int *)pbVar19 >> 8),bVar9 - 0x11);
    uVar11 = (uint)(bVar9 < 0x11);
    uVar15 = uVar13 + *(uint *)(ulonglong)uVar13;
    uVar12 = uVar15 + uVar11;
    puVar21 = (uint *)(ulonglong)uVar12;
    if (-1 < (int)uVar12) goto code_r0x0001404ae2b2;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2 +
         (uint)(CARRY4(uVar13,*(uint *)(ulonglong)uVar13) || CARRY4(uVar15,uVar11));
    *(char *)((longlong)puVar21 + 0x1f) = *(char *)((longlong)puVar21 + 0x1f) + unaff_BH;
  }
  else {
    puVar21 = (uint *)(ulonglong)
                      CONCAT31((int3)(uVar11 + *(int *)pbVar19 >> 8),
                               (char)(uVar11 + *(int *)pbVar19) + -0x11);
code_r0x0001404ae2b2:
    *pbVar27 = *pbVar27 + cVar5;
    bVar9 = (byte)puVar21;
    *(byte *)puVar21 = (char)*puVar21 + bVar9;
    bVar6 = (byte)((ulonglong)puVar21 >> 8);
    piVar20 = (int *)CONCAT71((int7)((ulonglong)puVar21 >> 8),bVar9 + bVar6);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar9,bVar6);
    pbVar19 = pbVar27 + (longlong)param_2;
    bVar9 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar7;
    uVar11 = (int)piVar20 + *piVar20 + (uint)CARRY1(bVar9,bVar7);
    if ((int)uVar11 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar27 = *pbVar27 + cVar5;
    bVar9 = (byte)uVar11;
    *param_2 = *param_2 + bVar9;
    *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + bVar9;
    bVar6 = (byte)(uVar11 >> 8);
    uVar15 = CONCAT31((int3)(uVar11 >> 8),(bVar9 ^ 8) + bVar6);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar9 ^ 8,bVar6);
    pbVar19 = pbVar27 + (longlong)param_2;
    bVar9 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar7;
    uVar11 = uVar15 + *(uint *)(ulonglong)uVar15;
    uVar13 = uVar11 + CARRY1(bVar9,bVar7);
    puVar21 = (uint *)(ulonglong)uVar13;
    if ((int)uVar13 < 0) {
      puVar30 = auStack_10;
      uVar11 = (uint)(CARRY4(uVar15,*(uint *)(ulonglong)uVar15) ||
                     CARRY4(uVar11,(uint)CARRY1(bVar9,bVar7)));
      uVar12 = uVar13 + *puVar21 + uVar11;
      puVar31 = unaff_RSI + -1;
      out(*unaff_RSI,uVar4);
      uVar11 = (uint)(CARRY4(uVar13,*puVar21) || CARRY4(uVar13 + *puVar21,uVar11));
      uVar15 = uVar12 + *(uint *)(ulonglong)uVar12;
      bVar33 = CARRY4(uVar12,*(uint *)(ulonglong)uVar12) || CARRY4(uVar15,uVar11);
      puVar23 = (uint *)(ulonglong)(uVar15 + uVar11);
      puVar32 = unaff_RDI + -1;
      uVar1 = in(uVar4);
      *unaff_RDI = uVar1;
      goto code_r0x0001404ae301;
    }
  }
  *pbVar27 = *pbVar27 + (char)puVar21;
  lVar22 = CONCAT71((int7)((ulonglong)puVar21 >> 8),(char)puVar21 + -10);
  pbVar27[lVar22] = pbVar27[lVar22] + bVar7;
  bVar33 = false;
  puVar23 = (uint *)(ulonglong)((uint)lVar22 & 0x1ef02000);
  pbVar27 = pbVar26 + -2;
  puVar31 = unaff_RSI;
  puVar32 = unaff_RDI;
  if (pbVar27 == (byte *)0x0 || ((ulonglong)puVar21 & 0x1ef02000) == 0) {
    bVar7 = *param_2;
    *param_2 = *param_2 >> 1;
    *(byte *)puVar23 = (byte)(CONCAT11((bVar7 & 1) != 0,(byte)*puVar23) >> 7) | (byte)*puVar23 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404ae301:
  uVar24 = (undefined7)((ulonglong)pbVar27 >> 8);
  cVar5 = ((char)pbVar27 - *param_2) - bVar33;
  pbVar19 = (byte *)CONCAT71(uVar24,cVar5);
  uVar13 = (uint)puVar23;
  *puVar23 = *puVar23 & uVar13;
  uVar11 = *puVar23;
  bVar7 = (byte)puVar23;
  uVar15 = *puVar23;
  *(byte *)puVar23 = (byte)*puVar23 + bVar7;
  cVar8 = (char)((ulonglong)pbVar27 >> 8);
  if (SCARRY1((byte)uVar15,bVar7)) {
    cRam00000001b04aef95 = cRam00000001b04aef95 + bVar7;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - cVar28;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar5;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (int)param_2;
    *(byte *)((longlong)puVar23 + 2) = *(byte *)((longlong)puVar23 + 2) + cVar8;
    bVar33 = CARRY1(*pbVar19,(byte)puVar30);
    *pbVar19 = *pbVar19 + (byte)puVar30;
  }
  else {
    uVar11 = (uint)CARRY1((byte)uVar11,bVar7);
    uVar14 = uVar13 + *puVar23 + uVar11;
    out(*puVar31,uVar4);
    uVar13 = (uint)(CARRY4(uVar13,*puVar23) || CARRY4(uVar13 + *puVar23,uVar11));
    uVar11 = *(uint *)(ulonglong)uVar14;
    uVar2 = uVar14 + *(uint *)(ulonglong)uVar14;
    uVar15 = uVar2 + uVar13;
    puVar21 = (uint *)(ulonglong)uVar15;
    uVar1 = in(uVar4);
    *puVar32 = uVar1;
    bVar9 = *param_2;
    *puVar21 = *puVar21 & uVar15;
    uVar15 = CONCAT31((int3)(uVar15 >> 8),(char)uVar15 + (char)*puVar21);
    puVar21 = (uint *)(ulonglong)uVar15;
    *(char *)((longlong)puVar21 + 5) = *(char *)((longlong)puVar21 + 5) + cVar8;
    pbVar19 = (byte *)((longlong)puVar21 + 0x21);
    bVar7 = *pbVar19;
    *pbVar19 = *pbVar19 + bVar29;
    uVar16 = uVar15 + *puVar21 + (uint)CARRY1(bVar7,bVar29);
    out(puVar31[-1],uVar4);
    uVar12 = (uint)(CARRY4(uVar15,*puVar21) || CARRY4(uVar15 + *puVar21,(uint)CARRY1(bVar7,bVar29)))
    ;
    uVar15 = *(uint *)(ulonglong)uVar16;
    uVar3 = uVar16 + *(uint *)(ulonglong)uVar16;
    uVar17 = uVar3 + uVar12;
    uVar1 = in(uVar4);
    puVar32[-1] = uVar1;
    pbVar19 = (byte *)CONCAT71(uVar24,(((cVar5 - bVar9) -
                                       (CARRY4(uVar14,uVar11) || CARRY4(uVar2,uVar13))) - *param_2)
                                      - (CARRY4(uVar16,uVar15) || CARRY4(uVar3,uVar12)));
    uRam00000001a44fe330 = uRam00000001a44fe330 & uVar17;
    bVar33 = false;
    puVar23 = (uint *)(ulonglong)uVar17;
  }
  uVar11 = (int)puVar23 + *puVar23 + (uint)bVar33;
  iVar10 = *(int *)(ulonglong)uVar11;
  *(undefined8 *)(puVar30 + -8) = 0x21004a02;
  uVar11 = uVar11 + iVar10 + 0xc4050002;
  uVar15 = uVar11 | 0x13290b00;
  pcVar18 = (char *)(ulonglong)uVar15;
  cRam00000001984af676 = cRam00000001984af676 + cVar28;
  if (pbVar19 != (byte *)0x1) {
    *pcVar18 = *pcVar18 + (char)uVar11;
    pcVar18[0x28] = pcVar18[0x28] + bVar29;
    *(undefined8 *)(puVar30 + -0x10) = 0x1004a02;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)(uVar15 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

