// Function: FUN_140101c50
// Addr: 140101c50
// Size: 5399 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140101c50(HWND param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  longlong *plVar9;
  char cVar10;
  BOOL BVar11;
  int iVar12;
  HDC hDC;
  HBRUSH hbr;
  LONG_PTR LVar13;
  HWND hWnd;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  LRESULT LVar18;
  byte bVar19;
  longlong lVar20;
  uint uVar21;
  RECT *lprc;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined4 local_res10;
  undefined1 auStackY_188 [8];
  undefined1 auStackY_180 [24];
  int local_148 [2];
  RECT local_140;
  ulonglong local_128;
  ULONG_PTR local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  tagRECT local_100;
  int local_f0;
  int local_ec;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  tagPAINTSTRUCT local_c8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  puVar24 = auStackY_188;
  if (param_2 < 0x83) {
    if (param_2 == 0x82) {
      return 0;
    }
    switch(param_2) {
    case 2:
    case 0x20:
      return 0;
    case 5:
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (((LVar13 != 0) && (plVar2 = *(longlong **)(LVar13 + 0x160), plVar2 != (longlong *)0x0)) &&
         (((ulonglong)param_3 & 0xfffffffffffffffd) == 0)) {
        local_120 = CONCAT44((int)((ulonglong)param_4 >> 0x10),(int)param_4) & 0xffff0000ffff;
        iVar12 = (**(code **)(*plVar2 + 0xa8))(plVar2,local_120);
        if (iVar12 < 0) {
          FUN_140098760("Failed resizing video in callback.\n");
        }
      }
      break;
    case 0xf:
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (((LVar13 != 0) && (*(longlong **)(LVar13 + 0x160) != (longlong *)0x0)) &&
         ((iVar12 = (**(code **)(**(longlong **)(LVar13 + 0x160) + 0xb0))(), iVar12 != 0 &&
          (iVar12 = (**(code **)(**(longlong **)(LVar13 + 0x160) + 0xb8))(), iVar12 != 0)))) {
        (**(code **)(**(longlong **)(LVar13 + 0x160) + 0xa0))(*(longlong **)(LVar13 + 0x160),0);
        if (2 < *(uint *)(LVar13 + 0x180)) {
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x80))
                    (*(longlong **)(LVar13 + 0x160),&local_118);
          iVar12 = (int)uStack_110 - (int)local_118;
          iVar32 = uStack_110._4_4_ - local_118._4_4_;
          GetClientRect(param_1,&local_100);
          hDC = GetDC(param_1);
          hbr = CreateSolidBrush(*(uint *)(LVar13 + 0x194) & 0xffffff);
          if ((iVar12 < 1) && (iVar32 < 1)) {
            lprc = &local_100;
          }
          else {
            local_140.left = local_100.left;
            local_140.right = (int)local_118;
            local_140.top = local_100.top;
            local_140.bottom = local_100.bottom;
            FillRect(hDC,&local_140,hbr);
            local_140.left = (int)uStack_110;
            local_140.right = local_100.right;
            FillRect(hDC,&local_140,hbr);
            local_140.left = (int)local_118;
            local_140.right = (int)uStack_110;
            local_140.bottom = local_118._4_4_;
            FillRect(hDC,&local_140,hbr);
            lprc = &local_140;
            local_140.top = uStack_110._4_4_;
            local_140.bottom = local_100.bottom;
          }
          FillRect(hDC,lprc,hbr);
          DeleteObject(hbr);
          ReleaseDC(param_1,hDC);
        }
        *(uint *)(LVar13 + 0x17c) = *(uint *)(LVar13 + 0x17c) | 1;
      }
      BeginPaint(param_1,&local_c8);
      EndPaint(param_1,&local_c8);
      return 0;
    case 0x14:
      return 1;
    case 0x46:
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (((LVar13 != 0) && (param_4 != 0)) && (((byte)*(undefined4 *)(param_4 + 0x20) & 3) != 3)) {
        FUN_1400fdcc0(LVar13,&local_140);
        if (0 < local_140.right - local_140.left) {
          if (0 < local_140.bottom - local_140.top) {
            *(LONG *)(param_4 + 0x18) = local_140.right - local_140.left;
            *(LONG *)(param_4 + 0x1c) = local_140.bottom - local_140.top;
            *(LONG *)(param_4 + 0x10) = local_140.left;
            *(LONG *)(param_4 + 0x14) = local_140.top;
            return 0;
          }
        }
      }
    }
