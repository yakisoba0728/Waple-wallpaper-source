// Function: FUN_1404a1650
// Addr: 1404a1650
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a1651) overlaps instruction at (ram,0x0001404a1650)
    */

void FUN_1404a1650(char *param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint *in_RAX;
  char *pcVar5;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char cVar6;
  
  if (in_ZF || in_OF != in_SF) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  out(3,(char)in_RAX);
  *(char *)(unaff_RDI + -0x1a) = *(char *)(unaff_RDI + -0x1a) + unaff_BH;
  iVar4 = (uint)in_RAX + *in_RAX + 0x1421004a + (uint)CARRY4((uint)in_RAX,*in_RAX);
  iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + -0xc) + 0x7f000a54;
  cVar3 = (char)iVar4;
  out(3,cVar3);
  cVar6 = (char)((uint)iVar4 >> 8) + (char)param_1;
  pcVar5 = (char *)(ulonglong)CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(cVar6,cVar3));
  out(3,cVar3);
  pcVar1 = (char *)(unaff_RBP + 0x4a + param_2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + cVar6;
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)(unaff_RDI + -0x1a) = *(char *)(unaff_RDI + -0x1a) + unaff_BH;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

