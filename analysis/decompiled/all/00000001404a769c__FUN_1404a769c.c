// Function: FUN_1404a769c
// Addr: 1404a769c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a769c(undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  char *in_RAX;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong uVar16;
  char cVar17;
  char cVar18;
  undefined6 uVar19;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar11;
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar18 = (char)((ulonglong)param_2 >> 8);
  cVar17 = (char)param_2;
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar9 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)param_1;
  uVar14 = ((int)param_1 - *param_2) - (uint)CARRY1(bVar9,(byte)param_1);
  pbVar11 = (byte *)(ulonglong)uVar14;
  bVar9 = *pbVar11;
  bVar5 = (byte)(uVar14 >> 8);
  *pbVar11 = *pbVar11 + bVar5;
  uVar14 = (uVar14 - *param_2) - (uint)CARRY1(bVar9,bVar5);
  pcVar15 = (char *)(ulonglong)uVar14;
  pcVar12 = (char *)(unaff_RBP + 0x4a + (longlong)unaff_RSI * 2);
  *pcVar12 = *pcVar12 + (char)(uVar14 >> 8);
  *pcVar15 = *pcVar15 + (char)((ulonglong)in_RAX >> 8);
  bVar5 = (char)in_RAX + 2;
  pbVar11 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar5;
  bVar9 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  pcVar15[(longlong)param_2] = pcVar15[(longlong)param_2] - CARRY1(bVar9,bVar5);
  pcVar12 = (char *)func_0x0001446b770f();
  cVar6 = (char)pcVar12 + *pcVar12 + '4';
  pcVar12 = (char *)CONCAT71((int7)((ulonglong)pcVar12 >> 8),cVar6);
  *pcVar12 = *pcVar12 + cVar6;
  pcVar12 = (char *)func_0x0001456b7723();
  cVar6 = (char)pcVar12 + *pcVar12;
  uVar14 = (uint)pcVar15;
  *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) & uVar14;
  unaff_RSI[-0x7bfff5df] = unaff_RSI[-0x7bfff5df] + cVar6 + '4';
  *(undefined1 *)(longlong)(int)uVar14 = *(undefined1 *)(longlong)(int)uVar14;
  uVar14 = (int)CONCAT71((int7)((ulonglong)pcVar12 >> 8),cVar6) + 0x94050236;
  uVar4 = (undefined3)(uVar14 >> 8);
  bVar5 = (byte)uVar14 + *(byte *)(ulonglong)uVar14;
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (char)(uVar14 >> 8) +
       CARRY1((byte)uVar14,*(byte *)(ulonglong)uVar14);
  bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar5);
  bVar9 = *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  unaff_RDI[0x421004a] = unaff_RDI[0x421004a] + bVar5;
  cVar6 = bVar5 + *(char *)(ulonglong)CONCAT31(uVar4,bVar5) + '4';
  pcVar12 = (char *)(ulonglong)CONCAT31(uVar4,cVar6);
  *pcVar12 = *pcVar12 + cVar6;
  uVar14 = (uint)CONCAT71((int7)((ulonglong)pcVar15 >> 8),(byte)pcVar15 & bVar9) &
           *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  pcVar12[0x23] = pcVar12[0x23] + (char)(uVar14 >> 8);
  *unaff_RDI = *unaff_RSI;
  pcVar12 = (char *)func_0x0001406b775f();
  *pcVar12 = *pcVar12 + (char)pcVar12;
  uVar14 = uVar14 & *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  uVar16 = (ulonglong)uVar14;
  pcVar12[0x23] = pcVar12[0x23] + (char)(uVar14 >> 8);
  pbVar3 = unaff_RDI + 2;
  pbVar2 = unaff_RSI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  piVar13 = (int *)func_0x0001484b776f();
  uVar14 = (int)piVar13 + *piVar13;
  pbVar11 = (byte *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + 0x6002e004);
  bVar9 = (byte)uVar14;
  *pbVar11 = *pbVar11 | bVar9;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + bVar9;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar14;
  puVar1 = (undefined1 *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + uVar16);
  *puVar1 = *puVar1;
  pcVar12 = (char *)(uVar16 - 1);
  uVar4 = (undefined3)(uVar14 >> 8);
  cVar6 = (char)((ulonglong)pcVar12 >> 8);
  if (pcVar12 == (char *)0x0) {
    uVar10 = CONCAT31(uVar4,bVar9 | *(byte *)(ulonglong)uVar14);
    if ((bVar9 | *(byte *)(ulonglong)uVar14) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar14 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar7 = in(CONCAT11(cVar18,cVar17));
    uVar14 = CONCAT31(uVar4,uVar7) & 0xffffff0a;
    pcVar15 = (char *)((longlong)pbVar2 * 3 + 0x4a);
    *pcVar15 = *pcVar15 + cVar18;
    *pcVar12 = *pcVar12 + (char)(uVar14 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
    *pcVar12 = *pcVar12;
    uVar14 = (uVar14 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar9 = (byte)uVar14 | *(byte *)(ulonglong)uVar14;
    uVar10 = CONCAT31((int3)(uVar14 >> 8),bVar9);
    if (bVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar12 = *pcVar12 + (char)(uVar14 >> 8);
  }
  uVar10 = uVar10 & 0x769c000a;
  *pcVar12 = *pcVar12 + (char)&stack0xfffffffffffffff8;
  cVar8 = (char)uVar10;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar8;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
  *pcVar12 = *pcVar12 + (char)&stack0xfffffffffffffff8;
  uVar14 = CONCAT31((int3)(CONCAT22((short)(uVar10 >> 0x10),CONCAT11(cVar6,cVar8)) >> 8),cVar8) +
           0x34050002;
  pbVar11 = (byte *)(ulonglong)uVar14;
  *pbVar11 = *pbVar11 | (byte)uVar14;
  pcVar12 = (char *)(uVar16 - 2);
  if (pcVar12 == (char *)0x0 || *pbVar11 == 0) {
    uVar4 = (undefined3)(uVar14 >> 8);
    bVar9 = (byte)uVar14 | *pbVar11;
    *(int *)pbVar3 = *(int *)pbVar3 + (int)pbVar2;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9);
    cVar6 = (char)(uVar14 >> 8);
    *pcVar12 = *pcVar12 + cVar6;
    *(char *)(ulonglong)CONCAT31(uVar4,bVar9) = *(char *)(ulonglong)CONCAT31(uVar4,bVar9) + bVar9;
    bVar9 = bVar9 + cVar6;
    bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9);
    *(int *)pbVar3 = *(int *)pbVar3 + (int)pbVar2;
    *pcVar12 = *pcVar12 + (bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9));
    pcVar12 = (char *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (longlong)pbVar2 * 2);
    *pcVar12 = *pcVar12 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

