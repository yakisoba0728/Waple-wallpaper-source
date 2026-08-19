// Function: FUN_1404a76f8
// Addr: 1404a76f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a76f8(undefined8 param_1,uint *param_2)

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
  char *in_RAX;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
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
  uVar14 = *param_2;
  unaff_RDI[0x421004a] = unaff_RDI[0x421004a] + (char)in_RAX;
  cVar6 = (char)in_RAX + *in_RAX + '4';
  pcVar11 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  *pcVar11 = *pcVar11 + cVar6;
  uVar14 = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & (byte)uVar14) & *param_2;
  pcVar11[0x23] = pcVar11[0x23] + (char)(uVar14 >> 8);
  *unaff_RDI = *unaff_RSI;
  pcVar11 = (char *)func_0x0001406b775f();
  *pcVar11 = *pcVar11 + (char)pcVar11;
  uVar14 = uVar14 & *(uint *)CONCAT62(uVar18,CONCAT11(cVar17,cVar16));
  uVar15 = (ulonglong)uVar14;
  pcVar11[0x23] = pcVar11[0x23] + (char)(uVar14 >> 8);
  piVar4 = (int *)(unaff_RDI + 2);
  puVar3 = unaff_RSI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  piVar12 = (int *)func_0x0001484b776f();
  uVar14 = (int)piVar12 + *piVar12;
  pbVar13 = (byte *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + 0x6002e004);
  bVar9 = (byte)uVar14;
  *pbVar13 = *pbVar13 | bVar9;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + bVar9;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar14;
  puVar1 = (undefined1 *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + uVar15);
  *puVar1 = *puVar1;
  pcVar11 = (char *)(uVar15 - 1);
  uVar5 = (undefined3)(uVar14 >> 8);
  cVar6 = (char)((ulonglong)pcVar11 >> 8);
  if (pcVar11 == (char *)0x0) {
    uVar10 = CONCAT31(uVar5,bVar9 | *(byte *)(ulonglong)uVar14);
    if ((bVar9 | *(byte *)(ulonglong)uVar14) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar14 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar7 = in(CONCAT11(cVar17,cVar16));
    uVar14 = CONCAT31(uVar5,uVar7) & 0xffffff0a;
    pcVar2 = (char *)((longlong)puVar3 * 3 + 0x4a);
    *pcVar2 = *pcVar2 + cVar17;
    *pcVar11 = *pcVar11 + (char)(uVar14 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
    *pcVar11 = *pcVar11;
    uVar14 = (uVar14 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar9 = (byte)uVar14 | *(byte *)(ulonglong)uVar14;
    uVar10 = CONCAT31((int3)(uVar14 >> 8),bVar9);
    if (bVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar11 = *pcVar11 + (char)(uVar14 >> 8);
  }
  uVar10 = uVar10 & 0x769c000a;
  *pcVar11 = *pcVar11 + -8;
  cVar8 = (char)uVar10;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar8;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
  *pcVar11 = *pcVar11 + -8;
  uVar14 = CONCAT31((int3)(CONCAT22((short)(uVar10 >> 0x10),CONCAT11(cVar6,cVar8)) >> 8),cVar8) +
           0x34050002;
  pbVar13 = (byte *)(ulonglong)uVar14;
  *pbVar13 = *pbVar13 | (byte)uVar14;
  pcVar11 = (char *)(uVar15 - 2);
  if (pcVar11 == (char *)0x0 || *pbVar13 == 0) {
    uVar5 = (undefined3)(uVar14 >> 8);
    bVar9 = (byte)uVar14 | *pbVar13;
    *piVar4 = *piVar4 + (int)puVar3;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9);
    cVar6 = (char)(uVar14 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    *(char *)(ulonglong)CONCAT31(uVar5,bVar9) = *(char *)(ulonglong)CONCAT31(uVar5,bVar9) + bVar9;
    bVar9 = bVar9 + cVar6;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9);
    *piVar4 = *piVar4 + (int)puVar3;
    *pcVar11 = *pcVar11 + (bVar9 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar9));
    pcVar11 = (char *)(CONCAT62(uVar18,CONCAT11(cVar17,cVar16)) + (longlong)puVar3 * 2);
    *pcVar11 = *pcVar11 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

