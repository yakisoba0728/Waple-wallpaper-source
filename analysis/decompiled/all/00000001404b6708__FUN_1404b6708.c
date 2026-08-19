// Function: FUN_1404b6708
// Addr: 1404b6708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b67c9) overlaps instruction at (ram,0x0001404b67c6)
    */

void FUN_1404b6708(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar13;
  uint *in_RAX;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  char cVar14;
  byte bVar15;
  byte bVar16;
  char unaff_BL;
  char unaff_BH;
  byte bVar17;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  bool bVar18;
  bool bVar19;
  bool in_ZF;
  uint *puVar8;
  int *piVar9;
  
  cVar14 = (char)((ulonglong)param_1 >> 8);
  bVar15 = (byte)param_2;
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  uVar7 = (uint)in_RAX;
  bVar17 = (byte)unaff_ESP;
  if (in_ZF) {
    iVar6 = (uVar7 - *in_RAX) - (uint)in_CF;
    cVar4 = (char)iVar6;
    *param_1 = *param_1 + bVar17;
    cVar3 = cVar4 + '\x02';
    uVar7 = CONCAT31((int3)(CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(0x24,cVar4)) >> 8),cVar3)
    ;
    puVar8 = (uint *)(ulonglong)uVar7;
    pcVar12 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2 * 2);
    *pcVar12 = *pcVar12 + cVar3;
    bVar18 = false;
    *puVar8 = *puVar8 | uVar7;
    bVar19 = false;
    if (*puVar8 == 0) {
      if ((POPCOUNT(uVar7 - *puVar8 & 0xff) & 1U) != 0) {
        *unaff_RSI = *unaff_RSI + bVar16;
        *param_4 = *param_4 + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(byte *)((longlong)in_RAX + (longlong)param_1) =
         *(byte *)((longlong)in_RAX + (longlong)param_1) + bVar16;
    *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar15;
    param_1[unaff_RDI] = param_1[unaff_RDI] + bVar16;
    pbVar1 = (byte *)((longlong)in_RAX + 0x7a);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar15;
    bVar18 = uVar7 < *in_RAX || uVar7 - *in_RAX < (uint)CARRY1(bVar13,bVar15);
    uVar7 = (uVar7 - *in_RAX) - (uint)CARRY1(bVar13,bVar15);
    puVar8 = (uint *)(ulonglong)uVar7;
    bVar19 = uVar7 == 0;
  }
  if (bVar19) {
    iVar6 = ((int)puVar8 - *puVar8) - (uint)bVar18;
    cVar4 = (char)iVar6;
    uVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(0x24,cVar4));
    *param_1 = *param_1 + bVar17;
    *unaff_RSI = *unaff_RSI + cVar4;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar4;
    uVar2 = (undefined3)(uVar7 >> 8);
    cVar4 = in(5);
    piVar9 = (int *)(ulonglong)CONCAT31(uVar2,cVar4);
    *(char *)piVar9 = (char)*piVar9 + cVar4;
    if ((char)*piVar9 == '\0') {
      pbVar1 = (byte *)(unaff_RBP + 0x7a);
      bVar19 = CARRY1(*pbVar1,bVar16);
      *pbVar1 = *pbVar1 + bVar16;
    }
    else {
      *(char *)piVar9 = (char)*piVar9 + cVar4;
      puVar8 = (uint *)((ulonglong)CONCAT31(uVar2,cVar4) ^ 0xf);
      pbVar1 = (byte *)((longlong)puVar8 + 0x7a);
      bVar13 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar15;
      uVar7 = (uint)puVar8 - *puVar8;
      bVar19 = (uint)puVar8 < *puVar8 || uVar7 < CARRY1(bVar13,bVar15);
      uVar7 = uVar7 - CARRY1(bVar13,bVar15);
      piVar9 = (int *)(ulonglong)uVar7;
      if (uVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar6 = ((int)piVar9 - *piVar9) - (uint)bVar19;
    uVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(0x24,(char)iVar6));
    puVar8 = (uint *)(ulonglong)uVar7;
    bVar13 = *param_1;
    *param_1 = *param_1 + bVar17;
    *(char *)puVar8 = ((char)*puVar8 - (char)param_1) - CARRY1(bVar13,bVar17);
    *(char *)puVar8 = (char)*puVar8 + unaff_BL;
    if ((char)*puVar8 == '\0') {
      uVar5 = in(7);
      puVar8 = (uint *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar5);
    }
    *(byte *)CONCAT44(unaff_00000024,unaff_ESP) =
         *(char *)CONCAT44(unaff_00000024,unaff_ESP) + bVar15;
    uVar7 = (uint)puVar8 | *puVar8 | 0x7e40434;
    pcVar10 = (char *)(ulonglong)uVar7;
    pcVar12 = pcVar10 + -0x29ffe484;
    cVar4 = *pcVar12;
    *pcVar12 = *pcVar12 + bVar16;
    if (SCARRY1(cVar4,bVar16) == *pcVar12 < '\0') {
      *pcVar10 = *pcVar10 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = uVar7 | unaff_ESP;
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = (byte)((ulonglong)puVar8 >> 8);
  *(byte *)(unaff_RDI + 0x4b) = *(byte *)(unaff_RDI + 0x4b) | bVar13;
  *param_1 = *param_1 + bVar13;
  *(char *)puVar8 = (char)*puVar8 + (char)puVar8;
  cVar4 = bVar16 + bVar15;
  if (SCARRY1(bVar16,bVar15) != cVar4 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar4) != (char)(unaff_BH + cVar4) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)puVar8 + cVar14;
  puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar8 >> 8),cVar3);
  *param_4 = *param_4 + bVar17;
  *(char *)puVar11 = (char)*puVar11 + cVar3;
  puVar8 = puVar11 + -0xa7ff921;
  uVar7 = *puVar8;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  if (SCARRY1((char)uVar7,cVar4) == (char)*puVar8 < '\0') {
    *(char *)puVar11 = (char)*puVar11 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar12 = (char *)(ulonglong)((uint)puVar11 | *puVar11);
  param_1[CONCAT44(unaff_00000024,unaff_ESP)] = param_1[CONCAT44(unaff_00000024,unaff_ESP)] + bVar15
  ;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar4;
  if (SCARRY1(cVar4,bVar15) == (char)(cVar4 + bVar15) < '\0') {
    *pcVar12 = *pcVar12 + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

