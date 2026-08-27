// Function: FUN_140109ba0
// Addr: 140109ba0
// Size: 955 bytes


void FUN_140109ba0(longlong param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_40 [3];
  
  if ((((param_3 == param_5) || (param_4 == param_6)) && (param_5 <= param_3)) &&
     (param_6 <= param_4)) {
    uVar10 = 0;
    if (param_6 != 0) {
      do {
        FUN_1404210f0((ulonglong)(param_5 * 4 * uVar10) + param_2,
                      (ulonglong)
                      (((((param_4 - uVar10) - (param_4 - param_6 >> 1)) + -1) * param_3 +
                       (param_3 - param_5 >> 1)) * 4) + param_1,param_5 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_6);
    }
  }
  else {
    fVar13 = (float)param_3;
    fVar11 = (float)param_4;
    fVar14 = (float)param_5 / (float)param_6;
    if (fVar13 / fVar11 < fVar14) {
      iVar2 = 0;
      iVar9 = (int)((fVar11 - fVar13 / fVar14) * DAT_1404926c0);
      fVar12 = fVar13 / (float)param_5;
    }
    else {
      iVar9 = 0;
      fVar12 = fVar11 / (float)param_6;
      iVar2 = (int)((fVar13 - fVar11 * fVar14) * DAT_1404926c0);
    }
    uVar10 = 0;
    if (param_5 != 0) {
      do {
        uVar7 = 0;
        if (3 < param_6) {
          iVar3 = iVar2 + (int)((float)(int)uVar10 * fVar12);
          do {
            *(undefined4 *)(param_2 + (ulonglong)((uVar7 * param_5 + uVar10) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((param_4 - (int)((float)(int)uVar7 * fVar12)) - iVar9) + -1) * param_3 +
                        iVar3) * 4));
            *(undefined4 *)(param_2 + (ulonglong)(((uVar7 + 1) * param_5 + uVar10) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((param_4 - (int)((float)(int)(uVar7 + 1) * fVar12)) - iVar9) + -1) *
                         param_3 + iVar3) * 4));
            *(undefined4 *)(param_2 + (ulonglong)(((uVar7 + 2) * param_5 + uVar10) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((param_4 - (int)((float)(int)(uVar7 + 2) * fVar12)) - iVar9) + -1) *
                         param_3 + iVar3) * 4));
            iVar5 = uVar7 + 3;
            uVar7 = uVar7 + 4;
            *(undefined4 *)(param_2 + (ulonglong)((iVar5 * param_5 + uVar10) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((param_4 - (int)((float)iVar5 * fVar12)) - iVar9) + -1) * param_3 +
                         (int)((float)(int)uVar10 * fVar12) + iVar2) * 4));
          } while (uVar7 < param_6 - 3);
        }
        if (uVar7 < param_6) {
          do {
            fVar11 = (float)(int)uVar7;
            iVar3 = uVar7 * param_5;
            uVar7 = uVar7 + 1;
            *(undefined4 *)(param_2 + (ulonglong)((iVar3 + uVar10) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((param_4 - (int)(fVar11 * fVar12)) - iVar9) + -1) * param_3 +
                         (int)((float)(int)uVar10 * fVar12) + iVar2) * 4));
          } while (uVar7 < param_6);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_5);
    }
  }
  if (param_7 != '\0') {
    local_40[2] = 0;
    local_40[0] = 0;
    local_40[1] = 0;
    FUN_14005ae80(local_40,param_5 * param_6 * 4);
    FUN_1404210f0(local_40[0],param_2);
    uVar10 = 0;
    if (param_6 != 0) {
      do {
        if (param_5 != 0) {
          uVar7 = 0;
          do {
            uVar4 = uVar10 * param_5 + uVar7;
            iVar2 = uVar10 * param_5 - uVar7;
            uVar7 = uVar7 + 1;
            *(undefined4 *)(param_2 + (ulonglong)uVar4 * 4) =
                 *(undefined4 *)(local_40[0] + (ulonglong)(iVar2 + -1 + param_5) * 4);
          } while (uVar7 < param_5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_6);
    }
    if (local_40[0] != 0) {
      uVar6 = local_40[2] - local_40[0];
      lVar8 = local_40[0];
      if (0xfff < uVar6) {
        lVar8 = *(longlong *)(local_40[0] + -8);
        if (0x1f < (local_40[0] - lVar8) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_14028af80(lVar8,uVar6);
    }
  }
  return;
}

