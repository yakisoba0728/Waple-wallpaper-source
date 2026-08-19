// Function: FUN_1404a6560
// Addr: 1404a6560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a65d4) overlaps instruction at (ram,0x0001404a65d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a65cd) */
/* WARNING: Removing unreachable block (ram,0x0001404a65bd) */

void FUN_1404a6560(byte *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar12;
  uint *in_RAX;
  uint *puVar9;
  char *pcVar10;
  undefined7 uVar13;
  ulonglong uVar11;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar14;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  uVar5 = (uint)in_RAX;
  *in_RAX = *in_RAX | uVar5;
  if (param_1 != (byte *)0x0) {
    *in_RAX = *in_RAX | uVar5;
    *param_1 = *param_1;
    iVar1 = (uVar5 ^ 0x12) + 0xbe2fffc;
    bVar3 = (byte)iVar1;
    uVar2 = (undefined2)((uint)iVar1 >> 0x10);
    bVar12 = (byte)((uint)iVar1 >> 8) | bVar3;
    uVar5 = CONCAT31((int3)(CONCAT22(uVar2,CONCAT11(bVar12,bVar3)) >> 8),bVar3);
    puVar9 = (uint *)(ulonglong)uVar5;
    if (param_1 == (byte *)0x0) {
      bVar14 = CARRY4(uRam00000001416765c8,unaff_EBX);
      uRam00000001416765c8 = uRam00000001416765c8 + unaff_EBX;
      goto code_r0x0001404a65be;
    }
    *puVar9 = *puVar9 | uVar5;
    *puVar9 = *puVar9 | uVar5;
    *puVar9 = *puVar9 & uVar5;
    *(byte *)puVar9 = (char)*puVar9 + bVar3;
    if (param_1 == (byte *)0x0) {
      puVar9[2] = puVar9[2] | unaff_ESI;
      halt_baddata();
    }
    *puVar9 = *puVar9 | uVar5;
    *puVar9 = *puVar9 | uVar5;
    *puVar9 = *puVar9 & uVar5;
    uVar5 = CONCAT22(uVar2,CONCAT11(bVar12 * '\x02',bVar3 + (char)*puVar9)) | 0x93ed000;
    in_RAX = (uint *)(ulonglong)uVar5;
    unaff_EBX = (uint)(byte)((char)unaff_EBX + (char)(uVar5 >> 8));
    *in_RAX = *in_RAX | uVar5;
  }
  pcVar10 = (char *)((ulonglong)in_RAX ^ 0x12);
  *param_1 = *param_1;
  *pcVar10 = *pcVar10 + (char)pcVar10;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = (char)pcVar10 + (byte)param_2;
  puVar9 = (uint *)CONCAT71(uVar13,cVar4);
  *puVar9 = *puVar9 | (uint)puVar9;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar9 = *puVar9 | (uint)puVar9;
  uVar11 = CONCAT71(uVar13,cVar4) ^ 0x12;
  bVar3 = *param_1;
  bVar12 = (byte)uVar11;
  *param_1 = *param_1 + bVar12;
  uVar5 = (uint)CARRY1(bVar3,bVar12);
  uVar6 = (uint)uVar11;
  uVar8 = uVar6 + 0xfee2fff6;
  bVar14 = uVar6 < 0x11d000a || uVar8 < uVar5;
  puVar9 = (uint *)(ulonglong)(uVar8 - uVar5);
code_r0x0001404a65be:
  uVar5 = (uint)puVar9 + *puVar9;
  iVar7 = uVar5 + bVar14;
  uVar5 = (uint)(CARRY4((uint)puVar9,*puVar9) || CARRY4(uVar5,(uint)bVar14));
  iVar1 = iVar7 + unaff_ESI;
  uVar8 = iVar1 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  pavgb(in_MM1_Ba,(char)uRam000000014a0a7199);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a7199 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a7199 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a7199 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a7199 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a7199 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a7199 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a7199 >> 0x38));
  if (SCARRY4(iVar7,unaff_ESI) == SCARRY4(iVar1,uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)unaff_EBX;
  *(int *)unaff_RDI = *(int *)unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  cRam000000014a2a71cd = cRam000000014a2a71cd + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  param_1[CONCAT31((int3)(uVar8 >> 8),
                   ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))] =
       param_1[CONCAT31((int3)(uVar8 >> 8),
                        ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))
              ] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

