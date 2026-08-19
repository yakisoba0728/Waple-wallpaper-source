// Function: FUN_1402f2180
// Addr: 1402f2180
// Size: 141 bytes


ulonglong FUN_1402f2180(int param_1,int param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = -(longlong)param_1;
  if (-1 < param_1) {
    lVar8 = (longlong)param_1;
  }
  iVar5 = (param_1 >> 0x1f & 0xfffffffeU) + 1;
  lVar7 = -(longlong)param_2;
  if (-1 < param_2) {
    lVar7 = (longlong)param_2;
  }
  iVar6 = -iVar5;
  if (-1 < param_2) {
    iVar6 = iVar5;
  }
  if (param_3 < 0) {
    iVar6 = -iVar6;
  }
  uVar4 = -(longlong)param_3;
  if (-1 < param_3) {
    uVar4 = (longlong)param_3;
  }
  if (uVar4 != 0) {
    auVar1._8_4_ = 0;
    auVar1._0_8_ = uVar4;
    auVar2._8_4_ = 0;
    auVar2._0_8_ = (uVar4 >> 1) + lVar7 * lVar8;
    uVar4 = (ulonglong)(uint)-SUB124(auVar2 / auVar1,0);
    if (-1 < iVar6) {
      uVar4 = SUB128(auVar2 / auVar1,0) & 0xffffffff;
    }
    return uVar4;
  }
  uVar3 = 0x80000001;
  if (-1 < iVar6) {
    uVar3 = 0x7fffffff;
  }
  return (ulonglong)uVar3;
}

