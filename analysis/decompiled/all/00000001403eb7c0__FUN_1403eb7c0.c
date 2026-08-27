// Function: FUN_1403eb7c0
// Addr: 1403eb7c0
// Size: 1886 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403eb7c0(byte *param_1,float param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar7 = (ulonglong)param_4;
  if (uVar4 < 2) {
    return;
  }
  param_3 = param_3 & 0xffffffff;
  lVar3 = param_3 * 2;
  uVar8 = 0;
  if (((((float)(int)(short)((ushort)param_1[lVar3 + 3] + (ushort)param_1[lVar3 + 2] * 0x100) + 0.0)
        * DAT_140471a5c == DAT_1404929b8) &&
      (uVar8 = 0,
      ((float)(int)(short)((ushort)param_1[uVar7 * 2 + 3] + (ushort)param_1[uVar7 * 2 + 2] * 0x100)
      + 0.0) * DAT_140471a5c == DAT_1404929b8)) &&
     (((float)(int)(short)((ushort)param_1[param_3 * 2 + 7] +
                          (ushort)param_1[param_3 * 2 + 6] * 0x100) + 0.0) * DAT_140471a5c ==
      DAT_1404929b8)) {
    uVar8 = 1;
  }
  lVar2 = (ulonglong)(uVar4 - 1) * 2;
  lVar1 = lVar2 + param_3;
  if (((((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] + (ushort)param_1[lVar1 * 2 + 2] * 0x100
                            ) + 0.0) * DAT_140471a5c == DAT_140492704) &&
      (lVar2 = lVar2 + uVar7,
      ((float)(int)(short)((ushort)param_1[lVar2 * 2 + 2] * 0x100 + (ushort)param_1[lVar2 * 2 + 3])
      + 0.0) * DAT_140471a5c == DAT_140492704)) &&
     (lVar1 = param_3 + (ulonglong)(uVar4 - 2) * 2,
     ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] + (ushort)param_1[lVar1 * 2 + 2] * 0x100) +
     0.0) * DAT_140471a5c == DAT_140492704)) {
    uVar4 = uVar4 - 1;
  }
  if (uVar8 < uVar4) {
    uVar7 = (ulonglong)uVar8;
    if (3 < uVar4 - uVar8) {
      do {
        iVar5 = (int)uVar7;
        if (((param_2 ==
              ((float)(int)(short)((ushort)param_1[lVar3 + uVar7 * 4 + 3] +
                                  (ushort)param_1[uVar7 * 4 + lVar3 + 2] * 0x100) + 0.0) *
              DAT_140471a5c) ||
            (uVar7 = (ulonglong)(iVar5 + 1), lVar1 = param_3 + uVar7 * 2,
            param_2 ==
            ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) * DAT_140471a5c)) ||
           ((uVar7 = (ulonglong)(iVar5 + 2), lVar1 = param_3 + uVar7 * 2,
            param_2 ==
            ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) * DAT_140471a5c ||
            (uVar7 = (ulonglong)(iVar5 + 3), lVar1 = param_3 + uVar7 * 2,
            param_2 ==
            ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) * DAT_140471a5c)))) {
          if (uVar4 <= (uint)uVar7) goto LAB_1403ebb20;
          goto LAB_1403ebca1;
        }
        uVar6 = iVar5 + 4;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar4 - 3);
      if (uVar4 <= uVar6) goto LAB_1403ebb20;
    }
    do {
      if (param_2 ==
          ((float)(int)(short)((ushort)param_1[lVar3 + uVar7 * 4 + 3] +
                              (ushort)param_1[uVar7 * 4 + lVar3 + 2] * 0x100) + 0.0) * DAT_140471a5c
         ) {
LAB_1403ebca1:
        uVar8 = (int)uVar7 + 1;
        while( true ) {
          if (uVar4 <= uVar8) {
            return;
          }
          uVar6 = (int)uVar7 + 1;
          if (param_2 !=
              ((float)(int)(short)((ushort)param_1[lVar3 + (ulonglong)uVar6 * 4 + 3] +
                                  (ushort)param_1[(ulonglong)uVar6 * 4 + lVar3 + 2] * 0x100) + 0.0)
              * DAT_140471a5c) break;
          uVar8 = (int)uVar7 + 2;
          uVar7 = (ulonglong)uVar6;
        }
        return;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar4);
  }
  else {
LAB_1403ebb20:
    if (uVar4 <= uVar8) {
      return;
    }
  }
  uVar7 = (ulonglong)uVar8;
  if (3 < uVar4 - uVar8) {
    do {
      iVar5 = (int)uVar7;
      if (param_2 < ((float)(int)(short)((ushort)param_1[lVar3 + uVar7 * 4 + 3] +
                                        (ushort)param_1[uVar7 * 4 + lVar3 + 2] * 0x100) + 0.0) *
                    DAT_140471a5c) {
        return;
      }
      lVar1 = param_3 + (ulonglong)(iVar5 + 1) * 2;
      if (param_2 < ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                        (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) *
                    DAT_140471a5c) {
        return;
      }
      lVar1 = param_3 + (ulonglong)(iVar5 + 2) * 2;
      if (param_2 < ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                        (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) *
                    DAT_140471a5c) {
        return;
      }
      lVar1 = param_3 + (ulonglong)(iVar5 + 3) * 2;
      if (param_2 < ((float)(int)(short)((ushort)param_1[lVar1 * 2 + 3] +
                                        (ushort)param_1[lVar1 * 2 + 2] * 0x100) + 0.0) *
                    DAT_140471a5c) {
        return;
      }
      uVar8 = iVar5 + 4;
      uVar7 = (ulonglong)uVar8;
    } while (uVar8 < uVar4 - 3);
    if (uVar4 <= uVar8) {
      return;
    }
  }
  do {
    if (param_2 < ((float)(int)(short)((ushort)param_1[uVar7 * 4 + lVar3 + 3] +
                                      (ushort)param_1[uVar7 * 4 + lVar3 + 2] * 0x100) + 0.0) *
                  DAT_140471a5c) {
      return;
    }
    uVar8 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar8;
  } while (uVar8 < uVar4);
  return;
}

