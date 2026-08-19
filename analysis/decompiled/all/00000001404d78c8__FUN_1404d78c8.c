// Function: FUN_1404d78c8
// Addr: 1404d78c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d797a) overlaps instruction at (ram,0x0001404d7979)
    */

void FUN_1404d78c8(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  byte bVar15;
  uint *in_RAX;
  undefined7 uVar16;
  int *piVar13;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined6 uVar20;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  char unaff_R12B;
  bool bVar23;
  bool bVar24;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar11;
  char *pcVar12;
  byte *pbVar14;
  
  uVar20 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  bVar18 = (byte)param_2;
  uVar10 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar10;
  uVar4 = *in_RAX;
  cVar7 = (char)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + cVar7;
  if (SCARRY1((byte)uVar4,cVar7)) {
    *in_RAX = *in_RAX & uVar10;
    *(byte *)in_RAX = (byte)*in_RAX + cVar7;
    cVar8 = (char)((ulonglong)in_RAX >> 8);
    param_1[-0x7b] = param_1[-0x7b] + cVar8;
    unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4d] =
         unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4d] + bVar18;
    *param_1 = *param_1 + cVar7;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar8;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar14 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x2fffc97e);
  bVar9 = *pbVar14;
  bVar17 = (byte)param_1;
  *pbVar14 = *pbVar14 + bVar17;
  if (CARRY1(bVar9,bVar17) || *pbVar14 == 0) {
    *param_1 = *param_1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & uVar10;
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + cVar7;
  puVar21 = (undefined1 *)register0x00000020;
  if ((byte)*in_RAX == 0 || SCARRY1((byte)uVar4,cVar7) != (char)(byte)*in_RAX < '\0') {
    *unaff_RDI = *unaff_RDI + bVar18;
  }
  else {
    while( true ) {
      cVar8 = (char)((ulonglong)param_1 >> 8);
      *(char *)(unaff_RBP + 0x7e) = *(char *)(unaff_RBP + 0x7e) + cVar8;
      *(byte *)in_RAX = (byte)*in_RAX + cVar8;
      cVar7 = (char)((ulonglong)in_RAX >> 8);
      if ((char)(byte)*in_RAX < '\0') {
        *(byte *)((longlong)in_RAX + 0x4d) = unaff_BH;
        *param_1 = *param_1 + cVar7;
        goto code_r0x0001404d7985;
      }
      *param_1 = *param_1 + cVar7;
      *param_2 = *param_2 + (char)in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
      uVar16 = (undefined7)((ulonglong)in_RAX >> 8);
      cVar5 = in(7);
      in_RAX = (uint *)CONCAT71(uVar16,cVar5);
      bVar23 = CARRY1(*(byte *)CONCAT44(unaff_00000034,unaff_ESI),bVar19);
      cVar7 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar19;
      if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0' &&
          SCARRY1(cVar7,bVar19) == *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
        bVar23 = SCARRY1(*(char *)CONCAT44(unaff_00000034,unaff_ESI),unaff_BH);
        *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BH;
        cVar7 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        cVar8 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        do {
          bVar9 = (byte)in_RAX;
          if (cVar7 == '\0' || bVar23 != cVar8 < '\0') {
            unaff_RDI[-0x4c] = unaff_RDI[-0x4c] + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar14 = (byte *)((longlong)in_RAX + (longlong)unaff_RDI * 2);
          *pbVar14 = *pbVar14 + bVar18;
          *param_4 = *param_4 + unaff_R12B;
          *(byte *)in_RAX = (byte)*in_RAX + bVar9;
          uVar4 = *in_RAX;
          *(byte *)in_RAX = (byte)*in_RAX + bVar19;
          if ((byte)*in_RAX == 0 || SCARRY1((byte)uVar4,bVar19) != (char)(byte)*in_RAX < '\0') {
code_r0x0001404d7985:
            bVar9 = (byte)in_RAX;
            *param_2 = *param_2 + bVar9;
            bVar24 = CARRY1((byte)*in_RAX,bVar9);
            *(byte *)in_RAX = (byte)*in_RAX + bVar9;
            puVar22 = puVar21;
          }
          else {
            bVar24 = CARRY1(*(byte *)CONCAT44(unaff_00000034,unaff_ESI),bVar19);
            cVar7 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
            *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
                 *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar19;
            puVar22 = puVar21;
            if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0' &&
                SCARRY1(cVar7,bVar19) == *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
              *(byte *)in_RAX = (byte)*in_RAX + bVar17;
              if (-1 < (char)(byte)*in_RAX) {
                *param_1 = *param_1 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(byte *)((longlong)in_RAX + 0x4d) = unaff_BH;
              *param_1 = *param_1 + bVar9;
              *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar9;
              param_2[0x60037004] = param_2[0x60037004] | bVar19;
              bVar19 = bVar19 + (byte)*in_RAX;
              uRam00000001347279c0 = uRam00000001347279c0 & (uint)puVar21;
              uVar4 = (uint)CARRY1(bVar9,(byte)*in_RAX);
              uVar11 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar9 + (byte)*in_RAX);
              uVar10 = uVar11 + 0x80011e4;
              bVar23 = 0xf7ffee1b < uVar11 || CARRY4(uVar10,uVar4);
              uVar10 = uVar10 + uVar4;
              pbVar14 = (byte *)(ulonglong)uVar10;
              *(undefined1 **)(puVar21 + -8) = puVar21;
              bVar9 = *pbVar14;
              bVar6 = (byte)uVar10;
              bVar15 = *pbVar14;
              *pbVar14 = bVar15 + bVar6 + bVar23;
              pbVar14 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x6036ffc9);
              bVar1 = *pbVar14;
              *pbVar14 = (byte)(CONCAT11(CARRY1(bVar9,bVar6) || CARRY1(bVar15 + bVar6,bVar23),bVar1)
                               >> 5) | bVar1 << 4;
              cVar7 = bVar6 + unaff_BL;
              pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar7);
              bVar9 = (byte)(uVar10 >> 8);
              if (-1 < cVar7) {
                *param_1 = *param_1 + bVar9;
                *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
                     *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar7;
                *pcVar12 = *pcVar12 + cVar7;
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar2 = (undefined2)(uVar10 >> 0x10);
              bVar15 = bVar9 + bVar19;
              cVar8 = cVar7 + *(char *)(ulonglong)CONCAT22(uVar2,CONCAT11(bVar15,cVar7)) +
                      CARRY1(bVar9,bVar19);
              cVar7 = bVar15 * '\x02';
              uVar4 = CONCAT22(uVar2,CONCAT11(cVar7,cVar8));
              piVar13 = (int *)(ulonglong)uVar4;
              *piVar13 = *piVar13 + uVar4 + (uint)CARRY1(bVar15,bVar15);
              pbVar14 = (byte *)((longlong)piVar13 + CONCAT62(uVar20,CONCAT11(bVar19,bVar18)));
              bVar9 = *pbVar14;
              *pbVar14 = *pbVar14 + bVar18;
              unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) + 0x379ca500] =
                   unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) + 0x379ca500] + unaff_BL +
                   CARRY1(bVar9,bVar18);
              uVar3 = (undefined3)(uVar4 >> 8);
              bVar9 = cVar8 + unaff_BL;
              pbVar14 = (byte *)(ulonglong)CONCAT31(uVar3,bVar9);
              if (-1 < (char)bVar9) {
                *param_1 = *param_1 + cVar7;
                *pbVar14 = *pbVar14 + bVar9;
                bVar9 = *pbVar14;
                bVar19 = *pbVar14;
                *pbVar14 = *pbVar14 + bVar18;
                *(ulonglong *)(puVar21 + -0x10) =
                     (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar19,bVar18) * 0x800 |
                     (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                     (ulonglong)((char)*pbVar14 < '\0') * 0x80 | (ulonglong)(*pbVar14 == 0) * 0x40 |
                     (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar14) & 1U) == 0) * 4
                     | (ulonglong)CARRY1(bVar9,bVar18) | (ulonglong)(in_ID & 1) * 0x200000 |
                     (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                     (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              bVar15 = *pbVar14;
              *param_1 = *param_1 + cVar7;
              *(byte *)CONCAT62(uVar20,CONCAT11(bVar19,bVar18 + bVar15)) =
                   *(byte *)CONCAT62(uVar20,CONCAT11(bVar19,bVar18 + bVar15)) | bVar9;
              *pbVar14 = *pbVar14 + bVar17;
              pcVar12 = (char *)((ulonglong)CONCAT31(uVar3,bVar9) ^ 0x14);
              cVar8 = (char)pcVar12;
              pcVar12[-0x4dffc84b] = pcVar12[-0x4dffc84b] + cVar8;
              pcVar12[0x21004d79] = pcVar12[0x21004d79] + cVar7;
              *pcVar12 = *pcVar12 + cVar8;
              pcVar12[-0x4dffc84b] = pcVar12[-0x4dffc84b] + cVar8;
              pcVar12[0x21004d79] = pcVar12[0x21004d79] + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          puVar21 = puVar22 + -8;
          *(undefined1 **)(puVar22 + -8) = puVar22;
          cVar7 = (char)in_RAX + (byte)*in_RAX;
          bVar23 = SCARRY1((char)in_RAX,(byte)*in_RAX) != SCARRY1(cVar7,bVar24);
          cVar7 = cVar7 + bVar24;
          in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar7);
          cVar8 = cVar7;
          if (!bVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while( true );
      }
      *(undefined1 **)(puVar21 + -8) = puVar21;
      uVar4 = *in_RAX;
      cVar7 = cVar5 + (byte)*in_RAX;
      bVar9 = cVar7 + bVar23;
      in_RAX = (uint *)CONCAT71(uVar16,bVar9);
      if (SCARRY1(cVar5,(byte)uVar4) == SCARRY1(cVar7,bVar23)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar9 < 0x80) break;
      *(byte *)in_RAX = (byte)*in_RAX + cVar8;
      puVar21 = puVar21 + -8;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

