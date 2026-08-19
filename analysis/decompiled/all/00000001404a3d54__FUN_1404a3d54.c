// Function: FUN_1404a3d54
// Addr: 1404a3d54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a3d85) overlaps instruction at (ram,0x0001404a3d83)
    */

void FUN_1404a3d54(char *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar5;
  char cVar6;
  char *in_RAX;
  char cVar7;
  char cVar8;
  char *pcVar10;
  int *piVar11;
  char cVar12;
  char cVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  longlong unaff_RDI;
  bool bVar14;
  longlong unaff_retaddr;
  byte bVar4;
  longlong lVar9;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar6;
  cVar3 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar3;
  cVar7 = (char)param_1 + cVar13;
  lVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar7);
  pcVar10 = (char *)(lVar9 + -1);
  if (pcVar10 == (char *)0x0 || cVar7 == '\0') {
    *param_2 = *param_2 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar10 = *pcVar10 + cVar6;
  *in_RAX = *in_RAX + cVar3;
  cVar7 = unaff_BH + cVar12;
  pcVar10 = (char *)(lVar9 + -2);
  if (pcVar10 == (char *)0x0 || cVar7 == '\0') {
    cVar8 = (char)pcVar10 + cVar13;
    pcVar10 = (char *)(CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar8) + -1);
    if (pcVar10 == (char *)0x0 || cVar8 == '\0') {
      in_RAX[0x3c] = in_RAX[0x3c] + cVar3;
      *pcVar10 = *pcVar10 + (char)unaff_retaddr;
    }
  }
  else {
    *pcVar10 = *pcVar10 + cVar6;
  }
  *in_RAX = *in_RAX + cVar3;
  bVar1 = cVar3 * '\x02';
  piVar11 = (int *)(pcVar10 + -1);
  if (piVar11 == (int *)0x0 || bVar1 == 0) {
    cVar7 = cVar7 + cVar12;
    piVar11 = (int *)(pcVar10 + -2);
    if (piVar11 == (int *)0x0 || cVar7 == '\0') {
      *(char *)(unaff_retaddr + unaff_RDI) = *(char *)(unaff_retaddr + unaff_RDI) + cVar13;
      *(byte *)piVar11 = (char)*piVar11 + bVar1;
    }
  }
  else {
    *(byte *)piVar11 = (char)*piVar11 + bVar1;
  }
  bVar4 = *param_2;
  *param_2 = *param_2 + (char)piVar11;
  *piVar11 = *piVar11 + CONCAT22(unaff_0000001a,CONCAT11(cVar7,unaff_BL));
  *(char *)piVar11 = (char)*piVar11 + cVar6;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 | bVar4) ^ 0x54350008;
  bVar14 = uVar5 < *(uint *)(ulonglong)uVar5;
  iVar2 = uVar5 - *(uint *)(ulonglong)uVar5;
  bVar4 = (byte)iVar2;
  bVar1 = bVar4 + 0x74;
  cVar3 = bVar1 + bVar14;
  pcVar10 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),cVar3);
  *pcVar10 = (*pcVar10 - cVar3) - (0x8b < bVar4 || CARRY1(bVar1,bVar14));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

