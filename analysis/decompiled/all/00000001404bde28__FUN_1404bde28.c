// Function: FUN_1404bde28
// Addr: 1404bde28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bdeea) overlaps instruction at (ram,0x0001404bdee7)
    */

void FUN_1404bde28(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar9;
  byte bVar10;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  char cVar12;
  undefined4 unaff_ESP;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool in_OF;
  uint *puVar8;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) * 8 + 0xb01004b);
    *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RSI[-0x7f] = unaff_RSI[-0x7f] + (char)param_1;
  puVar7 = (undefined1 *)(ulonglong)(in_EAX & 0x4bdd8800);
  *param_1 = *param_1 + (char)((in_EAX & 0x4bdd8800) >> 8);
  *param_2 = *param_2;
  *puVar7 = *puVar7;
  pcVar2 = (char *)((longlong)puVar7 * 5 + 0x25);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((longlong)puVar7 * 5 + 0x25);
  *pcVar2 = *pcVar2 + cVar11;
  puVar7[-0x23] = puVar7[-0x23] + cVar11;
  cVar12 = (char)unaff_ESP;
  *param_4 = *param_4 + cVar12;
  *puVar7 = *puVar7;
  puVar7[-0x80] = puVar7[-0x80] + (char)param_2;
  uVar4 = in_EAX & 0x1800800;
  pcVar2 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 8);
  cVar9 = (char)(uVar4 >> 8);
  *pcVar2 = *pcVar2 + cVar9;
  *param_1 = *param_1 + cVar9;
  uVar3 = *(undefined1 *)(ulonglong)uVar4;
  *param_1 = *param_1 + cVar11;
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
  *param_4 = *param_4 + cVar12;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  iVar6 = in((short)param_2);
  *param_4 = *param_4 + cVar12;
  param_1[-0x76e2ffdb] = param_1[-0x76e2ffdb] + (char)param_1;
  uVar4 = iVar6 + 0x74050002U >> 8 & 0x49e4f4;
  puVar7 = (undefined1 *)(ulonglong)(uVar4 << 8);
  cVar9 = (char)uVar4;
  *param_1 = *param_1 + cVar9;
  *puVar7 = *puVar7;
  *puVar7 = *puVar7;
  cVar9 = cVar9 + cVar11;
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

