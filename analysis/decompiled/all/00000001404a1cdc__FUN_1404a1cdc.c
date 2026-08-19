// Function: FUN_1404a1cdc
// Addr: 1404a1cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1d2b) overlaps instruction at (ram,0x0001404a1d29)
    */

void FUN_1404a1cdc(char *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint *in_RAX;
  undefined7 uVar10;
  uint *puVar6;
  char *pcVar8;
  int *piVar9;
  uint uVar11;
  byte bVar13;
  undefined2 uVar14;
  byte *pbVar15;
  int *piVar16;
  byte unaff_BL;
  byte unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *puVar17;
  char *unaff_RDI;
  char *pcVar18;
  longlong in_FS_OFFSET;
  byte *pbVar7;
  byte *pbVar12;
  
  param_2 = param_2 | *in_RAX;
  pbVar15 = (byte *)(ulonglong)param_2;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar5;
  *pbVar15 = *pbVar15 | (byte)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)param_1;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = in(0x1a);
  *(char *)CONCAT71(uVar10,bVar3) = *(char *)CONCAT71(uVar10,bVar3) + cVar5;
  uVar14 = (undefined2)param_2;
  out(*unaff_RSI,uVar14);
  if (SBORROW1(bVar3,*unaff_RDI)) {
    *param_1 = *param_1 + cVar5;
    *pbVar15 = *pbVar15 | bVar3;
    *(char *)CONCAT71(uVar10,bVar3) = *(char *)CONCAT71(uVar10,bVar3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (uint *)CONCAT71(uVar10,bVar3 + unaff_BH);
  uVar11 = ((int)param_1 - *(int *)pbVar15) - (uint)CARRY1(bVar3,unaff_BH);
  pbVar12 = (byte *)(ulonglong)uVar11;
  *puVar6 = *puVar6 & uVar11;
  cVar4 = bVar3 + unaff_BH + (char)*puVar6;
  pbVar7 = (byte *)CONCAT71(uVar10,cVar4);
  bVar3 = (byte)(uVar11 >> 8);
  pbVar7[10] = pbVar7[10] | bVar3;
  pcVar18 = (char *)(unaff_RSI + -0xefffee3);
  cVar5 = *pcVar18;
  *pcVar18 = *pcVar18 + bVar3;
  bVar13 = (byte)param_2;
  if (!SCARRY1(cVar5,bVar3)) {
    bVar1 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar13;
    pbVar7 = (byte *)CONCAT71(uVar10,(cVar4 + -0x4a) - CARRY1(bVar1,bVar13));
  }
  *pbVar12 = *pbVar12 + (char)((ulonglong)pbVar7 >> 8);
  *pbVar7 = *pbVar7 + (char)pbVar7;
  pcVar18 = (char *)(unaff_RSI + -0xefffee3);
  cVar5 = *pcVar18;
  *pcVar18 = *pcVar18 + bVar3;
  if (!SCARRY1(cVar5,bVar3)) {
    bVar3 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar13;
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),
                              ((char)pbVar7 + -0x4a) - CARRY1(bVar3,bVar13));
  }
  cVar5 = (char)((ulonglong)pbVar7 >> 8);
  *pbVar12 = *pbVar12 + cVar5;
  *pbVar15 = *pbVar15 + (char)pbVar7;
  *pbVar7 = *pbVar7 + (char)pbVar7;
  uVar10 = (undefined7)((ulonglong)pbVar7 >> 8);
  bVar3 = in(0x1a);
  *(char *)CONCAT71(uVar10,bVar3) = *(char *)CONCAT71(uVar10,bVar3) + cVar5;
  out(unaff_RSI[1],uVar14);
  pcVar8 = (char *)CONCAT71(uVar10,bVar3);
  puVar17 = unaff_RSI + 2;
  pcVar18 = unaff_RDI + 2;
  if (SBORROW1(bVar3,unaff_RDI[1])) {
    *pbVar12 = *pbVar12 + cVar5;
    *pcVar8 = *pcVar8 + bVar3;
    *pcVar8 = *pcVar8 + cVar5;
    puVar17 = unaff_RSI + 3;
    out(unaff_RSI[2],uVar14);
    piVar9 = (int *)CONCAT71(uVar10,bVar3);
    pcVar18 = unaff_RDI + 3;
    if (SBORROW1(bVar3,unaff_RDI[2])) {
      bVar1 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar3;
      *pcVar18 = *pcVar18 + bVar3 + CARRY1(bVar1,bVar3);
      *(byte *)piVar9 = (char)*piVar9 + bVar13;
      iVar2 = *piVar9;
      piVar16 = (int *)(ulonglong)CONCAT31((int3)(param_2 >> 8),bVar13 + (char)*piVar9);
      bVar13 = *pbVar12;
      bRam60047005e007f009 = bVar3;
      *pbVar12 = *pbVar12 + bVar3;
      *piVar16 = (*piVar16 - uVar11) - (uint)CARRY1(bVar13,bVar3);
      bVar3 = *pbVar12;
      *pbVar12 = *pbVar12 + unaff_BL;
      *(int *)((longlong)piVar16 * 2) =
           (*(int *)((longlong)piVar16 * 2) - ((int)puVar17 + iVar2)) -
           (uint)(CARRY4((uint)piVar9,*(uint *)(in_FS_OFFSET + (longlong)piVar9)) ||
                 CARRY4((uint)piVar9 + *(uint *)(in_FS_OFFSET + (longlong)piVar9),
                        (uint)CARRY1(bVar3,unaff_BL)));
      *pbVar12 = *pbVar12 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar8 = (char *)CONCAT71(uVar10,bVar3 + unaff_BH);
  }
  cVar5 = (byte)pcVar8 + unaff_BH;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar5);
  iVar2 = *(int *)pbVar15;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)puVar6 = (char)*puVar6 + cVar5;
  bVar3 = (byte)((uVar11 - iVar2) - (uint)CARRY1((byte)pcVar8,unaff_BH) >> 8);
  pcVar18[4] = pcVar18[4] & bVar3;
  *(byte *)(puVar17 + -0x1fffee4) = *(char *)(puVar17 + -0x1fffee4) + bVar3;
  *puVar6 = *puVar6 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

