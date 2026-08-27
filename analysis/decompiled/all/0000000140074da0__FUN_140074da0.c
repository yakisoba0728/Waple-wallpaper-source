// Function: FUN_140074da0
// Addr: 140074da0
// Size: 2119 bytes


void FUN_140074da0(ulonglong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  size_t _Size;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  HWND hWnd;
  longlong lVar14;
  LARGE_INTEGER LVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  LARGE_INTEGER LVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  LARGE_INTEGER LVar27;
  float fVar28;
  float fVar29;
  ulonglong local_res8;
  uint local_res10;
  LARGE_INTEGER local_res18;
  int local_res20 [2];
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER LStack_130;
  int local_128;
  int local_124;
  float local_120;
  longlong local_118;
  tagMSG local_110;
  longlong *local_e0;
  LARGE_INTEGER local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  tagMSG local_b8 [2];
  
  if ((DAT_1404e52e4 & 0x100000) != 0) {
    local_res8 = param_1;
    hWnd = (HWND)FUN_14003cb80();
    BVar8 = IsWindow(hWnd);
    puVar7 = DAT_1404e6d48;
    if (BVar8 != 0) {
      if (DAT_1404e8d20 != 0) {
        for (puVar3 = (undefined8 *)*DAT_1404e6d48; puVar3 != puVar7; puVar3 = (undefined8 *)*puVar3
            ) {
          local_res8 = puVar3[2];
          (*DAT_1404e8d40)(&local_res8);
        }
        FUN_140077f50();
      }
      LVar23 = DAT_1404e5370;
      plVar20 = DAT_1404e5330;
      fVar6 = DAT_140492800;
      fVar5 = DAT_140492654;
      plVar21 = *(longlong **)DAT_1404e5370;
      if (DAT_1404e52e0 == 2) {
        local_res10 = 0;
        iVar26 = 0;
        local_res8 = local_res8 & 0xffffffff00000000;
        iVar13 = 0;
        plVar21 = (longlong *)0x0;
        plVar19 = (longlong *)*DAT_1404e5330;
        if (plVar19 != DAT_1404e5330) {
          do {
            plVar17 = plVar19 + 2;
            plVar18 = plVar17;
            if (0xf < (ulonglong)plVar19[5]) {
              plVar18 = (longlong *)*plVar17;
            }
            uVar16 = 0;
            uVar25 = 0xcbf29ce484222325;
            if (plVar19[4] != 0) {
              do {
                pbVar1 = (byte *)(uVar16 + (longlong)plVar18);
                uVar16 = uVar16 + 1;
                uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
              } while (uVar16 < (ulonglong)plVar19[4]);
            }
            lVar14 = FUN_1400110a0(&DAT_1404e5368,local_c8,plVar17,uVar25);
            fVar6 = DAT_140492800;
            fVar5 = DAT_140492654;
            LVar15 = LVar23;
            if ((longlong *)((LARGE_INTEGER *)(lVar14 + 8))->QuadPart != (longlong *)0x0) {
              LVar15.QuadPart = ((LARGE_INTEGER *)(lVar14 + 8))->QuadPart;
            }
            if ((LVar15.QuadPart != LVar23.QuadPart) &&
               ((*(byte *)(LVar15.QuadPart + 0x53) & 1) == 0)) {
              local_res10 = *(int *)(LVar15.QuadPart + 0x5c);
              iVar26 = *(int *)(LVar15.QuadPart + 0x58);
              iVar13 = *(int *)(LVar15.QuadPart + 0x60);
              plVar21 = (longlong *)plVar19[6];
              local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(LVar15.QuadPart + 100));
            }
            plVar19 = (longlong *)*plVar19;
          } while (plVar19 != plVar20);
          plVar20 = *(longlong **)LVar23;
          if ((plVar21 != (longlong *)0x0) && (uVar22 = iVar13 - iVar26, 0 < (int)uVar22)) {
            iVar10 = (int)local_res8;
            uVar24 = (int)local_res8 - local_res10;
            if ((0 < (int)uVar24) && (plVar20 != (longlong *)LVar23.QuadPart)) {
              local_res8._0_1_ = '\x01';
              iVar10 = local_res10 + iVar10;
              local_res10 = uVar24;
              do {
                if ((*(byte *)((longlong)plVar20 + 0x53) & 1) != 0) {
                  if ((char)local_res8 != '\0') {
                    (**(code **)(*plVar21 + 0x70))(plVar21);
                    local_res8._0_1_ = '\0';
                  }
                  local_138 = *(LARGE_INTEGER *)(plVar20 + 0xb);
                  LStack_130 = *(LARGE_INTEGER *)(plVar20 + 0xc);
                  if (DAT_1404e52a0 != (HWND)0x0) {
                    bVar2 = *(byte *)((longlong)plVar20 + 0x53);
                    local_118 = 0;
                    local_128 = (iVar26 + iVar13) / 2;
                    local_124 = iVar10 / 2;
                    uVar24 = uVar22;
                    if ((int)local_res10 < (int)uVar22) {
                      uVar24 = local_res10;
                    }
                    local_120 = (float)(uVar24 >> 2);
                    QueryPerformanceFrequency(&local_140);
                    QueryPerformanceCounter(&local_148);
                    fVar29 = 0.0;
                    do {
                      if (local_118 != 0) goto LAB_140075196;
                      QueryPerformanceCounter(&local_res18);
                      LVar15.s.HighPart = local_res18.s.HighPart;
                      LVar15.s.LowPart = local_res18.s.LowPart;
                      fVar28 = (float)(LVar15.QuadPart - (longlong)local_148) /
                               (float)local_140.QuadPart;
                      if (fVar5 <= fVar28) {
                        fVar28 = fVar5;
                      }
                      local_148 = LVar15;
                      local_118 = (**(code **)(*plVar21 + 0x68))(plVar21);
                      if (local_118 != 0) break;
                      fVar29 = fVar29 + fVar28;
                      EnumChildWindows(DAT_1404e52a0,FUN_140062ed0,(LPARAM)&local_128);
                      if (local_118 == 0) {
                        local_110.hwnd = (HWND)0x0;
                        local_110.message = 0;
                        local_110._12_4_ = 0;
                        local_110.wParam = 0;
                        local_110.lParam = 0;
                        local_110.time = 0;
                        local_110.pt.x = 0;
                        local_110.pt.y = 0;
                        local_110._44_4_ = 0;
                        iVar9 = PeekMessageW(&local_110,(HWND)0x0,0,0,0x400003);
                        while (iVar9 != 0) {
                          TranslateMessage(&local_110);
                          DispatchMessageW(&local_110);
                          iVar9 = PeekMessageW(&local_110,(HWND)0x0,0,0,0x400003);
                        }
                      }
                      Sleep(1);
                    } while (fVar29 < fVar6);
                    if (local_118 == 0) {
                      BVar8 = IsDebuggerPresent();
                      if (BVar8 != 0) {
                        DebugBreak();
                      }
                    }
                    else {
LAB_140075196:
                      iVar9 = (*DAT_1404e8d38)(DAT_1404e52a0,local_118,&local_138,bVar2 >> 2 & 1,
                                               local_res20);
                      if (-1 < iVar9) {
                        FUN_140078250(&DAT_1404e6d40,local_c8,local_res20);
                      }
                    }
                  }
                }
                plVar20 = (longlong *)*plVar20;
              } while (plVar20 != (longlong *)LVar23.QuadPart);
            }
          }
        }
      }
      else {
        local_148.s = DAT_1404e5370.s;
        LVar15 = DAT_1404e5370;
        if (plVar21 != (longlong *)DAT_1404e5370.QuadPart) {
          do {
            LVar27 = LVar15;
            if (((((*(byte *)((longlong)plVar21 + 0x53) & 2) != 0) &&
                 (*(int *)((longlong)plVar21 + 0x54) == 2)) &&
                (FUN_140030de0(&DAT_1404e5328,&local_e0,plVar21 + 2), local_e0 != DAT_1404e5330)) &&
               ((plVar20 = (longlong *)local_e0[6], plVar20 != (longlong *)0x0 &&
                (plVar19 = *(longlong **)LVar15, plVar19 != (longlong *)LVar15.QuadPart)))) {
              local_res18.s.LowPart = *(undefined4 *)(plVar21 + 0xb);
              bVar4 = true;
              iVar13 = (int)plVar21[0xc];
              local_res20[0] = *(int *)((longlong)plVar21 + 0x5c);
              local_res10 = *(int *)((longlong)plVar21 + 100);
              iVar26 = iVar13 + local_res18.s.LowPart;
              iVar10 = local_res10 + local_res20[0];
              local_res8 = CONCAT44(local_res8._4_4_,iVar13);
              iVar9 = local_res10 - local_res20[0];
              iVar11 = iVar13 - local_res18.s.LowPart;
              do {
                plVar17 = plVar19 + 2;
                if ((ulonglong)plVar21[5] < 0x10) {
                  plVar18 = plVar21 + 2;
                }
                else {
                  plVar18 = (longlong *)plVar21[2];
                }
                _Size = plVar19[4];
                if (0xf < (ulonglong)plVar19[5]) {
                  plVar17 = (longlong *)*plVar17;
                }
                if (((_Size != plVar21[4]) ||
                    ((_Size != 0 && (iVar12 = memcmp(plVar17,plVar18,_Size), iVar12 != 0)))) &&
                   (((char)plVar19[10] == (char)plVar21[10] &&
                    ((*(byte *)((longlong)plVar19 + 0x53) & 1) != 0)))) {
                  local_c8 = *(undefined1 (*) [16])(plVar19 + 0xb);
                  if ((((local_c8._0_4_ != local_res18.s.LowPart) || (local_c8._8_4_ != iVar13)) ||
                      (local_c8._4_4_ != local_res20[0])) || (local_c8._12_4_ != local_res10)) {
                    if (bVar4) {
                      (**(code **)(*plVar20 + 0x70))(plVar20);
                      bVar4 = false;
                    }
                    if (DAT_1404e52a0 != (HWND)0x0) {
                      bVar2 = *(byte *)((longlong)plVar19 + 0x53);
                      local_110.wParam = 0;
                      local_110.hwnd = (HWND)CONCAT44(iVar10 / 2,iVar26 / 2);
                      iVar13 = iVar11;
                      if (iVar9 < iVar11) {
                        iVar13 = iVar9;
                      }
                      local_110.message = (UINT)(float)((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2);
                      QueryPerformanceFrequency(&LStack_130);
                      QueryPerformanceCounter(&local_138);
                      fVar29 = 0.0;
                      do {
                        if (local_110.wParam != 0) goto LAB_140075502;
                        QueryPerformanceCounter(&local_d8);
                        lVar14 = local_d8.QuadPart - (longlong)local_138;
                        local_138.s = local_d8.s;
                        fVar28 = (float)lVar14 / (float)LStack_130.QuadPart;
                        if (fVar5 <= fVar28) {
                          fVar28 = fVar5;
                        }
                        local_110.wParam = (**(code **)(*plVar20 + 0x68))(plVar20);
                        if (local_110.wParam != 0) break;
                        fVar29 = fVar29 + fVar28;
                        EnumChildWindows(DAT_1404e52a0,FUN_140062ed0,(LPARAM)&local_110);
                        if (local_110.wParam == 0) {
                          local_b8[0].hwnd = (HWND)0x0;
                          local_b8[0].message = 0;
                          local_b8[0]._12_4_ = 0;
                          local_b8[0].wParam = 0;
                          local_b8[0].lParam = 0;
                          local_b8[0].time = 0;
                          local_b8[0].pt.x = 0;
                          local_b8[0].pt.y = 0;
                          local_b8[0]._44_4_ = 0;
                          iVar13 = PeekMessageW(local_b8,(HWND)0x0,0,0,0x400003);
                          while (iVar13 != 0) {
                            TranslateMessage(local_b8);
                            DispatchMessageW(local_b8);
                            iVar13 = PeekMessageW(local_b8,(HWND)0x0,0,0,0x400003);
                          }
                        }
                        Sleep(1);
                      } while (fVar29 < fVar6);
                      if (local_110.wParam == 0) {
                        BVar8 = IsDebuggerPresent();
                        if (BVar8 != 0) {
                          DebugBreak();
                        }
                      }
                      else {
LAB_140075502:
                        iVar13 = (*DAT_1404e8d38)(DAT_1404e52a0,local_110.wParam,local_c8,
                                                  bVar2 >> 2 & 1,local_d0);
                        if (-1 < iVar13) {
                          FUN_140078250(&DAT_1404e6d40,&local_128,local_d0);
                        }
                      }
                      iVar13 = (int)local_res8;
                    }
                  }
                }
                plVar19 = (longlong *)*plVar19;
                LVar23 = local_148;
                LVar27 = DAT_1404e5370;
              } while (plVar19 != (longlong *)LVar15.QuadPart);
            }
            plVar21 = (longlong *)*plVar21;
            LVar15 = LVar27;
          } while (plVar21 != (longlong *)LVar23.QuadPart);
        }
      }
    }
  }
  return;
}

