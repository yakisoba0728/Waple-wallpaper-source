// Function: FUN_1404ae280
// Addr: 1404ae280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae32b) overlaps instruction at (ram,0x0001404ae328)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ae35a) */

void FUN_1404ae280(byte *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar16;
  uint *puVar17;
  longlong lVar18;
  uint *puVar19;
  char *pcVar20;
  char cVar22;
  char cVar24;
  byte *pbVar23;
  undefined7 uVar25;
  char cVar26;
  byte bVar27;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  undefined4 *puVar28;
  undefined1 *unaff_RDI;
  undefined1 *puVar29;
  bool bVar30;
  undefined1 auStack_8 [8];
  byte *pbVar15;
  byte bVar21;
  
  bVar27 = (byte)((ulonglong)param_2 >> 8);
  cVar26 = (char)param_2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 +
       (0xdffff99b < in_EAX);
  bVar6 = *param_1;
  *param_1 = *param_1 + unaff_BH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 +
       CARRY1(bVar6,unaff_BH);
  uVar4 = SUB82(param_2,0);
  uVar7 = in(uVar4);
  pbVar15 = (byte *)(ulonglong)uVar7;
  *param_4 = *param_4;
  *pbVar15 = *pbVar15 + (char)uVar7;
  bVar6 = *pbVar15;
  bVar5 = (byte)(uVar7 >> 8);
  *pbVar15 = *pbVar15 + bVar5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 + CARRY1(bVar6,bVar5);
  bVar6 = *param_1;
  *param_1 = *param_1 + unaff_BH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 +
       CARRY1(bVar6,unaff_BH);
  iVar8 = in(uVar4);
  *param_4 = *param_4;
  uVar7 = iVar8 + 0x34050002;
  pbVar15 = (byte *)(ulonglong)uVar7;
  *pbVar15 = *pbVar15 | (byte)uVar7;
  pbVar23 = param_1 + -1;
  bVar6 = (byte)((ulonglong)pbVar23 >> 8);
  if (pbVar23 == (byte *)0x0 || *pbVar15 == 0) {
    bVar5 = (byte)(uVar7 + *(int *)pbVar15);
    uVar10 = CONCAT31((int3)(uVar7 + *(int *)pbVar15 >> 8),bVar5 - 0x11);
    uVar7 = (uint)(bVar5 < 0x11);
    uVar12 = uVar10 + *(uint *)(ulonglong)uVar10;
    uVar9 = uVar12 + uVar7;
    puVar17 = (uint *)(ulonglong)uVar9;
    if (-1 < (int)uVar9) goto code_r0x0001404ae2b2;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2 +
         (uint)(CARRY4(uVar10,*(uint *)(ulonglong)uVar10) || CARRY4(uVar12,uVar7));
    *(char *)((longlong)puVar17 + 0x1f) = *(char *)((longlong)puVar17 + 0x1f) + unaff_BH;
  }
  else {
    puVar17 = (uint *)(ulonglong)
                      CONCAT31((int3)(uVar7 + *(int *)pbVar15 >> 8),
                               (char)(uVar7 + *(int *)pbVar15) + -0x11);
code_r0x0001404ae2b2:
    *pbVar23 = *pbVar23;
    bVar5 = (byte)puVar17;
    *(byte *)puVar17 = (char)*puVar17 + bVar5;
    bVar21 = (byte)((ulonglong)puVar17 >> 8);
    piVar16 = (int *)CONCAT71((int7)((ulonglong)puVar17 >> 8),bVar5 + bVar21);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 +
         CARRY1(bVar5,bVar21);
    pbVar15 = pbVar23 + (longlong)param_2;
    bVar5 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar6;
    uVar7 = (int)piVar16 + *piVar16 + (uint)CARRY1(bVar5,bVar6);
    if ((int)uVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar23 = *pbVar23;
    bVar5 = (byte)uVar7;
    *param_2 = *param_2 + bVar5;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + bVar5;
    bVar21 = (byte)(uVar7 >> 8);
    uVar12 = CONCAT31((int3)(uVar7 >> 8),(bVar5 ^ 8) + bVar21);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar26 +
         CARRY1(bVar5 ^ 8,bVar21);
    pbVar15 = pbVar23 + (longlong)param_2;
    bVar5 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar6;
    uVar7 = uVar12 + *(uint *)(ulonglong)uVar12;
    uVar10 = uVar7 + CARRY1(bVar5,bVar6);
    puVar17 = (uint *)(ulonglong)uVar10;
    if ((int)uVar10 < 0) {
      register0x00000020 = (BADSPACEBASE *)auStack_8;
      uVar7 = (uint)(CARRY4(uVar12,*(uint *)(ulonglong)uVar12) ||
                    CARRY4(uVar7,(uint)CARRY1(bVar5,bVar6)));
      uVar9 = uVar10 + *puVar17 + uVar7;
      puVar28 = unaff_RSI + 1;
      out(*unaff_RSI,uVar4);
      uVar7 = (uint)(CARRY4(uVar10,*puVar17) || CARRY4(uVar10 + *puVar17,uVar7));
      uVar12 = uVar9 + *(uint *)(ulonglong)uVar9;
      bVar30 = CARRY4(uVar9,*(uint *)(ulonglong)uVar9) || CARRY4(uVar12,uVar7);
      puVar19 = (uint *)(ulonglong)(uVar12 + uVar7);
      puVar29 = unaff_RDI + 1;
      uVar1 = in(uVar4);
      *unaff_RDI = uVar1;
      goto code_r0x0001404ae301;
    }
  }
  *pbVar23 = *pbVar23 + (char)puVar17;
  lVar18 = CONCAT71((int7)((ulonglong)puVar17 >> 8),(char)puVar17 + -10);
  pbVar23[lVar18] = pbVar23[lVar18] + bVar6;
  bVar30 = false;
  puVar19 = (uint *)(ulonglong)((uint)lVar18 & 0x1ef02000);
  pbVar23 = param_1 + -2;
  puVar28 = unaff_RSI;
  puVar29 = unaff_RDI;
  if (pbVar23 == (byte *)0x0 || ((ulonglong)puVar17 & 0x1ef02000) == 0) {
    bVar6 = *param_2;
    *param_2 = *param_2 >> 1;
    *(byte *)puVar19 = (byte)(CONCAT11((bVar6 & 1) != 0,(byte)*puVar19) >> 7) | (byte)*puVar19 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404ae301:
  uVar25 = (undefined7)((ulonglong)pbVar23 >> 8);
  cVar22 = ((char)pbVar23 - *param_2) - bVar30;
  pbVar15 = (byte *)CONCAT71(uVar25,cVar22);
  uVar10 = (uint)puVar19;
  *puVar19 = *puVar19 & uVar10;
  uVar7 = *puVar19;
  bVar6 = (byte)puVar19;
  uVar12 = *puVar19;
  *(byte *)puVar19 = (byte)*puVar19 + bVar6;
  cVar24 = (char)((ulonglong)pbVar23 >> 8);
  if (SCARRY1((byte)uVar12,bVar6)) {
    cRam00000001b04aef95 = cRam00000001b04aef95 + bVar6;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - cVar26;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar22;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (int)param_2;
    *(byte *)((longlong)puVar19 + 2) = *(byte *)((longlong)puVar19 + 2) + cVar24;
    bVar30 = CARRY1(*pbVar15,(byte)register0x00000020);
    *pbVar15 = *pbVar15 + (byte)register0x00000020;
  }
  else {
    uVar7 = (uint)CARRY1((byte)uVar7,bVar6);
    uVar11 = uVar10 + *puVar19 + uVar7;
    out(*puVar28,uVar4);
    uVar10 = (uint)(CARRY4(uVar10,*puVar19) || CARRY4(uVar10 + *puVar19,uVar7));
    uVar7 = *(uint *)(ulonglong)uVar11;
    uVar2 = uVar11 + *(uint *)(ulonglong)uVar11;
    uVar12 = uVar2 + uVar10;
    puVar17 = (uint *)(ulonglong)uVar12;
    uVar1 = in(uVar4);
    *puVar29 = uVar1;
    bVar5 = *param_2;
    *puVar17 = *puVar17 & uVar12;
    uVar12 = CONCAT31((int3)(uVar12 >> 8),(char)uVar12 + (char)*puVar17);
    puVar17 = (uint *)(ulonglong)uVar12;
    *(char *)((longlong)puVar17 + 5) = *(char *)((longlong)puVar17 + 5) + cVar24;
    pbVar15 = (byte *)((longlong)puVar17 + 0x21);
    bVar6 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar27;
    uVar13 = uVar12 + *puVar17 + (uint)CARRY1(bVar6,bVar27);
    out(puVar28[1],uVar4);
    uVar9 = (uint)(CARRY4(uVar12,*puVar17) || CARRY4(uVar12 + *puVar17,(uint)CARRY1(bVar6,bVar27)));
    uVar12 = *(uint *)(ulonglong)uVar13;
    uVar3 = uVar13 + *(uint *)(ulonglong)uVar13;
    uVar14 = uVar3 + uVar9;
    uVar1 = in(uVar4);
    puVar29[1] = uVar1;
    pbVar15 = (byte *)CONCAT71(uVar25,(((cVar22 - bVar5) -
                                       (CARRY4(uVar11,uVar7) || CARRY4(uVar2,uVar10))) - *param_2) -
                                      (CARRY4(uVar13,uVar12) || CARRY4(uVar3,uVar9)));
    uRam00000001a44fe330 = uRam00000001a44fe330 & uVar14;
    bVar30 = false;
    puVar19 = (uint *)(ulonglong)uVar14;
  }
  uVar7 = (int)puVar19 + *puVar19 + (uint)bVar30;
  iVar8 = *(int *)(ulonglong)uVar7;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x21004a02;
  uVar7 = uVar7 + iVar8 + 0xc4050002;
  uVar12 = uVar7 | 0x13290b00;
  pcVar20 = (char *)(ulonglong)uVar12;
  cRam00000001984af676 = cRam00000001984af676 + cVar26;
  if (pbVar15 != (byte *)0x1) {
    *pcVar20 = *pcVar20 + (char)uVar7;
    pcVar20[0x28] = pcVar20[0x28] + bVar27;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x1004a02;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)(uVar12 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

