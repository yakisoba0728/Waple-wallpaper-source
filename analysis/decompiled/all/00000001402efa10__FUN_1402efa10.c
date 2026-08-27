// Function: FUN_1402efa10
// Addr: 1402efa10
// Size: 103 bytes


ulonglong FUN_1402efa10(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  int iVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = -(longlong)param_1;
  if (-1 < param_1) {
    lVar7 = (longlong)param_1;
  }
  iVar6 = (param_1 >> 0x1f & 0xfffffffeU) + 1;
  uVar5 = -(longlong)param_2;
  if (-1 < param_2) {
    uVar5 = (longlong)param_2;
  }
  iVar2 = -iVar6;
  if (-1 < param_2) {
    iVar2 = iVar6;
  }
  if (uVar5 != 0) {
    auVar1._8_4_ = 0;
    auVar1._0_8_ = uVar5;
    auVar3._8_4_ = 0;
    auVar3._0_8_ = (uVar5 >> 1) + lVar7 * 0x10000;
    uVar5 = (ulonglong)(uint)-SUB124(auVar3 / auVar1,0);
    if (-1 < iVar2) {
      uVar5 = SUB128(auVar3 / auVar1,0) & 0xffffffff;
    }
    return uVar5;
  }
  uVar4 = 0x80000001;
  if (-1 < iVar2) {
    uVar4 = 0x7fffffff;
  }
  return (ulonglong)uVar4;
}

