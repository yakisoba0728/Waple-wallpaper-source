// Function: FUN_14041ce00
// Addr: 14041ce00
// Size: 651 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14041ce00(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort in_FPUStatusWord;
  undefined1 in_XMM0 [16];
  ulonglong uVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  uVar1 = in_XMM0._0_8_;
  uVar2 = uVar1 & DAT_140493a70;
  uVar4 = in_XMM1._0_8_ & DAT_140493a70;
  if ((longlong)DAT_140493a30 < (longlong)uVar4) {
    return;
  }
  if ((longlong)DAT_140493a30 < (longlong)uVar2) {
    return;
  }
  if (uVar2 != DAT_140493a30) {
    uVar5 = _DAT_140493a80;
    if (uVar4 == 0) goto LAB_14041d03c;
    if (uVar2 == uVar4) {
      return;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_140493a70;
    auVar8 = in_XMM0 & auVar7;
    dVar9 = SUB168(in_XMM1 & auVar7,0);
    if (auVar8._0_8_ <= dVar9) {
      return;
    }
    uVar4 = in_XMM1._0_8_ & DAT_140493a30;
    uVar2 = (uVar1 & DAT_140493a30) >> 0x34 | (uVar1 & DAT_140493a30) << 0xc;
    uVar4 = uVar4 >> 0x34 | uVar4 << 0xc;
    if (((uVar2 == 0) || (uVar4 == 0)) || (lVar3 = uVar2 - uVar4, 0x33 < lVar3)) {
LAB_14041cfc0:
      do {
      } while ((in_FPUStatusWord >> 8 & 4) == 4);
      return;
    }
    if (lVar3 != 0x7ff) {
      auVar6._0_8_ = (double)(longlong)(auVar8._0_8_ / dVar9);
      auVar6._8_8_ = auVar8._8_8_;
      if (DAT_1404e4ee0 != 0) {
        vfmadd231sd_fma(auVar8,auVar6 | _DAT_140493a20,in_XMM1 & auVar7);
        return;
      }
      if ((longlong)
          ((((ulonglong)auVar6._0_8_ & DAT_140493a30) >> 0x34 |
           ((ulonglong)auVar6._0_8_ & DAT_140493a30) << 0xc) + (uVar4 - 0x7fe)) < 0x3ff) {
        return;
      }
      goto LAB_14041cfc0;
    }
  }
  uVar5 = uVar1 | (ulonglong)DAT_140493a60;
LAB_14041d03c:
  FUN_1402eca00(&DAT_140493a10,0x16,uVar5,1,8,0x21);
  return;
}

