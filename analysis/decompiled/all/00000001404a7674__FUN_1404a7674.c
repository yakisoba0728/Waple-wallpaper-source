// Function: FUN_1404a7674
// Addr: 1404a7674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a778e) overlaps instruction at (ram,0x0001404a778d)
    */

void FUN_1404a7674(int param_1,int *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined3 uVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  byte *in_RAX;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  char cVar20;
  byte bVar21;
  undefined6 uVar22;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar13;
  
  uVar22 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar21 = (byte)((ulonglong)param_2 >> 8);
  cVar20 = (char)param_2;
  *(undefined1 *)(unaff_RBP + 0x4a) = *(undefined1 *)(unaff_RBP + 0x4a);
  uRam00000001a44f7680 = uRam00000001a44f7680 & (uint)in_RAX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  iVar16 = *param_2;
  bVar11 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar21;
  iVar4 = *param_2;
  pcVar14 = (char *)(unaff_RBP + 0x521004a + (longlong)unaff_RSI * 2);
  *pcVar14 = *pcVar14 + cVar20;
  uVar17 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + *in_RAX);
  uVar12 = uVar17 + 0x33000274;
  pbVar13 = (byte *)(ulonglong)uVar12;
  iVar5 = *param_2;
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + unaff_BH;
  iVar16 = ((((((param_1 - iVar16) - iVar4) - (uint)CARRY1(bVar11,bVar21)) - iVar5) -
            (uint)(0xccfffd8b < uVar17)) - *param_2) - (uint)CARRY1(bVar7,unaff_BH);
  pbVar13[0x21004a75] = pbVar13[0x21004a75] + (char)((uint)iVar16 >> 8);
  *pbVar13 = *pbVar13 + (char)uVar12;
  bVar11 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)iVar16;
  uVar17 = (iVar16 - *param_2) - (uint)CARRY1(bVar11,(byte)iVar16);
  pbVar13 = (byte *)(ulonglong)uVar17;
  bVar11 = *pbVar13;
  bVar7 = (byte)(uVar17 >> 8);
  *pbVar13 = *pbVar13 + bVar7;
  uVar17 = (uVar17 - *param_2) - (uint)CARRY1(bVar11,bVar7);
  pcVar18 = (char *)(ulonglong)uVar17;
  pcVar14 = (char *)(unaff_RBP + 0x4a + (longlong)unaff_RSI * 2);
  *pcVar14 = *pcVar14 + (char)(uVar17 >> 8);
  *pcVar18 = *pcVar18 + (char)(uVar12 >> 8);
  bVar7 = (char)uVar12 + 2;
  pbVar13 = (byte *)(ulonglong)CONCAT31((int3)(uVar12 >> 8),bVar7);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar7;
  bVar11 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar7;
  pcVar18[(longlong)param_2] = pcVar18[(longlong)param_2] - CARRY1(bVar11,bVar7);
  pcVar14 = (char *)func_0x0001446b770f();
  cVar8 = (char)pcVar14 + *pcVar14 + '4';
  pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),cVar8);
  *pcVar14 = *pcVar14 + cVar8;
  pcVar14 = (char *)func_0x0001456b7723();
  cVar8 = (char)pcVar14 + *pcVar14;
  uVar12 = (uint)pcVar18;
  *(uint *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) =
       *(uint *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) & uVar12;
  unaff_RSI[-0x7bfff5df] = unaff_RSI[-0x7bfff5df] + cVar8 + '4';
  *(undefined1 *)(longlong)(int)uVar12 = *(undefined1 *)(longlong)(int)uVar12;
  uVar12 = (int)CONCAT71((int7)((ulonglong)pcVar14 >> 8),cVar8) + 0x94050236;
  uVar6 = (undefined3)(uVar12 >> 8);
  bVar7 = (byte)uVar12 + *(byte *)(ulonglong)uVar12;
  *(char *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) =
       *(char *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) + (char)(uVar12 >> 8) +
       CARRY1((byte)uVar12,*(byte *)(ulonglong)uVar12);
  bVar7 = bVar7 | *(byte *)(ulonglong)CONCAT31(uVar6,bVar7);
  bVar11 = *(byte *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20));
  unaff_RDI[0x421004a] = unaff_RDI[0x421004a] + bVar7;
  cVar8 = bVar7 + *(char *)(ulonglong)CONCAT31(uVar6,bVar7) + '4';
  pcVar14 = (char *)(ulonglong)CONCAT31(uVar6,cVar8);
  *pcVar14 = *pcVar14 + cVar8;
  uVar12 = (uint)CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)pcVar18 & bVar11) &
           *(uint *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20));
  pcVar14[0x23] = pcVar14[0x23] + (char)(uVar12 >> 8);
  *unaff_RDI = *unaff_RSI;
  pcVar14 = (char *)func_0x0001406b775f();
  *pcVar14 = *pcVar14 + (char)pcVar14;
  uVar12 = uVar12 & *(uint *)CONCAT62(uVar22,CONCAT11(bVar21,cVar20));
  uVar19 = (ulonglong)uVar12;
  pcVar14[0x23] = pcVar14[0x23] + (char)(uVar12 >> 8);
  pbVar3 = unaff_RDI + 2;
  pbVar2 = unaff_RSI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  piVar15 = (int *)func_0x0001484b776f();
  uVar12 = (int)piVar15 + *piVar15;
  pbVar13 = (byte *)(CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) + 0x6002e004);
  bVar11 = (byte)uVar12;
  *pbVar13 = *pbVar13 | bVar11;
  *(char *)(ulonglong)uVar12 = *(char *)(ulonglong)uVar12 + bVar11;
  uRam00000001744f7738 = uRam00000001744f7738 & uVar12;
  puVar1 = (undefined1 *)(CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) + uVar19);
  *puVar1 = *puVar1;
  pcVar14 = (char *)(uVar19 - 1);
  uVar6 = (undefined3)(uVar12 >> 8);
  cVar8 = (char)((ulonglong)pcVar14 >> 8);
  if (pcVar14 == (char *)0x0) {
    uVar17 = CONCAT31(uVar6,bVar11 | *(byte *)(ulonglong)uVar12);
    if ((bVar11 | *(byte *)(ulonglong)uVar12) != 0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)(uVar12 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar9 = in(CONCAT11(bVar21,cVar20));
    uVar12 = CONCAT31(uVar6,uVar9) & 0xffffff0a;
    pcVar18 = (char *)((longlong)pbVar2 * 3 + 0x4a);
    *pcVar18 = *pcVar18 + bVar21;
    *pcVar14 = *pcVar14 + (char)(uVar12 >> 8);
    *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar8;
    *pcVar14 = *pcVar14;
    uVar12 = (uVar12 + 0x74050002 | 0xa24ec00) + 0xd4050002;
    verw();
    bVar11 = (byte)uVar12 | *(byte *)(ulonglong)uVar12;
    uVar17 = CONCAT31((int3)(uVar12 >> 8),bVar11);
    if (bVar11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar14 = *pcVar14 + (char)(uVar12 >> 8);
  }
  uVar17 = uVar17 & 0x769c000a;
  *pcVar14 = *pcVar14 + (char)&stack0xfffffffffffffff8;
  cVar10 = (char)uVar17;
  *(char *)(ulonglong)uVar17 = *(char *)(ulonglong)uVar17 + cVar10;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar8;
  *pcVar14 = *pcVar14 + (char)&stack0xfffffffffffffff8;
  uVar12 = CONCAT31((int3)(CONCAT22((short)(uVar17 >> 0x10),CONCAT11(cVar8,cVar10)) >> 8),cVar10) +
           0x34050002;
  pbVar13 = (byte *)(ulonglong)uVar12;
  *pbVar13 = *pbVar13 | (byte)uVar12;
  pcVar14 = (char *)(uVar19 - 2);
  if (pcVar14 == (char *)0x0 || *pbVar13 == 0) {
    uVar6 = (undefined3)(uVar12 >> 8);
    bVar11 = (byte)uVar12 | *pbVar13;
    *(int *)pbVar3 = *(int *)pbVar3 + (int)pbVar2;
    bVar11 = bVar11 | *(byte *)(ulonglong)CONCAT31(uVar6,bVar11);
    cVar8 = (char)(uVar12 >> 8);
    *pcVar14 = *pcVar14 + cVar8;
    *(char *)(ulonglong)CONCAT31(uVar6,bVar11) = *(char *)(ulonglong)CONCAT31(uVar6,bVar11) + bVar11
    ;
    bVar11 = bVar11 + cVar8;
    bVar11 = bVar11 | *(byte *)(ulonglong)CONCAT31(uVar6,bVar11);
    *(int *)pbVar3 = *(int *)pbVar3 + (int)pbVar2;
    *pcVar14 = *pcVar14 + (bVar11 | *(byte *)(ulonglong)CONCAT31(uVar6,bVar11));
    pcVar14 = (char *)(CONCAT62(uVar22,CONCAT11(bVar21,cVar20)) + (longlong)pbVar2 * 2);
    *pcVar14 = *pcVar14 + cVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

