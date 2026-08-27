// Function: FUN_140344700
// Addr: 140344700
// Size: 723 bytes


undefined8 FUN_140344700(longlong param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  if (*(longlong *)(param_1 + 0x480) == 0) {
    if (*(uint *)(param_1 + 0x478) <= param_2) {
      return 6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      return 6;
    }
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  }
  iVar9 = *(int *)(param_1 + 0x474);
  if ((iVar9 == 1) || (iVar9 == 2)) {
    lVar12 = (ulonglong)(param_2 * 0x30) + *(longlong *)(param_1 + 0x468);
    bVar1 = *(byte *)(lVar12 + 0x34);
    *param_3 = (ushort)bVar1;
    bVar2 = *(byte *)(lVar12 + 0x35);
    param_3[1] = (ushort)bVar2;
    cVar3 = *(char *)(lVar12 + 0x18);
    iVar11 = (int)cVar3 << 6;
    *(int *)(param_3 + 6) = iVar11;
    iVar9 = (int)*(char *)(lVar12 + 0x19);
    iVar10 = iVar9 * 0x40;
    *(int *)(param_3 + 8) = iVar10;
    cVar4 = *(char *)(lVar12 + 0x21);
    uVar13 = (uint)bVar2;
    if (iVar9 << 6 < 1) {
      if (iVar9 << 6 == 0) {
        if (((int)cVar3 & 0x3ffffffU) == 0) {
          if ((*(char *)(lVar12 + 0x20) == '\0') && (cVar4 == '\0')) {
            iVar11 = uVar13 << 6;
            iVar10 = 0;
            *(int *)(param_3 + 6) = iVar11;
            param_3[8] = 0;
            param_3[9] = 0;
          }
          else {
            iVar11 = (int)*(char *)(lVar12 + 0x20) << 6;
            iVar10 = (int)cVar4 << 6;
            *(int *)(param_3 + 8) = iVar10;
            *(int *)(param_3 + 6) = iVar11;
          }
        }
        else {
          iVar10 = 0;
        }
      }
    }
    else if (cVar4 < '\0') {
      iVar10 = iVar9 * -0x40;
      *(int *)(param_3 + 8) = iVar10;
    }
    *(int *)(param_3 + 10) = iVar11 - iVar10;
    if (iVar11 - iVar10 == 0) {
      *(uint *)(param_3 + 10) = uVar13 * 0x40;
      *(uint *)(param_3 + 8) = iVar11 + uVar13 * -0x40;
    }
    *(uint *)(param_3 + 0xc) =
         ((int)*(char *)(lVar12 + 0x1f) + (int)*(char *)(lVar12 + 0x1e) +
         (uint)*(byte *)(lVar12 + 0x1a)) * 0x40;
    uVar7 = FUN_1402efa10((ulonglong)bVar1 << 6,*(undefined2 *)(param_1 + 0x112));
    *(undefined4 *)(param_3 + 2) = uVar7;
    uVar7 = FUN_1402efa10((ulonglong)param_3[1] << 6,*(undefined2 *)(param_1 + 0x112));
    *(undefined4 *)(param_3 + 4) = uVar7;
    return 0;
  }
  if (iVar9 != 3) {
    return 2;
  }
  lVar12 = (ulonglong)(param_2 * 4) + *(longlong *)(param_1 + 0x468);
  iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar12 + 8),*(undefined1 *)(lVar12 + 9)),
                            *(undefined1 *)(lVar12 + 10)),*(undefined1 *)(lVar12 + 0xb));
  if (iVar9 + 4U <= *(uint *)(param_1 + 0x4d4)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    uVar8 = FUN_1402f5c50(uVar5,*(int *)(param_1 + 0x4d0) + iVar9);
    if (((int)uVar8 == 0) && (uVar8 = FUN_1402f4fe0(uVar5,4), (int)uVar8 == 0)) {
      uVar6 = FUN_1402f52a0(uVar5);
      FUN_1402f52a0(uVar5);
      FUN_1402f5100(uVar5);
      *param_3 = uVar6;
      param_3[1] = uVar6;
      iVar9 = FUN_1402efa10((ulonglong)uVar6 << 6,*(undefined2 *)(param_1 + 0x112));
      lVar14 = (longlong)iVar9;
      lVar12 = *(short *)(param_1 + 0x13c) * lVar14;
      *(int *)(param_3 + 6) = (int)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
      lVar12 = *(short *)(param_1 + 0x13e) * lVar14;
      *(int *)(param_3 + 8) = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
      lVar12 = (((int)*(short *)(param_1 + 0x140) - (int)*(short *)(param_1 + 0x13e)) +
               (int)*(short *)(param_1 + 0x13c)) * lVar14;
      *(int *)(param_3 + 10) = (int)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
      lVar14 = (ulonglong)*(ushort *)(param_1 + 0x142) * lVar14;
      *(int *)(param_3 + 2) = iVar9;
      *(int *)(param_3 + 4) = iVar9;
      *(int *)(param_3 + 0xc) = (int)((ulonglong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10);
      uVar8 = 0;
    }
    return uVar8;
  }
  return 3;
}

