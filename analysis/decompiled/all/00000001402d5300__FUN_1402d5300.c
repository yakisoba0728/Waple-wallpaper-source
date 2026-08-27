// Function: FUN_1402d5300
// Addr: 1402d5300
// Size: 626 bytes


ulonglong FUN_1402d5300(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  uVar8 = 0;
  if ((param_2 != 0) &&
     (uVar8 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  if (param_1 == 0) {
    param_1 = uVar9;
    if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
      puVar3 = (undefined4 *)FUN_1402caf34(0,uVar8);
      *puVar3 = 0x16;
      FUN_1402cad8c();
    }
    else {
      uVar10 = 8;
      if (8 < param_4) {
        uVar10 = param_4;
      }
      uVar7 = param_2 + 8 + (uVar10 - 1);
      if (param_2 < uVar7 || param_2 - uVar7 == 0) {
        lVar4 = _malloc_base();
        if (lVar4 != 0) {
          param_1 = uVar10 + 7 + lVar4 & ~(uVar10 - 1);
          *(longlong *)(param_1 - 8) = lVar4;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_1402caf34(uVar7,uVar8);
        *puVar3 = 0xc;
      }
    }
  }
  else {
    uVar10 = param_1 & 0xfffffffffffffff8;
    lVar4 = _msize_base(*(undefined8 *)(uVar10 - 8));
    uVar8 = 8;
    if (8 < param_4) {
      uVar8 = param_4;
    }
    uVar9 = (-7 - uVar8) + lVar4;
    if (param_2 == 0) {
      thunk_FUN_1402d9040(*(undefined8 *)(uVar10 - 8));
      return 0;
    }
    if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0x16;
      FUN_1402cad8c();
      return 0;
    }
    lVar4 = *(longlong *)(uVar10 - 8);
    uVar8 = 8;
    if (8 < param_4) {
      uVar8 = param_4;
    }
    uVar10 = uVar8 - 1;
    lVar5 = _msize_base(lVar4);
    uVar7 = lVar5 + (lVar4 - param_1);
    if (param_2 < uVar7) {
      uVar7 = param_2;
    }
    uVar11 = param_2 + 8 + uVar10;
    if (uVar11 <= param_2 && param_2 - uVar11 != 0) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0xc;
      return 0;
    }
    if (lVar4 + 8 + uVar10 < param_1) {
LAB_1402d5417:
      lVar6 = _malloc_base(uVar11);
      if (lVar6 == 0) {
        return 0;
      }
      bVar2 = true;
      lVar5 = lVar4;
    }
    else {
      puVar3 = (undefined4 *)FUN_1402caf34();
      uVar1 = *puVar3;
      lVar5 = thunk_FUN_1402e7250(lVar4,uVar11);
      if (lVar5 == 0) {
        puVar3 = (undefined4 *)FUN_1402caf34();
        *puVar3 = uVar1;
        goto LAB_1402d5417;
      }
      bVar2 = false;
      lVar6 = lVar5;
    }
    if ((lVar6 == lVar4) && ((param_1 & ~uVar10) == 0)) goto LAB_1402d5538;
    uVar8 = uVar8 + 7 + lVar6 & ~uVar10;
    FUN_1404210f0(uVar8,(param_1 - lVar4) + lVar5,uVar7);
    if (bVar2) {
      thunk_FUN_1402d9040(lVar5);
    }
    *(longlong *)(uVar8 - 8) = lVar6;
    param_1 = uVar8;
  }
  if (param_1 == 0) {
    return 0;
  }
LAB_1402d5538:
  if (uVar9 < param_2) {
    FUN_1404217a0(param_1 + uVar9,0,param_2 - uVar9);
  }
  return param_1;
}

