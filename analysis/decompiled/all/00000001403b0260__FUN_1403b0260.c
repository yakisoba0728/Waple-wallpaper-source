// Function: FUN_1403b0260
// Addr: 1403b0260
// Size: 700 bytes


void FUN_1403b0260(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  lVar5 = *(longlong *)(param_1 + 0xa0);
  lVar8 = 100;
  if (*(char *)(lVar5 + 0x59) == '\0') {
    lVar8 = 0x5c;
  }
  uVar9 = 0;
  iVar13 = *(int *)(lVar8 + lVar5) - *(int *)(lVar5 + 0x5c);
  iVar14 = param_5 + iVar13;
  if (param_2 != 0) {
    do {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x148) + uVar9 * 4);
      *piVar2 = *piVar2 + iVar13;
      uVar11 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar11;
    } while (uVar11 < param_2);
  }
  uVar9 = 0;
  param_5 = 0;
  if (param_3 != 0) {
    do {
      if (*(char *)(lVar5 + 0x58) == '\0') break;
      lVar8 = param_4 + uVar9 * 4;
      uVar11 = (uint)*(byte *)(param_4 + 1 + uVar9 * 4) +
               (uint)*(byte *)(param_4 + uVar9 * 4) * 0x100;
      if (uVar11 < param_2) {
        lVar10 = 100;
        if (*(char *)(lVar5 + 0x59) == '\0') {
          lVar10 = 0x5c;
        }
        uVar15 = (*(int *)(lVar10 + lVar5) - *(int *)(lVar5 + 0x5c)) + *(int *)(lVar5 + 0x60);
        if (*(uint *)((ulonglong)uVar11 * 4 + *(longlong *)(param_1 + 0x148)) < uVar15) {
          cVar6 = FUN_1403ec600(lVar5);
          if ((cVar6 == '\0') || (*(int *)(lVar5 + 0xe0) < 1)) break;
          if (*(int *)(param_1 + 0x128) == 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58) = 0;
          }
          else {
            uVar3 = *(undefined1 *)(lVar8 + 2);
            uVar4 = *(undefined1 *)(lVar8 + 3);
            piVar2 = (int *)(*(longlong *)(param_1 + 0xa0) + 0xe0);
            *piVar2 = *piVar2 + -1;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0xe0) < 0) {
              *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58) = 0;
            }
            else {
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
              cVar6 = (**(code **)(param_1 + 0xe8))(param_1,CONCAT11(uVar3,uVar4));
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
              if (cVar6 != '\0') {
                lVar8 = 100;
                if (*(char *)(lVar5 + 0x59) == '\0') {
                  lVar8 = 0x5c;
                }
                iVar13 = *(int *)(lVar5 + 0x60) +
                         ((*(int *)(lVar8 + lVar5) - *(int *)(lVar5 + 0x5c)) - uVar15);
                if (iVar13 != 0) {
                  lVar8 = *(longlong *)(param_1 + 0x148);
                  iVar1 = iVar13 + iVar14;
                  iVar14 = *(int *)(lVar8 + (ulonglong)uVar11 * 4);
                  iVar7 = (iVar13 - iVar1) + iVar14;
                  if (iVar14 <= iVar1) {
                    iVar14 = iVar1;
                    iVar7 = iVar13;
                  }
                  uVar11 = uVar11 + 1;
                  uVar9 = (ulonglong)uVar11;
                  if (iVar7 < 1) {
                    iVar13 = uVar11 - param_2;
                    if ((int)(uVar11 - param_2) <= iVar7) {
                      iVar13 = iVar7;
                    }
                    uVar12 = (ulonglong)(uVar11 - iVar13);
                    iVar7 = iVar13;
                  }
                  else {
                    uVar15 = iVar7 + param_2;
                    if (0x40 < uVar15) break;
                    uVar12 = uVar9;
                    if (*(uint *)(param_1 + 0x144) < uVar15) {
                      if ((int)uVar15 < 0) {
                        uVar15 = 0;
                      }
                      cVar6 = FUN_1403a4580(param_1 + 0x140,uVar15,0);
                      if (cVar6 == '\0') {
                        return;
                      }
                      *(uint *)(param_1 + 0x144) = uVar15;
                      lVar8 = *(longlong *)(param_1 + 0x148);
                    }
                  }
                  lVar8 = lVar8 + uVar12 * 4;
                  FUN_1404210f0(lVar8 + (longlong)iVar7 * 4,lVar8,
                                (ulonglong)(param_2 - (int)uVar12) << 2);
                  uVar15 = (int)uVar12 + iVar7;
                  param_2 = param_2 + iVar7;
                  while (uVar11 < uVar15) {
                    *(int *)(*(longlong *)(param_1 + 0x148) + uVar9 * 4) =
                         *(int *)(*(longlong *)(param_1 + 0x148) + (ulonglong)((int)uVar9 - 1) * 4)
                         + 1;
                    uVar11 = (int)uVar9 + 1;
                    uVar9 = (ulonglong)uVar11;
                  }
                  for (; uVar15 < param_2; uVar15 = uVar15 + 1) {
                    piVar2 = (int *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar15 * 4);
                    *piVar2 = *piVar2 + iVar7;
                  }
                }
              }
            }
          }
        }
      }
      param_5 = param_5 + 1;
      uVar9 = (ulonglong)param_5;
    } while (param_5 < param_3);
  }
  FUN_1403ec600(lVar5,iVar14);
  return;
}

