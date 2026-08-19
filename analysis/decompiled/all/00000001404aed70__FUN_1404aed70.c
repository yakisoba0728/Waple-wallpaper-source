// Function: FUN_1404aed70
// Addr: 1404aed70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aed70(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  byte *pbVar5;
  byte *pbVar6;
  undefined7 uVar11;
  uint *puVar9;
  char cVar12;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  char cVar16;
  char cVar17;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar18;
  char *pcVar7;
  char *pcVar8;
  char cVar10;
  
  uVar15 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  cVar12 = (char)param_1;
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & (uint)param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + cVar12;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar2,bVar2));
  uVar1 = param_2 << 0x20 |
          CONCAT71((int7)((ulonglong)pbVar5 >> 8),(bVar2 | *pbVar5) + 100) & 0xffffffff;
  puVar9 = (uint *)((longlong)uVar1 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
  uVar1 = (longlong)uVar1 % (longlong)*(int *)(unaff_RBP + 0x13);
  pbVar5 = (byte *)(uVar1 & 0xffffffff);
  cVar13 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  if (*unaff_RDI == '\0' || SCARRY1(cVar13,unaff_BL) != *unaff_RDI < '\0') {
    *param_1 = *param_1;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    bVar18 = SCARRY1(cVar3,(char)pbVar5);
    cVar3 = cVar3 + (char)pbVar5;
    if (bVar18 != cVar3 < '\0') {
      cVar13 = (char)((ulonglong)pbVar5 >> 8);
      bVar18 = SCARRY1(unaff_BH,cVar13);
      unaff_BH = unaff_BH + cVar13;
      if (bVar18 == unaff_BH < '\0') {
        *param_4 = *param_4;
        goto code_r0x0001404aedbd;
      }
      *(char *)(puVar9 + -5) = (char)puVar9[-5] + cVar13;
      goto code_r0x0001404aedaa;
    }
    uVar4 = in(0x49);
    puVar9 = (uint *)(ulonglong)uVar4;
  }
  else {
    (&stack0x0021004a)[unaff_RBP * 8] = (&stack0x0021004a)[unaff_RBP * 8] + cVar12;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    uVar1 = uVar1 << 0x20 | (ulonglong)puVar9;
    puVar9 = (uint *)((longlong)uVar1 / (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    pbVar5 = (byte *)((longlong)uVar1 % (longlong)*(int *)(unaff_RBP + 0x13) & 0xffffffff);
    cVar13 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (*unaff_RDI != '\0' && SCARRY1(cVar13,unaff_BL) == *unaff_RDI < '\0') {
      (&stack0x0021004a)[unaff_RBP * 8] = (&stack0x0021004a)[unaff_RBP * 8] + cVar12;
      *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001404aedaa:
    *(undefined1 *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12))) =
         *(undefined1 *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12)));
    bVar2 = (byte)puVar9;
    *(byte *)puVar9 = (char)*puVar9 + bVar2;
    pcVar8 = (char *)((longlong)puVar9 + -0x2affec83);
    cVar13 = *pcVar8;
    cVar17 = (char)((ulonglong)pbVar5 >> 8);
    *pcVar8 = *pcVar8 + cVar17;
    cVar10 = (char)((ulonglong)puVar9 >> 8);
    if (SCARRY1(cVar13,cVar17) == *pcVar8 < '\0') {
      *puVar9 = *puVar9 | (uint)puVar9;
      cVar10 = cVar10 + bVar2;
      pbVar6 = (byte *)CONCAT62((int6)((ulonglong)puVar9 >> 0x10),CONCAT11(cVar10,bVar2));
      uVar11 = (undefined7)((ulonglong)pbVar6 >> 8);
      bVar2 = bVar2 | *pbVar6;
      pcVar7 = (char *)CONCAT71(uVar11,bVar2);
      pcVar8 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) + CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12))));
      *pcVar8 = *pcVar8 + cVar17;
      (&stack0x00000000)[CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12)))] =
           (&stack0x00000000)[CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12)))] + cVar10;
      pcVar8 = (char *)(CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12))) + 0x137db000);
      *pcVar8 = *pcVar8 + cVar17;
      cVar16 = (char)pbVar5;
      cVar13 = cVar3 + cVar16;
      if (SCARRY1(cVar3,cVar16) == cVar13 < '\0') {
        pcVar8 = (char *)(ulonglong)((uint)pcVar7 | 0x137db000);
        cVar13 = cVar13 + cVar16;
      }
      else {
        *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar10;
        *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))) =
             *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))) + cVar10;
        *unaff_RSI = *unaff_RSI + bVar2;
        *pcVar7 = *pcVar7 + bVar2;
        cVar3 = in(8);
        pcVar8 = (char *)CONCAT71(uVar11,cVar3);
        *pcVar8 = *pcVar8 + cVar3;
        if (*pcVar8 == '\0') {
          uVar4 = in(0x49);
          puVar9 = (uint *)(ulonglong)uVar4;
          goto code_r0x0001404aedff;
        }
      }
      *pcVar8 = *pcVar8 + (char)pcVar8;
      puVar9 = (uint *)((ulonglong)pcVar8 ^ 0xd);
      pbVar6 = (byte *)((longlong)puVar9 + -0x2affec83);
      bVar2 = *pbVar6;
      *pbVar6 = *pbVar6 + cVar17;
      if (SCARRY1(bVar2,cVar17) == (char)*pbVar6 < '\0') {
        *puVar9 = *puVar9 | (uint)puVar9;
      }
code_r0x0001404aedff:
      *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar9 >> 8);
      bVar2 = (byte)puVar9;
      *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))) =
           *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))) + bVar2;
      *pbVar5 = *pbVar5 | bVar2;
      *(byte *)puVar9 = (byte)*puVar9 + cVar12;
      *puVar9 = *puVar9 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *(byte *)puVar9 = (byte)*puVar9 | bVar2;
      pcVar8 = (char *)(CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))) +
                       CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,cVar12))));
      *pcVar8 = *pcVar8 - cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar10;
  }
  *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12))) =
       *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar3,cVar12))) +
       (char)((ulonglong)puVar9 >> 8);
code_r0x0001404aedbd:
  *unaff_RSI = *unaff_RSI + cVar12;
  *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

