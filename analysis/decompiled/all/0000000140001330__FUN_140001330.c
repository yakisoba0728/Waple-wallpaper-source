// Function: FUN_140001330
// Addr: 140001330
// Size: 267 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001330(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  _DAT_1404df5f0 = _DAT_1404df5f0 & 0xfffffeff;
  plVar1 = (longlong *)FUN_14028af20(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  _DAT_1404df618 = (_DAT_1404df618 >> 8 & 0xfffffe) << 8;
  _DAT_1404df620 = 0;
  uRam00000001404df628 = 0;
  _DAT_1404df630 = 0;
  _DAT_1404df638 = 0xffffffff;
  _DAT_1404df640 = 0;
  DAT_1404df648 = 0;
  _DAT_1404df650 = 0;
  _DAT_1404df5e8 = plVar1;
  DAT_1404df648 = FUN_14028af20(0x20);
  *(longlong *)DAT_1404df648 = DAT_1404df648;
  *(longlong *)(DAT_1404df648 + 8) = DAT_1404df648;
  DAT_1404df658 = 0;
  _DAT_1404df660 = 0;
  uRam00000001404df668 = 0;
  DAT_1404df670 = 7;
  _DAT_1404df678 = 8;
  _DAT_1404df640 = 0x3f800000;
  FUN_14004f190(&DAT_1404df658,0x10,DAT_1404df648);
  DAT_1404df680 = 0;
  FUN_14028b410(&LAB_1404246d0);
  return;
}

