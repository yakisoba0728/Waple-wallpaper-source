// Function: FUN_1404ae244
// Addr: 1404ae244
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae32b) overlaps instruction at (ram,0x0001404ae328)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ae35a) */

void FUN_1404ae244(longlong param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *in_RAX;
  undefined7 uVar23;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  uint *puVar20;
  char *pcVar21;
  byte bVar24;
  char cVar27;
  byte *pbVar25;
  byte *pbVar26;
  char cVar28;
  byte bVar29;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  undefined4 *puVar30;
  undefined1 *unaff_RDI;
  undefined1 *puVar31;
  bool bVar32;
  char in_ZF;
  byte bVar33;
  undefined1 auStack_8 [8];
  byte *pbVar16;
  byte bVar22;
  
  bVar29 = (byte)((ulonglong)param_2 >> 8);
  cVar28 = (char)param_2;
  bVar33 = 0;
  pbVar25 = (byte *)(param_1 + -1);
  bVar7 = (byte)in_RAX;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  uVar4 = SUB82(param_2,0);
  if (pbVar25 == (byte *)0x0 || in_ZF == '\0') {
    *pbVar25 = *pbVar25 + bVar6;
    *in_RAX = *in_RAX + bVar7;
    pbVar16 = param_2 + -0x18;
    bVar22 = *pbVar16;
    bVar24 = (byte)pbVar25;
    *pbVar16 = *pbVar16 + bVar24;
    uVar23 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar5 = bVar7 + *in_RAX + CARRY1(bVar22,bVar24);
    bVar33 = 1;
    cVar5 = cVar5 + *(char *)CONCAT71(uVar23,cVar5) +
            (CARRY1(bVar7,*in_RAX) || CARRY1(bVar7 + *in_RAX,CARRY1(bVar22,bVar24)));
    iVar8 = (int)CONCAT71(uVar23,cVar5);
    pbVar25 = (byte *)(param_1 + -2);
    if (pbVar25 == (byte *)0x0 || cVar5 != '\0') {
      *pbVar25 = *pbVar25 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *in_RAX = *in_RAX + bVar7;
    bVar7 = *in_RAX;
    *in_RAX = *in_RAX + bVar6;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar7,bVar6);
    bVar7 = *pbVar25;
    *pbVar25 = *pbVar25 + unaff_BH;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar7,unaff_BH);
    iVar8 = in(uVar4);
    *param_4 = *param_4;
  }
  uVar9 = iVar8 + 0x34050002;
  pbVar16 = (byte *)(ulonglong)uVar9;
  *pbVar16 = *pbVar16 | (byte)uVar9;
  pbVar26 = pbVar25 + -1;
  bVar7 = (byte)((ulonglong)pbVar26 >> 8);
  if (pbVar26 == (byte *)0x0 || *pbVar16 == 0) {
    bVar6 = (byte)(uVar9 + *(int *)pbVar16);
    uVar11 = CONCAT31((int3)(uVar9 + *(int *)pbVar16 >> 8),bVar6 - 0x11);
    uVar9 = (uint)(bVar6 < 0x11);
    uVar13 = uVar11 + *(uint *)(ulonglong)uVar11;
    uVar10 = uVar13 + uVar9;
    puVar18 = (uint *)(ulonglong)uVar10;
    if (-1 < (int)uVar10) goto code_r0x0001404ae2b2;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2 +
         (uint)(CARRY4(uVar11,*(uint *)(ulonglong)uVar11) || CARRY4(uVar13,uVar9));
    *(char *)((longlong)puVar18 + 0x1f) = *(char *)((longlong)puVar18 + 0x1f) + unaff_BH;
  }
  else {
    puVar18 = (uint *)(ulonglong)
                      CONCAT31((int3)(uVar9 + *(int *)pbVar16 >> 8),
                               (char)(uVar9 + *(int *)pbVar16) + -0x11);
code_r0x0001404ae2b2:
    *pbVar26 = *pbVar26;
    bVar6 = (byte)puVar18;
    *(byte *)puVar18 = (char)*puVar18 + bVar6;
    bVar22 = (byte)((ulonglong)puVar18 >> 8);
    piVar17 = (int *)CONCAT71((int7)((ulonglong)puVar18 >> 8),bVar6 + bVar22);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar6,bVar22);
    pbVar16 = pbVar26 + (longlong)param_2;
    bVar6 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    uVar9 = (int)piVar17 + *piVar17 + (uint)CARRY1(bVar6,bVar7);
    if ((int)uVar9 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar26 = *pbVar26;
    bVar6 = (byte)uVar9;
    *param_2 = *param_2 + bVar6;
    *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + bVar6;
    bVar22 = (byte)(uVar9 >> 8);
    uVar13 = CONCAT31((int3)(uVar9 >> 8),(bVar6 ^ 8) + bVar22);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar28 +
         CARRY1(bVar6 ^ 8,bVar22);
    pbVar16 = pbVar26 + (longlong)param_2;
    bVar6 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    uVar9 = uVar13 + *(uint *)(ulonglong)uVar13;
    uVar11 = uVar9 + CARRY1(bVar6,bVar7);
    puVar18 = (uint *)(ulonglong)uVar11;
    if ((int)uVar11 < 0) {
      register0x00000020 = (BADSPACEBASE *)auStack_8;
      uVar9 = (uint)(CARRY4(uVar13,*(uint *)(ulonglong)uVar13) ||
                    CARRY4(uVar9,(uint)CARRY1(bVar6,bVar7)));
      uVar10 = uVar11 + *puVar18 + uVar9;
      puVar30 = unaff_RSI + (ulonglong)bVar33 * -2 + 1;
      out(*unaff_RSI,uVar4);
      uVar9 = (uint)(CARRY4(uVar11,*puVar18) || CARRY4(uVar11 + *puVar18,uVar9));
      uVar13 = uVar10 + *(uint *)(ulonglong)uVar10;
      bVar32 = CARRY4(uVar10,*(uint *)(ulonglong)uVar10) || CARRY4(uVar13,uVar9);
      puVar20 = (uint *)(ulonglong)(uVar13 + uVar9);
      puVar31 = unaff_RDI + (ulonglong)bVar33 * -2 + 1;
      uVar1 = in(uVar4);
      *unaff_RDI = uVar1;
      goto code_r0x0001404ae301;
    }
  }
  *pbVar26 = *pbVar26 + (char)puVar18;
  lVar19 = CONCAT71((int7)((ulonglong)puVar18 >> 8),(char)puVar18 + -10);
  pbVar26[lVar19] = pbVar26[lVar19] + bVar7;
  bVar32 = false;
  puVar20 = (uint *)(ulonglong)((uint)lVar19 & 0x1ef02000);
  pbVar26 = pbVar25 + -2;
  puVar30 = unaff_RSI;
  puVar31 = unaff_RDI;
  if (pbVar26 == (byte *)0x0 || ((ulonglong)puVar18 & 0x1ef02000) == 0) {
    bVar7 = *param_2;
    *param_2 = *param_2 >> 1;
    *(byte *)puVar20 = (byte)(CONCAT11((bVar7 & 1) != 0,(byte)*puVar20) >> 7) | (byte)*puVar20 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404ae301:
  uVar23 = (undefined7)((ulonglong)pbVar26 >> 8);
  cVar5 = ((char)pbVar26 - *param_2) - bVar32;
  pbVar25 = (byte *)CONCAT71(uVar23,cVar5);
  uVar11 = (uint)puVar20;
  *puVar20 = *puVar20 & uVar11;
  uVar9 = *puVar20;
  bVar7 = (byte)puVar20;
  uVar13 = *puVar20;
  *(byte *)puVar20 = (byte)*puVar20 + bVar7;
  cVar27 = (char)((ulonglong)pbVar26 >> 8);
  if (SCARRY1((byte)uVar13,bVar7)) {
    cRam00000001b04aef95 = cRam00000001b04aef95 + bVar7;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - cVar28;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar5;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (int)param_2;
    *(byte *)((longlong)puVar20 + 2) = *(byte *)((longlong)puVar20 + 2) + cVar27;
    bVar32 = CARRY1(*pbVar25,(byte)register0x00000020);
    *pbVar25 = *pbVar25 + (byte)register0x00000020;
  }
  else {
    uVar9 = (uint)CARRY1((byte)uVar9,bVar7);
    uVar12 = uVar11 + *puVar20 + uVar9;
    out(*puVar30,uVar4);
    uVar11 = (uint)(CARRY4(uVar11,*puVar20) || CARRY4(uVar11 + *puVar20,uVar9));
    uVar9 = *(uint *)(ulonglong)uVar12;
    uVar2 = uVar12 + *(uint *)(ulonglong)uVar12;
    uVar13 = uVar2 + uVar11;
    puVar18 = (uint *)(ulonglong)uVar13;
    uVar1 = in(uVar4);
    *puVar31 = uVar1;
    bVar6 = *param_2;
    *puVar18 = *puVar18 & uVar13;
    uVar13 = CONCAT31((int3)(uVar13 >> 8),(char)uVar13 + (char)*puVar18);
    puVar18 = (uint *)(ulonglong)uVar13;
    *(char *)((longlong)puVar18 + 5) = *(char *)((longlong)puVar18 + 5) + cVar27;
    pbVar25 = (byte *)((longlong)puVar18 + 0x21);
    bVar7 = *pbVar25;
    *pbVar25 = *pbVar25 + bVar29;
    uVar14 = uVar13 + *puVar18 + (uint)CARRY1(bVar7,bVar29);
    out(puVar30[(ulonglong)bVar33 * -2 + 1],uVar4);
    uVar10 = (uint)(CARRY4(uVar13,*puVar18) || CARRY4(uVar13 + *puVar18,(uint)CARRY1(bVar7,bVar29)))
    ;
    uVar13 = *(uint *)(ulonglong)uVar14;
    uVar3 = uVar14 + *(uint *)(ulonglong)uVar14;
    uVar15 = uVar3 + uVar10;
    uVar1 = in(uVar4);
    puVar31[(ulonglong)bVar33 * -2 + 1] = uVar1;
    pbVar25 = (byte *)CONCAT71(uVar23,(((cVar5 - bVar6) -
                                       (CARRY4(uVar12,uVar9) || CARRY4(uVar2,uVar11))) - *param_2) -
                                      (CARRY4(uVar14,uVar13) || CARRY4(uVar3,uVar10)));
    uRam00000001a44fe330 = uRam00000001a44fe330 & uVar15;
    bVar32 = false;
    puVar20 = (uint *)(ulonglong)uVar15;
  }
  uVar9 = (int)puVar20 + *puVar20 + (uint)bVar32;
  iVar8 = *(int *)(ulonglong)uVar9;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x21004a02;
  uVar9 = uVar9 + iVar8 + 0xc4050002;
  uVar13 = uVar9 | 0x13290b00;
  pcVar21 = (char *)(ulonglong)uVar13;
  cRam00000001984af676 = cRam00000001984af676 + cVar28;
  if (pbVar25 != (byte *)0x1) {
    *pcVar21 = *pcVar21 + (char)uVar9;
    pcVar21[0x28] = pcVar21[0x28] + bVar29;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x1004a02;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)(uVar13 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

