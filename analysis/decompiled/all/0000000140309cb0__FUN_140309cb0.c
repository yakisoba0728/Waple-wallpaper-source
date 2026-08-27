// Function: FUN_140309cb0
// Addr: 140309cb0
// Size: 704 bytes


void FUN_140309cb0(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  
  if ((param_2[6] < *(ushort *)(param_1 + 0x40)) && (param_2[8] < *(ushort *)(param_1 + 0x40))) {
    if ((param_2[2] < *(ushort *)(param_1 + 0x78)) &&
       ((param_2[4] < *(ushort *)(param_1 + 0x78) &&
        (uVar18 = (ulonglong)*param_2, *param_2 < *(ushort *)(param_1 + 0xb0))))) {
      lVar2 = (ulonglong)param_2[6] * 8;
      lVar3 = (ulonglong)param_2[4] * 8;
      lVar4 = (ulonglong)param_2[2] * 8;
      lVar5 = (ulonglong)param_2[8] * 8;
      lVar7 = *(longlong *)(param_1 + 0x50);
      iVar14 = *(int *)(lVar2 + lVar7);
      iVar17 = *(int *)(lVar5 + lVar7) - iVar14;
      iVar15 = *(int *)(lVar2 + 4 + lVar7);
      iVar19 = *(int *)(lVar5 + 4 + lVar7) - iVar15;
      lVar7 = *(longlong *)(param_1 + 0x88);
      iVar16 = *(int *)(lVar4 + lVar7);
      iVar8 = *(int *)(lVar7 + lVar3) - iVar16;
      iVar6 = *(int *)(lVar4 + 4 + lVar7);
      iVar9 = *(int *)(lVar7 + 4 + lVar3) - iVar6;
      iVar10 = FUN_1402f20b0(iVar9,iVar17,0x40);
      iVar11 = -iVar19;
      iVar12 = FUN_1402f20b0(iVar8,iVar11,0x40);
      iVar12 = iVar12 + iVar10;
      iVar19 = FUN_1402f20b0(iVar9,iVar19,0x40);
      iVar13 = FUN_1402f20b0(iVar8,iVar17,0x40);
      iVar10 = -(iVar19 + iVar13);
      if (iVar10 < 0) {
        iVar10 = iVar19 + iVar13;
      }
      iVar19 = -iVar12;
      if (-iVar12 < 0) {
        iVar19 = iVar12;
      }
      if (iVar10 < iVar19 * 0x13) {
        iVar14 = FUN_1402f20b0(iVar14 - iVar16,iVar11,0x40);
        iVar15 = FUN_1402f20b0(iVar15 - iVar6,iVar17,0x40);
        iVar16 = FUN_1402f20b0(iVar14 + iVar15,iVar8,iVar12);
        iVar14 = FUN_1402f20b0(iVar14 + iVar15,iVar9,iVar12);
        *(int *)(*(longlong *)(param_1 + 0xc0) + uVar18 * 8) =
             *(int *)(*(longlong *)(param_1 + 0x88) + lVar4) + iVar16;
        *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar18 * 8) =
             *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar4) + iVar14;
      }
      else {
        iVar14 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x88)) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + lVar3) +
                 *(int *)(lVar2 + *(longlong *)(param_1 + 0x50)) +
                 *(int *)(lVar5 + *(longlong *)(param_1 + 0x50));
        *(int *)(*(longlong *)(param_1 + 0xc0) + uVar18 * 8) =
             (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
        iVar14 = *(int *)(lVar4 + 4 + *(longlong *)(param_1 + 0x88)) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar3) +
                 *(int *)(lVar2 + 4 + *(longlong *)(param_1 + 0x50)) +
                 *(int *)(lVar5 + 4 + *(longlong *)(param_1 + 0x50));
        *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar18 * 8) =
             (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
      }
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar18);
      *pbVar1 = *pbVar1 | 0x18;
      return;
    }
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

