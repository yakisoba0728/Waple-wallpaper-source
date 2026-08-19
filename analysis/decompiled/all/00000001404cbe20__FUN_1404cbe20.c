// Function: FUN_1404cbe20
// Addr: 1404cbe20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbe80) overlaps instruction at (ram,0x0001404cbe7f)
    */

void FUN_1404cbe20(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined3 uVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 in_RAX;
  ulonglong uVar14;
  byte bVar15;
  byte bVar16;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar17;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  bool bVar18;
  undefined1 auStack_8 [8];
  char *pcVar12;
  byte *pbVar13;
  
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  cVar9 = (char)param_1;
  bVar6 = (byte)in_RAX & bVar15;
  pcVar12 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  *pcVar12 = *pcVar12 + cVar9;
  *pcVar12 = *pcVar12 + bVar6;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar10 = (int)pcVar12 + 0x74050002;
  pbVar13 = (byte *)(ulonglong)uVar10;
  bVar7 = (byte)uVar10;
  *pbVar13 = *pbVar13 | bVar7;
  pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar4 = (undefined3)(uVar10 >> 8);
  if (SCARRY1(bVar6,unaff_BH) == (char)*pbVar1 < '\0') {
    pbVar13[(longlong)unaff_RSI * 8 + 0x210049] =
         pbVar13[(longlong)unaff_RSI * 8 + 0x210049] + cVar9;
    cVar8 = bVar7 + *pbVar13;
    uVar2 = CONCAT31(uVar4,cVar8);
    pcVar12 = (char *)(ulonglong)uVar2;
    pcVar12[(longlong)param_1] = pcVar12[(longlong)param_1] + bVar16;
    pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BH;
    if (SCARRY1(bVar6,unaff_BH) == (char)*pbVar1 < '\0') {
      pcVar12[(longlong)unaff_RSI * 8 + 0x210049] =
           pcVar12[(longlong)unaff_RSI * 8 + 0x210049] + cVar9;
      *pcVar12 = *pcVar12 + cVar8;
      pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
      bVar6 = *pbVar1;
      *pbVar1 = *pbVar1 + unaff_BH;
      if (SCARRY1(bVar6,unaff_BH) == (char)*pbVar1 < '\0') {
        pcVar12[(longlong)unaff_RSI * 8 + 0x21190049] =
             pcVar12[(longlong)unaff_RSI * 8 + 0x21190049] + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar6 = *param_1;
      bVar7 = (byte)(uVar10 >> 8);
      *param_1 = *param_1 + bVar7;
      uVar10 = (uint)CARRY1(bVar6,bVar7);
      uVar3 = uVar2 + *(uint *)((longlong)pcVar12 * 2);
      iVar11 = uVar3 + uVar10;
      uVar17 = (uint)&stack0x00000000;
      bVar6 = (char)iVar11 +
              (CARRY4(uVar17,uVar17) ||
              CARRY4(uVar17 * 2,
                     (uint)(CARRY4(uVar2,*(uint *)((longlong)pcVar12 * 2)) || CARRY4(uVar3,uVar10)))
              );
      uVar10 = CONCAT22((short)((uint)iVar11 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) | bVar6,bVar6)) + 0x34ec1e00;
      *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) + (char)(uVar10 >> 8);
      *param_1 = *param_1 + unaff_R12B;
      *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
      *unaff_RSI = *unaff_RSI + unaff_BL;
      in((short)param_2);
      uVar10 = in((short)param_2);
      pcVar12 = (char *)(ulonglong)uVar10;
      *param_1 = *param_1 + unaff_R12B;
      *pcVar12 = *pcVar12 + cVar9;
      *pcVar12 = *pcVar12 + (char)uVar10;
      cVar9 = in(0x14);
      pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar9);
      *pcVar12 = *pcVar12 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar12 = *pcVar12 + cVar9;
    uVar14 = (ulonglong)CONCAT31(uVar4,cVar8) ^ 0x1e;
  }
  else {
    bVar18 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0';
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1 | bVar18;
    if (bVar18 != *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0') {
      *unaff_RSI = *unaff_RSI >> 1;
      pbVar13[0x21000000] = pbVar13[0x21000000] + bVar15;
    }
    uVar3 = CONCAT31(uVar4,bVar7 & bVar15);
    uVar14 = (ulonglong)uVar3;
    pbVar1 = (byte *)(uVar14 + 0x21000000);
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar15;
    puVar5 = (uint *)(uVar14 * 2);
    uVar10 = *puVar5;
    uVar2 = *puVar5;
    *puVar5 = (uVar2 - uVar3) - (uint)CARRY1(bVar6,bVar15);
    *(uint *)(unaff_RSI + param_2) =
         (*(int *)(unaff_RSI + param_2) - (int)auStack_8) -
         (uint)(uVar10 < uVar3 || uVar2 - uVar3 < (uint)CARRY1(bVar6,bVar15));
    unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
         unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | bVar16;
  }
  *(char *)(uVar14 - 0x15) = *(char *)(uVar14 - 0x15) + (char)uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

