// Function: FUN_14041d190
// Addr: 14041d190
// Size: 646 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041d190(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar8 = (float)param_1;
  dVar12 = (double)fVar8;
  dVar13 = (double)param_2;
  dVar6 = ABS(dVar12);
  uVar2 = (uint)((ulonglong)dVar12 >> 0x34) & 0x7ff;
  dVar7 = ABS(dVar13);
  uVar4 = (uint)((ulonglong)dVar13 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
UNWIND_INFO_14041d418_UnwindCodes_19__UnwindOpCode:
    if (uVar2 < 0x7ff) {
      if (0x7fe < uVar4) {
        fVar8 = param_2;
        if (((ulonglong)dVar13 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        goto FUN_1402ecd70;
      }
      if ((uVar2 == 0) && (uVar4 != 0)) {
        return param_1;
      }
      goto code_r0x00014041d4a3;
    }
  }
  else if (uVar2 < 0x7ff) {
    if (uVar4 - 1 < 0x7fe) {
      if (dVar6 == dVar7) {
        return (ulonglong)(uint)(float)(double)((ulonglong)dVar12 & 0x8000000000000000);
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar6;
      if ((ulonglong)dVar6 < (ulonglong)dVar7) {
        if (fVar8 < 0.0) {
          dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ DAT_1404930b0._4_4_,
                                   SUB84(dVar6,0) ^ (uint)DAT_1404930b0);
        }
        return (ulonglong)(uint)(float)dVar6;
      }
      if (uVar4 < uVar2) {
        iVar5 = 0;
        iVar1 = (int)(uVar2 - uVar4) / 0x18;
        dVar7 = dVar7 * (double)((longlong)(iVar1 * 0x18 + 0x3ff) << 0x34);
        if (7 < iVar1) {
          uVar2 = (iVar1 - 8U >> 3) + 1;
          uVar3 = (ulonglong)uVar2;
          iVar5 = uVar2 * 8;
          do {
            uVar11 = auVar14._8_8_;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            dVar12 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar12 * 5.9604644775390625e-08;
            auVar14._0_8_ = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
            auVar14._8_8_ = uVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (iVar5 < iVar1) {
          uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
          do {
            uVar11 = auVar14._8_8_;
            dVar6 = (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
            dVar7 = dVar7 * 5.9604644775390625e-08;
            auVar14._0_8_ = auVar14._0_8_ - dVar6;
            auVar14._8_8_ = uVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      auVar15._0_8_ = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
      auVar15._8_8_ = auVar14._8_8_;
      auVar9 = auVar15;
      if (fVar8 < 0.0) {
        auVar9._0_4_ = SUB84(auVar15._0_8_,0) ^ (uint)DAT_1404930b0;
        auVar9._4_4_ = (uint)((ulonglong)auVar15._0_8_ >> 0x20) ^ DAT_1404930b0._4_4_;
        auVar9._8_4_ = auVar14._8_4_ ^ _UNK_1404930b8;
        auVar9._12_4_ = auVar14._12_4_ ^ _UNK_1404930bc;
      }
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (float)auVar9._0_8_;
      return auVar10._0_8_;
    }
    goto UNWIND_INFO_14041d418_UnwindCodes_19__UnwindOpCode;
  }
  if (((ulonglong)dVar12 & 0xfffffffffffff) != 0) {
FUN_1402ecd70:
    return (ulonglong)((uint)fVar8 | 0x400000);
  }
code_r0x00014041d4a3:
  uVar3 = FUN_1402ecc10(&UNK_140493b60,0x16,0xffc00000,1,8,0x21,fVar8,param_2,2);
  return uVar3;
}

