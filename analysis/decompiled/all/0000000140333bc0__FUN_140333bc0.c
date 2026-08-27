// Function: FUN_140333bc0
// Addr: 140333bc0
// Size: 1268 bytes


void FUN_140333bc0(int *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  
  lVar8 = *(longlong *)(param_2 + 0xf0);
  FUN_1404217a0(param_1,0,0x150);
  *param_1 = *(int *)(param_2 + 0x38);
  iVar4 = FUN_1402efa10(*(undefined4 *)(*(longlong *)(lVar8 + 0x328) + 0x17c));
  param_1[3] = iVar4;
  param_1[4] = *(int *)(*(longlong *)(lVar8 + 0x328) + 0x180) << 0x10;
  param_1[5] = *(int *)(*(longlong *)(lVar8 + 0x328) + 0x184) << 0x10;
  lVar8 = *(longlong *)(lVar8 + 0x328);
  uVar10 = (ulonglong)*(byte *)(lVar8 + 0xb8);
  if ((*(int *)(lVar8 + 0x208) == 1) &&
     ((uVar10 == 0 ||
      ((((uVar10 == 4 && (*(int *)(lVar8 + 0xbc) < -0x780000)) &&
        (*(int *)(lVar8 + 0xc0) < -0x780000)) &&
       ((0x3700000 < *(int *)(lVar8 + 0xc4) && (0x3700000 < *(int *)(lVar8 + 200))))))))) {
    iVar7 = *param_1;
    lVar8 = (longlong)iVar7 * -0x780001;
    param_1[0x14] = -0x780001;
    param_1[0x16] = iVar7;
    param_1[0x10] = 0x31;
    param_1[0x15] =
         ((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x8000U & 0xffff0000) -
         0x8000;
    iVar4 = *(int *)(param_2 + 0x130);
    param_1[0xe] = iVar7;
    param_1[8] = 0x32;
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    iVar4 = iVar4 * 2 + 0x3700001;
    lVar8 = (longlong)iVar4 * (longlong)iVar7;
    param_1[0xc] = iVar4;
    param_1[0xd] = ((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x8000U &
                   0xffff0000) + 0x8000;
    return;
  }
  bVar1 = *(byte *)(lVar8 + 0xb9);
  uVar9 = 0;
  uVar11 = (ulonglong)*(byte *)(lVar8 + 0xba);
  iVar4 = 0;
  bVar2 = *(byte *)(lVar8 + 0xbb);
  if (uVar10 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar8 + 0xbc + uVar9 * 4);
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar8 + 0xc0 + uVar9 * 4);
      uVar6 = (ulonglong)(uint)param_1[1];
      iVar7 = param_1[(uVar6 + 5) * 5] - param_1[uVar6 * 5 + 0x18];
      if (-1 < iVar7) {
        if (iVar7 <= iVar4) {
          iVar7 = iVar4;
        }
        iVar4 = iVar7;
        if (uVar9 == 0) {
          *(undefined1 *)(param_1 + uVar6 * 5 + 0x1c) = 1;
          uVar6 = (ulonglong)(uint)param_1[1];
          iVar7 = param_1[uVar6 * 5 + 0x19];
        }
        else {
          param_1[(uVar6 + 5) * 5] = param_1[(uVar6 + 5) * 5] + *(int *)(param_2 + 0x130) * 2;
          param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] =
               param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] + *(int *)(param_2 + 0x130) * 2;
          *(undefined1 *)(param_1 + (ulonglong)(uint)param_1[1] * 5 + 0x1c) = 0;
          uVar6 = (ulonglong)(uint)param_1[1];
          iVar7 = param_1[uVar6 * 5 + 0x18];
        }
        param_1[uVar6 * 5 + 0x1a] = iVar7;
        param_1[1] = param_1[1] + 1;
      }
      uVar9 = uVar9 + 2;
    } while (uVar9 < uVar10);
  }
  uVar10 = 0;
  if ((ulonglong)bVar1 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar8 + 0xf4 + uVar10 * 4);
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar8 + 0xf8 + uVar10 * 4);
      uVar9 = (ulonglong)(uint)param_1[1];
      iVar12 = param_1[uVar9 * 5 + 0x19] - param_1[uVar9 * 5 + 0x18];
      iVar7 = iVar4;
      if (-1 < iVar12) {
        *(undefined1 *)(param_1 + uVar9 * 5 + 0x1c) = 1;
        param_1[(ulonglong)(uint)param_1[1] * 5 + 0x1a] =
             param_1[(ulonglong)(uint)param_1[1] * 5 + 0x19];
        param_1[1] = param_1[1] + 1;
        iVar7 = iVar12;
        if (iVar12 <= iVar4) {
          iVar7 = iVar4;
        }
      }
      iVar4 = iVar7;
      uVar10 = uVar10 + 2;
    } while (uVar10 < bVar1);
  }
  iVar7 = FUN_1402efa10(0x10000,*param_1);
  uVar10 = 0;
  if (param_1[1] != 0) {
    do {
      iVar12 = param_1[uVar10 * 5 + 0x1a];
      if ((char)param_1[uVar10 * 5 + 0x1c] == '\0') {
        uVar9 = 2;
        iVar13 = 0x7fffffff;
        if (2 < uVar11) {
          do {
            iVar3 = *(int *)(lVar8 + 0x11c + uVar9 * 4) + *(int *)(param_2 + 0x130) * 2;
            iVar5 = iVar12 - iVar3;
            if (iVar5 < 0) {
              iVar5 = iVar3 - iVar12;
            }
          } while ((((iVar13 <= iVar5) || (iVar7 <= iVar5)) ||
                   (param_1[uVar10 * 5 + 0x1a] = iVar3, iVar13 = iVar5, iVar5 != 0)) &&
                  (uVar9 = uVar9 + 2, uVar9 < uVar11));
        }
      }
      else {
        uVar9 = 0;
        iVar13 = 0x7fffffff;
        if ((ulonglong)bVar2 != 0) {
          do {
            iVar3 = *(int *)(lVar8 + 0x158 + uVar9 * 4);
            iVar5 = iVar12 - iVar3;
            if (iVar5 < 0) {
              iVar5 = iVar3 - iVar12;
            }
          } while ((((iVar13 <= iVar5) || (iVar7 <= iVar5)) ||
                   (param_1[uVar10 * 5 + 0x1a] = iVar3, iVar13 = iVar5, iVar5 != 0)) &&
                  (uVar9 = uVar9 + 2, uVar9 < bVar2));
        }
        if (1 < uVar11) {
          iVar3 = *(int *)(lVar8 + 0x120);
          iVar5 = iVar12 - iVar3;
          if (iVar5 < 0) {
            iVar5 = iVar3 - iVar12;
          }
          if ((iVar5 < iVar13) && (iVar5 < iVar7)) {
            param_1[uVar10 * 5 + 0x1a] = iVar3;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[1]);
  }
  if ((0 < iVar4) && (iVar7 = param_1[3], iVar12 = FUN_1402efa10(0x10000,iVar4), iVar12 < iVar7)) {
    iVar4 = FUN_1402efa10(0x10000,iVar4);
    param_1[3] = iVar4;
  }
  if (*param_1 < param_1[3]) {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar4 = FUN_1402f20b0(0x999a);
    param_1[6] = 0x999a - iVar4;
    if (0x7fff < 0x999a - iVar4) {
      param_1[6] = 0x7fff;
    }
  }
  if (*(char *)(param_2 + 0x102) != '\0') {
    param_1[6] = 0;
  }
  if (param_1[1] != 0) {
    uVar10 = 0;
    do {
      iVar4 = -param_1[6];
      if ((char)param_1[uVar10 * 5 + 0x1c] == '\0') {
        iVar4 = param_1[6];
      }
      uVar9 = uVar10 + 1;
      param_1[uVar10 * 5 + 0x1b] =
           (int)((ulonglong)
                 ((longlong)param_1[uVar10 * 5 + 0x1a] * (longlong)*param_1 + 0x8000 +
                 ((longlong)param_1[uVar10 * 5 + 0x1a] * (longlong)*param_1 >> 0x3f)) >> 0x10) +
           iVar4 + 0x8000U & 0xffff0000;
      uVar10 = uVar9;
    } while (uVar9 < (uint)param_1[1]);
  }
  return;
}

