// Function: FUN_1404b8f3c
// Addr: 1404b8f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8fa6) overlaps instruction at (ram,0x0001404b8fa5)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b8ff3) */

void FUN_1404b8f3c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte bVar10;
  undefined8 in_RAX;
  undefined7 uVar11;
  byte *pbVar8;
  uint *puVar9;
  byte bVar14;
  longlong lVar12;
  longlong lVar13;
  char cVar15;
  byte bVar18;
  undefined6 uVar19;
  byte *pbVar17;
  byte unaff_BL;
  char unaff_BH;
  uint unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  bool bVar20;
  bool bVar21;
  int iVar6;
  char *pcVar7;
  char *pcVar16;
  
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + 'P' + in_CF;
  pcVar7 = (char *)CONCAT71(uVar11,cVar3);
  *pcVar7 = *pcVar7 + cVar3;
  *param_1 = *param_1 & (uint)param_2;
  lVar12 = CONCAT71(uVar11,cVar3);
  *(uint *)(unaff_RDI + lVar12) = *(int *)(unaff_RDI + lVar12) + (uint)&stack0x00000000;
  iVar6 = (int)lVar12;
  uVar5 = iVar6 + 0xc0000634;
  pbVar8 = (byte *)(ulonglong)uVar5;
  lVar12 = (longlong)param_1 + -1;
  bVar10 = (byte)param_2;
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)uVar5;
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  if (lVar12 == 0 || uVar5 == 0) {
    bVar21 = (byte)(bVar18 + bVar10) == '\0';
    lVar12 = (longlong)param_1 + -2;
    if (lVar12 == 0 || bVar21) {
      pbVar8[0x210049ed] = pbVar8[0x210049ed] + (char)((ulonglong)lVar12 >> 8);
      uVar5 = iVar6 + 0xa4050636;
      *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar8 = *pbVar8 + cVar3;
    bVar21 = (byte)(bVar18 + bVar10) == '\0';
  }
  cVar4 = bVar18 + bVar10;
  bVar20 = CARRY1(bVar18,bVar10);
  pbVar17 = (byte *)CONCAT62(uVar19,CONCAT11(cVar4,bVar10));
  lVar13 = lVar12 + -1;
  if (lVar13 == 0 || bVar21) {
    unaff_BL = unaff_BL + cVar4;
    lVar13 = lVar12 + -2;
    if (lVar13 != 0 && unaff_BL != 0) {
      bVar20 = false;
      pbVar8 = (byte *)((ulonglong)uVar5 ^ 0x11);
      goto code_r0x0001404b8f91;
    }
    pbVar8[-0x72] = pbVar8[-0x72] + cVar4;
    *param_4 = *param_4;
    *pbVar8 = *pbVar8 + cVar3;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar3 * '\x02');
    pbVar8 = (byte *)(ulonglong)uVar5;
    lVar13 = lVar12 + -3;
    if (lVar13 == 0 || (char)(cVar3 * '\x02') == '\0') {
      pbVar17 = (byte *)CONCAT62(uVar19,CONCAT11(cVar4 + bVar10,bVar10));
      lVar12 = lVar12 + -4;
      if (lVar12 != 0 && (byte)(cVar4 + bVar10) != '\0') {
        halt_baddata();
      }
      pbVar1 = pbVar8 + 0x10049ed;
      bVar18 = *pbVar1;
      bVar14 = (byte)((ulonglong)lVar12 >> 8);
      *pbVar1 = *pbVar1 + bVar14;
      lVar13 = CONCAT71((int7)((ulonglong)lVar12 >> 8),
                        (char)lVar12 + *pbVar8 + CARRY1(bVar18,bVar14));
      bVar20 = CARRY1(*pbVar17,bVar10);
      *pbVar17 = *pbVar17 + bVar10;
      goto code_r0x0001404b8f91;
    }
    pcVar7 = (char *)(ulonglong)(uVar5 + 0x86e6d002);
    uVar2 = (uint)&stack0x00000000;
code_r0x0001404b8fab:
    uVar5 = uVar2;
    cVar3 = (char)pcVar7;
    *pbVar17 = *pbVar17 + cVar3;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
      pcVar16 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b);
      *pcVar16 = *pcVar16 + unaff_BH;
      *pcVar7 = *pcVar7 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (lVar13 == 0) {
      *pcVar7 = *pcVar7 + cVar3;
      bVar21 = false;
      goto code_r0x0001404b8ff1;
    }
    bVar21 = CARRY1((byte)pbVar17,(byte)lVar13);
    pbVar17 = (byte *)CONCAT71((int7)((ulonglong)pbVar17 >> 8),(byte)pbVar17 + (byte)lVar13);
  }
  else {
code_r0x0001404b8f91:
    uVar5 = (uint)&stack0xfffffffffffffff8;
    bVar10 = (byte)pbVar8 + *pbVar8;
    uVar11 = (undefined7)((ulonglong)pbVar8 >> 8);
    cVar4 = bVar10 + bVar20;
    pcVar7 = (char *)CONCAT71(uVar11,cVar4);
    cVar15 = (char)pbVar17;
    pcVar16 = (char *)CONCAT62((int6)((ulonglong)pbVar17 >> 0x10),
                               CONCAT11((char)((ulonglong)pbVar17 >> 8) + pbVar17[lVar13] +
                                        (CARRY1((byte)pbVar8,*pbVar8) || CARRY1(bVar10,bVar20)),
                                        cVar15));
    cVar3 = *pcVar16;
    *pcVar16 = *pcVar16 + cVar15;
    pbVar17 = (byte *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),0xe);
    if (lVar13 == 1 || *pcVar16 == '\0') {
      if (SCARRY1(cVar3,cVar15)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar13 = lVar13 + -2;
    uVar2 = (uint)&stack0xfffffffffffffff8;
    if (lVar13 == 0 || *pcVar16 != '\0') goto code_r0x0001404b8fab;
    pcVar7 = (char *)(CONCAT71(uVar11,cVar4) ^ 10);
    pbVar1 = (byte *)(pcVar7 + -0x35ffe11d);
    bVar10 = (byte)((ulonglong)pbVar8 >> 8);
    bVar21 = CARRY1(*pbVar1,bVar10);
    *pbVar1 = *pbVar1 + bVar10;
  }
  if (lVar13 != 0) {
    *pcVar7 = *pcVar7 + (char)((ulonglong)pbVar17 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404b8ff1:
  pbVar8 = (byte *)(pcVar7 + in_FS_OFFSET);
  bVar10 = *pbVar8;
  bVar18 = *pbVar8 + (byte)pcVar7;
  *pbVar8 = bVar18 + bVar21;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)pbVar17 >> 0x10),
                            CONCAT11(((char)((ulonglong)pbVar17 >> 8) - *unaff_RDI) -
                                     (CARRY1(bVar10,(byte)pcVar7) || CARRY1(bVar18,bVar21)),
                                     (char)pbVar17));
  bVar10 = *pbVar8;
  *pbVar8 = *pbVar8 + unaff_BL;
  puVar9 = (uint *)((ulonglong)pbVar8 & 0xffffffff);
  uVar2 = uVar5 + (uint)pbVar8;
  puVar9[4] = puVar9[4] + unaff_ESI +
              (uint)(CARRY4(uVar5,(uint)pbVar8) || CARRY4(uVar2,(uint)CARRY1(bVar10,unaff_BL)));
  *(uint **)((ulonglong)(uVar2 + CARRY1(bVar10,unaff_BL)) - 8) = puVar9;
  *puVar9 = *puVar9 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

