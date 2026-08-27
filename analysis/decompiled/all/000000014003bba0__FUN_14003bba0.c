// Function: FUN_14003bba0
// Addr: 14003bba0
// Size: 1497 bytes


undefined8 FUN_14003bba0(HWND param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  HMONITOR pHVar3;
  longlong lVar4;
  uint uVar5;
  BOOL BVar6;
  HRESULT HVar7;
  HMONITOR pHVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res10 [2];
  longlong local_res18;
  tagRECT local_68 [2];
  undefined1 local_48 [32];
  
  uVar5 = GetWindowLongW(param_1,-0x10);
  if ((((uVar5 & 0x30000000) == 0x10000000) && (BVar6 = IsIconic(param_1), BVar6 == 0)) &&
     ((HVar7 = DwmGetWindowAttribute(param_1,0xe,local_res10,4), HVar7 < 0 || (local_res10[0] == 0))
     )) {
    if ((uVar5 >> 0x18 & 1) == 0) {
      if (DAT_1404e8c90 == param_1) {
        pHVar8 = MonitorFromWindow(param_1,2);
        lVar12 = param_2[5];
        uVar9 = param_2[10] &
                (((((((((ulonglong)pHVar8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pHVar8 >> 8 & 0xff) * 0x100000001b3 ^
                     (ulonglong)pHVar8 >> 0x10 & 0xff) * 0x100000001b3 ^
                    (ulonglong)pHVar8 >> 0x18 & 0xff) * 0x100000001b3 ^
                   (ulonglong)pHVar8 >> 0x20 & 0xff) * 0x100000001b3 ^
                  (ulonglong)pHVar8 >> 0x28 & 0xff) * 0x100000001b3 ^
                 (ulonglong)pHVar8 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)pHVar8 >> 0x38) *
                0x100000001b3;
        lVar14 = *(longlong *)(param_2[7] + 8 + uVar9 * 0x10);
        if (lVar14 != lVar12) {
          pHVar3 = *(HMONITOR *)(lVar14 + 0x10);
          while (pHVar8 != pHVar3) {
            if (lVar14 == *(longlong *)(param_2[7] + uVar9 * 0x10)) {
              return 1;
            }
            lVar14 = *(longlong *)(lVar14 + 8);
            pHVar3 = *(HMONITOR *)(lVar14 + 0x10);
          }
          if (lVar14 == 0) {
            lVar14 = lVar12;
          }
          if ((lVar14 != lVar12) &&
             ((ulonglong)*(uint *)(lVar14 + 0x18) < (ulonglong)(param_2[2] - param_2[1] >> 4))) {
            GetWindowRect(param_1,local_68);
            lVar12 = param_2[1];
            lVar15 = (ulonglong)*(uint *)(lVar14 + 0x18) * 0x10;
            if ((*(int *)(lVar15 + 8 + lVar12) - *(int *)(lVar15 + lVar12) <=
                 local_68[0].right - local_68[0].left) &&
               (*(int *)(lVar15 + 0xc + lVar12) - *(int *)(lVar15 + 4 + lVar12) <=
                local_68[0].bottom - local_68[0].top)) {
              if (*(char *)(*param_2 + 1) == '\0') {
                puVar1 = (uint *)(*param_2 + 0x18);
                *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar14 + 0x18) & 0x1f);
              }
              else {
                GetWindowThreadProcessId(param_1,local_res10);
                lVar15 = *(longlong *)(*param_2 + 8);
                lVar4 = *(longlong *)(lVar15 + 0x80);
                uVar9 = *(ulonglong *)(lVar15 + 0xa8) &
                        (((((ulonglong)local_res10[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)(local_res10[0] >> 8) & 0xff) * 0x100000001b3 ^
                         (ulonglong)(local_res10[0] >> 0x10) & 0xff) * 0x100000001b3 ^
                        (ulonglong)(local_res10[0] >> 0x18)) * 0x100000001b3;
                lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x90) + 8 + uVar9 * 0x10);
                if (lVar12 != lVar4) {
                  uVar5 = *(uint *)(lVar12 + 0x10);
                  while (local_res10[0] != uVar5) {
                    if (lVar12 == *(longlong *)(*(longlong *)(lVar15 + 0x90) + uVar9 * 0x10))
                    goto LAB_14003c141;
                    lVar12 = *(longlong *)(lVar12 + 8);
                    uVar5 = *(uint *)(lVar12 + 0x10);
                  }
                  if (lVar12 == 0) {
                    lVar12 = lVar4;
                  }
                  if (lVar12 != lVar4) {
                    uVar2 = *(undefined4 *)(lVar14 + 0x18);
                    lVar12 = lVar12 + 0x18;
                    plVar10 = (longlong *)FUN_140128e80(lVar15 + 0xb8,&local_res18,lVar12);
                    if (*plVar10 != *(longlong *)(lVar15 + 0xc0)) {
                      uVar11 = FUN_140016600(local_48,lVar12);
                      FUN_1401347a0(lVar15,uVar11,uVar2,3);
                    }
                    FUN_140128e80(lVar15 + 0x20,&local_res18,lVar12);
                    if (local_res18 != *(longlong *)(lVar15 + 0x28)) {
                      for (piVar13 = *(int **)(local_res18 + 0x30);
                          piVar13 != *(int **)(local_res18 + 0x38); piVar13 = piVar13 + 2) {
                        if (*piVar13 == 3) {
                          return 1;
                        }
                      }
                    }
                  }
                }
LAB_14003c141:
                *(uint *)(*param_2 + 0x18) =
                     *(uint *)(*param_2 + 0x18) | 1 << ((byte)*(undefined4 *)(lVar14 + 0x18) & 0x1f)
                ;
              }
            }
          }
        }
      }
    }
    else {
      pHVar8 = MonitorFromWindow(param_1,2);
      lVar12 = param_2[5];
      uVar9 = param_2[10] &
              (((((((((ulonglong)pHVar8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)pHVar8 >> 8 & 0xff) * 0x100000001b3 ^
                   (ulonglong)pHVar8 >> 0x10 & 0xff) * 0x100000001b3 ^
                  (ulonglong)pHVar8 >> 0x18 & 0xff) * 0x100000001b3 ^
                 (ulonglong)pHVar8 >> 0x20 & 0xff) * 0x100000001b3 ^
                (ulonglong)pHVar8 >> 0x28 & 0xff) * 0x100000001b3 ^ (ulonglong)pHVar8 >> 0x30 & 0xff
               ) * 0x100000001b3 ^ (ulonglong)pHVar8 >> 0x38) * 0x100000001b3;
      lVar14 = *(longlong *)(param_2[7] + 8 + uVar9 * 0x10);
      if (lVar14 != lVar12) {
        pHVar3 = *(HMONITOR *)(lVar14 + 0x10);
        while (pHVar8 != pHVar3) {
          if (lVar14 == *(longlong *)(param_2[7] + uVar9 * 0x10)) {
            return 1;
          }
          lVar14 = *(longlong *)(lVar14 + 8);
          pHVar3 = *(HMONITOR *)(lVar14 + 0x10);
        }
        if (lVar14 == 0) {
          lVar14 = lVar12;
        }
        if (lVar14 != lVar12) {
          lVar12 = *param_2;
          if (*(char *)(lVar12 + 1) != '\0') {
            GetWindowThreadProcessId(param_1,local_res10);
            lVar15 = *(longlong *)(*param_2 + 8);
            lVar4 = *(longlong *)(lVar15 + 0x80);
            uVar9 = *(ulonglong *)(lVar15 + 0xa8) &
                    (((((ulonglong)local_res10[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(local_res10[0] >> 8) & 0xff) * 0x100000001b3 ^
                     (ulonglong)(local_res10[0] >> 0x10) & 0xff) * 0x100000001b3 ^
                    (ulonglong)(local_res10[0] >> 0x18)) * 0x100000001b3;
            lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x90) + 8 + uVar9 * 0x10);
            if (lVar12 != lVar4) {
              uVar5 = *(uint *)(lVar12 + 0x10);
              while (local_res10[0] != uVar5) {
                if (lVar12 == *(longlong *)(*(longlong *)(lVar15 + 0x90) + uVar9 * 0x10))
                goto LAB_14003be73;
                lVar12 = *(longlong *)(lVar12 + 8);
                uVar5 = *(uint *)(lVar12 + 0x10);
              }
              if (lVar12 == 0) {
                lVar12 = lVar4;
              }
              if (lVar12 != lVar4) {
                uVar2 = *(undefined4 *)(lVar14 + 0x18);
                lVar12 = lVar12 + 0x18;
                plVar10 = (longlong *)FUN_140128e80(lVar15 + 0xb8,&local_res18,lVar12);
                if (*plVar10 != *(longlong *)(lVar15 + 0xc0)) {
                  uVar11 = FUN_140016600(local_68,lVar12);
                  FUN_1401347a0(lVar15,uVar11,uVar2,2);
                }
                FUN_140128e80(lVar15 + 0x20,&local_res18,lVar12);
                if (local_res18 != *(longlong *)(lVar15 + 0x28)) {
                  for (piVar13 = *(int **)(local_res18 + 0x30);
                      piVar13 != *(int **)(local_res18 + 0x38); piVar13 = piVar13 + 2) {
                    if (*piVar13 == 2) {
                      return 1;
                    }
                  }
                }
              }
            }
LAB_14003be73:
            lVar12 = *param_2;
          }
          *(uint *)(lVar12 + 0x14) =
               *(uint *)(lVar12 + 0x14) | 1 << ((byte)*(undefined4 *)(lVar14 + 0x18) & 0x1f);
        }
      }
    }
  }
  return 1;
}

