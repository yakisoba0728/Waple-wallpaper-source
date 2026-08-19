// Function: FUN_1404aed34
// Addr: 1404aed34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aed34(char *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  char cVar14;
  byte *in_RAX;
  uint *puVar9;
  byte *pbVar11;
  undefined7 uVar16;
  char cVar17;
  undefined6 uVar18;
  char cVar19;
  byte bVar21;
  char cVar22;
  byte *pbVar20;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar23;
  int iVar3;
  int *piVar10;
  char *pcVar12;
  char *pcVar13;
  char cVar15;
  
  uVar18 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  cVar14 = (char)param_1;
  pcVar13 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    0x13);
  *pcVar13 = *pcVar13 + unaff_BH;
  *in_RAX = *in_RAX + cVar6;
  if ((POPCOUNT(*in_RAX) & 1U) != 0) {
    *in_RAX = *in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[param_2 * 2] = param_1[param_2 * 2] + unaff_BH;
  *param_1 = *param_1;
  puVar9 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 6);
  (&stack0x00000000)[(longlong)unaff_RSI * 2] =
       (&stack0x00000000)[(longlong)unaff_RSI * 2] + (char)param_2;
  uVar7 = (uint)puVar9 | *puVar9;
  piVar10 = (int *)(ulonglong)uVar7;
  bVar21 = (byte)((ulonglong)param_2 >> 8);
  param_1[0x8e40400] = param_1[0x8e40400] + bVar21;
  pbVar20 = (byte *)((longlong)piVar10 + -0x2affec83);
  bVar5 = *pbVar20;
  bVar1 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar21;
  if (SCARRY1(bVar1,bVar21) != (char)*pbVar20 < '\0') {
    cVar14 = (char)(uVar7 >> 8);
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar14;
    *param_1 = *param_1 + cVar14;
code_r0x0001404aed5d:
    (&stack0x00000000)[(longlong)unaff_RSI * 8] =
         (&stack0x00000000)[(longlong)unaff_RSI * 8] + (char)piVar10 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *piVar10;
  iVar3 = *piVar10;
  uVar8 = uVar7 + iVar3 + (uint)CARRY1(bVar5,bVar21);
  piVar10 = (int *)(ulonglong)uVar8;
  if (SCARRY4(uVar7,iVar2) != SCARRY4(uVar7 + iVar3,(uint)CARRY1(bVar5,bVar21))) {
    *param_4 = *param_4;
    goto code_r0x0001404aed5d;
  }
  *param_1 = *param_1;
  puVar9 = (uint *)((ulonglong)uVar8 | 6);
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + cVar14;
  *puVar9 = *puVar9 | (uint)puVar9;
  bVar5 = (byte)puVar9;
  uVar7 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11((byte)(uVar8 >> 8) | bVar5,bVar5));
  uVar4 = param_2 << 0x20 |
          (ulonglong)CONCAT31((int3)(uVar7 >> 8),(bVar5 | *(byte *)(ulonglong)uVar7) + 100);
  puVar9 = (uint *)((longlong)uVar4 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
  uVar4 = (longlong)uVar4 % (longlong)*(int *)(unaff_RBP + 0x13);
  pbVar20 = (byte *)(uVar4 & 0xffffffff);
  cVar17 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  if (*unaff_RDI == '\0' || SCARRY1(cVar17,unaff_BL) != *unaff_RDI < '\0') {
    *param_1 = *param_1;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    bVar23 = SCARRY1(cVar6,(char)pbVar20);
    cVar6 = cVar6 + (char)pbVar20;
    if (bVar23 != cVar6 < '\0') {
      cVar17 = (char)((ulonglong)pbVar20 >> 8);
      bVar23 = SCARRY1(unaff_BH,cVar17);
      unaff_BH = unaff_BH + cVar17;
      if (bVar23 == unaff_BH < '\0') {
        *param_4 = *param_4;
        goto code_r0x0001404aedbd;
      }
      *(char *)(puVar9 + -5) = (char)puVar9[-5] + cVar17;
      goto code_r0x0001404aedaa;
    }
    uVar7 = in(0x49);
    puVar9 = (uint *)(ulonglong)uVar7;
  }
  else {
    (&stack0x0021004a)[unaff_RBP * 8] = (&stack0x0021004a)[unaff_RBP * 8] + cVar14;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    uVar4 = uVar4 << 0x20 | (ulonglong)puVar9;
    puVar9 = (uint *)((longlong)uVar4 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    pbVar20 = (byte *)((longlong)uVar4 % (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    cVar17 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (*unaff_RDI != '\0' && SCARRY1(cVar17,unaff_BL) == *unaff_RDI < '\0') {
      (&stack0x0021004a)[unaff_RBP * 8] = (&stack0x0021004a)[unaff_RBP * 8] + cVar14;
      *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001404aedaa:
    *(undefined1 *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) =
         *(undefined1 *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14));
    bVar5 = (byte)puVar9;
    *(byte *)puVar9 = (char)*puVar9 + bVar5;
    pcVar13 = (char *)((longlong)puVar9 + -0x2affec83);
    cVar17 = *pcVar13;
    cVar22 = (char)((ulonglong)pbVar20 >> 8);
    *pcVar13 = *pcVar13 + cVar22;
    cVar15 = (char)((ulonglong)puVar9 >> 8);
    if (SCARRY1(cVar17,cVar22) == *pcVar13 < '\0') {
      *puVar9 = *puVar9 | (uint)puVar9;
      cVar15 = cVar15 + bVar5;
      pbVar11 = (byte *)CONCAT62((int6)((ulonglong)puVar9 >> 0x10),CONCAT11(cVar15,bVar5));
      uVar16 = (undefined7)((ulonglong)pbVar11 >> 8);
      bVar5 = bVar5 | *pbVar11;
      pcVar12 = (char *)CONCAT71(uVar16,bVar5);
      pcVar13 = (char *)(CONCAT44(unaff_0000001c,
                                  CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                        CONCAT62(uVar18,CONCAT11(cVar6,cVar14)));
      *pcVar13 = *pcVar13 + cVar22;
      (&stack0x00000000)[CONCAT62(uVar18,CONCAT11(cVar6,cVar14))] =
           (&stack0x00000000)[CONCAT62(uVar18,CONCAT11(cVar6,cVar14))] + cVar15;
      pcVar13 = (char *)(CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) + 0x137db000);
      *pcVar13 = *pcVar13 + cVar22;
      cVar19 = (char)pbVar20;
      cVar17 = cVar6 + cVar19;
      if (SCARRY1(cVar6,cVar19) == cVar17 < '\0') {
        pcVar13 = (char *)(ulonglong)((uint)pcVar12 | 0x137db000);
        cVar17 = cVar17 + cVar19;
      }
      else {
        *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar15;
        *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) =
             *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) + cVar15;
        *unaff_RSI = *unaff_RSI + bVar5;
        *pcVar12 = *pcVar12 + bVar5;
        cVar6 = in(8);
        pcVar13 = (char *)CONCAT71(uVar16,cVar6);
        *pcVar13 = *pcVar13 + cVar6;
        if (*pcVar13 == '\0') {
          uVar7 = in(0x49);
          puVar9 = (uint *)(ulonglong)uVar7;
          goto code_r0x0001404aedff;
        }
      }
      *pcVar13 = *pcVar13 + (char)pcVar13;
      puVar9 = (uint *)((ulonglong)pcVar13 ^ 0xd);
      pbVar11 = (byte *)((longlong)puVar9 + -0x2affec83);
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + cVar22;
      if (SCARRY1(bVar5,cVar22) == (char)*pbVar11 < '\0') {
        *puVar9 = *puVar9 | (uint)puVar9;
      }
code_r0x0001404aedff:
      *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar9 >> 8);
      bVar5 = (byte)puVar9;
      *(byte *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) =
           *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) + bVar5;
      *pbVar20 = *pbVar20 | bVar5;
      *(byte *)puVar9 = (byte)*puVar9 + cVar14;
      *puVar9 = *puVar9 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *(byte *)puVar9 = (byte)*puVar9 | bVar5;
      pcVar13 = (char *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) +
                        CONCAT62(uVar18,CONCAT11(cVar17,cVar14)));
      *pcVar13 = *pcVar13 - cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar15;
  }
  *(char *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) + (char)((ulonglong)puVar9 >> 8);
code_r0x0001404aedbd:
  *unaff_RSI = *unaff_RSI + cVar14;
  *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

