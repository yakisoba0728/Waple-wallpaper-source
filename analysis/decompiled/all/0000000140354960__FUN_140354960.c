// Function: FUN_140354960
// Addr: 140354960
// Size: 352 bytes


undefined8 FUN_140354960(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_18;
  
  local_18 = 0;
  if ((((0 < param_2) && (param_2 < (int)(param_4 - 1))) && (0 < param_3)) &&
     (param_3 < param_5 + -1)) {
    lVar6 = (longlong)(int)param_4;
    bVar1 = *(byte *)(param_1 + 0xc);
    uVar2 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)~param_4 * 0x10);
    uVar4 = (uint)*(byte *)(param_1 + -4 + lVar6 * 0x10);
    iVar10 = (uint)*(byte *)(param_1 + 0x1c + lVar6 * 0x10) * 0x100;
    uVar3 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)(1 - param_4) * 0x10);
    local_18._0_4_ =
         ((int)((ulonglong)*(byte *)(param_1 + 0x1c) * 0x16a0900 + 0x8000 >> 0x10) -
         (int)((ulonglong)*(byte *)(param_1 + -4) * 0x16a0900 + 0x8000 >> 0x10)) + uVar4 * -0x100 +
         uVar2 * -0x100 + iVar10 + uVar3 * 0x100;
    local_18._4_4_ =
         ((int)((ulonglong)*(byte *)(lVar6 * 0x10 + 0xc + param_1) * 0x16a0900 + 0x8000 >> 0x10) -
         (int)((ulonglong)*(byte *)(param_1 + lVar6 * -0x10 + 0xc) * 0x16a0900 + 0x8000 >> 0x10)) +
         uVar3 * -0x100 + uVar2 * -0x100 + iVar10 + uVar4 * 0x100;
    FUN_1402f5f40(&local_18);
    if (((int)local_18 != 0) && (local_18._4_4_ != 0)) {
      iVar10 = -(int)local_18;
      if (-(int)local_18 < 0) {
        iVar10 = (int)local_18;
      }
      iVar9 = -local_18._4_4_;
      if (-local_18._4_4_ < 0) {
        iVar9 = local_18._4_4_;
      }
      iVar8 = iVar10;
      if (iVar10 < iVar9) {
        iVar8 = iVar9;
        iVar9 = iVar10;
      }
      uVar5 = func_0x0001402efae0(iVar9,iVar8);
      return uVar5;
    }
    lVar7 = (longlong)(int)((uint)bVar1 * -0x100 + 0x8000);
    lVar6 = (int)local_18 * lVar7;
    lVar7 = local_18._4_4_ * lVar7;
    local_18 = CONCAT44((int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10),
                        (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10));
  }
  return local_18;
}