switchD_140101cbb_caseD_3:
    LVar18 = DefWindowProcW(param_1,param_2,(WPARAM)param_3,param_4);
    return LVar18;
  }
  if (0x8001 < param_2) {
    if (param_2 == 0x8002) {
LAB_1401030ca:
      *(undefined8 *)(puVar24 + -8) = 0x1401030d5;
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar13 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(LVar13 + 0x160);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      pcVar7 = *(code **)(*plVar2 + 200);
      *(undefined8 *)(puVar24 + -8) = 0x1401030f1;
      (*pcVar7)(plVar2,0);
      return 0;
    }
    if (param_2 == 0x8003) {
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar13 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(LVar13 + 0x160);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      iVar12 = (**(code **)(*plVar2 + 0xd0))(plVar2,(ulonglong)param_3 & 0xffffffff);
      if (-1 < iVar12) {
        return 0;
      }
      uVar14 = *(ulonglong *)(LVar13 + 0x2b0);
      FUN_140032bc0(LVar13 + 0x2a0,&local_140,LVar13 + 0x2e0);
      *(undefined4 *)(LVar13 + 0x278) = 0xc00d5212;
      if (4 < uVar14) {
        return 0;
      }
      FUN_140005880(&local_140,LVar13 + 0x100);
      puVar16 = (undefined8 *)&local_140;
      if (7 < local_128) {
        puVar16 = (undefined8 *)local_140._0_8_;
      }
      FUN_140100cf0(LVar13,puVar16);
      if (local_128 < 8) {
        return 0;
      }
      uVar14 = local_128 * 2 + 2;
      puVar16 = (undefined8 *)local_140._0_8_;
      if (0xfff < uVar14) {
        puVar16 = *(undefined8 **)(local_140._0_8_ + 0xfffffffffffffff8);
        if (0x1f < (ulonglong)(local_140._0_8_ + (-8 - (longlong)puVar16))) {
          param_1 = (HWND)&DAT_00000005;
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)();
          puVar24 = auStackY_180;
          goto LAB_1401030ca;
        }
        uVar14 = local_128 * 2 + 0x29;
      }
      thunk_FUN_14028af80(puVar16,uVar14);
      return 0;
    }
    goto switchD_140101cbb_caseD_3;
  }
  if (param_2 != 0x8001) {
    if (param_2 == 0x113) {
      switch(param_3) {
      case (longlong *)0x64:
        KillTimer(param_1,100);
        LVar13 = GetWindowLongPtrW(param_1,-0x15);
        if (LVar13 == 0) {
          return 0;
        }
        if (*(longlong **)(LVar13 + 0x160) == (longlong *)0x0) {
          return 0;
        }
        (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x38))();
        return 0;
      case (longlong *)0x65:
        LVar13 = GetWindowLongPtrW(param_1,-0x15);
        if (LVar13 == 0) {
          return 0;
        }
        plVar2 = *(longlong **)(LVar13 + 0x160);
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        fVar36 = *(float *)(LVar13 + 0x174);
        if ((fVar36 == 0.0) || ((*(uint *)(LVar13 + 0x17c) >> 3 & 1) == 0)) {
          bVar35 = true;
        }
        else {
          bVar35 = false;
        }
        fVar42 = 0.0;
        if ((*(char *)(LVar13 + 9) == '\0') && (*(char *)(LVar13 + 8) == '\0')) {
          fVar42 = fVar36;
        }
        fVar37 = *(float *)(LVar13 + 0x170);
        if (fVar37 == fVar42) {
          bVar35 = true;
        }
        else {
          if (bVar35) {
            bVar35 = true;
          }
          else {
            if (fVar37 <= fVar42) {
              fVar37 = fVar36 * DAT_140492620 + DAT_140492620 + fVar37;
              bVar35 = fVar37 < fVar42;
            }
            else {
              fVar37 = fVar37 - (fVar36 * _DAT_140492634 + DAT_14049262c);
              bVar35 = fVar42 < fVar37;
            }
            bVar35 = !bVar35;
            if (!bVar35) {
              *(float *)(LVar13 + 0x170) = fVar37;
              (**(code **)(*plVar2 + 0x30))();
              return 0;
            }
          }
          *(float *)(LVar13 + 0x170) = fVar42;
          (**(code **)(*plVar2 + 0x30))();
        }
        if ((*(char *)(LVar13 + 8) != '\0') &&
           ((**(code **)(**(longlong **)(LVar13 + 0x160) + 0x10))(), !bVar35)) {
          return 0;
        }
        KillTimer(param_1,0x65);
        *(uint *)(LVar13 + 0x17c) = *(uint *)(LVar13 + 0x17c) & 0xfffffffd;
        return 0;
      case (longlong *)0x66:
        goto switchD_140102024_caseD_66;
      case (longlong *)0x67:
        LVar13 = GetWindowLongPtrW(param_1,-0x15);
        if (LVar13 == 0) {
          return 0;
        }
        if (*(longlong *)(LVar13 + 0x160) == 0) {
          return 0;
        }
        iVar12 = FUN_140290d80(LVar13 + 800);
        fVar42 = DAT_140492704;
        fVar36 = DAT_14049265c;
        if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (*(int *)(LVar13 + 0x36c) != 0x7fffffff) {
          lVar20 = *(longlong *)(LVar13 + 0x308);
          for (lVar23 = *(longlong *)(LVar13 + 0x300); lVar23 != lVar20; lVar23 = lVar23 + 0x38) {
            uVar31 = 0;
            fVar37 = *(float *)(lVar23 + 0xc) + fVar36;
            if (fVar42 <= fVar37) {
              fVar37 = fVar42;
            }
            *(float *)(lVar23 + 0xc) = fVar37;
            if (*(int *)(lVar23 + 8) * *(int *)(lVar23 + 4) * 3 != 0) {
              do {
                lVar29 = (longlong)(int)uVar31;
                uVar31 = uVar31 + 1;
                uVar21 = (uint)*(byte *)(lVar29 + *(longlong *)(lVar23 + 0x28));
                *(char *)(lVar29 + *(longlong *)(lVar23 + 0x30)) =
                     (char)(int)((float)(int)(*(byte *)(lVar29 + *(longlong *)(lVar23 + 0x20)) -
                                             uVar21) * *(float *)(lVar23 + 0xc) + (float)uVar21);
              } while (uVar31 < (uint)(*(int *)(lVar23 + 8) * *(int *)(lVar23 + 4) * 3));
            }
            (**(code **)(lVar23 + 0x10))
                      (*(undefined8 *)(lVar23 + 0x18),*(undefined8 *)(lVar23 + 0x30));
          }
          FUN_140290ea0(LVar13 + 800);
          return 0;
        }
        *(undefined4 *)(LVar13 + 0x36c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      case (longlong *)0x68:
        LVar13 = GetWindowLongPtrW(param_1,-0x15);
        if (LVar13 == 0) {
          return 0;
        }
        if (*(longlong *)(LVar13 + 0x160) == 0) {
          return 0;
        }
        piVar1 = (int *)(LVar13 + 0x370);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          KillTimer(param_1,0x68);
        }
        InvalidateRect(param_1,(RECT *)0x0,0);
        return 0;
      case (longlong *)0x69:
        LVar13 = GetWindowLongPtrW(param_1,-0x15);
        if (LVar13 == 0) {
          return 0;
        }
        if (*(longlong **)(LVar13 + 0x160) == (longlong *)0x0) {
          return 0;
        }
        (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x98))();
        return 0;
      default:
        return 0;
      }
    }
    if (param_2 == 0x200) {
      hWnd = GetParent(param_1);
      BVar11 = PostMessageW(hWnd,0x200,(WPARAM)param_3,param_4);
      return (longlong)BVar11;
    }
    if (param_2 == 0x40a) {
      LVar13 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar13 == 0) {
        return 0;
      }
      if (*(HWND *)(LVar13 + 0x68) == (HWND)0x0) {
        return 0;
      }
      local_120 = 0;
      SendMessageTimeoutW(*(HWND *)(LVar13 + 0x68),0x40a,(ulonglong)*(uint *)(LVar13 + 0x154),0,1,0,
                          &local_120);
      if (local_120 != 1) {
        return 0;
      }
      return 1;
    }
    goto switchD_140101cbb_caseD_3;
  }
  LVar13 = GetWindowLongPtrW(param_1,-0x15);
  if ((LVar13 == 0) || (plVar2 = *(longlong **)(LVar13 + 0x160), plVar2 == (longlong *)0x0)) {
    if (param_3 == (longlong *)0x0) {
      return 0;
    }
    (**(code **)(*param_3 + 0x10))(param_3);
    return 0;
  }
  local_148[0] = 0;
  uVar14 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_3,local_148);
  fVar36 = DAT_140492974;
  iVar12 = (int)uVar14;
  if ((-1 < iVar12) ||
     ((iVar12 + 0x3ff2c930U < 0x2d &&
      ((0x100000200001U >> ((ulonglong)(iVar12 + 0x3ff2c930U) & 0x3f) & 1) != 0)))) {
    if (local_148[0] != 1) {
      return 0;
    }
    if (*(char *)(LVar13 + 8) != '\0') {
      (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x10))();
    }
    (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x38))();
    if (*(char *)(LVar13 + 9) != '\0') {
      (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x30))();
      return 0;
    }
    (**(code **)(**(longlong **)(LVar13 + 0x160) + 0x30))();
    return 0;
  }
  puVar25 = *(undefined8 **)(LVar13 + 0x228);
  uVar33 = (uVar14 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3;
  lVar20 = *(longlong *)(LVar13 + 0x238);
  uVar22 = *(ulonglong *)(LVar13 + 0x250) &
           (((uVar33 ^ iVar12 >> 8 & 0xff) * 0x100000001b3 ^ (ulonglong)(iVar12 >> 0x10 & 0xff)) *
            0x100000001b3 ^ (ulonglong)(iVar12 >> 0x18 & 0xff)) * 0x100000001b3;
  puVar16 = *(undefined8 **)(lVar20 + 8 + uVar22 * 0x10);
  if (puVar16 == puVar25) {
LAB_140102719:
    puVar16 = (undefined8 *)0x0;
  }
  else {
    iVar32 = *(int *)(puVar16 + 2);
    while (iVar12 != iVar32) {
      if (puVar16 == *(undefined8 **)(lVar20 + uVar22 * 0x10)) goto LAB_140102719;
      puVar16 = (undefined8 *)puVar16[1];
      iVar32 = *(int *)(puVar16 + 2);
    }
  }
  local_res10._3_1_ = (byte)(uVar14 >> 0x18);
  local_res10._2_1_ = (byte)(uVar14 >> 0x10);
  local_res10._1_1_ = (byte)(uVar14 >> 8);
  if ((puVar16 == (undefined8 *)0x0) || (puVar16 == puVar25)) {
    uVar22 = (((uVar33 ^ local_res10._1_1_) * 0x100000001b3 ^ (ulonglong)local_res10._2_1_) *
              0x100000001b3 ^ (ulonglong)local_res10._3_1_) * 0x100000001b3;
    uVar33 = *(ulonglong *)(LVar13 + 0x250) & uVar22;
    puVar16 = *(undefined8 **)(lVar20 + 8 + uVar33 * 0x10);
    if (puVar16 != puVar25) {
      iVar32 = *(int *)(puVar16 + 2);
      while (iVar12 != iVar32) {
        puVar25 = puVar16;
        if (puVar16 == *(undefined8 **)(lVar20 + uVar33 * 0x10)) goto LAB_140102798;
        puVar16 = (undefined8 *)puVar16[1];
        iVar32 = *(int *)(puVar16 + 2);
      }
      goto LAB_140102b14;
    }
LAB_140102798:
    if (*(longlong *)(LVar13 + 0x230) == 0xaaaaaaaaaaaaaaa) goto LAB_140103160;
    puVar16 = (undefined8 *)FUN_14028af20(0x18);
    *(int *)(puVar16 + 2) = iVar12;
    *(undefined4 *)((longlong)puVar16 + 0x14) = 0;
    fVar42 = (float)(*(longlong *)(LVar13 + 0x230) + 1);
    uVar33 = *(ulonglong *)(LVar13 + 600);
    if (*(float *)(LVar13 + 0x220) < fVar42 / (float)uVar33) {
      auVar38._0_8_ = FUN_140419fa0(fVar42 / *(float *)(LVar13 + 0x220));
      auVar38._8_8_ = extraout_XMM0_Qb;
      lVar20 = 0;
      if ((fVar36 <= (float)auVar38._0_8_) &&
         (auVar39._4_12_ = auVar38._4_12_, auVar39._0_4_ = (float)auVar38._0_8_ - fVar36,
         auVar38._0_8_ = auVar39._0_8_, auVar39._0_4_ < fVar36)) {
        lVar20 = -0x8000000000000000;
      }
      uVar15 = (longlong)(float)auVar38._0_8_ + lVar20;
      uVar17 = 8;
      if (8 < uVar15) {
        uVar17 = uVar15;
      }
      uVar15 = uVar33;
      if ((uVar33 < uVar17) && ((0x1ff < uVar33 || (uVar15 = uVar33 * 8, uVar33 * 8 < uVar17)))) {
        uVar15 = uVar17;
      }
      for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
      if ((ulonglong)(1L << ((byte)lVar20 & 0x3f)) < uVar15) goto LAB_140103117;
      plVar2 = *(longlong **)(LVar13 + 0x228);
      uVar33 = uVar15 - 1 | 1;
      lVar20 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      bVar19 = (char)lVar20 + 1;
      lVar20 = 1L << (bVar19 & 0x3f);
      FUN_14004f190(LVar13 + 0x238,2L << (bVar19 & 0x3f),plVar2);
      *(longlong *)(LVar13 + 600) = lVar20;
      *(longlong *)(LVar13 + 0x250) = lVar20 + -1;
      plVar9 = (longlong *)**(undefined8 **)(LVar13 + 0x228);
joined_r0x000140102901:
      if (plVar9 != plVar2) {
        lVar20 = *(longlong *)(LVar13 + 0x238);
        plVar3 = (longlong *)*plVar9;
        uVar33 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(LVar13 + 0x250);
        plVar4 = *(longlong **)(lVar20 + uVar33 * 0x10);
        if (plVar4 == plVar2) {
          *(longlong **)(lVar20 + uVar33 * 0x10) = plVar9;
          *(longlong **)(lVar20 + 8 + uVar33 * 0x10) = plVar9;
          plVar9 = plVar3;
        }
        else {
          plVar5 = *(longlong **)(lVar20 + 8 + uVar33 * 0x10);
          if ((int)plVar9[2] == (int)plVar5[2]) {
            plVar5 = (longlong *)*plVar5;
            if (plVar5 != plVar9) {
              plVar4 = (longlong *)plVar9[1];
              *plVar4 = (longlong)plVar3;
              puVar25 = (undefined8 *)plVar3[1];
              *puVar25 = plVar5;
              puVar34 = (undefined8 *)plVar5[1];
              *puVar34 = plVar9;
              plVar5[1] = (longlong)puVar25;
              plVar3[1] = (longlong)plVar4;
              plVar9[1] = (longlong)puVar34;
            }
            *(longlong **)(lVar20 + 8 + uVar33 * 0x10) = plVar9;
            plVar9 = plVar3;
          }
          else {
            do {
              if (plVar4 == plVar5) {
                plVar4 = (longlong *)plVar9[1];
                *plVar4 = (longlong)plVar3;
                puVar25 = (undefined8 *)plVar3[1];
                *puVar25 = plVar5;
                puVar34 = (undefined8 *)plVar5[1];
                *puVar34 = plVar9;
                plVar5[1] = (longlong)puVar25;
                plVar3[1] = (longlong)plVar4;
                plVar9[1] = (longlong)puVar34;
                *(longlong **)(lVar20 + uVar33 * 0x10) = plVar9;
                plVar9 = plVar3;
                goto joined_r0x000140102901;
              }
              plVar5 = (longlong *)plVar5[1];
            } while ((int)plVar9[2] != (int)plVar5[2]);
            lVar20 = *plVar5;
            plVar4 = (longlong *)plVar9[1];
            *plVar4 = (longlong)plVar3;
            plVar5 = (longlong *)plVar3[1];
            *plVar5 = lVar20;
            puVar25 = *(undefined8 **)(lVar20 + 8);
            *puVar25 = plVar9;
            *(longlong **)(lVar20 + 8) = plVar5;
            plVar3[1] = (longlong)plVar4;
            plVar9[1] = (longlong)puVar25;
            plVar9 = plVar3;
          }
        }
        goto joined_r0x000140102901;
      }
      local_140.left = 0;
      local_140.top = 0;
      FUN_140050350(&local_140);
      puVar25 = *(undefined8 **)(LVar13 + 0x228);
      uVar33 = uVar22 & *(ulonglong *)(LVar13 + 0x250);
      puVar34 = *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + 8 + uVar33 * 0x10);
      if (puVar34 != puVar25) {
        iVar32 = *(int *)(puVar34 + 2);
        puVar25 = puVar34;
        while (*(int *)(puVar16 + 2) != iVar32) {
          if (puVar25 == *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + uVar33 * 0x10))
          goto LAB_140102aaa;
          puVar25 = (undefined8 *)puVar25[1];
          iVar32 = *(int *)(puVar25 + 2);
        }
        puVar25 = (undefined8 *)*puVar25;
      }
    }
