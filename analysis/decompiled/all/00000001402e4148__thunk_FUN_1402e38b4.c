// Function: thunk_FUN_1402e38b4
// Addr: 1402e4148
// Size: 5 bytes


ulonglong thunk_FUN_1402e38b4(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (param_1 == 0) {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar5 = FUN_1402bbe10(param_1,0x3d);
  if ((uVar5 == 0) || (uVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    FUN_1402d9040(param_1);
    return 0xffffffffffffffff;
  }
  cVar2 = *(char *)(uVar5 + 1);
  if (DAT_1404e4578 == DAT_1404e4590) {
    DAT_1404e4578 = (longlong *)FUN_1402e3f70(DAT_1404e4578);
  }
  if (DAT_1404e4578 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1404e4580 == 0)) {
      if (cVar2 == '\0') goto LAB_1402e396a;
      DAT_1404e4578 = (longlong *)_calloc_base(1,8);
      FUN_1402d9040(0);
      if (DAT_1404e4578 != (longlong *)0x0) {
        if (DAT_1404e4580 == 0) {
          DAT_1404e4580 = _calloc_base(1,8);
          FUN_1402d9040(0);
          if (DAT_1404e4580 == 0) goto LAB_1402e3966;
        }
LAB_1402e3a05:
        if (DAT_1404e4578 != (longlong *)0x0) goto LAB_1402e3a0e;
      }
    }
    else {
      lVar6 = FUN_1402d18c0();
      if (lVar6 != 0) {
        if (DAT_1404e4578 == DAT_1404e4590) {
          DAT_1404e4578 = (longlong *)FUN_1402e3f70(DAT_1404e4578);
        }
        goto LAB_1402e3a05;
      }
      puVar4 = (undefined4 *)FUN_1402caf34();
      *puVar4 = 0x16;
    }
  }
  else {
LAB_1402e3a0e:
    plVar7 = DAT_1404e4578;
    lVar11 = uVar5 - param_1;
    lVar6 = *DAT_1404e4578;
    plVar8 = DAT_1404e4578;
    while (lVar6 != 0) {
      iVar3 = FUN_1402eb0c0(param_1,lVar6,lVar11);
      if ((iVar3 == 0) &&
         ((*(char *)(lVar11 + *plVar8) == '=' || (*(char *)(lVar11 + *plVar8) == '\0')))) {
        lVar6 = (longlong)plVar8 - (longlong)plVar7 >> 3;
        goto LAB_1402e3a54;
      }
      plVar8 = plVar8 + 1;
      lVar6 = *plVar8;
    }
    lVar6 = -((longlong)plVar8 - (longlong)plVar7 >> 3);
LAB_1402e3a54:
    uVar10 = uVar9;
    if ((-1 < lVar6) && (*plVar7 != 0)) {
      FUN_1402d9040(plVar7[lVar6]);
      if (cVar2 == '\0') {
        for (; plVar7[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar7[lVar6] = plVar7[lVar6 + 1];
        }
        plVar7 = (longlong *)_recalloc_base(plVar7,lVar6,8);
        FUN_1402d9040(0);
        uVar10 = param_1;
        if (plVar7 != (longlong *)0x0) {
          DAT_1404e4578 = plVar7;
        }
      }
      else {
        plVar7[lVar6] = param_1;
      }
LAB_1402e3b1c:
      if (param_2 == 0) {
LAB_1402e3bbc:
        FUN_1402d9040(uVar10);
        return 0;
      }
      lVar6 = -1;
      do {
        lVar11 = lVar6;
        lVar6 = lVar11 + 1;
      } while (*(char *)(param_1 + lVar6) != '\0');
      lVar6 = _calloc_base(lVar11 + 3,1);
      if (lVar6 == 0) {
        FUN_1402d9040(0);
      }
      else {
        iVar3 = FUN_1402d8fc0();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined1 *)((lVar6 - param_1) + uVar5) = 0;
        iVar3 = FUN_1402eb264(lVar6,-(ulonglong)(cVar2 != '\0') & uVar5 + 1 + (lVar6 - param_1));
        if (iVar3 != 0) {
          FUN_1402d9040(lVar6);
          goto LAB_1402e3bbc;
        }
        puVar4 = (undefined4 *)FUN_1402caf34();
        *puVar4 = 0x2a;
        FUN_1402d9040(lVar6);
        uVar9 = 0xffffffff;
      }
      FUN_1402d9040(uVar10);
      return uVar9;
    }
    if (cVar2 == '\0') goto LAB_1402e396a;
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar7 = (longlong *)_recalloc_base(plVar7,uVar1,8);
      FUN_1402d9040(0);
      if (plVar7 != (longlong *)0x0) {
        plVar7[-lVar6] = param_1;
        plVar7[1 - lVar6] = 0;
        DAT_1404e4578 = plVar7;
        goto LAB_1402e3b1c;
      }
    }
  }
LAB_1402e3966:
  uVar9 = 0xffffffffffffffff;
LAB_1402e396a:
  FUN_1402d9040(param_1);
  return uVar9 & 0xffffffff;
}

