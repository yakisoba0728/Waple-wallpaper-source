// Function: FUN_1402d4230
// Addr: 1402d4230
// Size: 780 bytes


ulonglong FUN_1402d4230(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar11 = 0;
  uVar9 = 0;
  if ((param_2 != 0) &&
     (uVar9 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  iVar2 = (int)param_5;
  if (param_1 == 0) {
    param_1 = uVar11;
    if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) ||
       ((param_5 != 0 && (param_2 <= param_5)))) {
      puVar3 = (undefined4 *)FUN_1402caf34(0,uVar9);
      *puVar3 = 0x16;
      FUN_1402cad8c();
    }
    else {
      uVar10 = 8;
      if (8 < param_4) {
        uVar10 = param_4;
      }
      lVar4 = (ulonglong)(-iVar2 & 7) + 8 + (uVar10 - 1);
      uVar7 = lVar4 + param_2;
      if (param_2 < uVar7 || param_2 - uVar7 == 0) {
        lVar5 = _malloc_base();
        if (lVar5 != 0) {
          param_1 = (lVar4 + lVar5 + param_5 & ~(uVar10 - 1)) - param_5;
          *(longlong *)((param_1 - (-iVar2 & 7)) + -8) = lVar5;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_1402caf34(uVar7,uVar9);
        *puVar3 = 0xc;
      }
    }
  }
  else {
    lVar4 = _msize_base(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    uVar9 = 8;
    if (8 < param_4) {
      uVar9 = param_4;
    }
    uVar9 = ((-7 - uVar9) - (ulonglong)(-iVar2 & 7)) + lVar4;
    if (param_2 == 0) {
      thunk_FUN_1402d9040(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
      return 0;
    }
    if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) ||
       ((param_5 != 0 && (param_2 <= param_5)))) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0x16;
      FUN_1402cad8c();
      return 0;
    }
    uVar10 = 8;
    if (8 < param_4) {
      uVar10 = param_4;
    }
    lVar4 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
    uVar13 = (ulonglong)(-iVar2 & 7);
    uVar10 = uVar10 - 1;
    lVar5 = _msize_base(lVar4);
    uVar7 = lVar5 + (lVar4 - param_1);
    if (param_2 < uVar7) {
      uVar7 = param_2;
    }
    uVar8 = uVar13 + 8 + uVar10 + param_2;
    if (uVar8 <= param_2 && param_2 - uVar8 != 0) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0xc;
      return 0;
    }
    if (uVar13 + 8 + lVar4 + uVar10 < param_1) {
LAB_1402d438d:
      lVar6 = _malloc_base(uVar8);
      lVar5 = lVar4;
      uVar12 = 1;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_1402caf34();
      uVar1 = *puVar3;
      lVar5 = thunk_FUN_1402e7250(lVar4,uVar8);
      uVar12 = uVar11;
      lVar6 = lVar5;
      if (lVar5 == 0) {
        puVar3 = (undefined4 *)FUN_1402caf34();
        *puVar3 = uVar1;
        goto LAB_1402d438d;
      }
    }
    uVar11 = uVar9;
    if ((lVar6 == lVar4) && ((~uVar10 & uVar13 + param_1 + param_5) == 0)) goto LAB_1402d4502;
    param_5 = (uVar13 + 8 + lVar6 + uVar10 + param_5 & ~uVar10) - param_5;
    FUN_1404210f0(param_5,(param_1 - lVar4) + lVar5,uVar7);
    if ((int)uVar12 != 0) {
      thunk_FUN_1402d9040(lVar5);
    }
    *(longlong *)((param_5 - uVar13) + -8) = lVar6;
    param_1 = param_5;
  }
  if (param_1 == 0) {
    return 0;
  }
LAB_1402d4502:
  if (uVar11 < param_2) {
    FUN_1404217a0(param_1 + uVar11,0,param_2 - uVar11);
  }
  return param_1;
}

