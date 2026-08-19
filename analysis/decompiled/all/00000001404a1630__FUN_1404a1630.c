// Function: FUN_1404a1630
// Addr: 1404a1630
// Size: 1 bytes


void FUN_1404a1630(char *param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_RAX;
  uint *puVar6;
  char *pcVar7;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  char cVar8;
  
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  uVar4 = ((uint)puVar6 | *puVar6) + 0x50000834;
  out(3,(char)uVar4);
  *(char *)(unaff_RDI + -0x1a) = *(char *)(unaff_RDI + -0x1a) + unaff_BH;
  iVar5 = uVar4 + *(uint *)(ulonglong)uVar4 + 0x1421004a +
          (uint)CARRY4(uVar4,*(uint *)(ulonglong)uVar4);
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + -0xc) + 0x7f000a54;
  cVar3 = (char)iVar5;
  out(3,cVar3);
  cVar8 = (char)((uint)iVar5 >> 8) + (char)param_1;
  pcVar7 = (char *)(ulonglong)CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar8,cVar3));
  out(3,cVar3);
  pcVar1 = (char *)(unaff_RBP + 0x4a + param_2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + cVar8;
  *pcVar7 = *pcVar7 + cVar3;
  *(char *)(unaff_RDI + -0x1a) = *(char *)(unaff_RDI + -0x1a) + unaff_BH;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

