// Function: FUN_1404b66e8
// Addr: 1404b66e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b67c9) overlaps instruction at (ram,0x0001404b67c6)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b6796) */
/* WARNING: Removing unreachable block (ram,0x0001404b67af) */
/* WARNING: Removing unreachable block (ram,0x0001404b67a7) */
/* WARNING: Removing unreachable block (ram,0x0001404b682c) */
/* WARNING: Removing unreachable block (ram,0x0001404b67b2) */
/* WARNING: Removing unreachable block (ram,0x0001404b67c9) */
/* WARNING: Removing unreachable block (ram,0x0001404b67bf) */
/* WARNING: Removing unreachable block (ram,0x0001404b67d3) */
/* WARNING: Removing unreachable block (ram,0x0001404b67ee) */

void FUN_1404b66e8(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  byte bVar12;
  int *in_RAX;
  uint *puVar10;
  char *pcVar11;
  char cVar13;
  char cVar14;
  byte bVar15;
  char cVar16;
  char unaff_BL;
  char unaff_BH;
  char cVar17;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar18;
  byte *pbVar8;
  uint *puVar9;
  
  cVar13 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)in_RAX;
  bVar18 = bVar5 < *unaff_RDI;
  cVar14 = (char)param_2;
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  if (-1 < (char)(bVar5 - *unaff_RDI)) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar1 = *param_1;
    bVar12 = (byte)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + bVar12;
    bVar5 = bVar5 + 6 + CARRY1(bVar1,bVar12);
    pbVar8 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
    pcVar11 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)unaff_RSI * 2);
    *pcVar11 = *pcVar11 + cVar14;
    *pbVar8 = *pbVar8 | bVar5;
    unaff_RDI[(longlong)(param_1 + 1)] = unaff_RDI[(longlong)(param_1 + 1)] + bVar15;
    *(byte *)CONCAT44(unaff_00000024,unaff_ESP) =
         *(char *)CONCAT44(unaff_00000024,unaff_ESP) + bVar5;
    in_RAX = (int *)(ulonglong)((int)pbVar8 + 0x1b7a5000);
    pbVar8 = (byte *)(unaff_RBP + 0x7a);
    bVar18 = CARRY1(*pbVar8,bVar15);
    *pbVar8 = *pbVar8 + bVar15;
  }
  iVar7 = ((int)in_RAX - *in_RAX) - (uint)bVar18;
  cVar6 = (char)iVar7;
  cVar17 = (char)unaff_ESP;
  *param_1 = *param_1 + cVar17;
  uVar2 = (undefined3)(CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(0x24,cVar6)) >> 8);
  cVar6 = cVar6 + '\x02';
  uVar3 = CONCAT31(uVar2,cVar6);
  puVar9 = (uint *)(ulonglong)uVar3;
  pcVar11 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2 * 2);
  *pcVar11 = *pcVar11 + cVar6;
  *puVar9 = *puVar9 | uVar3;
  if (*puVar9 == 0) {
    if ((POPCOUNT(uVar3 - *puVar9 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RSI = *unaff_RSI + bVar15;
    *param_4 = *param_4 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4c] = unaff_RDI[0x4c] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar9 = (char)*puVar9 + cVar6;
  cVar16 = bVar15 + cVar14;
  if (SCARRY1(bVar15,cVar14) != cVar16 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar16) == (char)(unaff_BH + cVar16) < '\0') {
    uVar3 = CONCAT31(uVar2,cVar6 + cVar13);
    puVar10 = (uint *)(ulonglong)uVar3;
    *param_4 = *param_4 + cVar17;
    *(char *)puVar10 = (char)*puVar10 + cVar6 + cVar13;
    puVar9 = puVar10 + -0xa7ff921;
    uVar4 = *puVar9;
    *(char *)puVar9 = (char)*puVar9 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    if (SCARRY1((char)uVar4,cVar16) == (char)*puVar9 < '\0') {
      *(char *)puVar10 = (char)*puVar10 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar11 = (char *)(ulonglong)(uVar3 | *puVar10);
    param_1[CONCAT44(unaff_00000024,unaff_ESP)] =
         param_1[CONCAT44(unaff_00000024,unaff_ESP)] + cVar14;
    param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar16;
    if (SCARRY1(cVar16,cVar14) != (char)(cVar16 + cVar14) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar11 = *pcVar11 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

