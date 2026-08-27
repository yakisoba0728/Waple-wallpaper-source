// Function: FUN_1402d3fd0
// Addr: 1402d3fd0
// Size: 599 bytes


ulonglong FUN_1402d3fd0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  bVar2 = false;
  if (param_1 == 0) {
    if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) &&
       ((param_4 == 0 || (param_4 < param_2)))) {
      uVar8 = 8;
      if (8 < param_3) {
        uVar8 = param_3;
      }
      uVar7 = (ulonglong)(-(int)param_4 & 7);
      lVar11 = uVar8 + 7 + uVar7;
      if (param_2 <= lVar11 + param_2) {
        lVar3 = _malloc_base();
        if (lVar3 == 0) {
          return 0;
        }
        param_4 = (lVar11 + lVar3 + param_4 & ~(uVar8 - 1)) - param_4;
        *(longlong *)((param_4 - uVar7) + -8) = lVar3;
        return param_4;
      }
LAB_1402d4125:
      puVar5 = (undefined4 *)FUN_1402caf34();
      *puVar5 = 0xc;
      return 0;
    }
LAB_1402d41fc:
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = 0x16;
    FUN_1402cad8c();
    return 0;
  }
  if (param_2 == 0) {
    thunk_FUN_1402d9040(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return 0;
  }
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || ((param_4 != 0 && (param_2 <= param_4)))
     ) goto LAB_1402d41fc;
  uVar8 = 8;
  if (8 < param_3) {
    uVar8 = param_3;
  }
  lVar11 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
  uVar9 = uVar8 - 1;
  lVar3 = param_1 - lVar11;
  uVar10 = (ulonglong)(-(int)param_4 & 7);
  lVar4 = _msize_base(lVar11);
  uVar7 = lVar4 + (lVar11 - param_1);
  if (param_2 < uVar7) {
    uVar7 = param_2;
  }
  uVar8 = uVar8 + 7 + uVar10 + param_2;
  if (uVar8 < param_2) goto LAB_1402d4125;
  if (param_1 <= uVar10 + 8 + lVar11 + uVar9) {
    puVar5 = (undefined4 *)FUN_1402caf34();
    uVar1 = *puVar5;
    lVar6 = thunk_FUN_1402e7250(lVar11,uVar8);
    lVar4 = lVar6;
    if (lVar6 != 0) goto LAB_1402d4199;
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = uVar1;
  }
  lVar6 = _malloc_base(uVar8);
  if (lVar6 == 0) {
    return 0;
  }
  bVar2 = true;
  lVar4 = lVar11;
LAB_1402d4199:
  if ((lVar6 != lVar11) || ((~uVar9 & uVar10 + param_1 + param_4) != 0)) {
    param_1 = (uVar10 + 8 + lVar6 + uVar9 + param_4 & ~uVar9) - param_4;
    FUN_1404210f0(param_1,lVar3 + lVar4,uVar7);
    if (bVar2) {
      thunk_FUN_1402d9040(lVar4);
    }
    *(longlong *)((param_1 - uVar10) + -8) = lVar6;
  }
  return param_1;
}

