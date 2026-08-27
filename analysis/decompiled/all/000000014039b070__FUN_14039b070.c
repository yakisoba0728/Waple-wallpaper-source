// Function: FUN_14039b070
// Addr: 14039b070
// Size: 1206 bytes


void FUN_14039b070(byte *param_1,uint param_2,undefined8 param_3,undefined4 param_4,longlong param_5
                  ,uint *param_6)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  fVar3 = DAT_1404926c0;
  fVar2 = DAT_140471a88;
  if (param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    uVar7 = uVar6 & 0x7fff;
    uVar8 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    uVar6 = uVar6 & 0x8000;
    uVar4 = uVar7;
    if (uVar6 != 0) {
      uVar4 = uVar8;
    }
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar7;
    }
    uVar5 = 0;
    pbVar1 = (byte *)(param_5 + 2);
    if (uVar9 != 0) {
      do {
        uVar6 = (uint)param_1[uVar5 * 2 + 7] + (uint)param_1[uVar5 * 2 + 6] * 0x100;
        if (uVar6 < (uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_5 + 3)) {
          if (param_6 == (uint *)0x0) {
            FUN_1403bf460(param_5,uVar6,param_3,param_4);
          }
          else if (((uVar6 < *param_6) && (param_6[(ulonglong)uVar6 + 1] != 0)) &&
                  (param_6[(ulonglong)uVar6 + 1] == 0x80000000)) {
            auVar11._0_8_ = FUN_1403bf460(param_5,uVar6,param_3,param_4);
            auVar11._8_8_ = extraout_XMM0_Qb;
            if (uVar6 < *param_6) {
              auVar12._4_12_ = auVar11._4_12_;
              auVar12._0_4_ = (float)auVar11._0_8_ * fVar2 + fVar3;
              fVar10 = (float)FUN_14041a5c0(auVar12._0_8_);
              param_6[(ulonglong)uVar6 + 1] = (int)fVar10;
            }
          }
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < uVar9);
    }
    uVar6 = (uint)uVar5;
    while (uVar7 = (uint)uVar5, uVar6 < uVar4) {
      uVar6 = (uint)param_1[uVar5 * 2 + 7] + (uint)param_1[uVar5 * 2 + 6] * 0x100;
      if (uVar6 < (uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_5 + 3)) {
        if (param_6 == (uint *)0x0) {
          FUN_1403bf460(param_5,uVar6,param_3,param_4);
        }
        else if (((uVar6 < *param_6) && (param_6[(ulonglong)uVar6 + 1] != 0)) &&
                (param_6[(ulonglong)uVar6 + 1] == 0x80000000)) {
          auVar13._0_8_ = FUN_1403bf460(param_5,uVar6,param_3,param_4);
          auVar13._8_8_ = extraout_XMM0_Qb_00;
          if (uVar6 < *param_6) {
            auVar14._4_12_ = auVar13._4_12_;
            auVar14._0_4_ = (float)auVar13._0_8_ * fVar2 + fVar3;
            fVar10 = (float)FUN_14041a5c0(auVar14._0_8_);
            param_6[(ulonglong)uVar6 + 1] = (int)fVar10;
          }
        }
      }
      uVar6 = uVar7 + 1;
      uVar5 = (ulonglong)uVar6;
    }
    while (uVar7 < uVar8) {
      uVar4 = (uint)param_1[uVar5 * 2 + 6] * 0x100 + (uint)param_1[uVar5 * 2 + 7];
      if (uVar4 < (uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_5 + 3)) {
        if (param_6 == (uint *)0x0) {
          FUN_1403bf460(param_5,uVar4,param_3,param_4);
        }
        else if (((uVar4 < *param_6) && (param_6[(ulonglong)uVar4 + 1] != 0)) &&
                (param_6[(ulonglong)uVar4 + 1] == 0x80000000)) {
          auVar15._0_8_ = FUN_1403bf460(param_5,uVar4,param_3,param_4);
          auVar15._8_8_ = extraout_XMM0_Qb_01;
          if (uVar4 < *param_6) {
            auVar16._4_12_ = auVar15._4_12_;
            auVar16._0_4_ = (float)auVar15._0_8_ * fVar2 + fVar3;
            fVar10 = (float)FUN_14041a5c0(auVar16._0_8_);
            param_6[(ulonglong)uVar4 + 1] = (int)fVar10;
          }
        }
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    }
    return;
  }
  return;
}