LAB_140102aaa:
    puVar34 = (undefined8 *)puVar25[1];
    *(longlong *)(LVar13 + 0x230) = *(longlong *)(LVar13 + 0x230) + 1;
    *puVar16 = puVar25;
    puVar16[1] = puVar34;
    *puVar34 = puVar16;
    puVar25[1] = puVar16;
    lVar20 = *(longlong *)(LVar13 + 0x238);
    uVar22 = *(ulonglong *)(LVar13 + 0x250) & uVar22;
    puVar6 = *(undefined8 **)(lVar20 + uVar22 * 0x10);
    if (puVar6 == *(undefined8 **)(LVar13 + 0x228)) {
      *(undefined8 **)(lVar20 + uVar22 * 0x10) = puVar16;
LAB_140102af8:
      *(undefined8 **)(lVar20 + 8 + uVar22 * 0x10) = puVar16;
    }
    else if (puVar6 == puVar25) {
      *(undefined8 **)(lVar20 + uVar22 * 0x10) = puVar16;
    }
    else if (*(undefined8 **)(lVar20 + 8 + uVar22 * 0x10) == puVar34) goto LAB_140102af8;
LAB_140102b14:
    *(undefined4 *)((longlong)puVar16 + 0x14) = 0;
  }
  puVar34 = (undefined8 *)
            (((((uVar14 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)local_res10._1_1_)
               * 0x100000001b3 ^ (ulonglong)local_res10._2_1_) * 0x100000001b3 ^
             (ulonglong)local_res10._3_1_) * 0x100000001b3);
  puVar25 = *(undefined8 **)(LVar13 + 0x228);
  uVar22 = (ulonglong)puVar34 & *(ulonglong *)(LVar13 + 0x250);
  puVar16 = *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + 8 + uVar22 * 0x10);
  local_140._0_8_ = puVar34;
  if (puVar16 != puVar25) {
    iVar32 = *(int *)(puVar16 + 2);
    puVar25 = puVar16;
    while (puVar16 = puVar25, iVar12 != iVar32) {
      if (puVar25 == *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + uVar22 * 0x10))
      goto LAB_140102bab;
      puVar25 = (undefined8 *)puVar25[1];
      iVar32 = *(int *)(puVar25 + 2);
    }
    goto LAB_140102f06;
  }
