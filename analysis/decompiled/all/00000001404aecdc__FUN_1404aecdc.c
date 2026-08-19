// Function: FUN_1404aecdc
// Addr: 1404aecdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aecdc(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  char cVar14;
  undefined8 in_RAX;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  byte *pbVar12;
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
  byte bVar23;
  longlong unaff_RBP;
  uint unaff_ESI;
  char *pcVar24;
  char *unaff_RDI;
  bool bVar25;
  byte *pbStack_8;
  int iVar3;
  char *pcVar13;
  char cVar15;
  
  uVar18 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  cVar14 = (char)param_1;
  pcVar24 = (char *)(ulonglong)(unaff_ESI & (uint)&stack0x00000000);
  uVar7 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) + 0x7740500;
  pcVar9 = (char *)(ulonglong)uVar7;
  *pcVar9 = *pcVar9 + cVar6;
  if ((POPCOUNT(*pcVar9) & 1U) != 0) {
    pbStack_8 = &UNK_1404aed05;
    pcVar9 = (char *)func_0x0001614b37f0();
    *pcVar24 = *pcVar24 + cVar14;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  param_1[-0x17ffec85] = param_1[-0x17ffec85] + cVar14;
  pbStack_8 = param_1;
  bVar5 = *param_1;
  bVar23 = (byte)&pbStack_8;
  *param_1 = *param_1 + bVar23;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + '\x06' + CARRY1(bVar5,bVar23));
  pcVar9 = (char *)((longlong)&pbStack_8 + (longlong)pcVar24 * 2);
  *pcVar9 = *pcVar9 + (char)param_2;
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
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
    *(char *)(&pbStack_8 + (longlong)pcVar24) =
         *(char *)(&pbStack_8 + (longlong)pcVar24) + (char)piVar10 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *piVar10;
  iVar3 = *piVar10;
  uVar8 = uVar7 + iVar3 + (uint)CARRY1(bVar5,bVar21);
  piVar10 = (int *)(ulonglong)uVar8;
  if (SCARRY4(uVar7,iVar2) != SCARRY4(uVar7 + iVar3,(uint)CARRY1(bVar5,bVar21))) {
    *param_4 = *param_4 + bVar23;
    goto code_r0x0001404aed5d;
  }
  *param_1 = *param_1 + bVar23;
  puVar11 = (uint *)((ulonglong)uVar8 | 6);
  *(char *)(&pbStack_8 + param_2) = *(char *)(&pbStack_8 + param_2) + cVar14;
  *puVar11 = *puVar11 | (uint)puVar11;
  bVar5 = (byte)puVar11;
  uVar7 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11((byte)(uVar8 >> 8) | bVar5,bVar5));
  uVar4 = param_2 << 0x20 |
          (ulonglong)CONCAT31((int3)(uVar7 >> 8),(bVar5 | *(byte *)(ulonglong)uVar7) + 100);
  puVar11 = (uint *)((longlong)uVar4 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
  uVar4 = (longlong)uVar4 % (longlong)*(int *)(unaff_RBP + 0x13);
  pbVar20 = (byte *)(uVar4 & 0xffffffff);
  cVar17 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  if (*unaff_RDI == '\0' || SCARRY1(cVar17,unaff_BL) != *unaff_RDI < '\0') {
    *param_1 = *param_1 + bVar23;
    *(char *)puVar11 = (char)*puVar11 + (char)puVar11;
    bVar25 = SCARRY1(cVar6,(char)pbVar20);
    cVar6 = cVar6 + (char)pbVar20;
    if (bVar25 != cVar6 < '\0') {
      cVar17 = (char)((ulonglong)pbVar20 >> 8);
      bVar25 = SCARRY1(unaff_BH,cVar17);
      unaff_BH = unaff_BH + cVar17;
      if (bVar25 == unaff_BH < '\0') {
        *param_4 = *param_4 + bVar23;
        goto code_r0x0001404aedbd;
      }
      *(char *)(puVar11 + -5) = (char)puVar11[-5] + cVar17;
      goto code_r0x0001404aedaa;
    }
    uVar7 = in(0x49);
    puVar11 = (uint *)(ulonglong)uVar7;
  }
  else {
    (&stack0x00210042)[unaff_RBP * 8] = (&stack0x00210042)[unaff_RBP * 8] + cVar14;
    *(char *)puVar11 = (char)*puVar11 + (char)puVar11;
    uVar4 = uVar4 << 0x20 | (ulonglong)puVar11;
    puVar11 = (uint *)((longlong)uVar4 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    pbVar20 = (byte *)((longlong)uVar4 % (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    cVar17 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (*unaff_RDI != '\0' && SCARRY1(cVar17,unaff_BL) == *unaff_RDI < '\0') {
      (&stack0x00210042)[unaff_RBP * 8] = (&stack0x00210042)[unaff_RBP * 8] + cVar14;
      *(char *)puVar11 = (char)*puVar11 + (char)puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001404aedaa:
    *(byte *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) =
         *(char *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) + bVar23;
    bVar5 = (byte)puVar11;
    *(byte *)puVar11 = (char)*puVar11 + bVar5;
    pcVar9 = (char *)((longlong)puVar11 + -0x2affec83);
    cVar17 = *pcVar9;
    cVar22 = (char)((ulonglong)pbVar20 >> 8);
    *pcVar9 = *pcVar9 + cVar22;
    cVar15 = (char)((ulonglong)puVar11 >> 8);
    if (SCARRY1(cVar17,cVar22) == *pcVar9 < '\0') {
      *puVar11 = *puVar11 | (uint)puVar11;
      cVar15 = cVar15 + bVar5;
      pbVar12 = (byte *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),CONCAT11(cVar15,bVar5));
      uVar16 = (undefined7)((ulonglong)pbVar12 >> 8);
      bVar5 = bVar5 | *pbVar12;
      pcVar13 = (char *)CONCAT71(uVar16,bVar5);
      pcVar9 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) + CONCAT62(uVar18,CONCAT11(cVar6,cVar14)));
      *pcVar9 = *pcVar9 + cVar22;
      pcVar9 = (char *)((longlong)&pbStack_8 + CONCAT62(uVar18,CONCAT11(cVar6,cVar14)));
      *pcVar9 = *pcVar9 + cVar15;
      pcVar9 = (char *)(CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) + 0x137db000);
      *pcVar9 = *pcVar9 + cVar22;
      cVar19 = (char)pbVar20;
      cVar17 = cVar6 + cVar19;
      if (SCARRY1(cVar6,cVar19) == cVar17 < '\0') {
        pcVar9 = (char *)(ulonglong)((uint)pcVar13 | 0x137db000);
        cVar17 = cVar17 + cVar19;
      }
      else {
        *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar15;
        *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) =
             *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) + cVar15;
        *pcVar24 = *pcVar24 + bVar5;
        *pcVar13 = *pcVar13 + bVar5;
        cVar6 = in(8);
        pcVar9 = (char *)CONCAT71(uVar16,cVar6);
        *pcVar9 = *pcVar9 + cVar6;
        if (*pcVar9 == '\0') {
          uVar7 = in(0x49);
          puVar11 = (uint *)(ulonglong)uVar7;
          goto code_r0x0001404aedff;
        }
      }
      *pcVar9 = *pcVar9 + (char)pcVar9;
      puVar11 = (uint *)((ulonglong)pcVar9 ^ 0xd);
      pbVar12 = (byte *)((longlong)puVar11 + -0x2affec83);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + cVar22;
      if (SCARRY1(bVar5,cVar22) == (char)*pbVar12 < '\0') {
        *puVar11 = *puVar11 | (uint)puVar11;
      }
code_r0x0001404aedff:
      *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar11 >> 8);
      bVar5 = (byte)puVar11;
      *(byte *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) =
           *(char *)CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) + bVar5;
      *pbVar20 = *pbVar20 | bVar5;
      *(byte *)puVar11 = (byte)*puVar11 + cVar14;
      *puVar11 = *puVar11 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *(byte *)puVar11 = (byte)*puVar11 | bVar5;
      pcVar9 = (char *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar14)) +
                       CONCAT62(uVar18,CONCAT11(cVar17,cVar14)));
      *pcVar9 = *pcVar9 - cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar15;
  }
  *(char *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar6,cVar14)) + (char)((ulonglong)puVar11 >> 8);
code_r0x0001404aedbd:
  *pcVar24 = *pcVar24 + cVar14;
  *(char *)puVar11 = (char)*puVar11 + (char)puVar11;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

