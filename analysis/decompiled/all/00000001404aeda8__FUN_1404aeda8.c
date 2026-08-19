// Function: FUN_1404aeda8
// Addr: 1404aeda8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aeda8(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  byte *pbVar4;
  undefined7 uVar9;
  uint *puVar7;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  char cVar13;
  char cVar14;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_GS;
  byte in_CF;
  bool bVar15;
  bool in_OF;
  char *pcVar5;
  char *pcVar6;
  char cVar8;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  cVar13 = (char)param_2;
  uVar12 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)((ulonglong)param_1 >> 8);
  cVar10 = (char)param_1;
  if (in_OF) {
    uVar3 = (int)in_RAX + *in_RAX + (uint)in_CF;
    in_RAX = (uint *)(ulonglong)uVar3;
    register0x00000020 = (BADSPACEBASE *)CONCAT62((int6)((ulonglong)&stack0x00000000 >> 0x10),in_GS)
    ;
    *param_1 = *param_1 + (char)in_GS;
    *(char *)in_RAX = (char)*in_RAX + (char)uVar3;
    bVar15 = SCARRY1(cVar2,cVar13);
    cVar2 = cVar2 + cVar13;
    if (bVar15 != cVar2 < '\0') {
      bVar15 = SCARRY1(unaff_BH,cVar14);
      unaff_BH = unaff_BH + cVar14;
      if (bVar15 == unaff_BH < '\0') {
        *param_4 = *param_4 + (char)in_GS;
        goto code_r0x0001404aedbd;
      }
      *(char *)(in_RAX + -5) = (char)in_RAX[-5] + cVar14;
      goto code_r0x0001404aedaa;
    }
    uVar3 = in(0x49);
    in_RAX = (uint *)(ulonglong)uVar3;
  }
  else {
code_r0x0001404aedaa:
    *(char *)CONCAT62(uVar12,CONCAT11(cVar2,cVar10)) =
         *(char *)CONCAT62(uVar12,CONCAT11(cVar2,cVar10)) + (char)register0x00000020;
    bVar1 = (byte)in_RAX;
    *(byte *)in_RAX = (char)*in_RAX + bVar1;
    pcVar6 = (char *)((longlong)in_RAX + -0x2affec83);
    cVar11 = *pcVar6;
    *pcVar6 = *pcVar6 + cVar14;
    cVar8 = (char)((ulonglong)in_RAX >> 8);
    if (SCARRY1(cVar11,cVar14) == *pcVar6 < '\0') {
      *in_RAX = *in_RAX | (uint)in_RAX;
      cVar8 = cVar8 + bVar1;
      pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,bVar1));
      uVar9 = (undefined7)((ulonglong)pbVar4 >> 8);
      bVar1 = bVar1 | *pbVar4;
      pcVar5 = (char *)CONCAT71(uVar9,bVar1);
      pcVar6 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) + CONCAT62(uVar12,CONCAT11(cVar2,cVar10)));
      *pcVar6 = *pcVar6 + cVar14;
      *(char *)((longlong)register0x00000020 + CONCAT62(uVar12,CONCAT11(cVar2,cVar10))) =
           *(char *)((longlong)register0x00000020 + CONCAT62(uVar12,CONCAT11(cVar2,cVar10))) + cVar8
      ;
      pcVar6 = (char *)(CONCAT62(uVar12,CONCAT11(cVar2,cVar10)) + 0x137db000);
      *pcVar6 = *pcVar6 + cVar14;
      cVar11 = cVar2 + cVar13;
      if (SCARRY1(cVar2,cVar13) == cVar11 < '\0') {
        pcVar6 = (char *)(ulonglong)((uint)pcVar5 | 0x137db000);
        cVar11 = cVar11 + cVar13;
      }
      else {
        *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar8;
        *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
             *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + cVar8;
        *unaff_RSI = *unaff_RSI + bVar1;
        *pcVar5 = *pcVar5 + bVar1;
        cVar2 = in(8);
        pcVar6 = (char *)CONCAT71(uVar9,cVar2);
        *pcVar6 = *pcVar6 + cVar2;
        if (*pcVar6 == '\0') {
          uVar3 = in(0x49);
          puVar7 = (uint *)(ulonglong)uVar3;
          goto code_r0x0001404aedff;
        }
      }
      *pcVar6 = *pcVar6 + (char)pcVar6;
      puVar7 = (uint *)((ulonglong)pcVar6 ^ 0xd);
      pbVar4 = (byte *)((longlong)puVar7 + -0x2affec83);
      bVar1 = *pbVar4;
      *pbVar4 = *pbVar4 + cVar14;
      if (SCARRY1(bVar1,cVar14) == (char)*pbVar4 < '\0') {
        *puVar7 = *puVar7 | (uint)puVar7;
      }
code_r0x0001404aedff:
      *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar7 >> 8);
      bVar1 = (byte)puVar7;
      *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
           *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + bVar1;
      *param_2 = *param_2 | bVar1;
      *(byte *)puVar7 = (byte)*puVar7 + cVar10;
      *(uint **)((longlong)register0x00000020 + -8) = puVar7;
      *puVar7 = *puVar7 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *(byte *)puVar7 = (byte)*puVar7 | bVar1;
      pcVar6 = (char *)(CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) +
                       CONCAT62(uVar12,CONCAT11(cVar11,cVar10)));
      *pcVar6 = *pcVar6 - cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar8;
  }
  *(char *)CONCAT62(uVar12,CONCAT11(cVar2,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar2,cVar10)) + (char)((ulonglong)in_RAX >> 8);
code_r0x0001404aedbd:
  *unaff_RSI = *unaff_RSI + cVar10;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

