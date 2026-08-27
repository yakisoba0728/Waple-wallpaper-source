// Function: FUN_1400a92c0
// Addr: 1400a92c0
// Size: 679 bytes


char * FUN_1400a92c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  byte local_res8;
  longlong local_res18;
  
  puVar15 = (uint *)0x0;
  local_res18 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar4 = *param_2, lVar4 != 0)) {
    puVar15 = (uint *)(param_2[3] + lVar4);
    local_res18 = lVar4 + param_2[2];
  }
  local_res8 = *(byte *)(param_1 + 0x39);
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar10 = *(uint *)(param_1 + 0x2c);
  iVar16 = *(int *)(param_1 + 0x3c);
  uVar17 = *(uint *)(param_1 + 0x40);
  uVar13 = *(uint *)(param_1 + 0x44);
  uVar14 = *(uint *)(param_1 + 0x34);
LAB_1400a9356:
  do {
    if ((ulonglong)(local_res18 - (longlong)puVar15) < 4) {
LAB_1400a9519:
      *(uint *)(param_1 + 0x28) = uVar6;
      pcVar8 = (char *)0x0;
      *(uint *)(param_1 + 0x2c) = uVar10;
      *(uint *)(param_1 + 0x34) = uVar14;
      *(byte *)(param_1 + 0x39) = local_res8;
      *(int *)(param_1 + 0x3c) = iVar16;
      *(uint *)(param_1 + 0x40) = uVar17;
      *(uint *)(param_1 + 0x44) = uVar13;
LAB_1400a9535:
      if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
        param_2[3] = (longlong)puVar15 - *param_2;
      }
      return pcVar8;
    }
    if (iVar16 == 0) {
      uVar17 = uVar17 + 1;
      if (*(uint *)(param_1 + 0x6c) <= uVar17) {
        pcVar8 = "#bzip2: bad number of sections";
        goto LAB_1400a9535;
      }
      iVar16 = 0x31;
      local_res8 = (&DAT_14047f098)[*(byte *)(param_1 + 0x694 + (ulonglong)(uVar17 & 0x7fff)) & 7];
    }
    else {
      iVar16 = iVar16 + -1;
    }
    uVar3 = *puVar15;
    uVar6 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
            ((byte)uVar10 & 0x1f) | uVar6;
    puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(0x1f - uVar10 >> 3));
    uVar5 = *(ushort *)
             (param_1 + 0x9eac + ((ulonglong)(uVar6 >> 0x18) + (ulonglong)local_res8 * 0x100) * 2);
    uVar6 = uVar6 << (byte)(uVar5 >> 0xc);
    uVar10 = (uVar10 | 0x18) - (uint)(uVar5 >> 0xc);
    for (uVar5 = uVar5 & 0x3ff; uVar5 < 0x101;
        uVar5 = *(ushort *)
                 (param_1 +
                 ((ulonglong)uVar3 + 0x434a + (ulonglong)local_res8 * 0x202 + (ulonglong)uVar5 * 2)
                 * 2)) {
      if (uVar10 == 0) {
        pcVar8 = "#bzip2: internal error: inconsistent Huffman decoder state";
        goto LAB_1400a9535;
      }
      uVar10 = uVar10 - 1;
      uVar3 = uVar6 >> 0x1f;
      uVar6 = uVar6 * 2;
    }
    if (uVar5 < 0x300) {
      uVar11 = (ulonglong)uVar5 & 0xff;
      bVar2 = *(byte *)(param_1 + 0x594 + uVar11);
      uVar9 = (ulonglong)((byte)uVar5 + 1) - 1;
      if (uVar9 < uVar11) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        FUN_1404210f0(param_1 + 0x595,(byte *)(param_1 + 0x594));
      }
      *(byte *)(param_1 + 0x594) = bVar2;
      piVar1 = (int *)(param_1 + 0x94 + (ulonglong)bVar2 * 4);
      *piVar1 = *piVar1 + 1;
      *(uint *)(param_1 + 0xaaac + (ulonglong)uVar14 * 4) = (uint)bVar2;
      if (*(uint *)(param_1 + 0x30) <= uVar14) {
LAB_1400a9563:
        pcVar8 = "#bzip2: bad block length";
        goto LAB_1400a9535;
      }
      uVar13 = 0;
      uVar14 = uVar14 + 1;
      goto LAB_1400a9356;
    }
    if (uVar5 == 0x300) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      goto LAB_1400a9519;
    }
    if (0x16 < uVar13) goto LAB_1400a9563;
    uVar7 = (uVar5 & 3) << ((byte)uVar13 & 0x1f);
    uVar3 = uVar7 + uVar14;
    if (*(uint *)(param_1 + 0x30) < uVar3) goto LAB_1400a9563;
    bVar2 = *(byte *)(param_1 + 0x594);
    uVar13 = uVar13 + 1;
    uVar11 = (ulonglong)uVar14;
    piVar1 = (int *)(param_1 + 0x94 + (ulonglong)bVar2 * 4);
    *piVar1 = *piVar1 + uVar7;
    bVar18 = uVar14 < uVar3;
    uVar14 = uVar3;
    if (bVar18) {
      puVar12 = (uint *)(param_1 + (uVar11 + 0x2aab) * 4);
      for (uVar9 = (ulonglong)uVar7; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = (uint)bVar2;
        puVar12 = puVar12 + 1;
      }
    }
  } while( true );
}

