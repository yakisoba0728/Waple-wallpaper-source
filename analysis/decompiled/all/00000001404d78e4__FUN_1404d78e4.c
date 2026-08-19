// Function: FUN_1404d78e4
// Addr: 1404d78e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d797a) overlaps instruction at (ram,0x0001404d7979)
    */

void FUN_1404d78e4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  byte bVar13;
  byte *in_RAX;
  undefined7 uVar14;
  int *piVar11;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined6 uVar18;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar19;
  longlong unaff_RBP;
  byte *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  bool bVar20;
  bool bVar21;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar9;
  char *pcVar10;
  byte *pbVar12;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  cVar5 = (char)((ulonglong)param_1 >> 8);
  bVar15 = (byte)param_1;
  uRam00000001945278ec = uRam00000001945278ec & (uint)in_RAX;
  unaff_RSI[0x36] = unaff_RSI[0x36] ^ unaff_BH;
  bVar7 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar17;
  if (*unaff_RSI == 0 || SCARRY1(bVar7,bVar17) != (char)*unaff_RSI < '\0') {
    if (*unaff_RSI == 0 || SCARRY1(bVar7,bVar17) != (char)*unaff_RSI < '\0') {
      *unaff_RDI = *unaff_RDI + bVar16;
    }
    else {
      while( true ) {
        *(char *)(unaff_RBP + 0x7e) = *(char *)(unaff_RBP + 0x7e) + cVar5;
        *in_RAX = *in_RAX + cVar5;
        cVar6 = (char)((ulonglong)in_RAX >> 8);
        if ((char)*in_RAX < '\0') {
          in_RAX[0x4d] = unaff_BH;
          *param_1 = *param_1 + cVar6;
          goto code_r0x0001404d7985;
        }
        *param_1 = *param_1 + cVar6;
        *param_2 = *param_2 + (char)in_RAX;
        *in_RAX = *in_RAX + (char)in_RAX;
        uVar14 = (undefined7)((ulonglong)in_RAX >> 8);
        cVar6 = in(7);
        in_RAX = (byte *)CONCAT71(uVar14,cVar6);
        bVar13 = *unaff_RSI;
        bVar7 = *unaff_RSI;
        *unaff_RSI = *unaff_RSI + bVar17;
        if (*unaff_RSI != 0 && SCARRY1(bVar7,bVar17) == (char)*unaff_RSI < '\0') {
          bVar21 = SCARRY1(*unaff_RSI,unaff_BH);
          *unaff_RSI = *unaff_RSI + unaff_BH;
          bVar7 = *unaff_RSI;
          goto code_r0x0001404d7941;
        }
        *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
        bVar7 = *in_RAX;
        bVar1 = *in_RAX;
        bVar4 = cVar6 + bVar1 + CARRY1(bVar13,bVar17);
        in_RAX = (byte *)CONCAT71(uVar14,bVar4);
        if (SCARRY1(cVar6,bVar7) == SCARRY1(cVar6 + bVar1,CARRY1(bVar13,bVar17))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar4 < 0x80) break;
        *in_RAX = *in_RAX + cVar5;
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = *in_RAX;
  *in_RAX = *in_RAX + bVar15;
  if (-1 < (char)*in_RAX) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'x' + CARRY1(bVar7,bVar15)
                           );
  do {
    *param_4 = *param_4 + unaff_R12B;
    bVar13 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar13;
    bVar7 = *in_RAX;
    *in_RAX = *in_RAX + bVar17;
    if (*in_RAX == 0 || SCARRY1(bVar7,bVar17) != (char)*in_RAX < '\0') {
code_r0x0001404d7985:
      bVar7 = (byte)in_RAX;
      *param_2 = *param_2 + bVar7;
      bVar20 = CARRY1(*in_RAX,bVar7);
      *in_RAX = *in_RAX + bVar7;
      puVar19 = (undefined1 *)register0x00000020;
    }
    else {
      bVar20 = CARRY1(*unaff_RSI,bVar17);
      bVar7 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + bVar17;
      puVar19 = (undefined1 *)register0x00000020;
      if (*unaff_RSI != 0 && SCARRY1(bVar7,bVar17) == (char)*unaff_RSI < '\0') {
        *in_RAX = *in_RAX + bVar15;
        if (-1 < (char)*in_RAX) {
          *param_1 = *param_1 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        in_RAX[0x4d] = unaff_BH;
        *param_1 = *param_1 + bVar13;
        *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar13;
        param_2[0x60037004] = param_2[0x60037004] | bVar17;
        bVar17 = bVar17 + *in_RAX;
        uRam00000001347279c0 = uRam00000001347279c0 & (uint)register0x00000020;
        uVar9 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar13 + *in_RAX);
        uVar8 = uVar9 + 0x80011e4;
        bVar21 = 0xf7ffee1b < uVar9 || CARRY4(uVar8,(uint)CARRY1(bVar13,*in_RAX));
        uVar8 = uVar8 + CARRY1(bVar13,*in_RAX);
        pbVar12 = (byte *)(ulonglong)uVar8;
        *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
        bVar7 = *pbVar12;
        bVar4 = (byte)uVar8;
        bVar13 = *pbVar12;
        *pbVar12 = bVar13 + bVar4 + bVar21;
        bVar1 = unaff_RSI[-0x6036ffc9];
        unaff_RSI[-0x6036ffc9] =
             (byte)(CONCAT11(CARRY1(bVar7,bVar4) || CARRY1(bVar13 + bVar4,bVar21),bVar1) >> 5) |
             bVar1 << 4;
        cVar5 = bVar4 + unaff_BL;
        pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar5);
        bVar7 = (byte)(uVar8 >> 8);
        if (-1 < cVar5) {
          *param_1 = *param_1 + bVar7;
          *unaff_RSI = *unaff_RSI + cVar5;
          *pcVar10 = *pcVar10 + cVar5;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar2 = (undefined2)(uVar8 >> 0x10);
        bVar13 = bVar7 + bVar17;
        cVar6 = cVar5 + *(char *)(ulonglong)CONCAT22(uVar2,CONCAT11(bVar13,cVar5)) +
                CARRY1(bVar7,bVar17);
        cVar5 = bVar13 * '\x02';
        uVar8 = CONCAT22(uVar2,CONCAT11(cVar5,cVar6));
        piVar11 = (int *)(ulonglong)uVar8;
        *piVar11 = *piVar11 + uVar8 + (uint)CARRY1(bVar13,bVar13);
        pbVar12 = (byte *)((longlong)piVar11 + CONCAT62(uVar18,CONCAT11(bVar17,bVar16)));
        bVar7 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar16;
        (unaff_RDI + 0x379ca500)[(longlong)unaff_RSI] =
             (unaff_RDI + 0x379ca500)[(longlong)unaff_RSI] + unaff_BL + CARRY1(bVar7,bVar16);
        uVar3 = (undefined3)(uVar8 >> 8);
        bVar7 = cVar6 + unaff_BL;
        pbVar12 = (byte *)(ulonglong)CONCAT31(uVar3,bVar7);
        if (-1 < (char)bVar7) {
          *param_1 = *param_1 + cVar5;
          *pbVar12 = *pbVar12 + bVar7;
          bVar7 = *pbVar12;
          bVar15 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar16;
          *(ulonglong *)((longlong)register0x00000020 + -0x10) =
               (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar15,bVar16) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((char)*pbVar12 < '\0') * 0x80 | (ulonglong)(*pbVar12 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
               (ulonglong)CARRY1(bVar7,bVar16) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar13 = *pbVar12;
        *param_1 = *param_1 + cVar5;
        *(byte *)CONCAT62(uVar18,CONCAT11(bVar17,bVar16 + bVar13)) =
             *(byte *)CONCAT62(uVar18,CONCAT11(bVar17,bVar16 + bVar13)) | bVar7;
        *pbVar12 = *pbVar12 + bVar15;
        pcVar10 = (char *)((ulonglong)CONCAT31(uVar3,bVar7) ^ 0x14);
        cVar6 = (char)pcVar10;
        pcVar10[-0x4dffc84b] = pcVar10[-0x4dffc84b] + cVar6;
        pcVar10[0x21004d79] = pcVar10[0x21004d79] + cVar5;
        *pcVar10 = *pcVar10 + cVar6;
        pcVar10[-0x4dffc84b] = pcVar10[-0x4dffc84b] + cVar6;
        pcVar10[0x21004d79] = pcVar10[0x21004d79] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    register0x00000020 = (BADSPACEBASE *)(puVar19 + -8);
    *(undefined1 **)(puVar19 + -8) = puVar19;
    cVar5 = (char)in_RAX + *in_RAX;
    bVar21 = SCARRY1((char)in_RAX,*in_RAX) != SCARRY1(cVar5,bVar20);
    bVar7 = cVar5 + bVar20;
    in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar7);
    if (!bVar21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001404d7941:
    if (bVar7 == 0 || bVar21 != (char)bVar7 < '\0') {
      unaff_RDI[-0x4c] = unaff_RDI[-0x4c] + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX[(longlong)unaff_RDI * 2] = in_RAX[(longlong)unaff_RDI * 2] + bVar16;
  } while( true );
}

