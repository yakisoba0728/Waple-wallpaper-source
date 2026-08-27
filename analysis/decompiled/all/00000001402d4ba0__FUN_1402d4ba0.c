// Function: FUN_1402d4ba0
// Addr: 1402d4ba0
// Size: 611 bytes


ulonglong FUN_1402d4ba0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  bVar2 = false;
  if (param_1 == 0) {
    if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) ||
       ((param_4 != 0 && (param_2 <= param_4)))) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0x16;
      FUN_1402cad8c();
      return 0;
    }
    uVar7 = 8;
    if (8 < param_3) {
      uVar7 = param_3;
    }
    uVar6 = (ulonglong)(-(int)param_4 & 7);
    lVar10 = uVar7 + 7 + uVar6;
    if (param_2 <= lVar10 + param_2) {
      lVar4 = _malloc_base();
      if (lVar4 != 0) {
        param_4 = (lVar10 + lVar4 + param_4 & ~(uVar7 - 1)) - param_4;
        *(longlong *)((param_4 - uVar6) + -8) = lVar4;
        return param_4;
      }
      return 0;
    }
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0xc;
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1402d9040(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
  }
  else {
    if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) ||
       ((param_4 != 0 && (param_2 <= param_4)))) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0x16;
      FUN_1402cad8c();
      return 0;
    }
    uVar7 = 8;
    if (8 < param_3) {
      uVar7 = param_3;
    }
    lVar10 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
    uVar8 = uVar7 - 1;
    uVar9 = (ulonglong)(-(int)param_4 & 7);
    lVar4 = _msize_base(lVar10);
    uVar6 = lVar4 + (lVar10 - param_1);
    if (param_2 < uVar6) {
      uVar6 = param_2;
    }
    uVar7 = uVar7 + 7 + uVar9 + param_2;
    if (uVar7 < param_2) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0xc;
      return 0;
    }
    if (param_1 <= uVar9 + 8 + lVar10 + uVar8) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      uVar1 = *puVar3;
      lVar5 = thunk_FUN_1402e7250(lVar10,uVar7);
      lVar4 = lVar5;
      if (lVar5 != 0) goto LAB_1402d4d70;
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = uVar1;
    }
    lVar5 = _malloc_base(uVar7);
    if (lVar5 != 0) {
      bVar2 = true;
      lVar4 = lVar10;
LAB_1402d4d70:
      if ((lVar5 == lVar10) && ((~uVar8 & uVar9 + param_1 + param_4) == 0)) {
        return param_1;
      }
      param_4 = (uVar9 + 8 + lVar5 + uVar8 + param_4 & ~uVar8) - param_4;
      FUN_1404210f0(param_4,(param_1 - lVar10) + lVar4,uVar6);
      if (bVar2) {
        thunk_FUN_1402d9040(lVar4);
      }
      *(longlong *)((param_4 - uVar9) + -8) = lVar5;
      return param_4;
    }
  }
  return 0;
}

