// Function: FUN_140354890
// Addr: 140354890
// Size: 656 bytes


undefined8 FUN_140354890(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 local_18;
  
  local_18 = 0;
  if ((((0 < param_2) && (param_2 < (int)(param_4 - 1))) && (0 < param_3)) &&
     (param_3 < param_5 + -1)) {
    lVar8 = (longlong)(int)param_4;
    uVar1 = (ulonglong)*(byte *)(param_1 + 0xc);
    uVar2 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)~param_4 * 0x10);
    uVar4 = (uint)*(byte *)(param_1 + -4 + lVar8 * 0x10);
    iVar6 = (uint)*(byte *)(param_1 + 0x1c + lVar8 * 0x10) * 0x100;
    uVar3 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)(1 - param_4) * 0x10);
    local_18._0_4_ =
         ((int)((ulonglong)*(byte *)(param_1 + 0x1c) * 0x16a0900 + 0x8000 >> 0x10) -
         (int)((ulonglong)*(byte *)(param_1 + -4) * 0x16a0900 + 0x8000 >> 0x10)) + uVar4 * -0x100 +
         uVar2 * -0x100 + iVar6 + uVar3 * 0x100;
    local_18._4_4_ =
         ((int)((ulonglong)*(byte *)(lVar8 * 0x10 + 0xc + param_1) * 0x16a0900 + 0x8000 >> 0x10) -
         (int)((ulonglong)*(byte *)(param_1 + lVar8 * -0x10 + 0xc) * 0x16a0900 + 0x8000 >> 0x10)) +
         uVar3 * -0x100 + uVar2 * -0x100 + iVar6 + uVar4 * 0x100;
    FUN_1402f5e70(&local_18);
    iVar6 = (int)(uVar1 * 0x100);
    if (((int)local_18 == 0) || (local_18._4_4_ == 0)) {
      iVar6 = 0x8000 - iVar6;
    }
    else {
      iVar5 = -(int)local_18;
      if (-(int)local_18 < 0) {
        iVar5 = (int)local_18;
      }
      iVar10 = -local_18._4_4_;
      if (-local_18._4_4_ < 0) {
        iVar10 = local_18._4_4_;
      }
      iVar9 = iVar5;
      if (iVar5 < iVar10) {
        iVar9 = iVar10;
        iVar10 = iVar5;
      }
      iVar5 = FUN_1402efa10(iVar10,iVar9);
      lVar8 = (longlong)iVar9;
      if (iVar6 < iVar5 / 2) {
        lVar7 = (longlong)iVar10 * uVar1 * 0x100;
        lVar8 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) * lVar8;
        iVar6 = FUN_1402f4f70((int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) * 2);
        iVar6 = (iVar10 + iVar9) / 2 - iVar6;
      }
      else if (iVar6 < 0x10000 - iVar5 / 2) {
        lVar8 = (uVar1 * -0x100 + 0x8000) * lVar8;
        iVar6 = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      }
      else {
        lVar7 = (uVar1 * -0x100 + 0x10000) * (longlong)iVar10;
        lVar8 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) * lVar8;
        iVar6 = FUN_1402f4f70((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) * 2);
        iVar6 = iVar6 - (iVar10 + iVar9) / 2;
      }
    }
    lVar8 = (longlong)(int)local_18 * (longlong)iVar6;
    lVar7 = (longlong)local_18._4_4_ * (longlong)iVar6;
    local_18 = CONCAT44((int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10),
                        (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10));
  }
  return local_18;
}