LAB_140102bab:
  if (*(longlong *)(LVar13 + 0x230) == 0xaaaaaaaaaaaaaaa) {
LAB_140103160:
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar16 = (undefined8 *)FUN_14028af20(0x18);
  *(int *)(puVar16 + 2) = iVar12;
  *(undefined4 *)((longlong)puVar16 + 0x14) = 0;
  fVar42 = (float)(*(longlong *)(LVar13 + 0x230) + 1);
  uVar22 = *(ulonglong *)(LVar13 + 600);
  if (*(float *)(LVar13 + 0x220) < fVar42 / (float)uVar22) {
    auVar40._0_8_ = FUN_140419fa0(fVar42 / *(float *)(LVar13 + 0x220));
    auVar40._8_8_ = extraout_XMM0_Qb_00;
    lVar20 = 0;
    if ((fVar36 <= (float)auVar40._0_8_) &&
       (auVar41._4_12_ = auVar40._4_12_, auVar41._0_4_ = (float)auVar40._0_8_ - fVar36,
       auVar40._0_8_ = auVar41._0_8_, auVar41._0_4_ < fVar36)) {
      lVar20 = -0x8000000000000000;
    }
    uVar17 = (longlong)(float)auVar40._0_8_ + lVar20;
    uVar33 = 8;
    if (8 < uVar17) {
      uVar33 = uVar17;
    }
    uVar17 = uVar22;
    if ((uVar22 < uVar33) && ((0x1ff < uVar22 || (uVar17 = uVar22 * 8, uVar22 * 8 < uVar33)))) {
      uVar17 = uVar33;
    }
    for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar20 & 0x3f)) < uVar17) {
LAB_140103117:
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar2 = *(longlong **)(LVar13 + 0x228);
    uVar22 = uVar17 - 1 | 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    bVar19 = (char)lVar20 + 1;
    lVar20 = 1L << (bVar19 & 0x3f);
    FUN_14004f190(LVar13 + 0x238,2L << (bVar19 & 0x3f),plVar2);
    *(longlong *)(LVar13 + 600) = lVar20;
    *(longlong *)(LVar13 + 0x250) = lVar20 + -1;
    plVar9 = (longlong *)**(undefined8 **)(LVar13 + 0x228);
joined_r0x000140102d12:
    if (plVar9 != plVar2) {
      lVar20 = *(longlong *)(LVar13 + 0x238);
      plVar3 = (longlong *)*plVar9;
      uVar22 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
               *(ulonglong *)(LVar13 + 0x250);
      plVar4 = *(longlong **)(lVar20 + uVar22 * 0x10);
      puVar34 = (undefined8 *)local_140._0_8_;
      if (plVar4 == plVar2) {
        *(longlong **)(lVar20 + uVar22 * 0x10) = plVar9;
        *(longlong **)(lVar20 + 8 + uVar22 * 0x10) = plVar9;
        plVar9 = plVar3;
      }
      else {
        plVar5 = *(longlong **)(lVar20 + 8 + uVar22 * 0x10);
        if ((int)plVar9[2] == (int)plVar5[2]) {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != plVar9) {
            plVar4 = (longlong *)plVar9[1];
            *plVar4 = (longlong)plVar3;
            puVar25 = (undefined8 *)plVar3[1];
            *puVar25 = plVar5;
            puVar6 = (undefined8 *)plVar5[1];
            *puVar6 = plVar9;
            plVar5[1] = (longlong)puVar25;
            plVar3[1] = (longlong)plVar4;
            plVar9[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar20 + 8 + uVar22 * 0x10) = plVar9;
          plVar9 = plVar3;
        }
        else {
          do {
            if (plVar4 == plVar5) {
              plVar4 = (longlong *)plVar9[1];
              *plVar4 = (longlong)plVar3;
              puVar25 = (undefined8 *)plVar3[1];
              *puVar25 = plVar5;
              puVar6 = (undefined8 *)plVar5[1];
              *puVar6 = plVar9;
              plVar5[1] = (longlong)puVar25;
              plVar3[1] = (longlong)plVar4;
              plVar9[1] = (longlong)puVar6;
              *(longlong **)(lVar20 + uVar22 * 0x10) = plVar9;
              plVar9 = plVar3;
              goto joined_r0x000140102d12;
            }
            plVar5 = (longlong *)plVar5[1];
          } while ((int)plVar9[2] != (int)plVar5[2]);
          lVar20 = *plVar5;
          plVar4 = (longlong *)plVar9[1];
          *plVar4 = (longlong)plVar3;
          plVar5 = (longlong *)plVar3[1];
          *plVar5 = lVar20;
          puVar25 = *(undefined8 **)(lVar20 + 8);
          *puVar25 = plVar9;
          *(longlong **)(lVar20 + 8) = plVar5;
          plVar3[1] = (longlong)plVar4;
          plVar9[1] = (longlong)puVar25;
          plVar9 = plVar3;
        }
      }
      goto joined_r0x000140102d12;
    }
    local_140._0_8_ = (undefined8 *)0x0;
    FUN_140050350(&local_140);
    uVar22 = (ulonglong)puVar34 & *(ulonglong *)(LVar13 + 0x250);
    puVar25 = *(undefined8 **)(LVar13 + 0x228);
    puVar6 = *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + 8 + uVar22 * 0x10);
    if (puVar6 != puVar25) {
      iVar12 = *(int *)(puVar6 + 2);
      puVar25 = puVar6;
      while (*(int *)(puVar16 + 2) != iVar12) {
        if (puVar25 == *(undefined8 **)(*(longlong *)(LVar13 + 0x238) + uVar22 * 0x10))
        goto LAB_140102e81;
        puVar25 = (undefined8 *)puVar25[1];
        iVar12 = *(int *)(puVar25 + 2);
      }
      puVar25 = (undefined8 *)*puVar25;
    }
  }
