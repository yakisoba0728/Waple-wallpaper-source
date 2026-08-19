// Function: FUN_140109c70
// Addr: 140109c70
// Size: 526 bytes


void FUN_140109c70(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
                  uint param_6,char param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uVar3 = (uint)param_4;
  if ((((param_3 == param_5) || (uVar3 == param_6)) && (param_5 <= param_3)) && (param_6 <= uVar3))
  {
    if (param_6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(param_2,(ulonglong)
                            ((((uVar3 - (uVar3 - param_6 >> 1)) + -1) * param_3 +
                             (param_3 - param_5 >> 1)) * 4) + param_1,param_5 * 4,param_4,
                    param_5 * 4);
    }
  }
  else {
    fVar10 = (float)param_3;
    fVar8 = (float)(param_4 & 0xffffffff);
    fVar11 = (float)param_5 / (float)param_6;
    if (fVar10 / fVar8 < fVar11) {
      iVar6 = 0;
      iVar7 = (int)((fVar8 - fVar10 / fVar11) * DAT_140492790);
      fVar9 = fVar10 / (float)param_5;
    }
    else {
      iVar7 = 0;
      fVar9 = fVar8 / (float)param_6;
      iVar6 = (int)((fVar10 - fVar8 * fVar11) * DAT_140492790);
    }
    uVar5 = 0;
    if (param_5 != 0) {
      do {
        uVar4 = 0;
        if (3 < param_6) {
          iVar1 = iVar6 + (int)((float)(int)uVar5 * fVar9);
          do {
            *(undefined4 *)(param_2 + (ulonglong)((uVar4 * param_5 + uVar5) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((uVar3 - (int)((float)(int)uVar4 * fVar9)) - iVar7) + -1) * param_3 +
                        iVar1) * 4));
            *(undefined4 *)(param_2 + (ulonglong)(((uVar4 + 1) * param_5 + uVar5) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((uVar3 - (int)((float)(int)(uVar4 + 1) * fVar9)) - iVar7) + -1) * param_3
                        + iVar1) * 4));
            *(undefined4 *)(param_2 + (ulonglong)(((uVar4 + 2) * param_5 + uVar5) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((uVar3 - (int)((float)(int)(uVar4 + 2) * fVar9)) - iVar7) + -1) * param_3
                        + iVar1) * 4));
            iVar2 = uVar4 + 3;
            uVar4 = uVar4 + 4;
            *(undefined4 *)(param_2 + (ulonglong)((iVar2 * param_5 + uVar5) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((uVar3 - (int)((float)iVar2 * fVar9)) - iVar7) + -1) * param_3 +
                         (int)((float)(int)uVar5 * fVar9) + iVar6) * 4));
          } while (uVar4 < param_6 - 3);
        }
        if (uVar4 < param_6) {
          do {
            fVar8 = (float)(int)uVar4;
            iVar1 = uVar4 * param_5;
            uVar4 = uVar4 + 1;
            *(undefined4 *)(param_2 + (ulonglong)((iVar1 + uVar5) * 4)) =
                 *(undefined4 *)
                  (param_1 +
                  (int)(((((uVar3 - (int)(fVar8 * fVar9)) - iVar7) + -1) * param_3 +
                         (int)((float)(int)uVar5 * fVar9) + iVar6) * 4));
          } while (uVar4 < param_6);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_5);
    }
  }
  if (param_7 == '\0') {
    return;
  }
  uStack_30 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  func_0x00014005af50(&lStack_40,param_5 * param_6 * 4);
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(lStack_40,param_2,lStack_38 - lStack_40);
}

