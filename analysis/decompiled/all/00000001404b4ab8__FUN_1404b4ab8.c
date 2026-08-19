// Function: FUN_1404b4ab8
// Addr: 1404b4ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4b1d) overlaps instruction at (ram,0x0001404b4b1b)
    */

void FUN_1404b4ab8(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint *in_RAX;
  undefined7 uVar11;
  byte *pbVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint *puVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  char cVar15;
  byte bVar16;
  int unaff_EBX;
  ulonglong uVar17;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar18;
  
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  bVar12 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = (char)in_RAX + (char)*in_RAX;
  pcVar8 = (char *)CONCAT71(uVar11,cVar5);
  pbVar7 = (byte *)(pcVar8 + (longlong)param_1);
  bVar6 = *pbVar7;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar14;
  if (SCARRY1(bVar2,bVar14)) {
code_r0x0001404b4acf:
    pbVar7 = (byte *)(pcVar8 + 0xd);
    bVar2 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar14;
    cVar5 = ((char)pcVar8 - *pcVar8) - CARRY1(bVar2,bVar14);
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar5);
    bVar18 = (POPCOUNT(cVar5) & 1U) == 0;
  }
  else {
    cVar5 = (cVar5 - *pcVar8) - CARRY1(bVar6,bVar14);
    pbVar7 = (byte *)CONCAT71(uVar11,cVar5);
    bVar18 = (POPCOUNT(cVar5) & 1U) == 0;
    if (!bVar18) {
      pcVar8 = (char *)0x210049ec;
      cRam00000000210049ec = cRam00000000210049ec + -0x14;
      goto code_r0x0001404b4acf;
    }
  }
  if (!bVar18) {
    pbVar7 = (byte *)0x550549ee;
    bRam00000000550549ee = bRam00000000550549ee | 0xee;
  }
  *unaff_RDI = *unaff_RDI >> 2 | *unaff_RDI << 6;
  pbVar1 = pbVar7 + (longlong)param_2;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  bVar6 = (byte)pbVar7 - *pbVar7;
  uVar11 = (undefined7)((ulonglong)pbVar7 >> 8);
  cVar5 = bVar6 - CARRY1(bVar2,bVar12);
  pcVar8 = (char *)CONCAT71(uVar11,cVar5);
  cVar15 = (char)unaff_EBX;
  bVar16 = (byte)((uint)unaff_EBX >> 8);
  if (cVar5 < '\0') {
    *(char *)param_2 =
         (char)*param_2 + cVar15 + ((byte)pbVar7 < *pbVar7 || bVar6 < CARRY1(bVar2,bVar12));
    pcVar8[0x1f] = pcVar8[0x1f] + bVar16;
  }
  else {
    *param_1 = *param_1;
    *pcVar8 = *pcVar8 + cVar5;
    pcVar8 = (char *)(CONCAT71(uVar11,cVar5 * '\x02') | 0x10);
    bVar2 = (char)pcVar8 - *pcVar8;
    if ((char)bVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar2;
    *(char *)CONCAT71(uVar11,bVar2) = *(char *)CONCAT71(uVar11,bVar2) + bVar2;
    pbVar7 = (byte *)(CONCAT71(uVar11,(bVar2 ^ 8) * '\x02') | 0x10);
    bVar18 = (byte)pbVar7 < *pbVar7;
    cVar5 = (byte)pbVar7 - *pbVar7;
    pcVar8 = (char *)CONCAT71(uVar11,cVar5);
    if (cVar5 < '\0') goto code_r0x0001404b4b31;
  }
  *param_1 = *param_1;
  uVar11 = (undefined7)((ulonglong)pcVar8 >> 8);
  bVar6 = (byte)pcVar8 | *(byte *)((longlong)pcVar8 * 2);
  unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                       CONCAT11(bVar16 | *(byte *)(CONCAT71(uVar11,bVar6) + 3),cVar15));
  bVar18 = CARRY1(bRam00000001204b4f89,bVar6);
  bRam00000001204b4f89 = bRam00000001204b4f89 + bVar6;
  *(char *)param_2 = (char)*param_2 + cVar15 + bVar18;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar13;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar2,bVar13);
  puVar9 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  register0x00000020 = (BADSPACEBASE *)(CONCAT71(uVar11,bVar6 + cVar15) & 0xffffffff);
  *param_1 = *param_1 + (char)register0x00000020;
  *puVar9 = *puVar9;
  bVar18 = false;
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)((ulonglong)puVar9 >> 8));
code_r0x0001404b4b31:
  bVar16 = (byte)unaff_EBX;
  *(byte *)param_2 = (char)*param_2 + bVar16 + bVar18;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar13;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar2,bVar13);
  puVar10 = (uint *)((ulonglong)register0x00000020 & 0xffffffff);
  uVar17 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),(char)pcVar8 + bVar16) & 0xffffffff;
  bVar2 = *param_1;
  bVar6 = (byte)puVar10;
  *param_1 = *param_1 + bVar6;
  *unaff_RSI = (*unaff_RSI - bVar6) - CARRY1(bVar2,bVar6);
  uVar4 = *puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + bVar16;
  *(ulonglong *)(uVar17 - 8) = uVar17;
  uVar4 = (uint)CARRY1((byte)uVar4,bVar16);
  uVar3 = (uint)register0x00000020 + *puVar10;
  pbVar7 = (byte *)(ulonglong)(uVar3 + uVar4);
  *(char *)((longlong)param_2 * 2) =
       (*(char *)((longlong)param_2 * 2) - bVar14) -
       (CARRY4((uint)register0x00000020,*puVar10) || CARRY4(uVar3,uVar4));
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar16;
  bVar12 = (bVar12 & 0x1f) % 9;
  bVar6 = pbVar7[(longlong)unaff_RSI * 2];
  pbVar7[(longlong)unaff_RSI * 2] =
       bVar6 << bVar12 | (byte)(CONCAT11(CARRY1(bVar2,bVar16),bVar6) >> 9 - bVar12);
  *(uint *)(pbVar7 + (uVar17 - 8)) = *(uint *)(pbVar7 + (uVar17 - 8)) & (uint)param_2;
  pbVar7[unaff_RBP * 2] = pbVar7[unaff_RBP * 2] + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

