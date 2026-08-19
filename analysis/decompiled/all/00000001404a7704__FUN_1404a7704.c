// Function: FUN_1404a7704
// Addr: 1404a7704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a7704(uint param_1,uint *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined3 uVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_RAX;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  ulonglong uVar15;
  char cVar16;
  char cVar17;
  undefined6 uVar18;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar17 = (char)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2;
  cVar6 = (char)in_RAX + '4';
  pcVar12 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  *pcVar12 = *pcVar12 + cVar6;
  param_1 = param_1 & *param_2;
  pcVar12[0x23] = pcVar12[0x23] + (char)(param_1 >> 8);
  *unaff_RDI = *unaff_RSI;
  pcVar12 = (char *)func_0x0001406b775f();
  *pcVar12 = *pcVar12 + (char)pcVar12;
  param_1 = param_1 & *(uint *)CONCAT62(uVar18,CONCAT11(cVar17,cVar16));
  uVar15 = (ulonglong)param_1;
  pcVar12[0x23] = pcVar12[0x23] + (char)(param_1 >> 8);
  piVar4 = (int *)(unaff_RDI + 2);
  puVar3 = unaff_RSI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  piVar13 = (int *)func_0x0001484b776f();
  uVar10 = (int)piVar13 + *piVar13;
  pbVar14 = (byte *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + 0x6002e004);
  bVar9 = (byte)uVar10;
  *pbVar14 = *pbVar14 | bVar9;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + bVar9;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar10;
  puVar1 = (undefined1 *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + uVar15);
  *puVar1 = *puVar1;
  pcVar12 = (char *)(uVar15 - 1);
  uVar5 = (undefined3)(uVar10 >> 8);
  cVar6 = (char)((ulonglong)pcVar12 >> 8);
  if (pcVar12 == (char *)0x0) {
    uVar11 = CONCAT31(uVar5,bVar9 | *(byte *)(ulonglong)uVar10);
    if ((bVar9 | *(byte *)(ulonglong)uVar10) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar7 = in(CONCAT11(cVar17,cVar16));
    uVar10 = CONCAT31(uVar5,uVar7) & 0xffffff0a;
    pcVar2 = (char *)((longlong)puVar3 * 3 + 0x4a);
    *pcVar2 = *pcVar2 + cVar17;
    *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
    *pcVar12 = *pcVar12;
    uVar10 = (uVar10 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar9 = (byte)uVar10 | *(byte *)(ulonglong)uVar10;
    uVar11 = CONCAT31((int3)(uVar10 >> 8),bVar9);
    if (bVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  }
  uVar11 = uVar11 & 0x769c000a;
  *pcVar12 = *pcVar12 + -8;
  cVar8 = (char)uVar11;
  *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + cVar8;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
  *pcVar12 = *pcVar12 + -8;
  uVar10 = CONCAT31((int3)(CONCAT22((short)(uVar11 >> 0x10),CONCAT11(cVar6,cVar8)) >> 8),cVar8) +
           0x34050002;
  pbVar14 = (byte *)(ulonglong)uVar10;
  *pbVar14 = *pbVar14 | (byte)uVar10;
  pcVar12 = (char *)(uVar15 - 2);
  if (pcVar12 == (char *)0x0 || *pbVar14 == 0) {
    uVar5 = (undefined3)(uVar10 >> 8);
    bVar9 = (byte)uVar10 | *pbVar14;
    *piVar4 = *piVar4 + (int)puVar3;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9);
    cVar6 = (char)(uVar10 >> 8);
    *pcVar12 = *pcVar12 + cVar6;
    *(char *)(ulonglong)CONCAT31(uVar5,bVar9) = *(char *)(ulonglong)CONCAT31(uVar5,bVar9) + bVar9;
    bVar9 = bVar9 + cVar6;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9);
    *piVar4 = *piVar4 + (int)puVar3;
    *pcVar12 = *pcVar12 + (bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9));
    pcVar12 = (char *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + (longlong)puVar3 * 2);
    *pcVar12 = *pcVar12 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

