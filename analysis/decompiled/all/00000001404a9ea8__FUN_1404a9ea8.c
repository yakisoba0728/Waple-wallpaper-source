// Function: FUN_1404a9ea8
// Addr: 1404a9ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a9ed8) overlaps instruction at (ram,0x0001404a9ed7)
    */

void FUN_1404a9ea8(int param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar10;
  int *in_RAX;
  longlong lVar8;
  uint uVar11;
  byte bVar13;
  char cVar14;
  undefined6 uVar15;
  byte *unaff_RBX;
  char cVar16;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool in_OF;
  bool bVar17;
  bool bVar18;
  uint *puStack_8;
  char *pcVar9;
  char *pcVar12;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  cVar5 = (char)in_RAX;
  out((short)param_2,cVar5);
  cVar16 = (char)((uint)param_1 >> 8);
  if (in_OF) {
    out((short)param_2,cVar5);
code_r0x0001404a9eb7:
    bVar17 = SCARRY1(cVar14,cVar16);
    cVar14 = cVar14 + cVar16;
    bVar18 = true;
    if (bVar17) goto code_r0x0001404a9ec9;
    pcVar12 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a + (longlong)unaff_RBX * 4);
    *pcVar12 = *pcVar12 + cVar16;
    *(char *)in_RAX = (char)*in_RAX + cVar5;
  }
  else {
    pcVar12 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a + (longlong)unaff_RBX * 4);
    *pcVar12 = *pcVar12 + cVar16;
    iVar4 = *in_RAX;
    *(char *)in_RAX = (char)*in_RAX + cVar5;
    if (!SCARRY1((char)iVar4,cVar5)) goto code_r0x0001404a9eb7;
  }
  bVar18 = false;
  *(char *)((longlong)in_RAX + 0xd) = *(char *)((longlong)in_RAX + 0xd);
code_r0x0001404a9ec9:
  if (!bVar18) {
    pbVar2 = (byte *)((longlong)in_RAX + 0x1004a9d);
    bVar3 = *pbVar2;
    bVar10 = (byte)((ulonglong)in_RAX >> 8);
    *pbVar2 = *pbVar2 + bVar10;
    uVar11 = param_1 + *in_RAX + (uint)CARRY1(bVar3,bVar10);
    pcVar12 = (char *)(ulonglong)uVar11;
    *unaff_RBX = *unaff_RBX + bVar13;
    puStack_8 = (uint *)((ulonglong)in_RAX ^ 0xf);
    bVar3 = *unaff_RBX;
    *unaff_RBX = *unaff_RBX + bVar13;
    if (CARRY1(bVar3,bVar13)) {
      *pcVar12 = *pcVar12 + bVar13;
      *unaff_RDI = *unaff_RDI + unaff_EBP;
      *(byte *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) =
           *(byte *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) ^ (byte)puStack_8;
      *puStack_8 = *puStack_8 & uVar11;
      lVar8 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                       CONCAT11(bVar10 | bVar13,(byte)puStack_8 + (char)*puStack_8));
      pcVar1 = (char *)(lVar8 + 0x7b);
      *pcVar1 = *pcVar1 + (bVar10 | bVar13);
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + bVar13;
      cVar16 = (char)&puStack_8;
      *pcVar12 = *pcVar12 + cVar16;
      uVar7 = (uint)lVar8 & 0xffffff06 | 0xd7c4500;
      *(char *)(&puStack_8 + unaff_RSI) = *(char *)(&puStack_8 + unaff_RSI) + (char)(uVar7 >> 8);
      cVar5 = in(0x2d);
      uVar7 = CONCAT31((int3)(uVar7 + 0x80034c4 >> 8),cVar5);
      pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
      *pcVar1 = *pcVar1 + cVar5;
      uVar6 = uVar7 | 0xd7c8700;
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + (char)(uVar6 >> 8);
      *pcVar12 = *pcVar12 + cVar16;
      *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar5;
      pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
      *pcVar1 = *pcVar1 + cVar5;
      uVar7 = uVar7 | 0xd7c8700;
      pcVar9 = (char *)(ulonglong)uVar7;
      pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + (char)(uVar7 >> 8);
      *pcVar12 = *pcVar12 + cVar16;
      *pcVar9 = *pcVar9 + (char)uVar11;
      *pcVar9 = *pcVar9 + cVar5;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

