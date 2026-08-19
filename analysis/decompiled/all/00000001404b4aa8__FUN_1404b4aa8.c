// Function: FUN_1404b4aa8
// Addr: 1404b4aa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4b1d) overlaps instruction at (ram,0x0001404b4b1b)
    */

void FUN_1404b4aa8(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined7 uVar13;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint *puVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  int unaff_EBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar19;
  byte *pbVar7;
  char *pcVar8;
  
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  bVar14 = (byte)param_1;
  *(char *)param_2 = (char)*param_2 + -0x14;
  cVar5 = cRam00000000210049ec + -0x14;
  bVar18 = (byte)((uint)unaff_EBX >> 8);
  if (cVar5 == '\0') {
    cRam00000000420093d8 = cRam00000000420093d8 + bVar18;
code_r0x0001404b4acd:
    bVar19 = CARRY1(bRam00000000210049f9,bVar16);
    bRam00000000210049f9 = bRam00000000210049f9 + bVar16;
    cVar4 = (-0x14 - (cRam00000000210049ec + -0x28)) - bVar19;
    bVar19 = (POPCOUNT(cVar4) & 1U) == 0;
    cVar5 = cRam00000000210049ec + -0x28;
  }
  else {
    bVar19 = CARRY1(bRam00000000210049f9,bVar16);
    bRam00000000210049f9 = bRam00000000210049f9 + bVar16;
    cVar4 = (-0x14 - cVar5) - bVar19;
    bVar19 = (POPCOUNT(cVar4) & 1U) == 0;
    if (!bVar19) goto code_r0x0001404b4acd;
  }
  cRam00000000210049ec = cVar5;
  pbVar7 = (byte *)CONCAT71(0x210049,cVar4);
  if (!bVar19) {
    pbVar7 = (byte *)0x550549ee;
    bRam00000000550549ee = bRam00000000550549ee | 0xee;
  }
  *unaff_RDI = *unaff_RDI >> 2 | *unaff_RDI << 6;
  pbVar1 = pbVar7 + (longlong)param_2;
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar14;
  bVar17 = (byte)pbVar7 - *pbVar7;
  uVar13 = (undefined7)((ulonglong)pbVar7 >> 8);
  cVar5 = bVar17 - CARRY1(bVar6,bVar14);
  pcVar8 = (char *)CONCAT71(uVar13,cVar5);
  cVar4 = (char)unaff_EBX;
  if (cVar5 < '\0') {
    *(char *)param_2 =
         (char)*param_2 + cVar4 + ((byte)pbVar7 < *pbVar7 || bVar17 < CARRY1(bVar6,bVar14));
    pcVar8[0x1f] = pcVar8[0x1f] + bVar18;
  }
  else {
    *param_1 = *param_1;
    *pcVar8 = *pcVar8 + cVar5;
    pcVar8 = (char *)(CONCAT71(uVar13,cVar5 * '\x02') | 0x10);
    bVar6 = (char)pcVar8 - *pcVar8;
    if ((char)bVar6 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar6;
    *(char *)CONCAT71(uVar13,bVar6) = *(char *)CONCAT71(uVar13,bVar6) + bVar6;
    pbVar7 = (byte *)(CONCAT71(uVar13,(bVar6 ^ 8) * '\x02') | 0x10);
    bVar19 = (byte)pbVar7 < *pbVar7;
    cVar5 = (byte)pbVar7 - *pbVar7;
    pcVar8 = (char *)CONCAT71(uVar13,cVar5);
    puVar9 = (undefined1 *)register0x00000020;
    if (cVar5 < '\0') goto code_r0x0001404b4b31;
  }
  *param_1 = *param_1;
  uVar13 = (undefined7)((ulonglong)pcVar8 >> 8);
  bVar6 = (byte)pcVar8 | *(byte *)((longlong)pcVar8 * 2);
  unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                       CONCAT11(bVar18 | *(byte *)(CONCAT71(uVar13,bVar6) + 3),cVar4));
  bVar19 = CARRY1(bRam00000001204b4f89,bVar6);
  bRam00000001204b4f89 = bRam00000001204b4f89 + bVar6;
  *(char *)param_2 = (char)*param_2 + cVar4 + bVar19;
  bVar18 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar15;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar18,bVar15);
  puVar9 = (undefined1 *)CONCAT71(uVar13,bVar6 + cVar4);
  puVar10 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *param_1 = *param_1 + bVar6 + cVar4;
  *puVar10 = *puVar10;
  bVar19 = false;
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)puVar10 >> 8),(char)((ulonglong)puVar10 >> 8));
code_r0x0001404b4b31:
  bVar17 = (byte)unaff_EBX;
  *(byte *)param_2 = (char)*param_2 + bVar17 + bVar19;
  bVar18 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar15;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar18,bVar15);
  lVar11 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),(char)pcVar8 + bVar17);
  puVar12 = (uint *)((ulonglong)puVar9 & 0xffffffff);
  bVar18 = *param_1;
  bVar6 = (byte)puVar12;
  *param_1 = *param_1 + bVar6;
  *unaff_RSI = (*unaff_RSI - bVar6) - CARRY1(bVar18,bVar6);
  uVar3 = *puVar12;
  *(byte *)puVar12 = (byte)*puVar12 + bVar17;
  *(longlong *)(lVar11 + -8) = lVar11;
  uVar3 = (uint)CARRY1((byte)uVar3,bVar17);
  uVar2 = (uint)puVar9 + *puVar12;
  pbVar7 = (byte *)(ulonglong)(uVar2 + uVar3);
  *(char *)((longlong)param_2 * 2) =
       (*(char *)((longlong)param_2 * 2) - bVar16) -
       (CARRY4((uint)puVar9,*puVar12) || CARRY4(uVar2,uVar3));
  bVar16 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar17;
  bVar18 = (bVar14 & 0x1f) % 9;
  bVar14 = pbVar7[(longlong)unaff_RSI * 2];
  pbVar7[(longlong)unaff_RSI * 2] =
       bVar14 << bVar18 | (byte)(CONCAT11(CARRY1(bVar16,bVar17),bVar14) >> 9 - bVar18);
  *(uint *)(pbVar7 + lVar11 + -8) = *(uint *)(pbVar7 + lVar11 + -8) & (uint)param_2;
  pbVar7[unaff_RBP * 2] = pbVar7[unaff_RBP * 2] + bVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

