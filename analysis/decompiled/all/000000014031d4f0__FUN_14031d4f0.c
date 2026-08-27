// Function: FUN_14031d4f0
// Addr: 14031d4f0
// Size: 1055 bytes


undefined8 FUN_14031d4f0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int local_58 [6];
  int local_40 [6];
  
  puVar17 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar17 + 6) {
    return 0xa1;
  }
  uVar16 = 10;
  lVar13 = 0;
  iVar14 = -0x80000000;
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar12 = 0x7fffffff;
  *(undefined1 *)(lVar3 + 0x3c) = 1;
  do {
    pcVar4 = (char *)*puVar17;
    piVar1 = local_40 + lVar13;
    if (*pcVar4 == '\x1e') {
      iVar6 = FUN_14031feb0(pcVar4,*(undefined8 *)(param_1 + 0x10),0,piVar1);
      uVar16 = 10;
    }
    else {
      iVar6 = FUN_14031fd70(pcVar4,*(undefined8 *)(param_1 + 0x10));
      if (iVar6 < 0x8000) {
        *piVar1 = 0;
        iVar6 = iVar6 << 0x10;
      }
      else {
        uVar15 = 5;
        if ((((99999 < iVar6) && (uVar15 = 6, 999999 < iVar6)) && (uVar15 = 7, 9999999 < iVar6)) &&
           ((uVar15 = 8, 99999999 < iVar6 && (uVar15 = 9, 999999999 < iVar6)))) {
          uVar15 = uVar16 & 0xffffffff;
        }
        iVar7 = (&DAT_14043d8dc)[uVar15];
        if (iVar6 / iVar7 < 0x8000) {
          *piVar1 = (int)uVar15 + -5;
          iVar6 = FUN_1402efa10(iVar6,iVar7);
          uVar16 = 10;
        }
        else {
          uVar2 = (&DAT_14043d8e0)[uVar15];
          *piVar1 = (int)uVar15 + -4;
          iVar6 = FUN_1402efa10(iVar6,uVar2);
          uVar16 = 10;
        }
      }
    }
    puVar17 = puVar17 + 1;
    local_58[lVar13] = iVar6;
    if (iVar6 != 0) {
      iVar6 = *piVar1;
      iVar7 = iVar6;
      if (iVar6 <= iVar14) {
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
      if (iVar6 < iVar12) {
        iVar12 = iVar6;
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 6);
  if ((iVar14 + 9U < 10) && ((uint)(iVar14 - iVar12) < 10)) {
    iVar12 = 0;
    if (local_58[0] != 0) {
      iVar6 = (int)(&DAT_14043d8f0)[iVar14 - local_40[0]] >> 1;
      if (local_58[0] < 0) {
        if (iVar6 + -0x80000000 < local_58[0]) {
          iVar12 = local_58[0] - iVar6;
        }
        else {
          iVar12 = -0x80000000;
        }
      }
      else {
        iVar12 = iVar6 + local_58[0];
        if (0x7fffffff - iVar6 <= local_58[0]) {
          iVar12 = 0x7fffffff;
        }
      }
      iVar12 = iVar12 / (int)(&DAT_14043d8f0)[iVar14 - local_40[0]];
    }
    iVar6 = 0;
    if (local_58[1] != 0) {
      iVar7 = (int)(&DAT_14043d8f0)[iVar14 - local_40[1]] >> 1;
      if (local_58[1] < 0) {
        if (iVar7 + -0x80000000 < local_58[1]) {
          iVar6 = local_58[1] - iVar7;
        }
        else {
          iVar6 = -0x80000000;
        }
      }
      else {
        iVar6 = iVar7 + local_58[1];
        if (0x7fffffff - iVar7 <= local_58[1]) {
          iVar6 = 0x7fffffff;
        }
      }
      iVar6 = iVar6 / (int)(&DAT_14043d8f0)[iVar14 - local_40[1]];
    }
    iVar7 = 0;
    if (local_58[2] != 0) {
      iVar8 = (int)(&DAT_14043d8f0)[iVar14 - local_40[2]] >> 1;
      if (local_58[2] < 0) {
        if (iVar8 + -0x80000000 < local_58[2]) {
          iVar7 = local_58[2] - iVar8;
        }
        else {
          iVar7 = -0x80000000;
        }
      }
      else {
        iVar7 = iVar8 + local_58[2];
        if (0x7fffffff - iVar8 <= local_58[2]) {
          iVar7 = 0x7fffffff;
        }
      }
      iVar7 = iVar7 / (int)(&DAT_14043d8f0)[iVar14 - local_40[2]];
    }
    iVar8 = 0;
    if (local_58[3] != 0) {
      iVar9 = (int)(&DAT_14043d8f0)[iVar14 - local_40[3]] >> 1;
      if (local_58[3] < 0) {
        if (iVar9 + -0x80000000 < local_58[3]) {
          iVar8 = local_58[3] - iVar9;
        }
        else {
          iVar8 = -0x80000000;
        }
      }
      else {
        iVar8 = iVar9 + local_58[3];
        if (0x7fffffff - iVar9 <= local_58[3]) {
          iVar8 = 0x7fffffff;
        }
      }
      iVar8 = iVar8 / (int)(&DAT_14043d8f0)[iVar14 - local_40[3]];
    }
    iVar9 = 0;
    if (local_58[4] != 0) {
      iVar10 = (int)(&DAT_14043d8f0)[iVar14 - local_40[4]] >> 1;
      if (local_58[4] < 0) {
        if (iVar10 + -0x80000000 < local_58[4]) {
          iVar9 = local_58[4] - iVar10;
        }
        else {
          iVar9 = -0x80000000;
        }
      }
      else {
        iVar9 = iVar10 + local_58[4];
        if (0x7fffffff - iVar10 <= local_58[4]) {
          iVar9 = 0x7fffffff;
        }
      }
      iVar9 = iVar9 / (int)(&DAT_14043d8f0)[iVar14 - local_40[4]];
    }
    iVar10 = 0;
    if (local_58[5] != 0) {
      iVar11 = (int)(&DAT_14043d8f0)[iVar14 - local_40[5]] >> 1;
      if (local_58[5] < 0) {
        if (iVar11 + -0x80000000 < local_58[5]) {
          iVar10 = local_58[5] - iVar11;
        }
        else {
          iVar10 = -0x80000000;
        }
      }
      else {
        iVar10 = iVar11 + local_58[5];
        if (0x7fffffff - iVar11 <= local_58[5]) {
          iVar10 = 0x7fffffff;
        }
      }
      iVar10 = iVar10 / (int)(&DAT_14043d8f0)[iVar14 - local_40[5]];
    }
    *(int *)(lVar3 + 0x2c) = iVar12;
    *(int *)(lVar3 + 0x34) = iVar6;
    *(int *)(lVar3 + 0x30) = iVar7;
    *(int *)(lVar3 + 0x38) = iVar8;
    *(int *)(lVar3 + 0x44) = iVar9;
    *(int *)(lVar3 + 0x48) = iVar10;
    *(undefined4 *)(lVar3 + 0x40) = (&DAT_14043d8f0)[-(longlong)iVar14];
    cVar5 = FUN_1402f1cd0();
    if (cVar5 != '\0') {
      return 0;
    }
  }
  *(undefined4 *)(lVar3 + 0x2c) = 0x10000;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  *(undefined4 *)(lVar3 + 0x38) = 0x10000;
  *(undefined4 *)(lVar3 + 0x44) = 0;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  *(undefined4 *)(lVar3 + 0x40) = 1;
  return 0;
}

