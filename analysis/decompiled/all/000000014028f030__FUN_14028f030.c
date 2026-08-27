// Function: FUN_14028f030
// Addr: 14028f030
// Size: 260 bytes


undefined1 (*) [32]
FUN_14028f030(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  pauVar5 = param_1;
  if (((DAT_1404dc00c & 0x20) == 0) || (uVar6 < 0x20)) {
    pauVar7 = param_1;
    if (((DAT_1404dc00c & 4) != 0) && (0xf < uVar6)) {
      pauVar7 = (undefined1 (*) [32])(*param_1 + (uVar6 & 0xfffffffffffffff0));
      do {
        auVar9 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar8._0_4_ = -(uint)(auVar9._0_4_ == param_3);
        auVar8._4_4_ = -(uint)(auVar9._4_4_ == param_3);
        auVar8._8_4_ = -(uint)(auVar9._8_4_ == param_3);
        auVar8._12_4_ = -(uint)(auVar9._12_4_ == param_3);
        uVar3 = movmskps(uVar3,auVar8);
        auVar9 = pshufb(auVar9,*(undefined1 (*) [16])(&DAT_140428f40 + (ulonglong)uVar3 * 0x10));
        *(undefined1 (*) [16])*pauVar5 = auVar9;
        pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)(&DAT_140429040)[CONCAT44(uVar4,uVar3)]);
      } while (param_1 != pauVar7);
    }
  }
  else {
    auVar9 = vpshufd_avx(ZEXT416(param_3),0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    pauVar7 = (undefined1 (*) [32])(*param_1 + (uVar6 & 0xffffffffffffffe0));
    do {
      auVar1 = vpcmpeqd_avx2(auVar10,*param_1);
      uVar2 = vmovmskps_avx(auVar1);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(&DAT_140429050 + CONCAT44(uVar4,uVar2) * 8);
      auVar1 = vpmovzxbd_avx2(auVar9);
      auVar1 = vpermd_avx2(auVar1,*param_1);
      *pauVar5 = auVar1;
      param_1 = param_1 + 1;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)(&DAT_140429850)[CONCAT44(uVar4,uVar2)]);
    } while (param_1 != pauVar7);
  }
  for (; pauVar7 != param_2; pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4)) {
    if (*(uint *)*pauVar7 != param_3) {
      *(uint *)*pauVar5 = *(uint *)*pauVar7;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + 4);
    }
  }
  return pauVar5;
}

