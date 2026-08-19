// Function: FUN_1404a9e98
// Addr: 1404a9e98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a9ed8) overlaps instruction at (ram,0x0001404a9ed7)
    */

void FUN_1404a9e98(int param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  undefined7 uVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  byte bVar13;
  undefined8 in_RAX;
  longlong lVar11;
  uint uVar14;
  byte bVar16;
  char cVar17;
  undefined6 uVar18;
  byte *unaff_RBX;
  char cVar19;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool bVar20;
  bool bVar21;
  uint *puStack_8;
  char *pcVar12;
  char *pcVar15;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar17 = (char)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar8 = in(4);
  piVar6 = (int *)CONCAT71(uVar5,cVar8);
  piVar2 = piVar6 + -0x47ffca4;
  iVar7 = *piVar2;
  *(byte *)piVar2 = (char)*piVar2 + bVar16;
  cVar19 = (char)((uint)param_1 >> 8);
  if (SCARRY1((char)iVar7,bVar16)) {
    out((short)param_2,cVar8);
code_r0x0001404a9eb7:
    bVar20 = SCARRY1(cVar17,cVar19);
    cVar17 = cVar17 + cVar19;
    bVar21 = true;
    if (bVar20) goto code_r0x0001404a9ec9;
    pcVar15 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a + (longlong)unaff_RBX * 4);
    *pcVar15 = *pcVar15 + cVar19;
    *(char *)piVar6 = (char)*piVar6 + cVar8;
  }
  else {
    pcVar15 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a + (longlong)unaff_RBX * 4);
    *pcVar15 = *pcVar15 + cVar19;
    iVar7 = *piVar6;
    *(char *)piVar6 = (char)*piVar6 + cVar8;
    if (!SCARRY1((char)iVar7,cVar8)) goto code_r0x0001404a9eb7;
  }
  bVar21 = false;
  *(char *)((longlong)piVar6 + 0xd) = *(char *)((longlong)piVar6 + 0xd);
code_r0x0001404a9ec9:
  if (!bVar21) {
    pbVar3 = (byte *)((longlong)piVar6 + 0x1004a9d);
    bVar4 = *pbVar3;
    bVar13 = (byte)((ulonglong)in_RAX >> 8);
    *pbVar3 = *pbVar3 + bVar13;
    uVar14 = param_1 + *piVar6 + (uint)CARRY1(bVar4,bVar13);
    pcVar15 = (char *)(ulonglong)uVar14;
    *unaff_RBX = *unaff_RBX + bVar16;
    puStack_8 = (uint *)(CONCAT71(uVar5,cVar8) ^ 0xf);
    bVar4 = *unaff_RBX;
    *unaff_RBX = *unaff_RBX + bVar16;
    if (CARRY1(bVar4,bVar16)) {
      *pcVar15 = *pcVar15 + bVar16;
      *unaff_RDI = *unaff_RDI + unaff_EBP;
      *(byte *)CONCAT62(uVar18,CONCAT11(cVar17,bVar16)) =
           *(byte *)CONCAT62(uVar18,CONCAT11(cVar17,bVar16)) ^ (byte)puStack_8;
      *puStack_8 = *puStack_8 & uVar14;
      lVar11 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(bVar13 | bVar16,(byte)puStack_8 + (char)*puStack_8));
      pcVar1 = (char *)(lVar11 + 0x7b);
      *pcVar1 = *pcVar1 + (bVar13 | bVar16);
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + bVar16;
      cVar19 = (char)&puStack_8;
      *pcVar15 = *pcVar15 + cVar19;
      uVar10 = (uint)lVar11 & 0xffffff06 | 0xd7c4500;
      *(char *)(&puStack_8 + unaff_RSI) = *(char *)(&puStack_8 + unaff_RSI) + (char)(uVar10 >> 8);
      cVar8 = in(0x2d);
      uVar10 = CONCAT31((int3)(uVar10 + 0x80034c4 >> 8),cVar8);
      pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
      *pcVar1 = *pcVar1 + cVar8;
      uVar9 = uVar10 | 0xd7c8700;
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + (char)(uVar9 >> 8);
      *pcVar15 = *pcVar15 + cVar19;
      *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + cVar8;
      pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
      *pcVar1 = *pcVar1 + cVar8;
      uVar10 = uVar10 | 0xd7c8700;
      pcVar12 = (char *)(ulonglong)uVar10;
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + (char)(uVar10 >> 8);
      *pcVar15 = *pcVar15 + cVar19;
      *pcVar12 = *pcVar12 + (char)uVar14;
      *pcVar12 = *pcVar12 + cVar8;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

