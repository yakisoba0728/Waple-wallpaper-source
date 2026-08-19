// Function: FUN_1404b6f88
// Addr: 1404b6f88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6fb0) overlaps instruction at (ram,0x0001404b6faf)
    */

undefined8 FUN_1404b6f88(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar9;
  char *in_RAX;
  char *pcVar11;
  uint unaff_EBX;
  byte *unaff_RSI;
  uint *puVar7;
  char *pcVar8;
  undefined7 uVar10;
  
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = bVar4 + bVar9;
  puVar7 = (uint *)CONCAT71(uVar10,cVar5);
  puVar3 = (uint *)((longlong)puVar7 * 2);
  uVar2 = (uint)CARRY1(bVar4,bVar9);
  uVar6 = *puVar3;
  uVar1 = *puVar3;
  *puVar3 = (uVar1 - unaff_EBX) - uVar2;
  pcVar11 = (char *)(param_1 + -1);
  if (pcVar11 == (char *)0x0 || *puVar3 != 0) {
    uVar6 = (int)CONCAT71(uVar10,cVar5 - (uVar6 < unaff_EBX || uVar1 - unaff_EBX < uVar2)) +
            0x84232002;
    pcVar8 = (char *)(ulonglong)uVar6;
    *(byte *)((longlong)pcVar8 * 2) = *(byte *)((longlong)pcVar8 * 2) & (byte)unaff_EBX;
    cVar5 = (char)(uVar6 >> 8);
    *pcVar11 = *pcVar11 + cVar5;
    *pcVar8 = *pcVar8 + (char)uVar6;
    *pcVar8 = *pcVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 & (uint)puVar7;
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  *unaff_RSI = *unaff_RSI & (byte)unaff_EBX;
  return CONCAT71(uVar10,cVar5);
}

