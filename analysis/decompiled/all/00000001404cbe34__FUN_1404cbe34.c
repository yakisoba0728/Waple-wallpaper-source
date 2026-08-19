// Function: FUN_1404cbe34
// Addr: 1404cbe34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbe80) overlaps instruction at (ram,0x0001404cbe7f)
    */

void FUN_1404cbe34(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte bVar12;
  char *in_RAX;
  undefined7 uVar13;
  ulonglong uVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar14;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  bool bVar15;
  char in_SF;
  char in_OF;
  undefined1 auStack_8 [8];
  char *pcVar10;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  cVar7 = (char)param_1;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  if (in_OF == in_SF) {
    in_RAX[(longlong)unaff_RSI * 8 + 0x210049] = in_RAX[(longlong)unaff_RSI * 8 + 0x210049] + cVar7;
    cVar5 = (byte)in_RAX + *in_RAX;
    pcVar10 = (char *)CONCAT71(uVar13,cVar5);
    pcVar10[(longlong)param_1] = pcVar10[(longlong)param_1] + bVar12;
    pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BH;
    if (SCARRY1(bVar6,unaff_BH) == (char)*pbVar1 < '\0') {
      pcVar10[(longlong)unaff_RSI * 8 + 0x210049] =
           pcVar10[(longlong)unaff_RSI * 8 + 0x210049] + cVar7;
      *pcVar10 = *pcVar10 + cVar5;
      pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
      bVar6 = *pbVar1;
      *pbVar1 = *pbVar1 + unaff_BH;
      if (SCARRY1(bVar6,unaff_BH) == (char)*pbVar1 < '\0') {
        pcVar10[(longlong)unaff_RSI * 8 + 0x21190049] =
             pcVar10[(longlong)unaff_RSI * 8 + 0x21190049] + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar6 = *param_1;
      bVar12 = (byte)((ulonglong)in_RAX >> 8);
      *param_1 = *param_1 + bVar12;
      uVar9 = (uint)CARRY1(bVar6,bVar12);
      uVar3 = (uint)pcVar10 + *(uint *)((longlong)pcVar10 * 2);
      iVar8 = uVar3 + uVar9;
      uVar14 = (uint)&stack0x00000000;
      bVar6 = (char)iVar8 +
              (CARRY4(uVar14,uVar14) ||
              CARRY4(uVar14 * 2,
                     (uint)(CARRY4((uint)pcVar10,*(uint *)((longlong)pcVar10 * 2)) ||
                           CARRY4(uVar3,uVar9))));
      uVar9 = CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11((byte)((uint)iVar8 >> 8) | bVar6,bVar6)
                      ) + 0x34ec1e00;
      *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) + (char)(uVar9 >> 8);
      *param_1 = *param_1 + unaff_R12B;
      *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
      *unaff_RSI = *unaff_RSI + unaff_BL;
      in((short)param_2);
      uVar9 = in((short)param_2);
      pcVar10 = (char *)(ulonglong)uVar9;
      *param_1 = *param_1 + unaff_R12B;
      *pcVar10 = *pcVar10 + cVar7;
      *pcVar10 = *pcVar10 + (char)uVar9;
      cVar7 = in(0x14);
      pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar7);
      *pcVar10 = *pcVar10 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar10 = *pcVar10 + cVar7;
    uVar11 = CONCAT71(uVar13,cVar5) ^ 0x1e;
  }
  else {
    bVar15 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0';
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1 | bVar15;
    if (bVar15 != *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0') {
      *unaff_RSI = *unaff_RSI >> 1;
      in_RAX[0x21000000] = in_RAX[0x21000000] + bVar6;
    }
    uVar11 = CONCAT71(uVar13,(byte)in_RAX & bVar6);
    pbVar1 = (byte *)(uVar11 + 0x21000000);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar6;
    puVar4 = (uint *)(uVar11 * 2);
    uVar9 = *puVar4;
    uVar3 = *puVar4 - (uint)uVar11;
    *puVar4 = uVar3 - CARRY1(bVar2,bVar6);
    *(uint *)(unaff_RSI + param_2) =
         (*(int *)(unaff_RSI + param_2) - (int)auStack_8) -
         (uint)(uVar9 < (uint)uVar11 || uVar3 < CARRY1(bVar2,bVar6));
    unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
         unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | bVar12;
  }
  *(char *)(uVar11 - 0x15) = *(char *)(uVar11 - 0x15) + (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

