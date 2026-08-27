// Function: FUN_1402d5120
// Addr: 1402d5120
// Size: 462 bytes


ulonglong FUN_1402d5120(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  bVar3 = false;
  if (param_1 == 0) {
    if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
      uVar10 = 8;
      if (8 < param_3) {
        uVar10 = param_3;
      }
      if (param_2 <= param_2 + 8 + (uVar10 - 1)) {
        lVar4 = _malloc_base();
        if (lVar4 == 0) {
          return 0;
        }
        uVar10 = uVar10 + 7 + lVar4 & ~(uVar10 - 1);
        *(longlong *)(uVar10 - 8) = lVar4;
        return uVar10;
      }
LAB_1402d5222:
      puVar7 = (undefined4 *)FUN_1402caf34();
      *puVar7 = 0xc;
      return 0;
    }
LAB_1402d52c6:
    puVar7 = (undefined4 *)FUN_1402caf34();
    *puVar7 = 0x16;
    FUN_1402cad8c();
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1402d9040(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return 0;
  }
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) goto LAB_1402d52c6;
  lVar4 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
  uVar10 = 8;
  if (8 < param_3) {
    uVar10 = param_3;
  }
  uVar1 = uVar10 - 1;
  lVar5 = param_1 - lVar4;
  lVar6 = _msize_base(lVar4);
  uVar9 = lVar6 + (lVar4 - param_1);
  if (param_2 < uVar9) {
    uVar9 = param_2;
  }
  uVar11 = param_2 + 8 + uVar1;
  if (uVar11 < param_2) goto LAB_1402d5222;
  if (param_1 <= uVar10 + 7 + lVar4) {
    puVar7 = (undefined4 *)FUN_1402caf34();
    uVar2 = *puVar7;
    lVar8 = thunk_FUN_1402e7250(lVar4,uVar11);
    lVar6 = lVar8;
    if (lVar8 != 0) goto LAB_1402d527b;
    puVar7 = (undefined4 *)FUN_1402caf34();
    *puVar7 = uVar2;
  }
  lVar8 = _malloc_base(uVar11);
  if (lVar8 == 0) {
    return 0;
  }
  bVar3 = true;
  lVar6 = lVar4;
LAB_1402d527b:
  if ((lVar8 != lVar4) || ((param_1 & ~uVar1) != 0)) {
    param_1 = uVar10 + 7 + lVar8 & ~uVar1;
    FUN_1404210f0(param_1,lVar5 + lVar6,uVar9);
    if (bVar3) {
      thunk_FUN_1402d9040(lVar6);
    }
    *(longlong *)(param_1 - 8) = lVar8;
  }
  return param_1;
}

