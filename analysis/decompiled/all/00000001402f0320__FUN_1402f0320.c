// Function: FUN_1402f0320
// Addr: 1402f0320
// Size: 239 bytes


int FUN_1402f0320(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 != (uint *)0x0) {
    lVar8 = *(longlong *)(param_1 + 0x90);
    iVar5 = 0;
    param_5[0] = 0;
    param_5[1] = 0;
    pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x18) + 0x80);
    if (((pcVar2 != (code *)0x0) && (iVar5 = (*pcVar2)(param_1,param_2,param_3,param_5), iVar5 == 0)
        ) && (param_4 != 2)) {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) * (longlong)(int)*param_5;
      uVar9 = (uint)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      *param_5 = uVar9;
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) * (longlong)(int)param_5[1];
      uVar11 = (uint)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      param_5[1] = uVar11;
      if (param_4 != 1) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18);
        if (uVar1 < 0x19) {
          lVar8 = -(longlong)(int)uVar9;
          if (-1 < (int)uVar9) {
            lVar8 = (longlong)(int)uVar9;
          }
          uVar10 = (int)uVar9 >> 0x1f;
          uVar7 = lVar8 * (ulonglong)uVar1 + 0xc;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar7;
          lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
          uVar6 = (uint)((uVar7 - lVar8 >> 1) + lVar8 >> 4);
          uVar9 = -uVar6;
          if (-2 < (int)(uVar10 & 0xfffffffe)) {
            uVar9 = uVar6;
          }
          *param_5 = uVar9;
        }
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x1a);
        uVar6 = uVar11;
        if (uVar1 < 0x19) {
          lVar8 = -(longlong)(int)uVar11;
          if (-1 < (int)uVar11) {
            lVar8 = (longlong)(int)uVar11;
          }
          uVar7 = lVar8 * (ulonglong)uVar1 + 0xc;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar7;
          lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4,8);
          uVar10 = (uint)((uVar7 - lVar8 >> 1) + lVar8 >> 4);
          uVar6 = -uVar10;
          if (-2 < (int)((int)uVar11 >> 0x1f & 0xfffffffeU)) {
            uVar6 = uVar10;
          }
        }
        *param_5 = uVar9 + 0x20 & 0xffffffc0;
        param_5[1] = uVar6 + 0x20 & 0xffffffc0;
      }
    }
    return iVar5;
  }
  return 6;
}

