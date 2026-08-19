// Function: FUN_1404b67b0
// Addr: 1404b67b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b67c9) overlaps instruction at (ram,0x0001404b67c6)
    */

void FUN_1404b67b0(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int *in_RAX;
  char cVar9;
  char unaff_BL;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  byte in_CF;
  bool in_ZF;
  char *pcVar7;
  uint *puVar8;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = ((int)in_RAX - *in_RAX) - (uint)in_CF;
  uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(0x24,(char)iVar5));
  puVar8 = (uint *)(ulonglong)uVar6;
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)unaff_ESP;
  *(char *)puVar8 = ((char)*puVar8 - (char)param_1) - CARRY1(bVar2,(byte)unaff_ESP);
  *(char *)puVar8 = (char)*puVar8 + unaff_BL;
  if ((char)*puVar8 == '\0') {
    uVar4 = in(7);
    puVar8 = (uint *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar4);
  }
  *(char *)CONCAT44(unaff_00000024,unaff_ESP) =
       *(char *)CONCAT44(unaff_00000024,unaff_ESP) + (char)param_2;
  uVar6 = (uint)puVar8 | *puVar8 | 0x7e40434;
  pcVar7 = (char *)(ulonglong)uVar6;
  pcVar1 = pcVar7 + -0x29ffe484;
  cVar3 = *pcVar1;
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar9;
  if (SCARRY1(cVar3,cVar9) == *pcVar1 < '\0') {
    *pcVar7 = *pcVar7 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = uVar6 | unaff_ESP;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

