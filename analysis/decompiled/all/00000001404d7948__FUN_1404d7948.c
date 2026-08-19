// Function: FUN_1404d7948
// Addr: 1404d7948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7949) overlaps instruction at (ram,0x0001404d7948)
    */

void FUN_1404d7948(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  byte bVar14;
  uint *in_RAX;
  int *piVar12;
  byte bVar15;
  byte bVar16;
  undefined6 uVar17;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar18;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  bool bVar19;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar10;
  char *pcVar11;
  byte *pbVar13;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
  unaff_RSI[0x36] = unaff_RSI[0x36] ^ unaff_BH;
  while( true ) {
    bVar19 = CARRY1(*unaff_RSI,bVar16);
    bVar8 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar16;
    puVar18 = (undefined1 *)register0x00000020;
    if (*unaff_RSI != 0 && SCARRY1(bVar8,bVar16) == (char)*unaff_RSI < '\0') break;
    while( true ) {
      register0x00000020 = (BADSPACEBASE *)(puVar18 + -8);
      *(undefined1 **)(puVar18 + -8) = puVar18;
      uVar2 = *in_RAX;
      cVar7 = (char)in_RAX;
      cVar6 = cVar7 + (byte)*in_RAX;
      bVar8 = cVar6 + bVar19;
      in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar8);
      if (SCARRY1(cVar7,(byte)uVar2) == SCARRY1(cVar6,bVar19)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar8 < 0x80) {
        *(char *)(unaff_RDI + -0x4c) = *(char *)(unaff_RDI + -0x4c) + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar13 = (byte *)((longlong)in_RAX + unaff_RDI * 2);
      *pbVar13 = *pbVar13 + bVar15;
      *param_4 = *param_4 + unaff_R12B;
      *(byte *)in_RAX = (byte)*in_RAX + bVar8;
      uVar2 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + bVar16;
      if ((byte)*in_RAX != 0 && SCARRY1((byte)uVar2,bVar16) == (char)(byte)*in_RAX < '\0') break;
      *param_2 = *param_2 + bVar8;
      bVar19 = CARRY1((byte)*in_RAX,bVar8);
      *(byte *)in_RAX = (byte)*in_RAX + bVar8;
      puVar18 = puVar18 + -8;
    }
  }
  *(byte *)in_RAX = (byte)*in_RAX + (char)param_1;
  bVar8 = (byte)in_RAX;
  if (-1 < (char)(byte)*in_RAX) {
    *param_1 = *param_1 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)in_RAX + 0x4d) = unaff_BH;
  *param_1 = *param_1 + bVar8;
  *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar8;
  param_2[0x60037004] = param_2[0x60037004] | bVar16;
  bVar16 = bVar16 + (byte)*in_RAX;
  uRam00000001347279c0 = uRam00000001347279c0 & (uint)register0x00000020;
  uVar2 = (uint)CARRY1(bVar8,(byte)*in_RAX);
  uVar10 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar8 + (byte)*in_RAX);
  uVar9 = uVar10 + 0x80011e4;
  bVar19 = 0xf7ffee1b < uVar10 || CARRY4(uVar9,uVar2);
  uVar9 = uVar9 + uVar2;
  pbVar13 = (byte *)(ulonglong)uVar9;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  bVar8 = *pbVar13;
  bVar5 = (byte)uVar9;
  bVar14 = *pbVar13;
  *pbVar13 = bVar14 + bVar5 + bVar19;
  bVar1 = unaff_RSI[-0x6036ffc9];
  unaff_RSI[-0x6036ffc9] =
       (byte)(CONCAT11(CARRY1(bVar8,bVar5) || CARRY1(bVar14 + bVar5,bVar19),bVar1) >> 5) |
       bVar1 << 4;
  cVar6 = bVar5 + unaff_BL;
  pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar6);
  bVar8 = (byte)(uVar9 >> 8);
  if (-1 < cVar6) {
    *param_1 = *param_1 + bVar8;
    *unaff_RSI = *unaff_RSI + cVar6;
    *pcVar11 = *pcVar11 + cVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = (undefined2)(uVar9 >> 0x10);
  bVar14 = bVar8 + bVar16;
  cVar7 = cVar6 + *(char *)(ulonglong)CONCAT22(uVar3,CONCAT11(bVar14,cVar6)) + CARRY1(bVar8,bVar16);
  cVar6 = bVar14 * '\x02';
  uVar2 = CONCAT22(uVar3,CONCAT11(cVar6,cVar7));
  piVar12 = (int *)(ulonglong)uVar2;
  *piVar12 = *piVar12 + uVar2 + (uint)CARRY1(bVar14,bVar14);
  pbVar13 = (byte *)((longlong)piVar12 + CONCAT62(uVar17,CONCAT11(bVar16,bVar15)));
  bVar8 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar15;
  unaff_RSI[unaff_RDI + 0x379ca500] =
       unaff_RSI[unaff_RDI + 0x379ca500] + unaff_BL + CARRY1(bVar8,bVar15);
  uVar4 = (undefined3)(uVar2 >> 8);
  bVar8 = cVar7 + unaff_BL;
  pbVar13 = (byte *)(ulonglong)CONCAT31(uVar4,bVar8);
  if (-1 < (char)bVar8) {
    *param_1 = *param_1 + cVar6;
    *pbVar13 = *pbVar13 + bVar8;
    bVar8 = *pbVar13;
    bVar16 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar15;
    *(ulonglong *)((longlong)register0x00000020 + -0x10) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar16,bVar15) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((char)*pbVar13 < '\0') * 0x80 | (ulonglong)(*pbVar13 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar13) & 1U) == 0) * 4 |
         (ulonglong)CARRY1(bVar8,bVar15) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = *pbVar13;
  *param_1 = *param_1 + cVar6;
  *(byte *)CONCAT62(uVar17,CONCAT11(bVar16,bVar15 + bVar14)) =
       *(byte *)CONCAT62(uVar17,CONCAT11(bVar16,bVar15 + bVar14)) | bVar8;
  *pbVar13 = *pbVar13 + (char)param_1;
  pcVar11 = (char *)((ulonglong)CONCAT31(uVar4,bVar8) ^ 0x14);
  cVar7 = (char)pcVar11;
  pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar7;
  pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar6;
  *pcVar11 = *pcVar11 + cVar7;
  pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar7;
  pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

