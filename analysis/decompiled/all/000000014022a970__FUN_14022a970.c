// Function: FUN_14022a970
// Addr: 14022a970
// Size: 599 bytes


ulonglong FUN_14022a970(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = 0.0;
  iVar1 = *param_2;
  if (iVar1 == 1) {
    uVar6 = param_2[4];
    uVar2 = param_2[5];
    if (uVar6 <= uVar2) {
      lVar3 = *(longlong *)(param_1 + 0x2d0);
      fVar7 = fVar12;
      if (3 < (uVar2 - uVar6) + 1) {
        do {
          lVar5 = (longlong)(int)uVar6;
          uVar6 = uVar6 + 4;
          fVar7 = *(float *)(lVar3 + lVar5 * 4);
          fVar9 = *(float *)(lVar3 + 4 + lVar5 * 4);
          if (fVar7 <= fVar12) {
            fVar7 = fVar12;
          }
          fVar11 = *(float *)(lVar3 + 8 + lVar5 * 4);
          fVar12 = *(float *)(lVar3 + 0xc + lVar5 * 4);
          if (fVar9 <= fVar7) {
            fVar9 = fVar7;
          }
          if (fVar11 <= fVar9) {
            fVar11 = fVar9;
          }
          if (fVar12 <= fVar11) {
            fVar12 = fVar11;
          }
        } while (uVar6 <= uVar2 - 3);
        fVar7 = fVar12;
        if (uVar2 < uVar6) goto LAB_14022ab56;
      }
      do {
        lVar5 = (longlong)(int)uVar6;
        uVar6 = uVar6 + 1;
        fVar12 = *(float *)(lVar3 + lVar5 * 4);
        if (fVar12 <= fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = fVar12;
      } while (uVar6 <= uVar2);
    }
    goto LAB_14022ab56;
  }
  if (iVar1 == 2) {
    uVar6 = param_2[4];
    uVar2 = param_2[5];
    if (uVar6 <= uVar2) {
      lVar3 = *(longlong *)(param_1 + 0x2d0);
      fVar7 = fVar12;
      if (3 < (uVar2 - uVar6) + 1) {
        do {
          lVar5 = (longlong)(int)uVar6;
          uVar6 = uVar6 + 4;
          fVar7 = *(float *)(lVar3 + 0x40 + lVar5 * 4);
          fVar9 = *(float *)(lVar3 + 0x44 + lVar5 * 4);
          if (fVar7 <= fVar12) {
            fVar7 = fVar12;
          }
          fVar11 = *(float *)(lVar3 + 0x48 + lVar5 * 4);
          fVar12 = *(float *)(lVar3 + 0x4c + lVar5 * 4);
          if (fVar9 <= fVar7) {
            fVar9 = fVar7;
          }
          if (fVar11 <= fVar9) {
            fVar11 = fVar9;
          }
          if (fVar12 <= fVar11) {
            fVar12 = fVar11;
          }
        } while (uVar6 <= uVar2 - 3);
        fVar7 = fVar12;
        if (uVar2 < uVar6) goto LAB_14022ab56;
      }
      do {
        lVar5 = (longlong)(int)uVar6;
        uVar6 = uVar6 + 1;
        fVar12 = *(float *)(lVar3 + 0x40 + lVar5 * 4);
        if (fVar12 <= fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = fVar12;
      } while (uVar6 <= uVar2);
    }
    goto LAB_14022ab56;
  }
  if (iVar1 != 3) goto LAB_14022ab56;
  uVar6 = param_2[4];
  uVar2 = param_2[5];
  if (uVar6 <= uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x2d0);
    if (3 < (uVar2 - uVar6) + 1) {
      do {
        lVar5 = (longlong)(int)uVar6;
        fVar7 = *(float *)(lVar3 + 0x40 + lVar5 * 4) + *(float *)(lVar3 + lVar5 * 4);
        if (fVar12 < fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = *(float *)(lVar3 + 0x44 + lVar5 * 4) + *(float *)(lVar3 + 4 + lVar5 * 4);
        if (fVar12 < fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = *(float *)(lVar3 + 0x48 + lVar5 * 4) + *(float *)(lVar3 + 8 + lVar5 * 4);
        if (fVar12 < fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = *(float *)(lVar3 + 0x4c + lVar5 * 4) + *(float *)(lVar3 + 0xc + lVar5 * 4);
        if (fVar12 < fVar7) {
          fVar12 = fVar7;
        }
        uVar6 = uVar6 + 4;
      } while (uVar6 <= uVar2 - 3);
      if (uVar2 < uVar6) goto LAB_14022aa4c;
    }
    do {
      fVar7 = *(float *)(lVar3 + 0x40 + (longlong)(int)uVar6 * 4) +
              *(float *)(lVar3 + (longlong)(int)uVar6 * 4);
      if (fVar12 < fVar7) {
        fVar12 = fVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= uVar2);
  }
LAB_14022aa4c:
  fVar12 = fVar12 * DAT_140492790;
LAB_14022ab56:
  dVar10 = (double)((fVar12 - (float)param_2[2]) / ((float)param_2[3] - (float)param_2[2]));
  dVar4 = DAT_140492848;
  if (((dVar10 < DAT_140492848) && (dVar4 = 0.0, 0.0 <= dVar10)) &&
     (dVar4 = DAT_140492848, dVar10 < DAT_140492848)) {
    dVar4 = dVar10;
  }
  fVar12 = (float)dVar4;
  uVar8 = FUN_14041e420((DAT_140492900 - (fVar12 + fVar12)) * fVar12 * fVar12,param_2[1]);
  fVar12 = (float)uVar8;
  if (fVar12 < DAT_1404927d4) {
    if (fVar12 < 0.0) {
      return 0;
    }
    if (fVar12 < DAT_1404927d4) {
      return uVar8;
    }
  }
  return (ulonglong)(uint)DAT_1404927d4;
}

