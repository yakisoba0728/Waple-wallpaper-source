// Function: FUN_1404a6574
// Addr: 1404a6574
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a65d4) overlaps instruction at (ram,0x0001404a65d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a65cd) */
/* WARNING: Removing unreachable block (ram,0x0001404a65bd) */

void FUN_1404a6574(byte *param_1,int param_2)

{
  int iVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar10;
  undefined8 in_RAX;
  undefined6 uVar11;
  uint *puVar8;
  char *pcVar9;
  uint unaff_EBX;
  uint unaff_ESI;
  byte *unaff_RDI;
  bool bVar12;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  bVar3 = (byte)in_RAX;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar10 = (byte)((ulonglong)in_RAX >> 8) | bVar3;
  puVar8 = (uint *)CONCAT71((int7)(CONCAT62(uVar11,CONCAT11(bVar10,bVar3)) >> 8),bVar3);
  if (param_1 == (byte *)0x0) {
    bVar12 = CARRY4(uRam00000001416765c8,unaff_EBX);
    uRam00000001416765c8 = uRam00000001416765c8 + unaff_EBX;
  }
  else {
    uVar5 = (uint)puVar8;
    *puVar8 = *puVar8 | uVar5;
    *puVar8 = *puVar8 | uVar5;
    *puVar8 = *puVar8 & uVar5;
    *(byte *)puVar8 = (char)*puVar8 + bVar3;
    if (param_1 == (byte *)0x0) {
      puVar8[2] = puVar8[2] | unaff_ESI;
      halt_baddata();
    }
    *puVar8 = *puVar8 | uVar5;
    *puVar8 = *puVar8 | uVar5;
    *puVar8 = *puVar8 & uVar5;
    uVar5 = (uint)CONCAT62(uVar11,CONCAT11(bVar10 * '\x02',bVar3 + (char)*puVar8)) | 0x93ed000;
    unaff_EBX = (uint)(byte)((char)unaff_EBX + (char)(uVar5 >> 8));
    *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
    pcVar9 = (char *)((ulonglong)uVar5 ^ 0x12);
    *param_1 = *param_1;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    uVar2 = (undefined3)(uVar5 >> 8);
    cVar4 = (char)pcVar9 + (byte)param_2;
    uVar5 = CONCAT31(uVar2,cVar4);
    puVar8 = (uint *)(ulonglong)uVar5;
    *puVar8 = *puVar8 | uVar5;
    if (param_1 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar8 = *puVar8 | uVar5;
    uVar7 = CONCAT31(uVar2,cVar4) ^ 0x12;
    bVar3 = *param_1;
    *param_1 = *param_1 + (byte)uVar7;
    uVar5 = (uint)CARRY1(bVar3,(byte)uVar7);
    bVar12 = uVar7 < 0x11d000a || uVar7 + 0xfee2fff6 < uVar5;
    puVar8 = (uint *)(ulonglong)((uVar7 + 0xfee2fff6) - uVar5);
  }
  uVar5 = (uint)puVar8 + *puVar8;
  iVar6 = uVar5 + bVar12;
  uVar5 = (uint)(CARRY4((uint)puVar8,*puVar8) || CARRY4(uVar5,(uint)bVar12));
  iVar1 = iVar6 + unaff_ESI;
  uVar7 = iVar1 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  pavgb(in_MM1_Ba,(char)uRam000000014a0a7199);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a7199 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a7199 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a7199 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a7199 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a7199 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a7199 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a7199 >> 0x38));
  if (SCARRY4(iVar6,unaff_ESI) == SCARRY4(iVar1,uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)unaff_EBX;
  *(int *)unaff_RDI = *(int *)unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  cRam000000014a2a71cd = cRam000000014a2a71cd + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  param_1[CONCAT31((int3)(uVar7 >> 8),
                   ((char)uVar7 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar7 + 1)))] =
       param_1[CONCAT31((int3)(uVar7 >> 8),
                        ((char)uVar7 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar7 + 1)))
              ] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

