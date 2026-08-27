// Function: FUN_1402fddf0
// Addr: 1402fddf0
// Size: 661 bytes


void FUN_1402fddf0(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  
  uVar8 = 0;
  lVar10 = (longlong)param_2 * 0x898;
  uVar14 = *(ulonglong *)(lVar10 + 0x50 + param_1);
  if (uVar14 != 0) {
    uVar8 = uVar14 + (ulonglong)*(uint *)(lVar10 + 0x48 + param_1) * 0x48;
  }
  iVar1 = *(int *)(lVar10 + 0x68 + param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1180) + 0x40) * 8;
  lVar10 = 8;
  if (param_2 != 0) {
    lVar10 = 0x10;
  }
  iVar4 = FUN_1402efa10(0xc0,*(undefined4 *)(lVar10 + param_1));
  uVar11 = uVar14;
  if (uVar14 < uVar8) {
    do {
      uVar9 = uVar14;
      if (*(char *)(uVar11 + 1) == iVar1) {
        do {
          if (((uVar9 != uVar11) && ((int)*(char *)(uVar9 + 1) + (int)*(char *)(uVar11 + 1) == 0))
             && (iVar13 = (int)*(short *)(uVar9 + 2) - (int)*(short *)(uVar11 + 2), -1 < iVar13)) {
            iVar12 = (int)*(short *)(uVar9 + 8);
            if ((int)*(short *)(uVar11 + 8) <= (int)*(short *)(uVar9 + 8)) {
              iVar12 = (int)*(short *)(uVar11 + 8);
            }
            iVar7 = (int)*(short *)(uVar9 + 6);
            if ((int)*(short *)(uVar9 + 6) <= (int)*(short *)(uVar11 + 6)) {
              iVar7 = (int)*(short *)(uVar11 + 6);
            }
            iVar12 = iVar12 - iVar7;
            if ((int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb <= iVar12) {
              iVar7 = iVar13 * 8;
              if ((iVar7 < *(int *)(uVar11 + 0x30) * 9) &&
                 ((iVar7 < *(int *)(uVar11 + 0x30) * 7 || (*(int *)(uVar11 + 0x34) < iVar12)))) {
                *(int *)(uVar11 + 0x30) = iVar13;
                *(int *)(uVar11 + 0x34) = iVar12;
                *(ulonglong *)(uVar11 + 0x20) = uVar9;
              }
              if ((iVar7 < *(int *)(uVar9 + 0x30) * 9) &&
                 ((iVar7 < *(int *)(uVar9 + 0x30) * 7 || (*(int *)(uVar9 + 0x34) < iVar12)))) {
                *(int *)(uVar9 + 0x30) = iVar13;
                *(int *)(uVar9 + 0x34) = iVar12;
                *(ulonglong *)(uVar9 + 0x20) = uVar11;
              }
            }
          }
          uVar9 = uVar9 + 0x48;
        } while (uVar9 < uVar8);
      }
      uVar11 = uVar11 + 0x48;
      uVar9 = uVar14;
    } while (uVar11 < uVar8);
    do {
      lVar10 = *(longlong *)(uVar9 + 0x20);
      if ((((lVar10 != 0) && (*(ulonglong *)(lVar10 + 0x20) == uVar9)) &&
          (sVar6 = *(short *)(uVar9 + 2), sVar6 < *(short *)(lVar10 + 2))) &&
         (uVar11 = uVar14, *(int *)(uVar9 + 0x30) < iVar4)) {
        do {
          if (((*(short *)(uVar11 + 2) <= sVar6) && (uVar9 != uVar11)) &&
             ((uVar2 = *(ulonglong *)(uVar11 + 0x20), uVar2 != 0 &&
              (*(ulonglong *)(uVar2 + 0x20) == uVar11)))) {
            if (*(short *)(lVar10 + 2) <= *(short *)(uVar2 + 2)) {
              if (sVar6 == *(short *)(uVar11 + 2)) {
                if (*(short *)(lVar10 + 2) == *(short *)(uVar2 + 2)) goto LAB_1402fe01a;
                sVar6 = *(short *)(uVar9 + 2);
              }
              if ((*(int *)(uVar9 + 0x30) < *(int *)(uVar11 + 0x30)) &&
                 (*(int *)(uVar11 + 0x30) < *(int *)(uVar9 + 0x30) * 4)) {
                uVar5 = uVar14;
                if (*(int *)(uVar9 + 0x34) < *(int *)(uVar11 + 0x34) * 3) {
                  *(undefined8 *)(lVar10 + 0x20) = 0;
                  *(undefined8 *)(uVar9 + 0x20) = 0;
                  break;
                }
                do {
                  if (*(ulonglong *)(uVar5 + 0x20) == uVar11) {
                    *(longlong *)(uVar5 + 0x28) = lVar10;
LAB_1402fe008:
                    *(undefined8 *)(uVar5 + 0x20) = 0;
                  }
                  else if (*(ulonglong *)(uVar5 + 0x20) == uVar2) {
                    *(ulonglong *)(uVar5 + 0x28) = uVar9;
                    goto LAB_1402fe008;
                  }
                  uVar5 = uVar5 + 0x48;
                } while (uVar5 < uVar8);
                sVar6 = *(short *)(uVar9 + 2);
              }
            }
          }
LAB_1402fe01a:
          uVar11 = uVar11 + 0x48;
        } while (uVar11 < uVar8);
      }
      uVar9 = uVar9 + 0x48;
    } while (uVar9 < uVar8);
    do {
      lVar10 = *(longlong *)(uVar14 + 0x20);
      if ((lVar10 != 0) && (*(ulonglong *)(lVar10 + 0x20) != uVar14)) {
        *(undefined8 *)(uVar14 + 0x20) = 0;
        if ((*(int *)(lVar10 + 0x30) < iVar4) ||
           (*(int *)(uVar14 + 0x30) < *(int *)(lVar10 + 0x30) * 4)) {
          *(undefined8 *)(uVar14 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
        }
      }
      uVar14 = uVar14 + 0x48;
    } while (uVar14 < uVar8);
  }
  return;
}

