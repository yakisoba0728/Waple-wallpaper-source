// Function: FUN_1403b0330
// Addr: 1403b0330
// Size: 590 bytes


void FUN_1403b0330(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5)

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
  int iVar12;
  int iVar13;
  uint uVar14;
  
  lVar5 = *(longlong *)(param_1 + 0xa0);
  lVar8 = 100;
  if (*(char *)(lVar5 + 0x59) == '\0') {
    lVar8 = 0x5c;
  }
  uVar9 = 0;
  iVar12 = *(int *)(lVar8 + lVar5) - *(int *)(lVar5 + 0x5c);
  iVar13 = param_5 + iVar12;
  if (param_2 != 0) {
    do {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x148) + uVar9 * 4);
      *piVar2 = *piVar2 + iVar12;
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
        uVar14 = (*(int *)(lVar10 + lVar5) - *(int *)(lVar5 + 0x5c)) + *(int *)(lVar5 + 0x60);
        if (*(uint *)((ulonglong)uVar11 * 4 + *(longlong *)(param_1 + 0x148)) < uVar14) {
          cVar6 = func_0x0001403ec6d0(lVar5);
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
                iVar12 = *(int *)(lVar5 + 0x60) +
                         ((*(int *)(lVar8 + lVar5) - *(int *)(lVar5 + 0x5c)) - uVar14);
                if (iVar12 != 0) {
                  iVar1 = iVar12 + iVar13;
                  iVar13 = *(int *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar11 * 4);
                  iVar7 = (iVar12 - iVar1) + iVar13;
                  if (iVar13 <= iVar1) {
                    iVar13 = iVar1;
                    iVar7 = iVar12;
                  }
                  uVar11 = uVar11 + 1;
                  if (iVar7 < 1) {
                    iVar13 = uVar11 - param_2;
                    if ((int)(uVar11 - param_2) <= iVar7) {
                      iVar13 = iVar7;
                    }
                    uVar11 = uVar11 - iVar13;
                    iVar7 = iVar13;
                  }
                  else {
                    uVar14 = iVar7 + param_2;
                    if (0x40 < uVar14) break;
                    if (*(uint *)(param_1 + 0x144) < uVar14) {
                      if ((int)uVar14 < 0) {
                        uVar14 = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_1403a4650(param_1 + 0x140,uVar14,0);
                    }
                  }
                  lVar5 = *(longlong *)(param_1 + 0x148) + (ulonglong)uVar11 * 4;
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(lVar5 + (longlong)iVar7 * 4,lVar5,(ulonglong)(param_2 - uVar11) << 2
                               );
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
  func_0x0001403ec6d0(lVar5,iVar13);
  return;
}

