// Function: FUN_140303b00
// Addr: 140303b00
// Size: 1038 bytes


void FUN_140303b00(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  lVar5 = 0x10;
  if (param_3 != 0) {
    lVar5 = 0x14;
  }
  iVar2 = *(int *)(lVar5 + param_2);
  lVar5 = 8;
  if (param_3 != 0) {
    lVar5 = 0xc;
  }
  iVar4 = *(int *)(lVar5 + param_2);
  piVar12 = (int *)(param_1 + 0x44 + (longlong)param_3 * 0x204);
  if ((piVar12[0x7f] != iVar4) || (piVar12[0x80] != iVar2)) {
    piVar12[0x7f] = iVar4;
    uVar8 = 0;
    piVar12[0x80] = iVar2;
    if (*(uint *)(param_1 + 800) != 0) {
LAB_140303b80:
      if ((*(byte *)(param_1 + 0x344 + (ulonglong)uVar8 * 0x24) & 0x10) == 0)
      goto code_r0x000140303b90;
      lVar5 = param_1 + (ulonglong)uVar8 * 0x24 + 0x324;
      if (lVar5 != 0) {
        lVar5 = (longlong)*(int *)(lVar5 + 0xc) * (longlong)iVar4;
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x40);
        iVar13 = 0x28;
        if ((uVar8 != 0) &&
           (uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x18),
           uVar1 <= uVar8)) {
          iVar13 = 0x28;
          if (5 < uVar1) {
            iVar13 = 0x34;
          }
        }
        uVar8 = (uint)((ulonglong)((lVar5 >> 0x3f) + 0x8000 + lVar5) >> 0x10);
        if ((uVar8 != (iVar13 + uVar8 & 0xffffffc0)) && (param_3 == 1)) {
          iVar3 = FUN_1402f20b0(iVar4);
          iVar13 = *(int *)(param_1 + 0x40);
          uVar6 = 0;
          if (*(uint *)(param_1 + 800) != 0) {
            do {
              iVar11 = *(int *)(param_1 + 0x33c + uVar6 * 0x24);
              if (iVar11 < iVar13) {
                iVar11 = iVar13;
              }
              iVar13 = -*(int *)(param_1 + 0x340 + uVar6 * 0x24);
              if (iVar13 < iVar11) {
                iVar13 = iVar11;
              }
              uVar8 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(param_1 + 800));
          }
          piVar12[1] = iVar2;
          lVar5 = (longlong)(iVar3 - iVar4) * (longlong)iVar13;
          iVar13 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
          if ((iVar13 < -0x7f) || (0x7f < iVar13)) {
            *piVar12 = iVar4;
          }
          else {
            *piVar12 = iVar3;
            iVar4 = iVar3;
          }
          goto LAB_140303cbd;
        }
      }
    }
LAB_140303b97:
    *piVar12 = iVar4;
    piVar12[1] = iVar2;
    if (param_3 == 0) {
      *(int *)(param_1 + 0x10) = iVar4;
      *(int *)(param_1 + 0x18) = iVar2;
    }
    else {
LAB_140303cbd:
      *(int *)(param_1 + 0x14) = iVar4;
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (piVar12[2] != 0) {
      uVar6 = 0;
      do {
        uVar8 = (int)uVar6 + 1;
        iVar13 = (int)((ulonglong)
                       ((longlong)piVar12[uVar6 * 3 + 3] * (longlong)iVar4 +
                       ((longlong)piVar12[uVar6 * 3 + 3] * (longlong)iVar4 >> 0x3f) + 0x8000) >>
                      0x10);
        piVar12[uVar6 * 3 + 4] = iVar13;
        piVar12[uVar6 * 3 + 5] = iVar13;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < (uint)piVar12[2]);
    }
    lVar5 = (longlong)iVar4;
    *(bool *)(piVar12 + 0x35) =
         (int)((ulonglong)(piVar12[0x34] * lVar5 + (piVar12[0x34] * lVar5 >> 0x3f) + 0x8000) >> 0x10
              ) < 0x28;
    if ((param_3 == 1) && (uVar6 = 0, piVar12[0x36] != 0)) {
      do {
        lVar9 = piVar12[uVar6 * 9 + 0x37] * lVar5;
        lVar10 = piVar12[uVar6 * 9 + 0x3a] * lVar5;
        iVar13 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + iVar2;
        piVar12[uVar6 * 9 + 0x38] = iVar13;
        iVar4 = (int)((ulonglong)((lVar10 >> 0x3f) + lVar10 + 0x8000) >> 0x10) + iVar2;
        piVar12[uVar6 * 9 + 0x3b] = iVar4;
        piVar12[uVar6 * 9 + 0x3c] = iVar4;
        piVar12[uVar6 * 9 + 0x3f] = piVar12[uVar6 * 9 + 0x3f] & 0xfffffffe;
        lVar9 = (piVar12[uVar6 * 9 + 0x37] - piVar12[uVar6 * 9 + 0x3a]) * lVar5;
        piVar12[uVar6 * 9 + 0x39] = iVar13;
        iVar4 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
        if (iVar4 + 0x30U < 0x61) {
          iVar3 = -iVar4;
          if (-iVar4 < 0) {
            iVar3 = iVar4;
          }
          if (iVar3 < 0x20) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0x40;
            if (iVar3 < 0x30) {
              iVar11 = 0x20;
            }
          }
          uVar8 = iVar13 + 0x20U & 0xffffffc0;
          piVar12[uVar6 * 9 + 0x39] = uVar8;
          iVar13 = -iVar11;
          if (-1 < iVar4) {
            iVar13 = iVar11;
          }
          piVar12[uVar6 * 9 + 0x3c] = uVar8 - iVar13;
          piVar12[uVar6 * 9 + 0x3f] = piVar12[uVar6 * 9 + 0x3f] | 1;
        }
        uVar8 = piVar12[0x36];
        uVar14 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar14;
      } while (uVar14 < uVar8);
      if (uVar8 != 0) {
        uVar6 = 0;
        do {
          if ((((byte)piVar12[uVar6 * 9 + 0x3f] & 5) == 5) && (uVar8 != 0)) {
            uVar14 = 0;
            do {
              uVar7 = (ulonglong)uVar14;
              if (((((byte)piVar12[uVar7 * 9 + 0x3f] & 5) == 1) &&
                  (piVar12[uVar7 * 9 + 0x39] <= piVar12[uVar6 * 9 + 0x3c])) &&
                 (piVar12[uVar6 * 9 + 0x39] <= piVar12[uVar7 * 9 + 0x3c])) {
                piVar12[uVar6 * 9 + 0x3f] = piVar12[uVar6 * 9 + 0x3f] & 0xfffffffe;
                break;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar8);
          }
          uVar8 = piVar12[0x36];
          uVar14 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar14;
        } while (uVar14 < uVar8);
      }
    }
  }
  return;
code_r0x000140303b90:
  uVar8 = uVar8 + 1;
  if (*(uint *)(param_1 + 800) <= uVar8) goto LAB_140303b97;
  goto LAB_140303b80;
}

