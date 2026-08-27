// Function: FUN_1402d4e10
// Addr: 1402d4e10
// Size: 766 bytes


ulonglong FUN_1402d4e10(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar10 = 0;
  if ((param_2 != 0) &&
     (uVar10 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0xc;
    return 0;
  }
  param_2 = param_2 * param_3;
  iVar2 = (int)param_5;
  if (param_1 == 0) {
    uVar11 = 0;
    if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) ||
       ((param_5 != 0 && (param_2 <= param_5)))) {
      puVar4 = (undefined4 *)FUN_1402caf34(0,uVar10);
      *puVar4 = 0x16;
      FUN_1402cad8c();
LAB_1402d50d0:
      param_1 = 0;
    }
    else {
      uVar8 = 8;
      if (8 < param_4) {
        uVar8 = param_4;
      }
      lVar5 = (ulonglong)(-iVar2 & 7) + 8 + (uVar8 - 1);
      uVar12 = lVar5 + param_2;
      if (uVar12 <= param_2 && param_2 - uVar12 != 0) {
        puVar4 = (undefined4 *)FUN_1402caf34(uVar12,uVar10);
        *puVar4 = 0xc;
        goto LAB_1402d50d0;
      }
      lVar6 = _malloc_base();
      if (lVar6 == 0) goto LAB_1402d50d0;
      param_1 = (lVar5 + lVar6 + param_5 & ~(uVar8 - 1)) - param_5;
      *(longlong *)((param_1 - (-iVar2 & 7)) + -8) = lVar6;
    }
LAB_1402d50d2:
    if (param_1 == 0) {
      return 0;
    }
LAB_1402d50d7:
    if (uVar11 < param_2) {
      FUN_1404217a0(param_1 + uVar11,0,param_2 - uVar11);
    }
  }
  else {
    lVar5 = _msize_base(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    uVar10 = 8;
    if (8 < param_4) {
      uVar10 = param_4;
    }
    uVar11 = ((-7 - uVar10) - (ulonglong)(-iVar2 & 7)) + lVar5;
    if (param_2 == 0) {
      thunk_FUN_1402d9040(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    }
    else {
      if (((param_4 != 0) && ((param_4 & param_4 - 1) == 0)) &&
         ((param_5 == 0 || (param_5 < param_2)))) {
        bVar3 = true;
        uVar10 = 8;
        if (8 < param_4) {
          uVar10 = param_4;
        }
        lVar5 = *(longlong *)((param_1 & 0xfffffffffffffff8) - 8);
        uVar12 = (ulonglong)(-iVar2 & 7);
        lVar6 = param_1 - lVar5;
        uVar10 = uVar10 - 1;
        lVar7 = _msize_base(lVar5);
        uVar8 = lVar7 + (lVar5 - param_1);
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        uVar9 = uVar12 + 8 + uVar10 + param_2;
        if (uVar9 <= param_2 && param_2 - uVar9 != 0) {
          puVar4 = (undefined4 *)FUN_1402caf34();
          *puVar4 = 0xc;
          goto LAB_1402d4eb1;
        }
        if (uVar12 + 8 + lVar5 + uVar10 < param_1) {
LAB_1402d4f6c:
          lVar7 = _malloc_base(uVar9);
          lVar13 = lVar5;
          if (lVar7 == 0) goto LAB_1402d4eb1;
        }
        else {
          puVar4 = (undefined4 *)FUN_1402caf34();
          uVar1 = *puVar4;
          lVar7 = thunk_FUN_1402e7250(lVar5,uVar9);
          if (lVar7 == 0) {
            puVar4 = (undefined4 *)FUN_1402caf34();
            *puVar4 = uVar1;
            goto LAB_1402d4f6c;
          }
          bVar3 = false;
          lVar13 = lVar7;
        }
        if ((lVar7 != lVar5) || ((~uVar10 & uVar12 + param_1 + param_5) != 0)) {
          param_1 = (uVar12 + 8 + lVar7 + uVar10 + param_5 & ~uVar10) - param_5;
          FUN_1404210f0(param_1,lVar6 + lVar13,uVar8);
          if (bVar3) {
            thunk_FUN_1402d9040(lVar13);
          }
          *(longlong *)((param_1 - uVar12) + -8) = lVar7;
          goto LAB_1402d50d2;
        }
        goto LAB_1402d50d7;
      }
      puVar4 = (undefined4 *)FUN_1402caf34();
      *puVar4 = 0x16;
      FUN_1402cad8c();
    }
LAB_1402d4eb1:
    param_1 = 0;
  }
  return param_1;
}

