// Function: FUN_1404a76c4
// Addr: 1404a76c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a76c4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined3 uVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  char *in_RAX;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  ulonglong uVar16;
  char cVar17;
  char cVar18;
  undefined6 uVar19;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar18 = (char)((ulonglong)param_2 >> 8);
  cVar17 = (char)param_2;
  *(uint *)(in_RAX + param_2) = *(uint *)(in_RAX + param_2) & (uint)in_RAX;
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar13 = (char *)func_0x0001456b7723();
  cVar6 = (char)pcVar13 + *pcVar13;
  uVar11 = (uint)param_1;
  *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) & uVar11;
  unaff_RSI[-0x7bfff5df] = unaff_RSI[-0x7bfff5df] + cVar6 + '4';
  *(undefined1 *)(longlong)(int)uVar11 = *(undefined1 *)(longlong)(int)uVar11;
  uVar11 = (int)CONCAT71((int7)((ulonglong)pcVar13 >> 8),cVar6) + 0x94050236;
  uVar5 = (undefined3)(uVar11 >> 8);
  bVar7 = (byte)uVar11 + *(byte *)(ulonglong)uVar11;
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (char)(uVar11 >> 8) +
       CARRY1((byte)uVar11,*(byte *)(ulonglong)uVar11);
  bVar7 = bVar7 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar7);
  bVar10 = *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  unaff_RDI[0x421004a] = unaff_RDI[0x421004a] + bVar7;
  cVar6 = bVar7 + *(char *)(ulonglong)CONCAT31(uVar5,bVar7) + '4';
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar5,cVar6);
  *pcVar13 = *pcVar13 + cVar6;
  uVar11 = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & bVar10) &
           *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  pcVar13[0x23] = pcVar13[0x23] + (char)(uVar11 >> 8);
  *unaff_RDI = *unaff_RSI;
  pcVar13 = (char *)func_0x0001406b775f();
  *pcVar13 = *pcVar13 + (char)pcVar13;
  uVar11 = uVar11 & *(uint *)CONCAT62(uVar19,CONCAT11(cVar18,cVar17));
  uVar16 = (ulonglong)uVar11;
  pcVar13[0x23] = pcVar13[0x23] + (char)(uVar11 >> 8);
  piVar4 = (int *)(unaff_RDI + 2);
  puVar3 = unaff_RSI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  piVar14 = (int *)func_0x0001484b776f();
  uVar11 = (int)piVar14 + *piVar14;
  pbVar15 = (byte *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + 0x6002e004);
  bVar10 = (byte)uVar11;
  *pbVar15 = *pbVar15 | bVar10;
  *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + bVar10;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar11;
  puVar1 = (undefined1 *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + uVar16);
  *puVar1 = *puVar1;
  pcVar13 = (char *)(uVar16 - 1);
  uVar5 = (undefined3)(uVar11 >> 8);
  cVar6 = (char)((ulonglong)pcVar13 >> 8);
  if (pcVar13 == (char *)0x0) {
    uVar12 = CONCAT31(uVar5,bVar10 | *(byte *)(ulonglong)uVar11);
    if ((bVar10 | *(byte *)(ulonglong)uVar11) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar11 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar8 = in(CONCAT11(cVar18,cVar17));
    uVar11 = CONCAT31(uVar5,uVar8) & 0xffffff0a;
    pcVar2 = (char *)((longlong)puVar3 * 3 + 0x4a);
    *pcVar2 = *pcVar2 + cVar18;
    *pcVar13 = *pcVar13 + (char)(uVar11 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
    *pcVar13 = *pcVar13;
    uVar11 = (uVar11 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar10 = (byte)uVar11 | *(byte *)(ulonglong)uVar11;
    uVar12 = CONCAT31((int3)(uVar11 >> 8),bVar10);
    if (bVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar13 = *pcVar13 + (char)(uVar11 >> 8);
  }
  uVar12 = uVar12 & 0x769c000a;
  *pcVar13 = *pcVar13 + (char)&stack0xfffffffffffffff8;
  cVar9 = (char)uVar12;
  *(char *)(ulonglong)uVar12 = *(char *)(ulonglong)uVar12 + cVar9;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar6;
  *pcVar13 = *pcVar13 + (char)&stack0xfffffffffffffff8;
  uVar11 = CONCAT31((int3)(CONCAT22((short)(uVar12 >> 0x10),CONCAT11(cVar6,cVar9)) >> 8),cVar9) +
           0x34050002;
  pbVar15 = (byte *)(ulonglong)uVar11;
  *pbVar15 = *pbVar15 | (byte)uVar11;
  pcVar13 = (char *)(uVar16 - 2);
  if (pcVar13 == (char *)0x0 || *pbVar15 == 0) {
    uVar5 = (undefined3)(uVar11 >> 8);
    bVar10 = (byte)uVar11 | *pbVar15;
    *piVar4 = *piVar4 + (int)puVar3;
    bVar10 = bVar10 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar10);
    cVar6 = (char)(uVar11 >> 8);
    *pcVar13 = *pcVar13 + cVar6;
    *(char *)(ulonglong)CONCAT31(uVar5,bVar10) = *(char *)(ulonglong)CONCAT31(uVar5,bVar10) + bVar10
    ;
    bVar10 = bVar10 + cVar6;
    bVar10 = bVar10 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar10);
    *piVar4 = *piVar4 + (int)puVar3;
    *pcVar13 = *pcVar13 + (bVar10 | *(byte *)(ulonglong)CONCAT31(uVar5,bVar10));
    pcVar13 = (char *)(CONCAT62(uVar19,CONCAT11(cVar18,cVar17)) + (longlong)puVar3 * 2);
    *pcVar13 = *pcVar13 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

