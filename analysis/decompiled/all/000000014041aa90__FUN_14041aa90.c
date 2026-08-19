// Function: FUN_14041aa90
// Addr: 14041aa90
// Size: 1338 bytes


/* WARNING: Possible PIC construction at 0x00014041aa80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014041aa85) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041aa90(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  sbyte sVar28;
  byte bVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  double dVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 extraout_var [56];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 auStack_70 [5];
  ulonglong local_48;
  uint local_38 [2];
  undefined1 local_30 [48];
  
  uVar26 = in_ZMM0._0_8_;
  fVar38 = in_ZMM0._0_4_;
  auVar46._16_48_ = in_ZMM0._16_48_;
  if (DAT_1404e4fb0 != 0) {
    fVar25 = ABS(fVar38);
    if ((uint)fVar25 < 0x7f800000) {
      auVar71._0_8_ = (double)fVar38;
      auVar71._8_8_ = in_ZMM0._8_8_;
      if ((uint)fVar25 < 0x3f490fdc) {
        if ((uint)fVar25 < 0x3c000000) {
          if ((uint)fVar25 < 0x39000000) {
            return uVar26;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = DAT_140471e10;
          auVar39._8_8_ = 0;
          auVar39._0_8_ = auVar71._0_8_ * auVar71._0_8_ * auVar71._0_8_;
          auVar42 = vfnmadd132sd_fma(auVar39,auVar71,auVar1);
        }
        else {
          auVar53._8_8_ = 0;
          auVar53._0_8_ = DAT_1404721a0;
          dVar34 = auVar71._0_8_ * auVar71._0_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = DAT_1404721a8;
          auVar59._8_8_ = 0;
          auVar59._0_8_ = dVar34;
          auVar70 = vfmadd231sd_fma(auVar53,auVar59,auVar2);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = DAT_140472198;
          auVar70 = vfmadd213sd_fma(auVar70,auVar59,auVar3);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = DAT_140472190;
          auVar60._8_8_ = 0;
          auVar60._0_8_ = dVar34;
          auVar70 = vfmadd213sd_fma(auVar70,auVar60,auVar4);
          auVar61._8_8_ = 0;
          auVar61._0_8_ = auVar71._0_8_ * dVar34;
          auVar42 = vfmadd231sd_fma(auVar71,auVar70,auVar61);
        }
      }
      else {
        if ((uint)fVar25 < 0x4b800456) {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = ABS(auVar71._0_8_);
          auVar24._8_8_ = _UNK_140471df8;
          auVar24._0_8_ = DAT_140471df0;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = DAT_140471de0;
          auVar70 = vfmadd213sd_fma(auVar24,auVar40,auVar5);
          auVar57._0_4_ = (int)auVar70._0_8_;
          auVar57._4_4_ = (int)auVar70._8_8_;
          auVar57._8_8_ = 0;
          auVar19 = vpmovsxdq_avx(auVar57);
          auVar23._8_8_ = _UNK_140471dd8;
          auVar23._0_8_ = _DAT_140471dd0;
          auVar70 = vandpd_avx(auVar19,auVar23);
          auVar19 = vshufps_avx(auVar19,auVar19,8);
          auVar19 = vcvtdq2pd_avx(auVar19);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = DAT_140471e00;
          auVar20 = vfnmadd231sd_fma(auVar40,auVar19,auVar6);
          dVar34 = auVar20._0_8_ - auVar19._0_8_ * DAT_140471e20;
        }
        else {
          uVar37 = ((ulonglong)ABS(auVar71._0_8_) >> 0x34) - 0x3ff;
          lVar35 = -((uVar37 >> 3) - 0x86);
          uVar30 = (ulonglong)auVar71._0_8_ & 0xfffffffffffff | 0x10000000000000;
          auVar70._8_8_ = 0;
          auVar70._0_8_ = *(ulonglong *)(&DAT_1404721b0 + lVar35);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar30;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = SUB168(auVar70 * auVar16,8);
          uVar26 = SUB168(auVar70 * auVar16,0);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *(ulonglong *)(&UNK_1404721b8 + lVar35);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar30;
          uVar37 = uVar37 & 7;
          auVar21 = auVar19 * auVar17 + auVar21;
          uVar27 = auVar21._0_8_;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = *(ulonglong *)(&UNK_1404721c0 + lVar35);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar30;
          uVar36 = auVar21._8_8_ + SUB168(auVar20 * auVar18,0);
          uVar33 = 0;
          bVar29 = (byte)(0x36 - uVar37) & 0x3f;
          uVar30 = uVar36 >> bVar29;
          bVar14 = (0x36 - uVar37 & 0x3f) != 0;
          bVar15 = (uVar36 >> bVar29 - 1 & 1) != 0;
          if (bVar14 && bVar15) {
            uVar36 = ~uVar36;
            uVar27 = ~uVar27;
            uVar26 = ~uVar26;
            uVar33 = 0x8000000000000000;
          }
          auVar70 = ZEXT416((int)uVar30 + (uint)(bVar14 && bVar15) & 3);
          sVar28 = (char)uVar37 + 10;
          uVar30 = (uVar36 << sVar28) >> sVar28;
          lVar31 = uVar37 - 0x36;
          lVar35 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar36 = uVar27;
          if (uVar30 == 0) {
            lVar35 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar35 == 0; lVar35 = lVar35 + -1) {
              }
            }
            lVar31 = uVar37 - 0x76;
            uVar36 = uVar26;
            uVar30 = uVar27;
          }
          lVar32 = lVar35 + -0x34;
          if (lVar32 < 0) {
            bVar29 = -(byte)lVar32;
            uVar30 = uVar30 << (bVar29 & 0x3f) | uVar36 >> (-(bVar29 - 0x40) & 0x3f);
          }
          else if (lVar32 != 0) {
            uVar30 = uVar30 >> ((byte)lVar32 & 0x3f);
          }
          dVar34 = (double)(uVar30 & 0xffefffffffffffff | uVar33 | lVar31 + lVar35 + 0x3ff << 0x34)
                   * _UNK_140471e70;
        }
        uVar26 = auVar70._0_8_;
        if ((uVar26 & 1) == 1) {
          auVar22._8_8_ = _UNK_140471dc8;
          auVar22._0_8_ = DAT_140471dc0;
          dVar34 = dVar34 * dVar34;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_140472160;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = dVar34;
          auVar20 = vfmadd231sd_fma(auVar22,auVar65,auVar10);
          auVar55._8_8_ = 0;
          auVar55._0_8_ = DAT_140472178;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = DAT_140472180;
          auVar19 = vfmadd231sd_fma(auVar55,auVar65,auVar11);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = DAT_140472170;
          auVar66._8_8_ = 0;
          auVar66._0_8_ = dVar34;
          auVar19 = vfmadd213sd_fma(auVar19,auVar66,auVar12);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = DAT_140472168;
          auVar19 = vfmadd213sd_fma(auVar19,auVar66,auVar13);
          auVar67._8_8_ = 0;
          auVar67._0_8_ = dVar34 * dVar34;
          auVar19 = vfmadd231sd_fma(auVar20,auVar19,auVar67);
        }
        else {
          auVar54._8_8_ = 0;
          auVar54._0_8_ = DAT_1404721a0;
          dVar69 = dVar34 * dVar34;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = DAT_1404721a8;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = dVar69;
          auVar19 = vfmadd231sd_fma(auVar54,auVar62,auVar7);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = DAT_140472198;
          auVar19 = vfmadd213sd_fma(auVar19,auVar62,auVar8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = DAT_140472190;
          auVar63._8_8_ = 0;
          auVar63._0_8_ = dVar69;
          auVar19 = vfmadd213sd_fma(auVar19,auVar63,auVar9);
          auVar41._8_8_ = 0;
          auVar41._0_8_ = dVar34;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = dVar34 * dVar69;
          auVar19 = vfmadd231sd_fma(auVar41,auVar19,auVar64);
        }
        auVar58._0_8_ = -(ulonglong)(uVar26 == _UNK_140471e60);
        auVar58._8_8_ = -(ulonglong)(auVar70._8_8_ == _UNK_140471e68);
        auVar68._0_8_ = -(ulonglong)(uVar26 == _DAT_140471dd0);
        auVar68._8_8_ = -(ulonglong)(auVar70._8_8_ == _UNK_140471dd8);
        auVar70 = vorpd_avx(auVar58,auVar68);
        auVar70 = vandnpd_avx(auVar70,_UNK_140471da0);
        auVar71 = vandnpd_avx(auVar71,_UNK_140471da0);
        auVar42._0_8_ = auVar71._0_8_ ^ auVar19._0_8_ ^ auVar70._0_8_;
        auVar42._8_8_ = auVar71._8_8_ ^ auVar19._8_8_ ^ auVar70._8_8_;
      }
      auVar43._0_4_ = (float)auVar42._0_8_;
      auVar43._4_12_ = auVar42._4_12_;
      return auVar43._0_8_;
    }
UNWIND_INFO_14041bb2c_UnwindCodes_32__OffsetInProlog:
    *(undefined8 *)((longlong)register0x00000020 + 0x10) = 0;
    if (((uint)fVar38 & 0x7f800000) == 0x7f800000) {
      if (((uint)fVar38 & 0x7fffff) == 0) {
        *(undefined4 *)((longlong)register0x00000020 + -0x18) = 1;
        *(undefined4 *)((longlong)register0x00000020 + 0x10) = 0xffc00000;
        *(undefined4 *)((longlong)register0x00000020 + -0x20) = 0;
        *(float *)((longlong)register0x00000020 + -0x28) = fVar38;
        *(undefined4 *)((longlong)register0x00000020 + -0x30) = 0x21;
        *(undefined4 *)((longlong)register0x00000020 + -0x38) = 8;
        *(undefined **)((longlong)register0x00000020 + -0x60) = &UNK_14041bbe4;
        FUN_1402ecc10(&UNK_140472140,0x1e,*(undefined8 *)((longlong)register0x00000020 + 0x10));
        return (ulonglong)*(uint *)((longlong)register0x00000020 + 0x10);
      }
      uVar26 = (ulonglong)((uint)fVar38 | 0x400000);
    }
    return uVar26;
  }
  fVar25 = ABS(fVar38);
  if (0x7f7fffff < (uint)fVar25) {
    register0x00000020 = (BADSPACEBASE *)auStack_70;
    auStack_70[0] = 0x14041aa85;
    goto UNWIND_INFO_14041bb2c_UnwindCodes_32__OffsetInProlog;
  }
  auVar44._8_56_ = in_ZMM0._8_56_;
  auVar44._0_8_ = (double)fVar38;
  dVar34 = ABS(auVar44._0_8_);
  if ((uint)fVar25 < 0x3f490fdc) {
    if ((uint)fVar25 < 0x3c000000) {
      if ((uint)fVar25 < 0x39000000) {
        return uVar26;
      }
      auVar45._0_8_ = auVar44._0_8_ - auVar44._0_8_ * auVar44._0_8_ * auVar44._0_8_ * DAT_140471e10;
      auVar45._8_56_ = auVar44._8_56_;
    }
    else {
      dVar34 = auVar44._0_8_ * auVar44._0_8_;
      auVar45._0_8_ =
           auVar44._0_8_ +
           ((DAT_1404721a8 * dVar34 + DAT_1404721a0) * dVar34 * dVar34 +
           DAT_140472198 * dVar34 + DAT_140472190) * auVar44._0_8_ * dVar34;
      auVar45._8_56_ = auVar44._8_56_;
    }
    goto LAB_14041aa76;
  }
  auVar48 = auVar44;
  if (auVar44._0_8_ != dVar34) {
    auVar46._8_8_ = 0;
    auVar46._0_8_ = 0.0 - auVar44._0_8_;
    auVar48 = auVar46;
  }
  local_48 = (ulonglong)(auVar44._0_8_ != dVar34);
  dVar69 = auVar48._0_8_;
  if ((uint)fVar25 < 0x4b742400) {
    local_38[0] = (uint)(dVar69 * DAT_140471df0 + DAT_140471de0);
    auVar47._16_48_ = auVar48._16_48_;
    dVar56 = (double)(int)local_38[0];
    dVar69 = dVar69 - DAT_140471e00 * dVar56;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._0_8_ = dVar69;
    auVar45._8_56_ = auVar47._8_56_;
    auVar45._0_8_ = dVar69 - DAT_140471e20 * dVar56;
    uVar26 = (ulonglong)ABS(auVar45._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar34 >> 0x34) - uVar26)) {
      dVar34 = dVar69 - DAT_140471e30 * dVar56;
      auVar48._8_8_ = auVar48._8_8_;
      auVar48._0_8_ = dVar34;
      auVar48._16_48_ = auVar47._16_48_;
      auVar45._8_56_ = auVar48._8_56_;
      auVar45._0_8_ =
           dVar34 - (DAT_140471e40 * dVar56 - ((dVar69 - dVar34) - DAT_140471e30 * dVar56));
    }
    if (0x3f1 < uVar26) goto LAB_14041a99e;
    auVar49._16_48_ = auVar45._16_48_;
    if (uVar26 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        auVar45._8_8_ = 0;
        auVar45._0_8_ = DAT_140471dc0;
        auVar45._16_48_ = auVar49._16_48_;
      }
    }
    else {
      dVar34 = auVar45._0_8_;
      if ((local_38[0] & 1) == 0) {
        auVar45._0_8_ = dVar34 - DAT_140471e10 * dVar34 * dVar34 * dVar34;
      }
      else {
        auVar49._8_8_ = 0;
        auVar49._0_8_ = DAT_140471dc0;
        auVar45._8_56_ = auVar49._8_56_;
        auVar45._0_8_ = DAT_140471dc0 - dVar34 * dVar34 * DAT_140471de0;
      }
    }
  }
  else {
    auStack_70[0] = 0x14041a989;
    auVar45._0_8_ = (double)FUN_14041bc90(dVar69,local_30,local_38);
    auVar45._8_56_ = extraout_var;
LAB_14041a99e:
    dVar34 = auVar45._0_8_;
    dVar69 = dVar34 * dVar34;
    if ((local_38[0] & 1) == 0) {
      auVar45._0_8_ =
           dVar34 + ((DAT_1404721a8 * dVar69 + DAT_1404721a0) * dVar69 * dVar69 +
                    DAT_140472198 * dVar69 + DAT_140472190) * dVar34 * dVar69;
    }
    else {
      auVar50._16_48_ = auVar45._16_48_;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = DAT_140472160;
      auVar45._8_56_ = auVar50._8_56_;
      auVar45._0_8_ =
           DAT_140472160 * dVar69 + DAT_140471dc0 +
           ((DAT_140472180 * dVar69 + DAT_140472178) * dVar69 * dVar69 +
           DAT_140472170 * dVar69 + DAT_140472168) * dVar69 * dVar69;
    }
  }
  if (((local_38[0] >> 1 & (uint)local_48 | ~(local_38[0] >> 1) & ~(uint)local_48) & 1) == 0) {
    dVar34 = auVar45._0_8_;
    auVar51._16_48_ = auVar45._16_48_;
    auVar51._0_16_ = ZEXT816(0);
    auVar45._8_56_ = auVar51._8_56_;
    auVar45._0_8_ = 0.0 - dVar34;
  }
LAB_14041aa76:
  auVar52._4_60_ = auVar45._4_60_;
  auVar52._0_4_ = (float)auVar45._0_8_;
  return auVar52._0_8_;
}

