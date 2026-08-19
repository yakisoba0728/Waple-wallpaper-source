// Function: FUN_14041c2f0
// Addr: 14041c2f0
// Size: 22 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041c2f0(float param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  
  if (((byte)DAT_1404e4fb0 & 3) != 3) {
    uVar6 = FUN_14041c310();
    return uVar6;
  }
  uVar5 = (uint)param_1 >> 0x17 & 0xff;
  fVar7 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    return (ulonglong)((uint)param_1 | 0x400000);
  }
  if (uVar5 < 0x65) {
    FUN_1402dea10(0x20);
    return (ulonglong)DAT_140492814;
  }
  if (uVar5 < 0x7f) {
    fVar8 = param_1;
    if ((int)param_1 < 0) {
      fVar8 = (float)((uint)param_1 ^ DAT_1404930c0);
    }
    if (uVar5 < 0x7e) {
      fVar10 = fVar8 * fVar8;
    }
    else {
      fVar10 = (DAT_1404927d4 - fVar8) * DAT_140492790;
      auVar2 = vsqrtss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar8 = auVar2._0_4_;
      fVar7 = fVar8;
    }
    auVar2 = vfnmadd213ss_fma(ZEXT416(_UNK_140493218),ZEXT416((uint)fVar10),ZEXT416(_UNK_14049322c))
    ;
    auVar2 = vfmsub213ss_fma(auVar2,ZEXT416((uint)fVar10),ZEXT416(_UNK_14049321c));
    auVar9 = ZEXT416((uint)fVar10);
    auVar2 = vfmadd213ss_fma(auVar2,auVar9,ZEXT416(_UNK_140493220));
    auVar3 = vfnmadd213ss_fma(ZEXT416(_UNK_140493224),auVar9,ZEXT416(_UNK_140493228));
    fVar10 = (auVar2._0_4_ * fVar10) / auVar3._0_4_;
    if (uVar5 < 0x7e) {
      dVar1 = _UNK_140471c68 - ((double)param_1 - (_UNK_1404931b0 - (double)(fVar10 * param_1)));
      return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
    }
    if (-1 < (int)param_1) {
      fVar4 = (float)((uint)fVar7 & 0xffff0000);
      auVar2 = vfnmadd231ss_fma(auVar9,ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar7 = auVar2._0_4_ / (fVar4 + fVar7);
      auVar2 = vfmadd231ss_fma(ZEXT416((uint)(fVar7 + fVar7)),ZEXT416((uint)fVar10),
                               ZEXT416((uint)(fVar8 + fVar8)));
      return (ulonglong)(uint)(auVar2._0_4_ + fVar4 + fVar4);
    }
    dVar1 = ((double)(fVar8 * fVar10) - _UNK_1404931b0) + (double)fVar7;
    dVar1 = _UNK_1404928a0 - (dVar1 + dVar1);
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  if (param_1 == DAT_1404927d4) {
    return 0;
  }
  if (param_1 == DAT_140492a88) {
    FUN_1402dea10(0x20);
    return (ulonglong)DAT_140492904;
  }
  uVar6 = FUN_1402ecc10("acosf",0xd,0xffc00000,1,8,0x21);
  return uVar6;
}

