// Function: FUN_14012a6a0
// Addr: 14012a6a0
// Size: 1472 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_14012a6a0(HWND param_1,uint param_2,ulonglong param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  BOOL BVar14;
  LONG_PTR LVar15;
  void *lpBits;
  HDC hdc;
  LRESULT LVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int local_res10 [2];
  int *piVar32;
  int *piVar34;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar36;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar37;
  uint local_158 [2];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  longlong local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  uint local_124;
  longlong local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  BITMAPINFO local_108;
  tagPAINTSTRUCT local_d8;
  tagPAINTSTRUCT local_88;
  undefined4 uVar33;
  undefined4 uVar35;
  
  if (0x14 < param_2) {
    if (param_2 != 0x46) {
      if (param_2 != 0x82) {
        if (param_2 != 0x113) goto LAB_14012ab54;
        if (param_3 == 100) {
          KillTimer(param_1,100);
          LVar15 = GetWindowLongPtrW(param_1,-0x15);
          BVar14 = IsWindow(*(HWND *)(LVar15 + 0x158));
          if (BVar14 != 0) {
            KillTimer(*(HWND *)(LVar15 + 0x158),100);
          }
          thunk_FUN_14028af80(*(undefined8 *)(LVar15 + 0x178));
          *(undefined8 *)(LVar15 + 0x178) = 0;
        }
      }
      return 0;
    }
    LVar15 = GetWindowLongPtrW(param_1,-0x15);
    if (((LVar15 != 0) && (param_4 != 0)) && (((byte)*(undefined4 *)(param_4 + 0x20) & 3) != 3)) {
      FUN_1400fdcc0(LVar15,&local_150);
      if ((0 < local_148 - local_150) && (0 < local_144 - local_14c)) {
        *(int *)(param_4 + 0x1c) = local_144 - local_14c;
        *(int *)(param_4 + 0x18) = local_148 - local_150;
        *(int *)(param_4 + 0x10) = local_150;
        *(int *)(param_4 + 0x14) = local_14c;
        return 0;
      }
    }
LAB_14012ab54:
    LVar16 = DefWindowProcW(param_1,param_2,param_3,param_4);
    return LVar16;
  }
  if (param_2 == 0x14) {
    return 1;
  }
  if (param_2 == 2) {
    return 0;
  }
  if (param_2 == 5) {
    if ((param_3 & 0xfffffffffffffffd) == 0) {
      InvalidateRect(param_1,(RECT *)0x0,0);
    }
    goto LAB_14012ab54;
  }
  if (param_2 != 0xf) goto LAB_14012ab54;
  LVar15 = GetWindowLongPtrW(param_1,-0x15);
  if (LVar15 == 0) {
    return 0;
  }
  if (*(longlong *)(LVar15 + 0x98) == 0) {
    return 0;
  }
  fVar27 = (float)FUN_1400604d0(LVar15 + 400);
  uVar24 = 0;
  if (DAT_1404926c0 <= fVar27) {
    *(undefined4 *)(LVar15 + 0x188) = 0;
  }
  else {
    iVar26 = *(int *)(LVar15 + 0x188);
    iVar25 = iVar26 + 1;
    *(int *)(LVar15 + 0x188) = iVar25;
    if ((0x31 < iVar25) && (iVar26 == 0x31)) {
      FUN_140098760("Image repaint issue detected.\n");
    }
  }
  uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  lVar17 = *(longlong *)(LVar15 + 0x178);
  local_120 = lVar17;
  if (lVar17 == 0) {
    plVar21 = (longlong *)(LVar15 + 0x100);
    plVar4 = *(longlong **)(LVar15 + 0x98);
    plVar20 = plVar21;
    if (0xf < *(ulonglong *)(LVar15 + 0x118)) {
      plVar20 = (longlong *)*plVar21;
    }
    cVar11 = (**(code **)(*plVar4 + 0x60))(plVar4,plVar20,&local_140,local_res10,local_158);
    auVar10 = _DAT_1404930b0;
    uVar9 = _UNK_140492cec;
    uVar8 = _UNK_140492ce8;
    uVar19 = _UNK_140492ce4;
    uVar23 = _DAT_140492ce0;
    if (cVar11 == '\0') {
      if (0xf < *(ulonglong *)(LVar15 + 0x118)) {
        plVar21 = (longlong *)*plVar21;
      }
      FUN_140098760("Failed loading image: %s\n",plVar21);
      goto LAB_14012ab22;
    }
    uVar18 = local_158[0] * local_res10[0];
    uVar22 = uVar24;
    if ((uVar18 & 0x3ffffffc) != 0) {
      do {
        uVar12 = uVar22 * 4;
        uVar22 = uVar22 + 4;
        puVar1 = (uint *)(local_140 + (ulonglong)uVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar28 = *puVar1 & uVar23;
        uVar29 = uVar5 & uVar19;
        uVar30 = uVar6 & uVar8;
        uVar31 = uVar7 & uVar9;
        puVar2 = (uint *)(local_140 + (ulonglong)uVar12);
        *puVar2 = uVar28 << 0x10 | uVar28 >> 0x10 | *puVar1 & auVar10._0_4_;
        puVar2[1] = uVar29 << 0x10 | uVar29 >> 0x10 | uVar5 & auVar10._4_4_;
        puVar2[2] = uVar30 << 0x10 | uVar30 >> 0x10 | uVar6 & auVar10._8_4_;
        puVar2[3] = uVar31 << 0x10 | uVar31 >> 0x10 | uVar7 & auVar10._12_4_;
      } while (uVar22 < (uVar18 & 0x3ffffffc));
    }
    for (; uVar22 < (uVar18 & 0x3fffffff); uVar22 = uVar22 + 1) {
      uVar23 = uVar22 * 4;
      uVar3 = *(undefined1 *)(local_140 + (ulonglong)uVar23);
      *(undefined1 *)(local_140 + (ulonglong)uVar23) =
           *(undefined1 *)(local_140 + 2 + (ulonglong)uVar23);
      *(undefined1 *)(local_140 + 2 + (ulonglong)uVar23) = uVar3;
    }
    lVar17 = thunk_FUN_14028af20((longlong)(int)(uVar18 * 4));
    uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
    uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
    local_120 = lVar17;
    uVar23 = uVar24;
    if (local_158[0] != 0) {
      do {
        FUN_1404210f0((ulonglong)(local_res10[0] * uVar23 * 4) + lVar17,
                      (ulonglong)(((local_158[0] - uVar23) + -1) * local_res10[0] * 4) + local_140,
                      local_res10[0] * 4);
        uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
        uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
        uVar23 = uVar23 + 1;
      } while (uVar23 < local_158[0]);
    }
    *(uint *)(LVar15 + 0x184) = local_158[0];
    *(int *)(LVar15 + 0x180) = local_res10[0];
    *(longlong *)(LVar15 + 0x178) = lVar17;
    (**(code **)(*plVar4 + 0x68))(plVar4,local_140);
  }
  else {
    local_res10[0] = *(int *)(LVar15 + 0x180);
    local_158[0] = *(uint *)(LVar15 + 0x184);
  }
  if (lVar17 != 0) {
    FUN_1400fdcc0(LVar15,&local_138);
    iVar26 = local_130 - local_138;
    iVar25 = local_12c - local_134;
    local_128 = local_res10[0];
    local_124 = local_158[0];
    piVar34 = &local_118;
    piVar32 = &local_150;
    local_138 = iVar26;
    local_134 = iVar25;
    FUN_140108c20(&local_138,&local_128,*(undefined4 *)(LVar15 + 0x160),LVar15 + 0x164,piVar32,
                  piVar34);
    uVar33 = (undefined4)((ulonglong)piVar32 >> 0x20);
    uVar35 = (undefined4)((ulonglong)piVar34 >> 0x20);
    lpBits = (void *)thunk_FUN_14028af20((longlong)(iVar25 * iVar26 * 4));
    if (((*(uint *)(LVar15 + 0x160) & 0xfffffffd) != 0) && (uVar23 = uVar24, 0 < iVar25)) {
      do {
        if (0 < iVar26) {
          uVar19 = uVar24;
          do {
            iVar13 = uVar23 * iVar26 + uVar19;
            uVar19 = uVar19 + 1;
            lVar17 = (longlong)(iVar13 * 4);
            *(undefined1 *)((longlong)lpBits + lVar17) = *(undefined1 *)(LVar15 + 0x174);
            *(undefined1 *)((longlong)lpBits + lVar17 + 1) = *(undefined1 *)(LVar15 + 0x175);
            *(undefined1 *)((longlong)lpBits + lVar17 + 2) = *(undefined1 *)(LVar15 + 0x176);
            *(undefined1 *)((longlong)lpBits + lVar17 + 3) = 0xff;
          } while ((int)uVar19 < iVar26);
        }
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < iVar25);
    }
    FUN_140109180(local_120,local_150,local_14c,local_148 - local_150,
                  CONCAT44(uVar33,local_144 - local_14c),CONCAT44(uVar35,local_res10[0]),lpBits,
                  local_118,local_114,CONCAT44(uVar36,local_110 - local_118),
                  CONCAT44(uVar37,local_10c - local_114),iVar26);
    hdc = BeginPaint(param_1,&local_d8);
    local_108.bmiHeader.biCompression = 0;
    local_108.bmiHeader.biSizeImage = 0;
    local_108.bmiHeader.biXPelsPerMeter = 0;
    local_108.bmiHeader.biSize = 0x28;
    local_108.bmiHeader.biPlanes = 1;
    local_108.bmiHeader.biBitCount = 0x20;
    local_108.bmiHeader.biYPelsPerMeter = 0;
    local_108.bmiHeader.biClrUsed = 0;
    local_108.bmiHeader.biClrImportant = 0;
    local_108.bmiColors[0].rgbBlue = '\0';
    local_108.bmiColors[0].rgbGreen = '\0';
    local_108.bmiColors[0].rgbRed = '\0';
    local_108.bmiColors[0].rgbReserved = '\0';
    local_108.bmiHeader.biWidth = iVar26;
    local_108.bmiHeader.biHeight = iVar25;
    StretchDIBits(hdc,0,0,iVar26,iVar25,0,0,iVar26,iVar25,lpBits,&local_108,0,0xcc0020);
    EndPaint(param_1,&local_d8);
    thunk_FUN_14028af80(lpBits);
    KillTimer(param_1,100);
    SetTimer(param_1,100,5000,(TIMERPROC)0x0);
    *(undefined1 *)(LVar15 + 0x1a0) = 1;
    return 0;
  }
LAB_14012ab22:
  BeginPaint(param_1,&local_88);
  EndPaint(param_1,&local_88);
  return 0;
}

