// Function: FUN_1402e3c0c
// Addr: 1402e3c0c
// Size: 867 bytes


ulonglong FUN_1402e3c0c(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar6 = FUN_1402ede60(param_1,0x3d);
  if ((uVar6 == 0) || (uVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = 0x16;
    FUN_1402d9040(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(uVar6 + 2);
  if (DAT_1404e4580 == DAT_1404e4588) {
    DAT_1404e4580 = (longlong *)FUN_1402e4058(DAT_1404e4580);
  }
  if (DAT_1404e4580 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1404e4578 == 0)) {
      if (sVar2 == 0) goto LAB_1402e3cc4;
      if (DAT_1404e4578 == 0) {
        DAT_1404e4578 = _calloc_base(1,8);
        FUN_1402d9040(0);
        if (DAT_1404e4578 == 0) goto LAB_1402e3cc0;
        if (DAT_1404e4580 != (longlong *)0x0) goto LAB_1402e3d68;
      }
      DAT_1404e4580 = (longlong *)_calloc_base(1,8);
      FUN_1402d9040(0);
      if (DAT_1404e4580 != (longlong *)0x0) goto LAB_1402e3d5f;
    }
    else {
      lVar7 = FUN_1402d18fc();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_1402caf34();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_1404e4580 == DAT_1404e4588) {
          DAT_1404e4580 = (longlong *)FUN_1402e4058(DAT_1404e4580);
        }
LAB_1402e3d5f:
        if (DAT_1404e4580 != (longlong *)0x0) goto LAB_1402e3d68;
      }
    }
  }
  else {
LAB_1402e3d68:
    plVar8 = DAT_1404e4580;
    lVar11 = (longlong)(uVar6 - param_1) >> 1;
    lVar7 = *DAT_1404e4580;
    plVar9 = DAT_1404e4580;
    while (lVar7 != 0) {
      iVar3 = FUN_1402eaf20(param_1,lVar7,lVar11);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar11 * 2) == 0x3d || (*(short *)(*plVar9 + lVar11 * 2) == 0)))) {
        lVar7 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_1402e3db4;
      }
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
    }
    lVar7 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_1402e3db4:
    uVar6 = uVar10;
    if ((-1 < lVar7) && (*plVar8 != 0)) {
      FUN_1402d9040(plVar8[lVar7]);
      if (sVar2 == 0) {
        for (; plVar8[lVar7] != 0; lVar7 = lVar7 + 1) {
          plVar8[lVar7] = plVar8[lVar7 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar7,8);
        FUN_1402d9040(0);
        uVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_1404e4580 = plVar8;
        }
      }
      else {
        plVar8[lVar7] = param_1;
      }
LAB_1402e3e7e:
      if (param_2 == 0) {
LAB_1402e3f1b:
        FUN_1402d9040(uVar6);
        return 0;
      }
      lVar7 = -1;
      do {
        lVar12 = lVar7;
        lVar7 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar7 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1402d9040(0);
      }
      else {
        iVar3 = FUN_1402deba0();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar11] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar11 + 1)));
        if (BVar4 != 0) {
          FUN_1402d9040(lpName);
          goto LAB_1402e3f1b;
        }
        puVar5 = (undefined4 *)FUN_1402caf34();
        *puVar5 = 0x2a;
        FUN_1402d9040(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1402d9040(uVar6);
      return uVar10;
    }
    if (sVar2 == 0) goto LAB_1402e3cc4;
    uVar1 = -lVar7 + 2;
    if (((ulonglong)-lVar7 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1402d9040(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar7] = param_1;
        plVar8[1 - lVar7] = 0;
        DAT_1404e4580 = plVar8;
        goto LAB_1402e3e7e;
      }
    }
  }
LAB_1402e3cc0:
  uVar10 = 0xffffffffffffffff;
LAB_1402e3cc4:
  FUN_1402d9040(param_1);
  return uVar10 & 0xffffffff;
}

