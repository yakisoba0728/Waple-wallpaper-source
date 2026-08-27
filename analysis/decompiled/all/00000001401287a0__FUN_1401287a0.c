// Function: FUN_1401287a0
// Addr: 1401287a0
// Size: 1746 bytes


LRESULT FUN_1401287a0(HWND param_1,UINT param_2,WPARAM param_3,HWND param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  LONG_PTR LVar7;
  longlong lVar8;
  HWND pHVar9;
  LRESULT LVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [56];
  HWND__ local_258;
  int local_254;
  int local_250;
  int local_24c;
  WCHAR local_248 [260];
  undefined8 *puVar20;
  
  puVar21 = auStack_298;
  if (param_2 == 0x20) {
    return 0;
  }
  if (param_2 == 0x46) {
    LVar7 = GetWindowLongPtrW(param_1,-0x15);
    if (LVar7 == 0) {
      return 0;
    }
    FUN_1400fdcc0(LVar7,&local_258);
    if ((0 < local_250 - local_258.unused) && (0 < local_24c - local_254)) {
      param_4[6].unused = local_250 - local_258.unused;
      param_4[7].unused = local_24c - local_254;
      param_4[4].unused = local_258.unused;
      param_4[5].unused = local_254;
    }
LAB_140128e52:
    LVar10 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
    return LVar10;
  }
  if (param_2 == 0x113) {
    if (param_3 != 100) {
      return 0;
    }
    LVar7 = GetWindowLongPtrW(param_1,-0x15);
    if (LVar7 == 0) {
      return 0;
    }
    puVar19 = *(undefined8 **)(LVar7 + 0x178);
    for (puVar15 = *(undefined8 **)(LVar7 + 0x170); puVar15 != puVar19; puVar15 = puVar15 + 1) {
      FUN_1401253c0(*puVar15);
    }
    return 0;
  }
  if (param_2 != 0x404) {
    if (param_2 == 0x413) {
      LVar7 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar7 == 0) {
        return 0;
      }
      lVar8 = thunk_FUN_14028d250(*(undefined8 *)(LVar7 + 0x170),*(undefined8 *)(LVar7 + 0x178),
                                  param_4);
      if (lVar8 == *(longlong *)(LVar7 + 0x178)) {
        return 0;
      }
      FUN_1404210f0(lVar8,lVar8 + 8,*(longlong *)(LVar7 + 0x178) - (lVar8 + 8));
      *(longlong *)(LVar7 + 0x178) = *(longlong *)(LVar7 + 0x178) + -8;
      if (DAT_1404e8d70 == param_4) {
        DAT_1404e8d70 = (HWND)0x0;
      }
      if (DAT_1404e8d78 == param_4) {
        DAT_1404e8d78 = (HWND)0x0;
      }
      if (DAT_1404e8d80 == param_4) {
        DAT_1404e8d80 = (HWND)0x0;
      }
      if (DAT_1404e8d88 == param_4) {
        DAT_1404e8d88 = (HWND)0x0;
      }
      if (DAT_1404e8d90 == param_4) {
        DAT_1404e8d90 = (HWND)0x0;
      }
      if (DAT_1404e8d98 == param_4) {
        DAT_1404e8d98 = (HWND)0x0;
      }
      if (DAT_1404e8da0 == param_4) {
        DAT_1404e8da0 = (HWND)0x0;
      }
      if (DAT_1404e8da8 == param_4) {
        DAT_1404e8da8 = (HWND)0x0;
      }
      if (DAT_1404e8db0 == param_4) {
        DAT_1404e8db0 = (HWND)0x0;
      }
      if (DAT_1404e8db8 == param_4) {
        DAT_1404e8db8 = (HWND)0x0;
      }
      if (DAT_1404e8dc0 == param_4) {
        DAT_1404e8dc0 = (HWND)0x0;
      }
      if (DAT_1404e8dc8 == param_4) {
        DAT_1404e8dc8 = (HWND)0x0;
      }
      if (DAT_1404e8dd0 == param_4) {
        DAT_1404e8dd0 = (HWND)0x0;
      }
      if (DAT_1404e8dd8 == param_4) {
        DAT_1404e8dd8 = (HWND)0x0;
      }
      if (DAT_1404e8de0 == param_4) {
        DAT_1404e8de0 = (HWND)0x0;
      }
      if (DAT_1404e8de8 != param_4) {
        return 0;
      }
      DAT_1404e8de8 = (HWND)0x0;
      return 0;
    }
    goto LAB_140128e52;
  }
  LVar7 = GetWindowLongPtrW(param_1,-0x15);
  if (LVar7 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    return 0;
  }
  puVar19 = *(undefined8 **)(LVar7 + 0x170);
  puVar15 = puVar19;
  if (puVar19 != *(undefined8 **)(LVar7 + 0x178)) {
    do {
      puVar19 = puVar15 + 1;
      BVar4 = IsWindow((HWND)*puVar15);
      if (BVar4 == 0) {
        FUN_1404210f0(puVar15,puVar19,*(longlong *)(LVar7 + 0x178) - (longlong)puVar19);
        *(longlong *)(LVar7 + 0x178) = *(longlong *)(LVar7 + 0x178) + -8;
        puVar19 = puVar15;
      }
      puVar15 = puVar19;
    } while (puVar19 != *(undefined8 **)(LVar7 + 0x178));
  }
  BVar4 = IsWindow(param_4);
  if (BVar4 == 0) {
    return 0;
  }
  lVar8 = thunk_FUN_14028d250(*(undefined8 *)(LVar7 + 0x170),*(undefined8 *)(LVar7 + 0x178),param_4)
  ;
  if (lVar8 != *(longlong *)(LVar7 + 0x178)) {
    return 0;
  }
  FUN_1404217a0(local_248,0,0x200);
  GetClassNameW(param_4,local_248,0x100);
  iVar5 = FUN_1402c12c0(local_248,L"UnityWndClass");
  if (iVar5 == 0) {
    *(undefined1 *)(LVar7 + 0x192) = 1;
  }
  if ((*(char *)(LVar7 + 0x192) != '\0') && (iVar5 != 0)) {
    return 0;
  }
  puVar20 = (undefined8 *)0x0;
  puVar15 = *(undefined8 **)(LVar7 + 0x178);
  if (puVar15 == *(undefined8 **)(LVar7 + 0x180)) {
    uVar23 = (longlong)puVar15 - *(longlong *)(LVar7 + 0x170);
    lVar8 = (longlong)uVar23 >> 3;
    if (lVar8 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar12 = (longlong)*(undefined8 **)(LVar7 + 0x180) - *(longlong *)(LVar7 + 0x170) >> 3;
    if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
LAB_140128e68:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar1 = lVar8 + 1;
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar24 = uVar1;
    if (uVar1 <= uVar12) {
      uVar24 = uVar12;
    }
    if (0x1fffffffffffffff < uVar24) goto LAB_140128e68;
    uVar12 = uVar24 * 8;
    puVar18 = puVar20;
    if (uVar12 == 0) {
LAB_140128b31:
      uVar23 = uVar23 & 0xfffffffffffffff8;
      *(HWND *)(uVar23 + (longlong)puVar18) = param_4;
      puVar19 = *(undefined8 **)(LVar7 + 0x170);
      if (puVar15 == *(undefined8 **)(LVar7 + 0x178)) {
        lVar8 = (longlong)*(undefined8 **)(LVar7 + 0x178) - (longlong)puVar19;
        puVar13 = puVar18;
        puVar15 = puVar19;
      }
      else {
        FUN_1404210f0(puVar18,puVar19,(longlong)puVar15 - (longlong)puVar19);
        puVar13 = (undefined8 *)(uVar23 + 8 + (longlong)puVar18);
        lVar8 = *(longlong *)(LVar7 + 0x178) - (longlong)puVar15;
      }
      FUN_1404210f0(puVar13,puVar15,lVar8);
      lVar8 = *(longlong *)(LVar7 + 0x170);
      if (lVar8 != 0) {
        lVar14 = lVar8;
        puVar21 = auStack_298;
        if ((0xfff < (ulonglong)((*(longlong *)(LVar7 + 0x180) - lVar8 >> 3) * 8)) &&
           (lVar14 = *(longlong *)(lVar8 + -8), puVar19 = puVar18, puVar21 = auStack_298,
           0x1f < (lVar8 - lVar14) - 8U)) goto LAB_140128bbb;
        goto LAB_140128bc5;
      }
    }
    else {
      if (uVar12 < 0x1000) {
        puVar18 = (undefined8 *)FUN_14028af20(uVar12);
        goto LAB_140128b31;
      }
      if (uVar12 + 0x27 <= uVar12) goto LAB_140128e68;
      lVar8 = FUN_14028af20();
      if (lVar8 != 0) {
        puVar18 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        puVar18[-1] = lVar8;
        goto LAB_140128b31;
      }
LAB_140128bbb:
      lVar14 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar18 = puVar19;
      puVar21 = auStack_290;
LAB_140128bc5:
      *(undefined8 *)(puVar21 + -8) = 0x140128bcd;
      thunk_FUN_14028af80(lVar14);
    }
    *(undefined8 **)(LVar7 + 0x170) = puVar18;
    *(undefined8 **)(LVar7 + 0x178) = puVar18 + uVar1;
    iVar5 = *(int *)(puVar21 + 0x2a8);
    *(undefined8 **)(LVar7 + 0x180) = puVar18 + uVar24;
  }
  else {
    *puVar15 = param_4;
    *(longlong *)(LVar7 + 0x178) = *(longlong *)(LVar7 + 0x178) + 8;
    puVar21 = auStack_298;
  }
  if ((*(byte *)(LVar7 + 0xa6) & 2) != 0) {
    do {
      pHVar9 = (&DAT_1404e8d70)[(longlong)puVar20];
      if (pHVar9 == (HWND)0x0) {
LAB_140128c23:
        (&DAT_1404e8d70)[(longlong)puVar20] = param_4;
        break;
      }
      *(undefined8 *)(puVar21 + -8) = 0x140128c16;
      BVar4 = IsWindow(pHVar9);
      if (BVar4 == 0) goto LAB_140128c23;
      uVar16 = (int)puVar20 + 1;
      puVar20 = (undefined8 *)(ulonglong)uVar16;
    } while ((int)uVar16 < 0x10);
  }
  *(undefined8 *)(puVar21 + -8) = 0x140128c34;
  BVar4 = IsWindow(DAT_1404e8d60);
  if (BVar4 == 0) {
    *(undefined8 *)(puVar21 + -8) = 0x140128c3e;
    pHVar9 = GetDesktopWindow();
    *(undefined8 *)(puVar21 + -8) = 0x140128c51;
    EnumChildWindows(pHVar9,FUN_140126590,0);
  }
  pHVar9 = *(HWND *)(LVar7 + 0x188);
  *(undefined8 *)(puVar21 + -8) = 0x140128c5e;
  BVar4 = IsWindow(pHVar9);
  if (BVar4 == 0) goto LAB_140128d90;
  *(undefined8 *)(puVar21 + -8) = 0x140128c74;
  uVar16 = GetWindowLongW(param_4,-0x10);
  *(undefined8 *)(puVar21 + -8) = 0x140128c8e;
  SetWindowLongW(param_4,-0x10,uVar16 & 0xde33ffff | 0x40000000);
  iVar11 = 1;
  LOCK();
  iVar6 = *(int *)(LVar7 + 0x140);
  *(int *)(LVar7 + 0x140) = 1;
  UNLOCK();
  while (iVar6 != 0) {
    iVar6 = *(int *)(LVar7 + 0x140);
    while (iVar6 != 0) {
      iVar6 = iVar11;
      if (iVar11 == 0) {
LAB_140128cc9:
        iVar11 = iVar11 * 2;
      }
      else {
        do {
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (iVar11 < 0x40) goto LAB_140128cc9;
        iVar11 = 0x40;
      }
      iVar6 = *(int *)(LVar7 + 0x140);
    }
    LOCK();
    iVar6 = *(int *)(LVar7 + 0x140);
    *(int *)(LVar7 + 0x140) = 1;
    UNLOCK();
  }
  iVar6 = *(int *)(LVar7 + 0x144);
  iVar11 = *(int *)(LVar7 + 0x148);
  iVar17 = *(int *)(LVar7 + 0x150) - iVar11;
  *(undefined4 *)(LVar7 + 0x140) = 0;
  pHVar9 = *(HWND *)(LVar7 + 0x188);
  iVar22 = *(int *)(LVar7 + 0x14c) - iVar6;
  *(undefined4 *)(puVar21 + 0x30) = 0x4324;
  *(int *)(puVar21 + 0x28) = iVar17;
  *(int *)(puVar21 + 0x20) = iVar22;
  *(undefined8 *)(puVar21 + -8) = 0x140128d2a;
  SetWindowPos(pHVar9,(HWND)0x0,iVar6,iVar11,*(int *)(puVar21 + 0x20),*(int *)(puVar21 + 0x28),
               *(UINT *)(puVar21 + 0x30));
  if (*(char *)(LVar7 + 0x192) == '\0') {
    pHVar9 = *(HWND *)(LVar7 + 0x188);
    *(undefined8 *)(puVar21 + -8) = 0x140128d43;
    SetParent(param_4,pHVar9);
    if (*(char *)(LVar7 + 0x192) != '\0') goto LAB_140128d4c;
LAB_140128d63:
    *(undefined4 *)(puVar21 + 0x30) = 0x4304;
    *(int *)(puVar21 + 0x28) = iVar17;
    *(int *)(puVar21 + 0x20) = iVar22;
    *(undefined8 *)(puVar21 + -8) = 0x140128d84;
    SetWindowPos(param_4,(HWND)0x0,0,0,*(int *)(puVar21 + 0x20),*(int *)(puVar21 + 0x28),
                 *(UINT *)(puVar21 + 0x30));
  }
  else {
LAB_140128d4c:
    if (iVar5 == 0) {
      *(undefined8 *)(puVar21 + -8) = 0x140128d5a;
      pHVar9 = GetParent(param_4);
      if (pHVar9 == *(HWND *)(LVar7 + 0x188)) goto LAB_140128d63;
    }
  }
  uVar2 = *(undefined8 *)(LVar7 + 0x188);
  *(undefined8 *)(puVar21 + -8) = 0x140128d90;
  FUN_1401253c0(uVar2);
LAB_140128d90:
  *(undefined8 *)(puVar21 + -8) = 0x140128d98;
  FUN_1401253c0(param_4);
  if (*(char *)(LVar7 + 400) != '\0') {
    *(undefined8 *)(puVar21 + -8) = 0x140128daf;
    FUN_1401282f0(LVar7);
  }
  return 0;
}

