// Function: FUN_14028f140
// Addr: 14028f140
// Size: 264 bytes


undefined1 (*) [32]
FUN_14028f140(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  pauVar5 = param_1;
  if (((DAT_1404dc00c & 0x20) == 0) || (uVar6 < 0x20)) {
    pauVar7 = param_1;
    if (((DAT_1404dc00c & 4) != 0) && (0xf < uVar6)) {
      pauVar7 = (undefined1 (*) [32])(*param_1 + (uVar6 & 0xfffffffffffffff0));
      do {
        auVar10 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar8._0_8_ = -(ulonglong)(auVar10._0_8_ == param_3);
        auVar8._8_8_ = -(ulonglong)(auVar10._8_8_ == param_3);
        uVar3 = movmskpd(uVar3,auVar8);
        auVar10 = pshufb(auVar10,*(undefined1 (*) [16])(&DAT_140429950 + (ulonglong)uVar3 * 0x10));
        *(undefined1 (*) [16])*pauVar5 = auVar10;
        pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)(&DAT_140429990)[CONCAT44(uVar4,uVar3)]);
      } while (param_1 != pauVar7);
    }
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_3;
    auVar10 = vpunpcklqdq_avx(auVar10,auVar10);
    pauVar7 = (undefined1 (*) [32])(*param_1 + (uVar6 & 0xffffffffffffffe0));
    do {
      auVar9._0_8_ = -(ulonglong)(auVar10._0_8_ == *(longlong *)*param_1);
      auVar9._8_8_ = -(ulonglong)(auVar10._8_8_ == *(longlong *)(*param_1 + 8));
      auVar9._16_8_ = -(ulonglong)(auVar10._0_8_ == SUB248(*(undefined1 (*) [24])*param_1,0x10));
      auVar9._24_8_ = -(ulonglong)(auVar10._8_8_ == *(longlong *)(*param_1 + 0x18));
      uVar2 = vmovmskpd_avx(auVar9);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(&DAT_1404299a0 + CONCAT44(uVar4,uVar2) * 8);
      auVar9 = vpmovzxbd_avx2(auVar1);
      auVar9 = vpermd_avx2(auVar9,*param_1);
      *pauVar5 = auVar9;
      param_1 = param_1 + 1;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)(&DAT_140429a20)[CONCAT44(uVar4,uVar2)]);
    } while (param_1 != pauVar7);
  }
  for (; pauVar7 != param_2; pauVar7 = (undefined1 (*) [32])(*pauVar7 + 8)) {
    if (*(ulonglong *)*pauVar7 != param_3) {
      *(ulonglong *)*pauVar5 = *(ulonglong *)*pauVar7;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + 8);
    }
  }
  return pauVar5;
}

