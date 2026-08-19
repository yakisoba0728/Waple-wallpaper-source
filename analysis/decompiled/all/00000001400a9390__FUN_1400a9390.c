// Function: FUN_1400a9390
// Addr: 1400a9390
// Size: 488 bytes


char * FUN_1400a9390(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  byte local_res8;
  longlong local_res18;
  
  puVar16 = (uint *)0x0;
  local_res18 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar5 = *param_2, lVar5 != 0)) {
    puVar16 = (uint *)(param_2[3] + lVar5);
    local_res18 = lVar5 + param_2[2];
  }
  local_res8 = *(byte *)(param_1 + 0x39);
  pbVar1 = (byte *)(param_1 + 0x594);
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar11 = *(uint *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x3c);
  uVar18 = *(uint *)(param_1 + 0x40);
  uVar14 = *(uint *)(param_1 + 0x44);
  uVar15 = *(uint *)(param_1 + 0x34);
LAB_1400a9426:
  do {
    if ((ulonglong)(local_res18 - (longlong)puVar16) < 4) {
UNWIND_INFO_1400a9589_UnwindCodes_46__OffsetInProlog:
      *(uint *)(param_1 + 0x28) = uVar7;
      pcVar9 = (char *)0x0;
      *(uint *)(param_1 + 0x2c) = uVar11;
      *(uint *)(param_1 + 0x34) = uVar15;
      *(byte *)(param_1 + 0x39) = local_res8;
      *(int *)(param_1 + 0x3c) = iVar17;
      *(uint *)(param_1 + 0x40) = uVar18;
      *(uint *)(param_1 + 0x44) = uVar14;
UNWIND_INFO_1400a9589_UnwindCodes_60__OffsetInProlog:
      if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
        param_2[3] = (longlong)puVar16 - *param_2;
      }
      return pcVar9;
    }
    if (iVar17 == 0) {
      uVar18 = uVar18 + 1;
      if (*(uint *)(param_1 + 0x6c) <= uVar18) {
        pcVar9 = "#bzip2: bad number of sections";
        goto UNWIND_INFO_1400a9589_UnwindCodes_60__OffsetInProlog;
      }
      iVar17 = 0x31;
      local_res8 = (&DAT_14047f168)[*(byte *)(param_1 + 0x694 + (ulonglong)(uVar18 & 0x7fff)) & 7];
    }
    else {
      iVar17 = iVar17 + -1;
    }
    uVar4 = *puVar16;
    uVar7 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) >>
            ((byte)uVar11 & 0x1f) | uVar7;
    puVar16 = (uint *)((longlong)puVar16 + (ulonglong)(0x1f - uVar11 >> 3));
    uVar6 = *(ushort *)
             (param_1 + 0x9eac + ((ulonglong)(uVar7 >> 0x18) + (ulonglong)local_res8 * 0x100) * 2);
    uVar7 = uVar7 << (byte)(uVar6 >> 0xc);
    uVar11 = (uVar11 | 0x18) - (uint)(uVar6 >> 0xc);
    for (uVar6 = uVar6 & 0x3ff; uVar6 < 0x101;
        uVar6 = *(ushort *)
                 (param_1 +
                 ((ulonglong)uVar4 + 0x434a + (ulonglong)local_res8 * 0x202 + (ulonglong)uVar6 * 2)
                 * 2)) {
      if (uVar11 == 0) {
        pcVar9 = "#bzip2: internal error: inconsistent Huffman decoder state";
        goto UNWIND_INFO_1400a9589_UnwindCodes_60__OffsetInProlog;
      }
      uVar11 = uVar11 - 1;
      uVar4 = uVar7 >> 0x1f;
      uVar7 = uVar7 * 2;
    }
    if (uVar6 < 0x300) {
      uVar12 = (ulonglong)uVar6 & 0xff;
      bVar3 = *(byte *)(param_1 + 0x594 + uVar12);
      uVar10 = (ulonglong)((byte)uVar6 + 1) - 1;
      if (uVar10 < uVar12) {
        uVar12 = uVar10;
      }
      if (uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(param_1 + 0x595,pbVar1);
      }
      *pbVar1 = bVar3;
      piVar2 = (int *)(param_1 + 0x94 + (ulonglong)bVar3 * 4);
      *piVar2 = *piVar2 + 1;
      *(uint *)(param_1 + 0xaaac + (ulonglong)uVar15 * 4) = (uint)bVar3;
      if (*(uint *)(param_1 + 0x30) <= uVar15) {
LAB_1400a9633:
        pcVar9 = "#bzip2: bad block length";
        goto UNWIND_INFO_1400a9589_UnwindCodes_60__OffsetInProlog;
      }
      uVar14 = 0;
      uVar15 = uVar15 + 1;
      goto LAB_1400a9426;
    }
    if (uVar6 == 0x300) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      goto UNWIND_INFO_1400a9589_UnwindCodes_46__OffsetInProlog;
    }
    if (0x16 < uVar14) goto LAB_1400a9633;
    uVar8 = (uVar6 & 3) << ((byte)uVar14 & 0x1f);
    uVar4 = uVar8 + uVar15;
    if (*(uint *)(param_1 + 0x30) < uVar4) goto LAB_1400a9633;
    bVar3 = *pbVar1;
    uVar14 = uVar14 + 1;
    uVar12 = (ulonglong)uVar15;
    piVar2 = (int *)(param_1 + 0x94 + (ulonglong)bVar3 * 4);
    *piVar2 = *piVar2 + uVar8;
    bVar19 = uVar15 < uVar4;
    uVar15 = uVar4;
    if (bVar19) {
      puVar13 = (uint *)(param_1 + (uVar12 + 0x2aab) * 4);
      for (uVar10 = (ulonglong)uVar8; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = (uint)bVar3;
        puVar13 = puVar13 + 1;
      }
    }
  } while( true );
}

