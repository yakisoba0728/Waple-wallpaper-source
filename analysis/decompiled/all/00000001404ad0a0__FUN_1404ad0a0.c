// Function: FUN_1404ad0a0
// Addr: 1404ad0a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad0a3) overlaps instruction at (ram,0x0001404ad0a2)
    */

void FUN_1404ad0a0(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined7 uVar9;
  int *piVar7;
  char *pcVar8;
  char *in_RAX;
  char cVar10;
  char unaff_BL;
  char *unaff_RDI;
  bool in_ZF;
  
  cVar10 = (char)((ulonglong)param_1 >> 8);
  pcVar8 = in_RAX;
  if (in_ZF) {
    *param_2 = *param_2 | (byte)in_RAX;
    *in_RAX = *in_RAX + (char)param_1;
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    uVar2 = in(0x11);
    piVar7 = (int *)(CONCAT71(uVar9,uVar2) | 0x6c);
    *piVar7 = *piVar7 + (int)piVar7;
    *param_1 = *param_1;
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    piVar7 = (int *)(CONCAT71(uVar9,(char)piVar7) | 0x6c);
    *piVar7 = *piVar7 + (int)piVar7;
    *param_1 = *param_1;
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    pcVar8 = (char *)CONCAT71(uVar9,(char)piVar7 + unaff_BL);
    param_2 = (byte *)0x0;
    unaff_RDI[(longlong)param_1 * 8 + 0x4a] = unaff_RDI[(longlong)param_1 * 8 + 0x4a];
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  }
  *param_1 = *param_1;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  cVar3 = (char)pcVar8 + (char)param_2;
  puVar1 = (undefined1 *)(CONCAT71(uVar9,cVar3) + -0x1c);
  *puVar1 = *puVar1;
  *param_4 = *param_4 + cVar3;
  uVar5 = (uint)CONCAT71(uVar9,cVar3) | 5;
  uVar6 = uVar5 + 0x3600470;
  bVar4 = (byte)uVar6;
  bRam0000000000000000 = bRam0000000000000000 + (char)param_1 ^ bVar4;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + bVar4;
  *(uint *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + uVar6;
  param_1[-0x68] = param_1[-0x68] + bVar4;
  pcVar8 = (char *)(ulonglong)(uVar5 + 0x9e83870);
  *unaff_RDI = *unaff_RDI + cVar10;
  if (-1 < *unaff_RDI) {
    *pcVar8 = *pcVar8 + cVar10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