LAB_140102e81:
  puVar6 = (undefined8 *)puVar25[1];
  *(longlong *)(LVar13 + 0x230) = *(longlong *)(LVar13 + 0x230) + 1;
  *puVar16 = puVar25;
  puVar16[1] = puVar6;
  *puVar6 = puVar16;
  puVar25[1] = puVar16;
  lVar20 = *(longlong *)(LVar13 + 0x238);
  uVar22 = *(ulonglong *)(LVar13 + 0x250) & (ulonglong)puVar34;
  puVar34 = *(undefined8 **)(lVar20 + uVar22 * 0x10);
  if (puVar34 == *(undefined8 **)(LVar13 + 0x228)) {
    *(undefined8 **)(lVar20 + uVar22 * 0x10) = puVar16;
  }
  else {
    if (puVar34 == puVar25) {
      *(undefined8 **)(lVar20 + uVar22 * 0x10) = puVar16;
      goto LAB_140102f06;
    }
    if (*(undefined8 **)(lVar20 + 8 + uVar22 * 0x10) != puVar6) goto LAB_140102f06;
  }
  *(undefined8 **)(lVar20 + 8 + uVar22 * 0x10) = puVar16;
LAB_140102f06:
  if (9 < *(uint *)((longlong)puVar16 + 0x14)) {
    return 0;
  }
  *(uint *)((longlong)puVar16 + 0x14) = *(uint *)((longlong)puVar16 + 0x14) + 1;
  FUN_140098760("Failed handling MF video event: %x (%u)\n",uVar14 & 0xffffffff);
  if (local_148[0] != 2) {
    return 0;
  }
  FUN_140101b80(LVar13,uVar14 & 0xffffffff);
  return 0;
