// Function: FUN_1404b6f78
// Addr: 1404b6f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6fb0) overlaps instruction at (ram,0x0001404b6faf)
    */

undefined8 FUN_1404b6f78(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar7;
  uint *in_RAX;
  undefined7 uVar8;
  uint *puVar5;
  byte *pbVar9;
  uint unaff_EBX;
  byte *unaff_RSI;
  bool bVar10;
  undefined1 auStack_8 [8];
  char *pcVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + (char)*in_RAX + (char)param_1;
  bVar10 = CARRY1(bVar2,*(byte *)CONCAT71(uVar8,bVar2));
  bVar2 = bVar2 + *(byte *)CONCAT71(uVar8,bVar2);
  puVar5 = (uint *)CONCAT71(uVar8,bVar2);
  pbVar9 = (byte *)(param_1 + -1);
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  if (pbVar9 == (byte *)0x0 || bVar2 == 0) {
    cVar3 = bVar2 - bVar10;
    if (param_1 != 2 && cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar2 = cVar3 - (bVar2 < bVar10);
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *(char *)CONCAT71(uVar8,bVar2) = *(char *)CONCAT71(uVar8,bVar2) + bVar2;
    cVar3 = bVar2 + bVar7;
    puVar5 = (uint *)CONCAT71(uVar8,cVar3);
    puVar1 = (uint *)((longlong)puVar5 * 2);
    bVar10 = *puVar1 < unaff_EBX || *puVar1 - unaff_EBX < (uint)CARRY1(bVar2,bVar7);
    *puVar1 = (*puVar1 - unaff_EBX) - (uint)CARRY1(bVar2,bVar7);
    pbVar9 = (byte *)(param_1 + -3);
    if (pbVar9 != (byte *)0x0 && *puVar1 == 0) {
      *puVar5 = *puVar5 & (uint)puVar5;
      *(char *)puVar5 = (char)*puVar5 + cVar3;
      *unaff_RSI = *unaff_RSI & (byte)unaff_EBX;
      return CONCAT71(uVar8,cVar3);
    }
  }
  else {
    bVar10 = CARRY1(*pbVar9,bVar7);
    *pbVar9 = *pbVar9 + bVar7;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x21004b6e;
  uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),(char)puVar5 - bVar10) + 0x84232002;
  pcVar6 = (char *)(ulonglong)uVar4;
  *(byte *)((longlong)pcVar6 * 2) = *(byte *)((longlong)pcVar6 * 2) & (byte)unaff_EBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x4b;
  cVar3 = (char)(uVar4 >> 8);
  *pbVar9 = *pbVar9 + cVar3;
  *pcVar6 = *pcVar6 + (char)uVar4;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

