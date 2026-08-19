// Function: FUN_1404a7660
// Addr: 1404a7660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a7660(char *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_RAX;
  char *pcVar13;
  int *piVar14;
  char *pcVar15;
  ulonglong uVar16;
  char cVar17;
  char cVar18;
  undefined6 uVar19;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  byte *pbVar12;
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar18 = (char)((ulonglong)param_2 >> 8);
  cVar17 = (char)param_2;
  uVar7 = in((short)param_2);
  *unaff_RDI = uVar7;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  if (in_ZF) {
    *param_1 = *param_1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar15 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & *param_2);
  *pcVar15 = *pcVar15 + cVar6;
  bVar5 = (char)in_RAX + 2;
  pbVar12 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar5;
  bVar9 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar5;
  pcVar15[(longlong)param_2] = pcVar15[(longlong)param_2] - CARRY1(bVar9,bVar5);
  pcVar13 = (char *)func_0x0001446b770f();
  cVar6 = (char)pcVar13 + *pcVar13 + '4';
  pcVar13 = (char *)CONCAT71((int7)((ulonglong)pcVar13 >> 8),cVar6);
  *pcVar13 = *pcVar13 + cVar6;
  pcVar13 = (char *)func_0x0001456b7723();
  cVar6 = (char)pcVar13 + *pcVar13;
  uVar10 = (uint)pcVar15;
  *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) & uVar10;
  unaff_RSI[-0x7bfff5df] = unaff_RSI[-0x7bfff5df] + cVar6 + '4';
  *(undefined1 *)(longlong)(int)uVar10 = *(undefined1 *)(longlong)(int)uVar10;
  uVar10 = (int)CONCAT71((int7)((ulonglong)pcVar13 >> 8),cVar6) + 0x94050236;
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar5 = (byte)uVar10 + *(byte *)(ulonglong)uVar10;
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (char)(uVar10 >> 8) +
       CARRY1((byte)uVar10,*(byte *)(ulonglong)uVar10);
  bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar5);
  bVar9 = *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  unaff_RDI[0x421004b] = unaff_RDI[0x421004b] + bVar5;
  cVar6 = bVar5 + *(char *)(ulonglong)CONCAT31(uVar4,bVar5) + '4';
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar4,cVar6);
  *pcVar13 = *pcVar13 + cVar6;
  uVar10 = (uint)CONCAT71((int7)((ulonglong)pcVar15 >> 8),(byte)pcVar15 & bVar9) &
           *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  pcVar13[0x23] = pcVar13[0x23] + (char)(uVar10 >> 8);
  unaff_RDI[1] = *unaff_RSI;
  pcVar13 = (char *)func_0x0001406b775f();
  *pcVar13 = *pcVar13 + (char)pcVar13;
  uVar10 = uVar10 & *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  uVar16 = (ulonglong)uVar10;
  pcVar13[0x23] = pcVar13[0x23] + (char)(uVar10 >> 8);
  piVar3 = (int *)(unaff_RDI + 3);
  puVar2 = unaff_RSI + 2;
  unaff_RDI[2] = unaff_RSI[1];
  piVar14 = (int *)func_0x0001484b776f();
  uVar10 = (int)piVar14 + *piVar14;
  pbVar12 = (byte *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + 0x6002e004);
  bVar9 = (byte)uVar10;
  *pbVar12 = *pbVar12 | bVar9;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + bVar9;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar10;
  puVar1 = (undefined1 *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + uVar16);
  *puVar1 = *puVar1;
  pcVar13 = (char *)(uVar16 - 1);
  uVar4 = (undefined3)(uVar10 >> 8);
  cVar6 = (char)((ulonglong)pcVar13 >> 8);
  if (pcVar13 == (char *)0x0) {
    uVar11 = CONCAT31(uVar4,bVar9 | *(byte *)(ulonglong)uVar10);
    if ((bVar9 | *(byte *)(ulonglong)uVar10) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar7 = in(CONCAT11(cVar18,cVar17));
    uVar10 = CONCAT31(uVar4,uVar7) & 0xffffff0a;
    pcVar15 = (char *)((longlong)puVar2 * 3 + 0x4a);
    *pcVar15 = *pcVar15 + cVar18;
    *pcVar13 = *pcVar13 + (char)(uVar10 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
    *pcVar13 = *pcVar13;
    uVar10 = (uVar10 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar9 = (byte)uVar10 | *(byte *)(ulonglong)uVar10;
    uVar11 = CONCAT31((int3)(uVar10 >> 8),bVar9);
    if (bVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar13 = *pcVar13 + (char)(uVar10 >> 8);
  }
  uVar11 = uVar11 & 0x769c000a;
  *pcVar13 = *pcVar13 + (char)&stack0xfffffffffffffff8;
  cVar8 = (char)uVar11;
  *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + cVar8;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
  *pcVar13 = *pcVar13 + (char)&stack0xfffffffffffffff8;
  uVar10 = CONCAT31((int3)(CONCAT22((short)(uVar11 >> 0x10),CONCAT11(cVar6,cVar8)) >> 8),cVar8) +
           0x34050002;
  pbVar12 = (byte *)(ulonglong)uVar10;
  *pbVar12 = *pbVar12 | (byte)uVar10;
  pcVar13 = (char *)(uVar16 - 2);
  if (pcVar13 != (char *)0x0 && *pbVar12 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar9 = (byte)uVar10 | *pbVar12;
  *piVar3 = *piVar3 + (int)puVar2;
  bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9);
  cVar6 = (char)(uVar10 >> 8);
  *pcVar13 = *pcVar13 + cVar6;
  *(char *)(ulonglong)CONCAT31(uVar4,bVar9) = *(char *)(ulonglong)CONCAT31(uVar4,bVar9) + bVar9;
  bVar9 = bVar9 + cVar6;
  bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9);
  *piVar3 = *piVar3 + (int)puVar2;
  *pcVar13 = *pcVar13 + (bVar9 | *(byte *)(ulonglong)CONCAT31(uVar4,bVar9));
  pcVar13 = (char *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (longlong)puVar2 * 2);
  *pcVar13 = *pcVar13 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