switchD_140102024_caseD_66:
  LVar13 = GetWindowLongPtrW(param_1,-0x15);
  if (LVar13 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)(LVar13 + 0x160);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  if (*(longlong *)(LVar13 + 0x300) == *(longlong *)(LVar13 + 0x308)) {
    return 0;
  }
  local_d0 = 0;
  local_e0 = 0;
  local_118 = LVar13;
  cVar10 = (**(code **)(*plVar2 + 0x88))(plVar2,&local_d0,&local_e0,&local_f0);
  if (cVar10 == '\0') {
    return 0;
  }
  local_140._0_8_ = LVar13 + 800;
  iVar12 = FUN_140290d80(local_140._0_8_);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(LVar13 + 0x36c) == 0x7fffffff) {
    *(undefined4 *)(LVar13 + 0x36c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  local_100._0_8_ = *(longlong *)(LVar13 + 0x308);
  lVar20 = *(longlong *)(LVar13 + 0x300);
  local_d8 = lVar20;
  if (lVar20 != local_100._0_8_) {
    do {
      local_d8 = lVar20;
      (**(code **)(lVar20 + 0x10))
                (*(undefined8 *)(lVar20 + 0x18),*(undefined8 *)(lVar20 + 0x20),
                 *(undefined4 *)(lVar20 + 4),*(undefined4 *)(lVar20 + 8));
      lVar29 = local_e0;
      lVar23 = *(longlong *)(lVar20 + 0x28);
      *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar20 + 0x20);
      *(longlong *)(lVar20 + 0x20) = lVar23;
      *(undefined4 *)(lVar20 + 0xc) = 0;
      local_108 = local_f0;
      if (local_f0 < 2) {
LAB_14010240d:
        FID_conflict__assert
                  (L"0",L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp",
                   0x56);
      }
      else {
        local_120 = CONCAT44(local_120._4_4_,local_ec);
        if (local_ec < 2) goto LAB_14010240d;
        iVar12 = *(int *)(lVar20 + 4);
        iVar32 = *(int *)(lVar20 + 8);
        local_res10 = 0;
        fVar36 = (float)iVar12;
        fVar37 = (float)local_f0;
        fVar42 = (float)local_ec;
        iVar27 = local_f0;
        iVar30 = local_ec;
        local_148[0] = iVar12;
        if (0 < iVar12) {
          do {
            iVar26 = 0;
            if (0 < iVar32) {
              local_e8 = iVar32 * iVar12 * 3;
              iVar28 = iVar27;
              do {
                iVar8 = (((iVar32 - iVar26) + -1) * iVar12 + local_res10) * 3;
                iVar12 = (int)((float)((int)((float)iVar26 * (fVar42 / (float)iVar32)) * iVar28) +
                              (float)local_res10 * (fVar37 / fVar36)) * 4;
                if (local_e8 <= iVar8) {
                  FID_conflict__assert
                            (L"writePos < (gridWidth * gridHeight * 3)",
                             L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp"
                             ,0x66);
                }
                if (iVar30 * iVar27 * 4 <= iVar12) {
                  FID_conflict__assert
                            (L"readPos < (width * height * 4)",
                             L"D:\\dev\\we\\windows\\src\\wallpaper\\src\\wallpaper\\videowallpaper.cpp"
                             ,0x67);
                }
                iVar26 = iVar26 + 1;
                *(undefined1 *)(lVar23 + iVar8) = *(undefined1 *)((longlong)iVar12 + 2 + lVar29);
                *(undefined1 *)(lVar23 + 1 + (longlong)iVar8) =
                     *(undefined1 *)((longlong)iVar12 + 1 + lVar29);
                *(undefined1 *)(lVar23 + 2 + (longlong)iVar8) = *(undefined1 *)(iVar12 + lVar29);
                iVar28 = local_108;
                iVar12 = local_148[0];
              } while (iVar26 < iVar32);
              iVar27 = local_108;
              iVar30 = (int)local_120;
            }
            local_res10 = local_res10 + 1;
            lVar20 = local_d8;
          } while (local_res10 < iVar12);
        }
      }
      lVar20 = lVar20 + 0x38;
      local_d8 = lVar20;
    } while (lVar20 != local_100._0_8_);
  }
  (**(code **)(**(longlong **)(local_118 + 0x160) + 0x90))
            (*(longlong **)(local_118 + 0x160),local_d0);
  FUN_140290ea0(local_140._0_8_);
  return 0;
}

