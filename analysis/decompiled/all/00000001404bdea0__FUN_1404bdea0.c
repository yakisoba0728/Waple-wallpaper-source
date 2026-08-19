// Function: FUN_1404bdea0
// Addr: 1404bdea0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bdeea) overlaps instruction at (ram,0x0001404bdee7)
    */

void FUN_1404bdea0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar9;
  byte bVar10;
  uint *in_RAX;
  undefined1 *puVar7;
  char cVar11;
  char cVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  char cVar13;
  undefined4 unaff_ESP;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  uint *puVar8;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar9 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar9;
  if ((char)*in_RAX == '\0') {
    uVar4 = *in_RAX;
    *(char *)in_RAX = (char)*in_RAX + cVar9;
    if (!SCARRY1((char)uVar4,cVar9)) {
      pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) * 8 + 0xb01004b);
      *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RSI[-0x7f] = unaff_RSI[-0x7f] + cVar11;
    uVar4 = (uint)in_RAX & 0x4bdd8800;
    in_RAX = (uint *)(ulonglong)uVar4;
    *param_1 = *param_1 + (char)(uVar4 >> 8);
  }
  puVar7 = (undefined1 *)(ulonglong)((uint)in_RAX & 0x25814e00);
  puVar7[0x21004bdd] = puVar7[0x21004bdd] + cVar11;
  *param_2 = *param_2;
  *puVar7 = *puVar7;
  pcVar2 = (char *)((longlong)puVar7 * 5 + 0x25);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((longlong)puVar7 * 5 + 0x25);
  *pcVar2 = *pcVar2 + cVar12;
  puVar7[-0x23] = puVar7[-0x23] + cVar12;
  cVar13 = (char)unaff_ESP;
  *param_4 = *param_4 + cVar13;
  *puVar7 = *puVar7;
  puVar7[-0x80] = puVar7[-0x80] + (char)param_2;
  uVar4 = (uint)in_RAX & 0x25804c00;
  pcVar2 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 8);
  cVar9 = (char)(uVar4 >> 8);
  *pcVar2 = *pcVar2 + cVar9;
  *param_1 = *param_1 + cVar9;
  uVar3 = *(undefined1 *)(ulonglong)uVar4;
  *param_1 = *param_1 + cVar12;
  uVar5 = (uint)(short)CONCAT31((int3)(uVar4 >> 8),uVar3);
  puVar8 = (uint *)(ulonglong)uVar5;
  uVar4 = *puVar8;
  *puVar8 = *puVar8 + uVar5;
  iVar6 = (uVar5 + 0xf0fffd78) - (uint)CARRY4(uVar4,uVar5);
  if (iVar6 < 0) {
    pbVar1 = (byte *)(unaff_RBP + -0x7859ffdb);
    *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
  }
  else {
    cRam00000001004be355 = cRam00000001004be355 + (char)iVar6;
  }
  uVar4 = in((short)param_2);
  *param_4 = *param_4 + cVar13;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  iVar6 = in((short)param_2);
  *param_4 = *param_4 + cVar13;
  param_1[-0x76e2ffdb] = param_1[-0x76e2ffdb] + cVar11;
  uVar4 = iVar6 + 0x74050002U >> 8 & 0x49e4f4;
  puVar7 = (undefined1 *)(ulonglong)(uVar4 << 8);
  cVar9 = (char)uVar4;
  *param_1 = *param_1 + cVar9;
  *puVar7 = *puVar7;
  *puVar7 = *puVar7;
  cVar9 = cVar9 + cVar12;
  uVar3 = in(0x49);
  uRam0000000165d4fc27 = unaff_ESP;
  *param_1 = *param_1 + cVar9;
  bVar10 = (byte)(CONCAT11(cVar9,uVar3) + 0x74050002 >> 8);
  *(byte *)(unaff_RDI + -0x58d7ffdb) = *(byte *)(unaff_RDI + -0x58d7ffdb) & bVar10;
  bVar10 = bVar10 & 0x94;
  *param_1 = *param_1 + bVar10;
  *param_2 = *param_2 + bVar10;
  in(4);
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

