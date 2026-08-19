// Function: FUN_1404aed98
// Addr: 1404aed98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aed98(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  byte *pbVar3;
  undefined7 uVar8;
  char *pcVar5;
  uint *puVar6;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  char cVar13;
  char cVar14;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar15;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong lVar16;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_GS;
  char *pcVar4;
  char cVar7;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  cVar13 = (char)param_2;
  uVar12 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar15 = (char)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  lVar16 = CONCAT62((int6)((ulonglong)&stack0x00000000 >> 0x10),in_GS);
  cVar11 = (char)in_GS;
  *param_1 = *param_1 + cVar11;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  cVar10 = cVar15 + cVar13;
  if (SCARRY1(cVar15,cVar13) == cVar10 < '\0') {
    uVar2 = in(0x49);
    in_RAX = (uint *)(ulonglong)uVar2;
  }
  else {
    cVar15 = unaff_BH + cVar14;
    if (SCARRY1(unaff_BH,cVar14) == cVar15 < '\0') {
      *param_4 = *param_4 + cVar11;
      goto code_r0x0001404aedbd;
    }
    *(char *)(in_RAX + -5) = (char)in_RAX[-5] + cVar14;
    *(char *)CONCAT62(uVar12,CONCAT11(cVar10,cVar9)) =
         *(char *)CONCAT62(uVar12,CONCAT11(cVar10,cVar9)) + cVar11;
    *(byte *)in_RAX = (char)*in_RAX + bVar1;
    pcVar5 = (char *)((longlong)in_RAX + -0x2affec83);
    cVar11 = *pcVar5;
    *pcVar5 = *pcVar5 + cVar14;
    cVar7 = (char)((ulonglong)in_RAX >> 8);
    if (SCARRY1(cVar11,cVar14) == *pcVar5 < '\0') {
      *in_RAX = *in_RAX | (uint)in_RAX;
      cVar7 = cVar7 + bVar1;
      pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7,bVar1));
      uVar8 = (undefined7)((ulonglong)pbVar3 >> 8);
      bVar1 = bVar1 | *pbVar3;
      pcVar4 = (char *)CONCAT71(uVar8,bVar1);
      pcVar5 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar15,unaff_BL)))
                       + CONCAT62(uVar12,CONCAT11(cVar10,cVar9)));
      *pcVar5 = *pcVar5 + cVar14;
      pcVar5 = (char *)(lVar16 + CONCAT62(uVar12,CONCAT11(cVar10,cVar9)));
      *pcVar5 = *pcVar5 + cVar7;
      pcVar5 = (char *)(CONCAT62(uVar12,CONCAT11(cVar10,cVar9)) + 0x137db000);
      *pcVar5 = *pcVar5 + cVar14;
      cVar11 = cVar10 + cVar13;
      if (SCARRY1(cVar10,cVar13) == cVar11 < '\0') {
        pcVar5 = (char *)(ulonglong)((uint)pcVar4 | 0x137db000);
        cVar11 = cVar11 + cVar13;
      }
      else {
        *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar7;
        *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar9)) =
             *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar9)) + cVar7;
        *unaff_RSI = *unaff_RSI + bVar1;
        *pcVar4 = *pcVar4 + bVar1;
        cVar10 = in(8);
        pcVar5 = (char *)CONCAT71(uVar8,cVar10);
        *pcVar5 = *pcVar5 + cVar10;
        if (*pcVar5 == '\0') {
          uVar2 = in(0x49);
          puVar6 = (uint *)(ulonglong)uVar2;
          goto code_r0x0001404aedff;
        }
      }
      *pcVar5 = *pcVar5 + (char)pcVar5;
      puVar6 = (uint *)((ulonglong)pcVar5 ^ 0xd);
      pbVar3 = (byte *)((longlong)puVar6 + -0x2affec83);
      bVar1 = *pbVar3;
      *pbVar3 = *pbVar3 + cVar14;
      if (SCARRY1(bVar1,cVar14) == (char)*pbVar3 < '\0') {
        *puVar6 = *puVar6 | (uint)puVar6;
      }
code_r0x0001404aedff:
      *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar6 >> 8);
      bVar1 = (byte)puVar6;
      *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,cVar9)) =
           *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar9)) + bVar1;
      *param_2 = *param_2 | bVar1;
      *(byte *)puVar6 = (byte)*puVar6 + cVar9;
      *(uint **)(lVar16 + -8) = puVar6;
      *puVar6 = *puVar6 & CONCAT22(unaff_0000001a,CONCAT11(cVar15,unaff_BL));
      *(byte *)puVar6 = (byte)*puVar6 | bVar1;
      pcVar5 = (char *)(CONCAT62(uVar12,CONCAT11(cVar11,cVar9)) +
                       CONCAT62(uVar12,CONCAT11(cVar11,cVar9)));
      *pcVar5 = *pcVar5 - cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar7;
  }
  *(char *)CONCAT62(uVar12,CONCAT11(cVar10,cVar9)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar10,cVar9)) + (char)((ulonglong)in_RAX >> 8);
code_r0x0001404aedbd:
  *unaff_RSI = *unaff_RSI + cVar9;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

