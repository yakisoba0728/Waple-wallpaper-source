// Function: FUN_1404b6790
// Addr: 1404b6790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b67c9) overlaps instruction at (ram,0x0001404b67c6)
    */

void FUN_1404b6790(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined3 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint *in_RAX;
  char *pcVar10;
  byte bVar12;
  char unaff_BL;
  byte bVar13;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte in_CF;
  bool bVar14;
  bool in_PF;
  undefined1 auStack_8 [8];
  int *piVar9;
  uint *puVar11;
  
  bVar13 = (byte)auStack_8;
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  if (!in_PF) {
    pbVar1 = (byte *)(unaff_RBP + 0x7a);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar12;
    iVar7 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar3,bVar12);
    cVar5 = (char)iVar7;
    uVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(0x24,cVar5));
    *param_1 = *param_1 + bVar13;
    *unaff_RSI = *unaff_RSI + cVar5;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar5;
    uVar4 = (undefined3)(uVar8 >> 8);
    cVar5 = in(5);
    piVar9 = (int *)(ulonglong)CONCAT31(uVar4,cVar5);
    *(char *)piVar9 = (char)*piVar9 + cVar5;
    if ((char)*piVar9 == '\0') {
      pbVar1 = (byte *)(unaff_RBP + 0x7a);
      bVar14 = CARRY1(*pbVar1,bVar12);
      *pbVar1 = *pbVar1 + bVar12;
      goto code_r0x0001404b67b2;
    }
    *(char *)piVar9 = (char)*piVar9 + cVar5;
    in_RAX = (uint *)((ulonglong)CONCAT31(uVar4,cVar5) ^ 0xf);
    pbVar1 = (byte *)((longlong)in_RAX + 0x7a);
    in_CF = CARRY1(*pbVar1,(byte)param_2);
    *pbVar1 = *pbVar1 + (byte)param_2;
  }
  uVar8 = (uint)in_RAX - *in_RAX;
  bVar14 = (uint)in_RAX < *in_RAX || uVar8 < in_CF;
  uVar8 = uVar8 - in_CF;
  piVar9 = (int *)(ulonglong)uVar8;
  if (uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404b67b2:
  iVar7 = ((int)piVar9 - *piVar9) - (uint)bVar14;
  uVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(0x24,(char)iVar7));
  puVar11 = (uint *)(ulonglong)uVar8;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar13;
  *(char *)puVar11 = ((char)*puVar11 - (char)param_1) - CARRY1(bVar3,bVar13);
  *(char *)puVar11 = (char)*puVar11 + unaff_BL;
  if ((char)*puVar11 == '\0') {
    uVar6 = in(7);
    puVar11 = (uint *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),uVar6);
  }
  uVar8 = (uint)puVar11 | *puVar11 | 0x7e40434;
  pcVar10 = (char *)(ulonglong)uVar8;
  pcVar2 = pcVar10 + -0x29ffe484;
  cVar5 = *pcVar2;
  *pcVar2 = *pcVar2 + bVar12;
  if (SCARRY1(cVar5,bVar12) == *pcVar2 < '\0') {
    *pcVar10 = *pcVar10 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = uVar8 | (uint)auStack_8;
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

