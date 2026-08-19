// Function: FUN_1400a8d40
// Addr: 1400a8d40
// Size: 432 bytes


char * FUN_1400a8d40(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  pcVar4 = (char *)0x0;
  pbVar10 = (byte *)0x0;
  uVar8 = 0;
  pbVar7 = (byte *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar3 = *param_2, lVar3 != 0)) {
    pbVar10 = (byte *)(param_2[3] + lVar3);
    pbVar7 = (byte *)(param_2[2] + lVar3);
  }
  iVar9 = *(int *)(param_1 + 0x80);
  iVar12 = 1;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar13 = 0;
    goto LAB_1400a8de0;
  }
  uVar13 = *(uint *)(param_1 + 0x40aad0);
  uVar8 = *(uint *)(param_1 + 0x40aad4);
  if (iVar9 == 1) {
    while (pbVar10 != pbVar7) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      *(undefined4 *)(param_1 + 0x2c) = 8;
      iVar5 = 8;
      *(uint *)(param_1 + 0x28) = (uint)bVar1 << 0x18;
      do {
        uVar2 = *(uint *)(param_1 + 0x28);
        uVar8 = uVar2 >> 0x1f | uVar8 * 2;
        *(uint *)(param_1 + 0x28) = uVar2 * 2;
        uVar13 = uVar13 + 1;
        *(int *)(param_1 + 0x2c) = iVar5 + -1;
LAB_1400a8de0:
        if (4 < uVar13) {
          uVar13 = 0;
          goto code_r0x0001400a8e40;
        }
        iVar5 = *(int *)(param_1 + 0x2c);
        iVar9 = iVar12;
      } while (iVar5 != 0);
    }
  }
  else {
    if (iVar9 == 2) goto LAB_1400a8e67;
    if (iVar9 != 3) {
      iVar12 = 0;
      goto UNWIND_INFO_1400a8eac_UnwindCodes_63__OffsetInProlog;
    }
    while (pbVar10 != pbVar7) {
      bVar1 = *pbVar10;
      *(undefined4 *)(param_1 + 0x2c) = 8;
      iVar11 = (uint)bVar1 << 0x18;
      pbVar10 = pbVar10 + 1;
      *(uint *)(param_1 + 0x28) = (uint)bVar1 << 0x18;
      iVar9 = (uint)bVar1 << 0x19;
      iVar5 = 7;
      while( true ) {
        *(int *)(param_1 + 0x28) = iVar9;
        *(int *)(param_1 + 0x2c) = iVar5;
        uVar2 = uVar8 - 1;
        uVar8 = uVar8 + 1;
        if (iVar11 < 0) {
          uVar8 = uVar2;
        }
        while( true ) {
          if (0x13 < uVar8 - 1) {
            pcVar4 = "#bzip2: bad block header";
            goto LAB_1400a8f5a;
          }
          iVar5 = *(int *)(param_1 + 0x2c);
          if (iVar5 == 0) {
            iVar9 = 2;
LAB_1400a8e67:
            if (pbVar10 == pbVar7) goto UNWIND_INFO_1400a8eac_UnwindCodes_59__UnwindOpCode;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            *(undefined4 *)(param_1 + 0x2c) = 8;
            iVar5 = 8;
            *(uint *)(param_1 + 0x28) = (uint)bVar1 << 0x18;
          }
          iVar9 = *(int *)(param_1 + 0x28);
          iVar11 = iVar9 * 2;
          *(int *)(param_1 + 0x28) = iVar11;
          *(int *)(param_1 + 0x2c) = iVar5 + -1;
          if (iVar9 < 0) break;
          *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1 << (uVar8 & 0x1f);
          uVar6 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          *(uint *)(param_1 + 0xaaac + uVar6 * 4) = uVar8;
code_r0x0001400a8e40:
          if (*(uint *)(param_1 + 100) <= uVar13) {
            *(undefined4 *)(param_1 + 0x80) = 0;
            goto LAB_1400a8f5a;
          }
        }
        if (iVar5 + -1 == 0) break;
        iVar9 = iVar9 * 4;
        iVar5 = iVar5 + -2;
      }
      iVar9 = 3;
    }
  }
UNWIND_INFO_1400a8eac_UnwindCodes_59__UnwindOpCode:
  pcVar4 = "$base: short read";
UNWIND_INFO_1400a8eac_UnwindCodes_63__OffsetInProlog:
  *(uint *)(param_1 + 0x40aad0) = uVar13;
  *(uint *)(param_1 + 0x40aad4) = uVar8;
  iVar5 = 0;
  if (iVar12 != 0) {
    iVar5 = iVar9;
  }
  *(int *)(param_1 + 0x80) = iVar5;
LAB_1400a8f5a:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar10 - *param_2;
  }
  return pcVar4;
}

