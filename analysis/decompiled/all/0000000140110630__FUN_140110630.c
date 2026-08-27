// Function: FUN_140110630
// Addr: 140110630
// Size: 13706 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140110630(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  HINSTANCE__ HVar5;
  float fVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  ushort uVar22;
  BOOL BVar23;
  DWORD idAttach;
  int iVar24;
  HMODULE pHVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  HWND pHVar30;
  ulonglong *puVar31;
  undefined8 *puVar32;
  float *pfVar33;
  ulonglong uVar34;
  byte bVar35;
  uint uVar36;
  DWORD DVar37;
  undefined8 *puVar38;
  longlong *plVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  char *pcVar43;
  bool bVar44;
  int iVar45;
  longlong *plVar46;
  longlong *plVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  LARGE_INTEGER LVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar90;
  float fVar92;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar94;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar93;
  undefined1 auVar89 [16];
  float fVar95;
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  LARGE_INTEGER local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  longlong local_res20;
  undefined8 in_stack_fffffffffffffbc8;
  undefined4 uVar100;
  char *pcVar99;
  ulonglong in_stack_fffffffffffffbd0;
  undefined4 uVar101;
  HWND in_stack_fffffffffffffbe8;
  HWND hWnd;
  undefined4 uVar102;
  ulonglong in_stack_fffffffffffffbf0;
  uint local_3e4;
  undefined1 local_3d8 [8];
  undefined8 uStack_3d0;
  float local_3c8 [2];
  undefined8 uStack_3c0;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 local_388;
  uint7 uStack_387;
  LARGE_INTEGER local_378 [2];
  undefined1 local_368 [4];
  float fStack_364;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_310;
  float local_30c;
  tagPOINT local_308;
  longlong local_300;
  tagRECT local_2f8;
  undefined4 local_2e8;
  undefined1 uStack_2e4;
  undefined1 uStack_2e3;
  undefined2 uStack_2e2;
  byte local_2dc [4];
  float local_2d8;
  float local_2c8;
  float local_2c0;
  float local_2b8;
  float local_2a8;
  longlong *local_298;
  LARGE_INTEGER local_290;
  _SYSTEMTIME local_288;
  undefined8 local_278;
  tagMSG local_270;
  undefined1 local_238 [3] [16];
  undefined1 local_208 [2] [16];
  undefined1 local_1e8 [8];
  float afStack_1e0 [2];
  undefined1 local_1d8 [8];
  float afStack_1d0 [2];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  QueryPerformanceCounter(&local_res8);
  FUN_1402c97cc(local_res8.QuadPart & 0xffffffff);
  hWnd = *(HWND *)(param_1 + 0x60);
  BVar23 = IsWindow(hWnd);
  uVar100 = (undefined4)((ulonglong)in_stack_fffffffffffffbc8 >> 0x20);
  uVar101 = (undefined4)(in_stack_fffffffffffffbd0 >> 0x20);
  if (BVar23 == 0) {
    pHVar30 = (HWND)0x0;
    hWnd = in_stack_fffffffffffffbe8;
  }
  else {
    FUN_140015140(&DAT_1404dfa00);
    if (DAT_1404e8fb4 == 0) {
      local_3d8._4_4_ = 0;
      uStack_3d0._0_4_ = 0.0;
      uStack_3d0._4_4_ = 0.0;
      local_3d8._0_4_ = 1.12104e-43;
      local_3c8[0] = 0.0;
      local_3c8[1] = 0.0;
      uStack_3c0._0_4_ = 0.0;
      uStack_3c0._4_4_ = 0.0;
      local_3b8 = 0.0;
      fStack_3b4 = 0.0;
      fStack_3b0 = 0.0;
      fStack_3ac = 0.0;
      local_3a8 = 0.0;
      fStack_3a4 = 0.0;
      fStack_3a0 = 0.0;
      fStack_39c = 0.0;
      local_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      pHVar25 = GetModuleHandleW((LPCWSTR)0x0);
      local_3a8 = 1.4013e-45;
      fStack_3a4 = 0.0;
      uStack_3c0._0_4_ = SUB84(pHVar25,0);
      uStack_3c0._4_4_ = (float)((ulonglong)pHVar25 >> 0x20);
      uStack_3d0._0_4_ = 2.2712135;
      uStack_3d0._4_4_ = 1.4013e-45;
      local_398 = 0x40477f98;
      uStack_394 = 1;
      local_3d8._4_4_ = 1.79366e-43;
      DAT_1404e8fb4 = RegisterClassExW((WNDCLASSEXW *)local_3d8);
    }
    uVar22 = DAT_1404e8fb4;
    FUN_140290ea0(&DAT_1404dfa00);
    FUN_1400fdcc0(param_1,&local_2f8);
    pHVar25 = GetModuleHandleW((LPCWSTR)0x0);
    in_stack_fffffffffffffbf0 = 0;
    in_stack_fffffffffffffbd0 = CONCAT44(uVar101,local_2f8.top);
    in_stack_fffffffffffffbc8 = CONCAT44(uVar100,local_2f8.left);
    pHVar30 = CreateWindowExW(0x8280000,(LPCWSTR)(ulonglong)uVar22,L"WPELiveWallpaper",0x40000000,
                              local_2f8.left,local_2f8.top,local_2f8.right - local_2f8.left,
                              local_2f8.bottom - local_2f8.top,hWnd,(HMENU)0x0,pHVar25,(LPVOID)0x0);
    GetLastError();
    SetLayeredWindowAttributes(pHVar30,0,0xff,2);
    BVar23 = IsWindow(pHVar30);
    if (BVar23 != 0) {
      DVar37 = GetWindowThreadProcessId(*(HWND *)(param_1 + 0x60),(LPDWORD)0x0);
      idAttach = GetWindowThreadProcessId(pHVar30,(LPDWORD)0x0);
      AttachThreadInput(idAttach,DVar37,0);
      SetPropW(pHVar30,L"WallpaperEngineWallpaper",(HANDLE)0x1);
      SetWindowLongPtrW(pHVar30,-0x15,param_1);
      FUN_1400fde30(pHVar30);
      ShowWindow(pHVar30,4);
      if ((*(byte *)(param_1 + 0xa6) & 8) != 0) {
        ShowCursor(0);
      }
    }
  }
  uVar34 = 0;
  *(HWND *)(param_1 + 0x1c8) = pHVar30;
  BVar23 = IsWindow(pHVar30);
  if (BVar23 == 0) {
    return;
  }
  iVar45 = 0x14;
  puVar28 = (undefined8 *)(param_1 + 0x1e8);
  *puVar28 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  uVar27 = (ulonglong)*(uint *)(param_1 + 0x240);
  if ((*(uint *)(param_1 + 0x1b8) & 0x100) == 0) {
    uVar27 = uVar34;
  }
  local_398 = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  uStack_394 = 0x3f800000;
  uStack_390 = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  uStack_38c = 0x2c688;
  local_388 = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  local_res10 = (longlong *)
                CONCAT44(CONCAT22(local_res10._6_2_,*(undefined2 *)(param_1 + 0x244)),(int)uVar27);
  *(undefined8 *)(param_1 + 0x228) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x230) = 0x2c68800000000;
  local_res8.s.LowPart = 99;
  *(ulonglong *)(param_1 + 0x238) = (ulonglong)uStack_387 << 8;
  FUN_140113bc0(local_368);
  uStack_360 = *(undefined8 *)(param_1 + 0x70);
  _local_368 = (HWND)*(undefined8 *)(param_1 + 0x1c8);
  uVar36 = *(uint *)(param_1 + 0x248);
  local_358 = CONCAT35(local_358._5_3_,
                       CONCAT14((char)(uVar36 >> 0xd),*(undefined4 *)(param_1 + 0xa0))) &
              0xffffff01ffffffff;
  if ((uVar36 >> 0xd & 1) != 0) {
    local_358._0_6_ = CONCAT15(1,(uint5)local_358);
    if ((uVar36 >> 0xe & 1) != 0) goto LAB_14011091a;
  }
  local_358._0_6_ = (uint6)(uint5)local_358;
LAB_14011091a:
  local_358 = CONCAT17(local_358._7_1_,CONCAT16((char)(uVar36 >> 0xf),(uint6)local_358)) &
              0xff01ffffffffffff;
  iVar24 = FUN_14012ac60(local_368,&local_res10,puVar28,&local_res8);
  uVar100 = (undefined4)((ulonglong)in_stack_fffffffffffffbc8 >> 0x20);
  uVar27 = local_358;
  while (local_358 = uVar27, iVar24 < 0) {
    pHVar30 = _local_368;
    BVar23 = IsWindow(_local_368);
    if ((BVar23 == 0) || ((iVar45 < 0x11 && (BVar23 = IsWindowVisible(pHVar30), BVar23 == 0)))) {
      FUN_140098760("Scene parent window lost.\n");
      goto LAB_140113b81;
    }
    uVar100 = (undefined4)((ulonglong)in_stack_fffffffffffffbc8 >> 0x20);
    if (iVar45 < 1) {
      FUN_140016730(local_238);
      FUN_140014fa0(iVar24,local_238);
      FUN_14000df80(local_1e8);
      uVar26 = FUN_140097640(&DAT_1404e6d80,local_208,"core_msgbox_scene_dx10_err");
      uVar26 = FUN_14000d440(local_1d8,uVar26);
      uVar26 = FUN_1400300a0(uVar26,&DAT_140474c1c);
      uVar26 = FUN_14000d440(uVar26,local_238);
      uVar26 = FUN_1400300a0(uVar26,L" (hr: ");
      uVar26 = FUN_14000ec10(uVar26,&LAB_140015120);
      uVar26 = FUN_14000ea80(uVar26,iVar24);
      uVar26 = FUN_1400300a0(uVar26,L", code: ");
      uVar26 = FUN_14000ec10(uVar26,&LAB_140118860);
      uVar26 = FUN_14000e8f0(uVar26,local_res8.QuadPart & 0xffffffff);
      uVar26 = FUN_1400300a0(uVar26,L", iswnd: ");
      BVar23 = IsWindow(pHVar30);
      uVar26 = FUN_14000ea80(uVar26,BVar23);
      uVar26 = FUN_1400300a0(uVar26,L", hdr: ");
      uVar26 = FUN_140116bd0(uVar26,local_358._4_1_);
      FUN_1400300a0(uVar26,&DAT_140489208);
      FUN_140016770(local_208);
      uVar26 = FUN_140005c70(local_238);
      uVar29 = FUN_14000dee0(local_1e8,local_208);
      uVar29 = FUN_140005790(local_368,uVar29);
      uVar29 = FUN_140017110(uVar29);
      FUN_1400986c0(uVar29,uVar26);
      FUN_140017240(local_368);
      FUN_140016770(local_208);
      FUN_140005b50(local_1e8);
      FUN_140016770(local_238);
      uVar27 = uVar34;
      goto LAB_140110a06;
    }
    iVar45 = iVar45 + -1;
    FUN_140098760("DXGI Init failed, retrying: %i\n",iVar45);
    Sleep(1000);
    iVar24 = FUN_14012ac60(local_368,&local_res10,puVar28,&local_res8);
    uVar100 = (undefined4)((ulonglong)in_stack_fffffffffffffbc8 >> 0x20);
    uVar27 = local_358;
  }
  if (((*(uint *)(param_1 + 0x248) >> 0xe & 1) != 0) &&
     (local_358._5_1_ = (char)(uVar27 >> 0x28), local_358._5_1_ == '\0')) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xbfffffff;
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) & 0xffffbfff;
  }
  uVar26 = FUN_14028af20(0x158);
  uVar27 = FUN_140098ea0(uVar26,puVar28);
  *(ulonglong *)(param_1 + 0x1c0) = uVar27;
LAB_140110a06:
  GetClientRect(*(HWND *)(param_1 + 0x1c8),&local_2f8);
  uVar36 = 0x100d;
  if (local_res10._0_4_ != 0) {
    uVar36 = 0x100f;
  }
  uStack_3d0 = (WNDPROC)(param_1 + 0x250);
  local_3b8 = (float)(uVar36 | *(uint *)(param_1 + 0x248));
  local_3c8[0] = (float)*(undefined8 *)(param_1 + 0x98);
  local_3c8[1] = (float)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  uStack_3c0 = (HINSTANCE)&local_res10;
  *(short *)(param_1 + 0x24c) = (short)(local_2f8.right - local_2f8.left);
  *(short *)(param_1 + 0x24e) = (short)(local_2f8.bottom - local_2f8.top);
  local_3d8._0_4_ = (undefined4)uVar27;
  local_3d8._4_4_ = (undefined4)(uVar27 >> 0x20);
  puVar28 = (undefined8 *)FUN_14028af20(0x31f0);
  *puVar28 = 0;
  FUN_14017c6d0(puVar28 + 2,local_3d8);
  puVar28[0x612] = 0;
  puVar28[0x613] = 0;
  puVar28[0x614] = 0;
  puVar28[0x615] = 0;
  puVar28[0x616] = 0;
  puVar28[0x617] = 0;
  puVar28[0x618] = 0;
  puVar28[0x619] = 0;
  puVar28[0x61a] = 0;
  puVar28[0x61b] = 0;
  puVar28[0x61c] = 0;
  puVar28[0x61d] = 0;
  puVar28[0x61e] = 0;
  puVar28[0x61f] = 0;
  puVar28[0x620] = 0;
  puVar28[0x621] = 0;
  FUN_140124660(puVar28 + 0x622);
  fVar97 = DAT_140492704;
  fVar95 = DAT_1404926c0;
  pcVar99 = (char *)CONCAT44(uVar100,DAT_1404926c0);
  puVar28[0x62a] = 0;
  puVar28[0x62b] = 0;
  puVar28[0x62c] = 0;
  puVar28[0x62d] = 0;
  puVar28[0x62e] = 0;
  puVar28[0x62f] = 0;
  puVar28[0x630] = 0;
  puVar28[0x631] = 0;
  puVar28[0x632] = 0;
  puVar28[0x633] = 0;
  puVar28[0x634] = 0;
  puVar28[0x635] = 0;
  puVar28[0x636] = 0;
  *(undefined4 *)(puVar28 + 0x637) = 0;
  FUN_14005f580((longlong)puVar28 + 0x31bc);
  *(undefined4 *)((longlong)puVar28 + 0x31cc) = 0;
  puVar28[0x63a] = 0;
  puVar28[0x63b] = 0;
  puVar28[0x63c] = 0;
  *(undefined4 *)(puVar28 + 0x63d) = 0;
  (**(code **)(*(longlong *)CONCAT44(local_3d8._4_4_,local_3d8._0_4_) + 8))
            ((longlong *)CONCAT44(local_3d8._4_4_,local_3d8._0_4_),puVar28 + 2);
  FUN_1401b02c0(puVar28 + 0x316,puVar28 + 2);
  FUN_14017eae0(puVar28);
  FUN_14017f1b0(puVar28,local_2f8.right - local_2f8.left,local_2f8.bottom - local_2f8.top);
  *(undefined8 **)(param_1 + 0x180) = puVar28;
  uVar26 = FUN_140017110(param_1 + 0x100);
  FUN_140113c80(param_1,uVar26);
  local_378[0].QuadPart = 0;
  local_270.hwnd = (HWND)0x0;
  local_270.message = 0;
  local_270._12_4_ = 0;
  local_270.wParam = 0;
  local_270.lParam = 0;
  local_270.time = 0;
  local_270.pt.x = 0;
  local_270.pt.y = 0;
  local_270._44_4_ = 0;
  FUN_1400604d0((LARGE_INTEGER *)(param_1 + 0x160));
  local_300 = *(longlong *)(param_1 + 0x168);
  local_290 = *(LARGE_INTEGER *)(param_1 + 0x160);
  local_3e4 = 0;
  fVar69 = DAT_1404925fc;
  fVar70 = DAT_140492608;
  fVar68 = DAT_14049263c;
  fVar91 = DAT_14049268c;
  uVar36 = _DAT_140492fc0;
LAB_140110cde:
  fVar93 = 0.0;
LAB_140110ce5:
  do {
    pcVar99 = (char *)CONCAT44((int)((ulonglong)pcVar99 >> 0x20),1);
    iVar45 = PeekMessageW(&local_270,(HWND)0x0,0,0,1);
    while (iVar45 != 0) {
      uVar100 = (undefined4)((ulonglong)pcVar99 >> 0x20);
      if (local_270.message == 0x12) goto LAB_1401136f2;
      TranslateMessage(&local_270);
      DispatchMessageW(&local_270);
      pcVar99 = (char *)CONCAT44(uVar100,1);
      iVar45 = PeekMessageW(&local_270,(HWND)0x0,0,0,1);
    }
  } while (*(longlong *)(param_1 + 0x180) == 0);
  if ((*(uint *)(param_1 + 0x1b8) & 2) != 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
    FUN_140098760("DXGI begin recovery.\n");
    FUN_14017f080(*(undefined8 *)(param_1 + 0x180));
    FUN_140099310(*(undefined8 *)(param_1 + 0x1c0));
    FUN_14012b820(param_1 + 0x1e8);
    local_3d8._0_4_ = 0.0;
    local_3d8._4_4_ = 0.0;
    uStack_3d0._0_4_ = 0.0;
    uStack_3d0._4_4_ = 0.0;
    local_3c8[0] = 0.0;
    local_3c8[1] = 0.0;
    uStack_3c0._0_4_ = 0.0;
    uStack_3c0._4_4_ = 0.0;
    local_3b8 = 0.0;
    fStack_3b4 = 0.0;
    fStack_3b0 = 0.0;
    fStack_3ac = 0.0;
LAB_140110db0:
    do {
      pcVar99 = (char *)CONCAT44((int)((ulonglong)pcVar99 >> 0x20),1);
      iVar45 = PeekMessageW((LPMSG)local_3d8,(HWND)0x0,0,0,1);
      while (iVar45 != 0) {
        uVar100 = (undefined4)((ulonglong)pcVar99 >> 0x20);
        if ((float)uStack_3d0 == 2.52234e-44) {
          FUN_140098760("DXGI finish recovery: %d.\n",0);
          goto LAB_1401136f2;
        }
        TranslateMessage((MSG *)local_3d8);
        DispatchMessageW((MSG *)local_3d8);
        pcVar99 = (char *)CONCAT44(uVar100,1);
        iVar45 = PeekMessageW((LPMSG)local_3d8,(HWND)0x0,0,0,1);
      }
      Sleep(0x32);
      BVar23 = IsWindow(*(HWND *)(param_1 + 0x1c8));
    } while (BVar23 == 0);
    uStack_2e4 = *(undefined1 *)(param_1 + 0x244);
    uVar40 = *(uint *)(param_1 + 0x248);
    uStack_2e3 = *(undefined1 *)(param_1 + 0x245);
    uVar27 = (ulonglong)*(uint *)(param_1 + 0x240);
    if ((*(uint *)(param_1 + 0x1b8) >> 8 & 1) == 0) {
      uVar27 = uVar34;
    }
    local_2e8 = (undefined4)uVar27;
    uStack_360 = *(undefined8 *)(param_1 + 0x70);
    _local_368 = (HWND)*(undefined8 *)(param_1 + 0x1c8);
    local_358 = CONCAT35(0x10000,CONCAT14((char)(uVar40 >> 0xd),*(undefined4 *)(param_1 + 0xa0))) &
                0xffffff01ffffffff;
    if ((uVar40 >> 0xd & 1) == 0) {
LAB_140110e97:
      local_358._0_6_ = (uint6)(uint5)local_358;
    }
    else {
      local_358._0_6_ = CONCAT15(1,(uint5)local_358);
      if ((uVar40 >> 0xe & 1) == 0) goto LAB_140110e97;
    }
    local_358 = CONCAT17(local_358._7_1_,CONCAT16((char)(uVar40 >> 0xf),(uint6)local_358)) &
                0xff01ffffffffffff;
    iVar45 = FUN_14012ac60(local_368,&local_2e8);
    if (iVar45 < 0) {
      FUN_140098760("DXGI failed init: %x at %u.\n");
      Sleep(500);
      goto LAB_140110db0;
    }
    uVar27 = *(longlong *)(param_1 + 0x180) + 0x10;
    *(ulonglong *)(*(longlong *)(param_1 + 0x180) + 0x1b8) =
         CONCAT26(uStack_2e2,CONCAT15(uStack_2e3,CONCAT14(uStack_2e4,local_2e8)));
    (**(code **)(**(longlong **)(param_1 + 0x1c0) + 8))();
    lVar48 = *(longlong *)(param_1 + 0x1c0);
    uVar7 = *(undefined2 *)(param_1 + 0x24e);
    uVar8 = *(undefined2 *)(param_1 + 0x24c);
    *(undefined4 *)(lVar48 + 0x2c) = 0;
    if (*(longlong **)(lVar48 + 0x130) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar48 + 0x130) + 0x10))();
      *(undefined8 *)(lVar48 + 0x130) = 0;
    }
    if (*(longlong **)(lVar48 + 0x138) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar48 + 0x138) + 0x10))();
      *(undefined8 *)(lVar48 + 0x138) = 0;
    }
    puVar28 = *(undefined8 **)(*(longlong *)(lVar48 + 0x70) + 0x20);
    if (puVar28 != (undefined8 *)0x0) {
      (**(code **)*puVar28)();
    }
    uVar100 = (undefined4)(in_stack_fffffffffffffbd0 >> 0x20);
    *(undefined8 *)(*(longlong *)(lVar48 + 0x70) + 0x20) = 0;
    if (*(longlong *)(*(longlong *)(lVar48 + 0x70) + 0x10) != 0) {
      _local_368 = ZEXT816(0);
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      (**(code **)(**(longlong **)(*(longlong *)(lVar48 + 0x70) + 0x10) + 0x90))();
      plVar47 = *(longlong **)(*(longlong *)(lVar48 + 0x70) + 0x10);
      in_stack_fffffffffffffbd0 = CONCAT44(uVar100,uStack_340._4_4_);
      pcVar99 = (char *)((ulonglong)pcVar99 & 0xffffffff00000000);
      iVar45 = (**(code **)(*plVar47 + 0x68))
                         (plVar47,0,uVar8,uVar7,pcVar99,in_stack_fffffffffffffbd0);
      if ((iVar45 + 0x7785fffbU & 0xfffffffd) != 0) {
        *(undefined8 *)(lVar48 + 0xb8) = 0;
        *(undefined8 *)(lVar48 + 0xe0) = 0;
        *(undefined8 *)(lVar48 + 0x128) = 0;
        if (-1 < iVar45) {
          FUN_140098d40(*(undefined8 *)(lVar48 + 0x70),&local_298,&local_278);
          plVar47 = *(longlong **)(*(longlong *)(lVar48 + 0x70) + 0x10);
          (**(code **)(*plVar47 + 0x90))(plVar47,local_238);
          uVar26 = FUN_14028af20(0xa0);
          in_stack_fffffffffffffbf0 = in_stack_fffffffffffffbf0 & 0xffffffff00000000;
          hWnd = (HWND)((ulonglong)hWnd & 0xffffffff00000000);
          pcVar99 = (char *)0x0;
          uVar26 = FUN_1400d2c60(uVar26,local_238[0]._0_4_,local_238[0]._4_4_,1,0,uVar27,0x1b,0x18,
                                 hWnd,in_stack_fffffffffffffbf0,*(undefined8 *)(lVar48 + 0x70),
                                 local_298,local_278);
          *(undefined8 *)(*(longlong *)(lVar48 + 0x70) + 0x20) = uVar26;
          (**(code **)(**(longlong **)(*(longlong *)(lVar48 + 0x70) + 0x20) + 0x48))();
          in_stack_fffffffffffffbd0 = uVar27;
        }
        lVar48 = *(longlong *)(*(longlong *)(lVar48 + 0x70) + 0x20);
        if ((lVar48 == 0) || (*(longlong *)(lVar48 + 0x48) == 0)) {
          bVar44 = false;
        }
        else {
          bVar44 = true;
        }
        if (bVar44) goto code_r0x000140111276;
      }
    }
    FUN_140099310(*(undefined8 *)(param_1 + 0x1c0));
    FUN_14012b820(param_1 + 0x1e8);
    Sleep(500);
    goto LAB_140110db0;
  }
  goto LAB_140111310;
LAB_1401139e2:
  do {
    uVar34 = FUN_140032520(uVar26,plVar46 + 2);
    uVar34 = *(ulonglong *)(param_1 + 0x2b8) & uVar34;
    local_res18 = *(longlong **)(LVar51.QuadPart + 8U + uVar34 * 0x10);
    plVar39 = plVar46;
    while( true ) {
      plVar46 = (longlong *)*plVar39;
      FUN_140017240(plVar39 + 2);
      uVar26 = thunk_FUN_14028af80(plVar39,0x38);
      *(longlong *)(param_1 + 0x298) = *(longlong *)(param_1 + 0x298) + -1;
      if (plVar39 == local_res18) break;
      plVar39 = plVar46;
      if (plVar46 == plVar47) {
        *(longlong **)(local_res8.QuadPart + uVar34 * 0x10) = plVar46;
        *local_res10 = (longlong)plVar46;
        plVar46[1] = (longlong)local_res10;
        goto LAB_140113ad4;
      }
    }
    *(longlong **)(local_res8.QuadPart + uVar34 * 0x10) = plVar47;
    *(longlong **)(local_res8.QuadPart + 8U + uVar34 * 0x10) = plVar47;
    LVar51 = local_res8;
  } while (plVar46 != plVar47);
  *local_res10 = (longlong)plVar46;
  plVar46[1] = (longlong)local_res10;
  goto LAB_140113ad4;
code_r0x000140111276:
  FUN_14017eae0(*(undefined8 *)(param_1 + 0x180));
  FUN_14017f1b0(*(undefined8 *)(param_1 + 0x180),*(undefined2 *)(param_1 + 0x24c));
  if (*(ulonglong *)(param_1 + 0x118) < 0x10) {
    lVar48 = param_1 + 0x100;
  }
  else {
    lVar48 = *(longlong *)(param_1 + 0x100);
  }
  FUN_140113c80(param_1,lVar48);
  FUN_140098760("DXGI finish recovery: %d.\n");
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffd;
LAB_140111310:
  fVar52 = (float)FUN_1400604d0(param_1 + 0x160);
  fVar98 = DAT_140492620;
  bVar44 = false;
  if ((*(uint *)(param_1 + 0x1b8) & 1) != 0) {
    bVar44 = false;
    if ((0 < *(int *)(param_1 + 0x188)) &&
       (bVar44 = false, fVar52 < (float)*(int *)(param_1 + 0x188))) {
      bVar44 = true;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      bVar44 = true;
    }
  }
  if (fVar91 <= fVar52) {
    fVar52 = fVar91;
  }
  if (fVar52 < fVar69) {
    fVar52 = fVar69;
  }
  if (bVar44) {
    auVar72._0_12_ = ZEXT812(0);
    auVar72._12_4_ = 0;
  }
  else {
    auVar72 = ZEXT416((uint)fVar97);
  }
  fVar82 = *(float *)(param_1 + 0x170);
  fVar67 = fVar52 * DAT_140492860;
  fVar61 = auVar72._0_4_;
  auVar79._4_12_ = auVar72._4_12_;
  if (DAT_140492620 <= (float)((uint)(fVar82 - fVar61) & uVar36)) {
    fVar81 = fVar97;
    if (fVar67 < fVar97) {
      fVar81 = fVar67;
    }
    auVar72._0_4_ = (fVar61 - fVar82) * fVar81 + fVar82;
    auVar72._4_12_ = auVar79._4_12_;
  }
  *(int *)(param_1 + 0x170) = auVar72._0_4_;
  if ((*(char *)(param_1 + 9) != '\0') ||
     (fVar82 = fVar97, (*(uint *)(param_1 + 0x1b8) >> 6 & 1) != 0)) {
    fVar82 = 0.0;
  }
  fVar81 = *(float *)(param_1 + 0x174);
  fVar61 = fVar61 * fVar82;
  if (fVar98 <= (float)((uint)(fVar81 - fVar61) & uVar36)) {
    if (fVar97 <= fVar67) {
      fVar67 = fVar97;
    }
    fVar61 = (fVar61 - fVar81) * fVar67 + fVar81;
  }
  else if (fVar81 == fVar61) goto LAB_140111452;
  *(float *)(param_1 + 0x174) = fVar61;
  auVar79._0_4_ = fVar61 * *(float *)(param_1 + 0x178);
  FUN_1401816d0(*(undefined8 *)(param_1 + 0x180),auVar79._0_8_);
LAB_140111452:
  if ((!bVar44) || (0.0 < *(float *)(param_1 + 0x170))) goto LAB_14011149d;
  if ((*(uint *)(param_1 + 0x1b8) >> 0x1b & 1) == 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x8000000;
    FUN_140181960(*(undefined8 *)(param_1 + 0x180));
  }
  Sleep(0xfa);
  goto LAB_140110ce5;
LAB_14011149d:
  if ((*(uint *)(param_1 + 0x1b8) >> 0x1b & 1) != 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xf7ffffff;
    FUN_140181960(*(undefined8 *)(param_1 + 0x180),0);
  }
  fVar98 = *(float *)(param_1 + 400) * *(float *)(param_1 + 0x170);
  lVar48 = *(longlong *)(param_1 + 0x180);
  *(float *)(lVar48 + 0x164) = fVar98;
  fVar98 = fVar98 * fVar52;
  *(undefined4 *)(lVar48 + 0x158) = *(undefined4 *)(param_1 + 0x18c);
  if (fVar91 <= fVar98) {
    fVar98 = fVar91;
  }
  if (fVar98 < fVar69) {
    fVar98 = fVar69;
  }
  local_res20 = CONCAT44(local_res20._4_4_,fVar98);
  lVar42 = *(longlong *)(param_1 + 0x180);
  GetLocalTime(&local_288);
  *(float *)(lVar42 + 0x150) =
       (float)((double)local_288.wMinute * DAT_1404926d8 + (double)local_288.wHour * DAT_140492720 +
               (double)local_288.wSecond * DAT_1404926b8 +
              (double)local_288.wMilliseconds * DAT_140492670);
  local_308.x = 0;
  local_308.y = 0;
  GetCursorPos(&local_308);
  uVar22 = GetKeyState(1);
  lVar42 = *(longlong *)(param_1 + 0x180);
  bVar35 = *(byte *)(lVar42 + 0xb4) & 1;
  if ((uVar22 & 0x100) == 0) {
    if (bVar35 != 0) {
      uVar26 = 0;
LAB_14011160a:
      FUN_14010dab0(lVar42,uVar26);
    }
  }
  else if (bVar35 == 0) {
    pHVar30 = WindowFromPoint(local_308);
    cVar21 = FUN_14010d9b0(pHVar30);
    if ((cVar21 != '\0') || (pHVar30 == *(HWND *)(param_1 + 0x1c8))) {
      lVar42 = *(longlong *)(param_1 + 0x180);
      uVar26 = 1;
      goto LAB_14011160a;
    }
  }
  BVar23 = ScreenToClient(*(HWND *)(param_1 + 0x1c8),&local_308);
  if (BVar23 != 0) {
    lVar42 = *(longlong *)(param_1 + 0x180);
    puVar31 = (ulonglong *)FUN_140109f60(&local_2f8);
    auVar84._8_8_ = 0;
    auVar84._0_8_ = *(ulonglong *)(lVar42 + 0x84);
    auVar71._8_8_ = 0;
    auVar71._0_8_ = *puVar31;
    auVar72 = divps(auVar71,auVar84);
    *(longlong *)(lVar42 + 0x9c) = auVar72._0_8_;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 8) != 0) {
    puVar28 = *(undefined8 **)(lVar48 + 0x2d0);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x58))
              (*(longlong **)(param_1 + 0x98),puVar28,local_2dc);
    fVar98 = DAT_1404925fc;
    uVar27 = uVar34;
    if ((local_2dc[0] & 1) == 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
      local_30c = 0.0;
      local_328 = 0.0;
      fVar95 = 0.0;
      local_320 = 0.0;
      local_2d8 = 0.0;
      local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
      local_2c8 = 0.0;
      local_31c = 0.0;
      local_2c0 = 0.0;
      local_318 = 0.0;
      local_310 = 0.0;
      fVar97 = 0.0;
      local_2a8 = fVar93;
      do {
        fVar69 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x60);
        if (fVar69 <= fVar95) {
          fVar69 = fVar95;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 100);
        if (fVar95 <= fVar69) {
          fVar95 = fVar69;
        }
        fVar69 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x68);
        if (fVar69 <= fVar95) {
          fVar69 = fVar95;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x80);
        if (fVar95 <= local_2d8) {
          fVar95 = local_2d8;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x84);
        if (fVar70 <= fVar95) {
          fVar70 = fVar95;
        }
        fVar68 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x88);
        if (fVar68 <= fVar70) {
          fVar68 = fVar70;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xa0);
        if (fVar95 <= local_2c8) {
          fVar95 = local_2c8;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xa4);
        if (fVar70 <= fVar95) {
          fVar70 = fVar95;
        }
        fVar91 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xa8);
        if (fVar91 <= fVar70) {
          fVar91 = fVar70;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xc0);
        if (fVar95 <= local_2c0) {
          fVar95 = local_2c0;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xc4);
        if (fVar70 <= fVar95) {
          fVar70 = fVar95;
        }
        fVar82 = *(float *)((longlong)puVar28 + uVar27 * 4 + 200);
        if (fVar82 <= fVar70) {
          fVar82 = fVar70;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xe0);
        if (fVar95 <= fVar93) {
          fVar95 = fVar93;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xe4);
        if (fVar70 <= fVar95) {
          fVar70 = fVar95;
        }
        fVar67 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xe8);
        if (fVar67 <= fVar70) {
          fVar67 = fVar70;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x100);
        if (fVar95 <= local_2a8) {
          fVar95 = local_2a8;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x104);
        if (fVar70 <= fVar95) {
          fVar70 = fVar95;
        }
        fVar61 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x108);
        if (fVar61 <= fVar70) {
          fVar61 = fVar70;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x120);
        if (fVar95 <= fVar97) {
          fVar95 = fVar97;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x124);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar70 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x128);
        if (fVar70 <= fVar97) {
          fVar70 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x140);
        if (fVar95 <= local_328) {
          fVar95 = local_328;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x144);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar81 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x148);
        if (fVar81 <= fVar97) {
          fVar81 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x160);
        if (fVar95 <= local_320) {
          fVar95 = local_320;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x164);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar90 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x168);
        if (fVar90 <= fVar97) {
          fVar90 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x180);
        if (fVar95 <= local_res18._0_4_) {
          fVar95 = local_res18._0_4_;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x184);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar92 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x188);
        if (fVar92 <= fVar97) {
          fVar92 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1a0);
        if (fVar95 <= local_31c) {
          fVar95 = local_31c;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1a4);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar94 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1a8);
        if (fVar94 <= fVar97) {
          fVar94 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1c0);
        if (fVar95 <= local_318) {
          fVar95 = local_318;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1c4);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar2 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1c8);
        if (fVar2 <= fVar97) {
          fVar2 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1e0);
        if (fVar95 <= local_310) {
          fVar95 = local_310;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1e4);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar3 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1e8);
        if (fVar3 <= fVar97) {
          fVar3 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4);
        if (fVar95 <= local_30c) {
          fVar95 = local_30c;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 4);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 8);
        if (fVar95 <= fVar97) {
          fVar95 = fVar97;
        }
        local_30c = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xc);
        if (local_30c <= fVar95) {
          local_30c = fVar95;
        }
        uVar100 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x20);
        if ((float)uVar100 <= (float)local_res8.s.LowPart) {
          uVar100 = local_res8.s.LowPart;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x24);
        if (fVar95 <= (float)uVar100) {
          fVar95 = (float)uVar100;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x28);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar4 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x2c);
        if (fVar4 <= fVar97) {
          fVar4 = fVar97;
        }
        local_res8._0_4_ = fVar4;
        HVar5.unused = *(int *)((longlong)puVar28 + uVar27 * 4 + 0x40);
        if ((float)HVar5.unused <= (float)local_res10._0_4_) {
          HVar5.unused = local_res10._0_4_;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x44);
        if (fVar95 <= (float)HVar5.unused) {
          fVar95 = (float)HVar5.unused;
        }
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x48);
        if (fVar97 <= fVar95) {
          fVar97 = fVar95;
        }
        fVar6 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x4c);
        if (fVar6 <= fVar97) {
          fVar6 = fVar97;
        }
        fVar95 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x6c);
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,fVar6);
        if (fVar95 <= fVar69) {
          fVar95 = fVar69;
        }
        local_2d8 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x8c);
        if (local_2d8 <= fVar68) {
          local_2d8 = fVar68;
        }
        local_2c8 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xac);
        if (local_2c8 <= fVar91) {
          local_2c8 = fVar91;
        }
        local_2c0 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xcc);
        if (local_2c0 <= fVar82) {
          local_2c0 = fVar82;
        }
        fVar93 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0xec);
        if (fVar93 <= fVar67) {
          fVar93 = fVar67;
        }
        local_2a8 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x10c);
        if (local_2a8 <= fVar61) {
          local_2a8 = fVar61;
        }
        local_2b8 = fVar93;
        fVar97 = *(float *)((longlong)puVar28 + uVar27 * 4 + 300);
        if (fVar97 <= fVar70) {
          fVar97 = fVar70;
        }
        local_328 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x14c);
        if (local_328 <= fVar81) {
          local_328 = fVar81;
        }
        local_320 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x16c);
        if (local_320 <= fVar90) {
          local_320 = fVar90;
        }
        fVar69 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x18c);
        if (fVar69 <= fVar92) {
          fVar69 = fVar92;
        }
        local_31c = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1ac);
        if (local_31c <= fVar94) {
          local_31c = fVar94;
        }
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,fVar69);
        local_318 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1cc);
        if (local_318 <= fVar2) {
          local_318 = fVar2;
        }
        uVar36 = (int)uVar27 + 4;
        local_310 = *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1ec);
        if (local_310 <= fVar3) {
          local_310 = fVar3;
        }
        uVar27 = (ulonglong)uVar36;
      } while ((int)uVar36 < 8);
      fVar70 = local_30c;
      if (local_30c <= 0.0) {
        fVar70 = 0.0;
      }
      if (fVar70 < fVar4) {
        fVar70 = fVar4;
      }
      if (fVar70 < fVar6) {
        fVar70 = fVar6;
      }
      if (fVar70 < fVar95) {
        fVar70 = fVar95;
      }
      if (fVar70 < local_2d8) {
        fVar70 = local_2d8;
      }
      if (fVar70 < local_2c8) {
        fVar70 = local_2c8;
      }
      if (fVar70 < local_2c0) {
        fVar70 = local_2c0;
      }
      if (fVar70 < fVar93) {
        fVar70 = fVar93;
      }
      if (fVar70 < local_2a8) {
        fVar70 = local_2a8;
      }
      if (fVar70 < fVar97) {
        fVar70 = fVar97;
      }
      if (fVar70 < local_328) {
        fVar70 = local_328;
      }
      if (fVar70 < local_320) {
        fVar70 = local_320;
      }
      if (fVar70 < fVar69) {
        fVar70 = fVar69;
      }
      if (fVar70 < local_31c) {
        fVar70 = local_31c;
      }
      if (fVar70 < local_318) {
        fVar70 = local_318;
      }
      if (fVar70 < local_310) {
        fVar70 = local_310;
      }
      fVar68 = fVar70 * _DAT_140492698;
      bVar44 = fVar70 < DAT_1404925fc;
      auVar73._0_8_ = CONCAT44(fVar68,fVar68);
      auVar73._8_4_ = fVar68;
      auVar73._12_4_ = fVar68;
      auVar75._8_4_ = fVar68;
      auVar75._0_8_ = auVar73._0_8_;
      auVar75._12_4_ = fVar68;
      auVar78._8_4_ = fVar68;
      auVar78._0_8_ = auVar73._0_8_;
      auVar78._12_4_ = fVar68;
      auVar17._4_4_ = fVar4;
      auVar17._0_4_ = local_30c;
      auVar17._8_4_ = fVar6;
      auVar17._12_4_ = fVar95;
      auVar72 = maxps(auVar75,auVar17);
      auVar18._4_4_ = local_2c8;
      auVar18._0_4_ = local_2d8;
      auVar18._8_4_ = local_2c0;
      auVar18._12_4_ = fVar93;
      auVar79 = maxps(auVar78,auVar18);
      auVar83._8_4_ = fVar68;
      auVar83._0_8_ = auVar73._0_8_;
      auVar83._12_4_ = fVar68;
      local_3d8._0_4_ = auVar72._0_4_;
      local_3d8._4_4_ = auVar72._4_4_;
      uStack_3d0._0_4_ = auVar72._8_4_;
      uStack_3d0._4_4_ = auVar72._12_4_;
      auVar19._4_4_ = fVar97;
      auVar19._0_4_ = local_2a8;
      auVar19._8_4_ = local_328;
      auVar19._12_4_ = local_320;
      auVar84 = maxps(auVar83,auVar19);
      auVar20._4_4_ = local_31c;
      auVar20._0_4_ = fVar69;
      auVar20._8_4_ = local_318;
      auVar20._12_4_ = local_310;
      auVar72 = maxps(auVar73,auVar20);
      local_3c8[0] = auVar79._0_4_;
      local_3c8[1] = auVar79._4_4_;
      uStack_3c0._0_4_ = auVar79._8_4_;
      uStack_3c0._4_4_ = auVar79._12_4_;
      local_3b8 = auVar84._0_4_;
      fStack_3b4 = auVar84._4_4_;
      fStack_3b0 = auVar84._8_4_;
      fStack_3ac = auVar84._12_4_;
      local_3a8 = auVar72._0_4_;
      fStack_3a4 = auVar72._4_4_;
      fStack_3a0 = auVar72._8_4_;
      fStack_39c = auVar72._12_4_;
      if ((**(float **)(param_1 + 0x1b0) <= DAT_1404925fc) && (!bVar44)) {
        **(float **)(param_1 + 0x1b0) = 1.0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 4) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 8) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0xc) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x10) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x14) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x18) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x1c) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x20) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x24) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x28) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x2c) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x30) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x34) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x38) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x3c) = 0x3f800000;
      }
      uVar36 = _DAT_140492fc0;
      fVar97 = DAT_140492704;
      pfVar33 = *(float **)(param_1 + 0x1b0);
      fStack_364 = (float)local_3d8._4_4_ - pfVar33[1];
      local_368 = (undefined1  [4])((float)local_3d8._0_4_ - *pfVar33);
      uStack_360._0_4_ = (float)uStack_3d0 - pfVar33[2];
      uStack_360._4_4_ = uStack_3d0._4_4_ - pfVar33[3];
      local_358 = CONCAT44(local_3c8[1] - pfVar33[5],local_3c8[0] - pfVar33[4]);
      local_334 = fStack_3a4 - pfVar33[0xd];
      uStack_350 = CONCAT44(uStack_3c0._4_4_ - pfVar33[7],(float)uStack_3c0 - pfVar33[6]);
      fVar95 = (float)local_res20;
      if (DAT_140492704 <= (float)local_res20) {
        fVar95 = DAT_140492704;
      }
      local_348 = CONCAT44(fStack_3b4 - pfVar33[9],local_3b8 - pfVar33[8]);
      uStack_340 = CONCAT44(fStack_3ac - pfVar33[0xb],fStack_3b0 - pfVar33[10]);
      local_338 = local_3a8 - pfVar33[0xc];
      local_330 = fStack_3a0 - pfVar33[0xe];
      local_32c = fStack_39c - pfVar33[0xf];
      uVar27 = uVar34;
      do {
        fVar69 = (float)((uint)*(float *)(local_368 + uVar27 * 4) & uVar36);
        if (fVar69 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + uVar27 * 4) =
               *(undefined4 *)(local_3d8 + uVar27 * 4);
        }
        else {
          fVar70 = fVar95;
          if (fVar69 <= fVar95) {
            fVar70 = fVar69;
          }
          fVar69 = DAT_1404929ac;
          if (0.0 < *(float *)(local_368 + uVar27 * 4)) {
            fVar69 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + uVar27 * 4) =
               fVar70 * fVar69 + *(float *)(*(longlong *)(param_1 + 0x1b0) + uVar27 * 4);
        }
        fVar69 = (float)((uint)*(float *)(local_368 + uVar27 * 4 + 4) & uVar36);
        if (fVar69 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 4 + uVar27 * 4) =
               *(undefined4 *)(local_3d8 + uVar27 * 4 + 4);
        }
        else {
          fVar70 = fVar95;
          if (fVar69 <= fVar95) {
            fVar70 = fVar69;
          }
          fVar69 = DAT_1404929ac;
          if (0.0 < *(float *)(local_368 + uVar27 * 4 + 4)) {
            fVar69 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 4 + uVar27 * 4) =
               fVar70 * fVar69 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 4 + uVar27 * 4);
        }
        fVar69 = (float)((uint)*(float *)(local_368 + uVar27 * 4 + 8) & uVar36);
        if (fVar69 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 8 + uVar27 * 4) =
               *(undefined4 *)((longlong)&uStack_3d0 + uVar27 * 4);
        }
        else {
          fVar70 = fVar95;
          if (fVar69 <= fVar95) {
            fVar70 = fVar69;
          }
          fVar69 = DAT_1404929ac;
          if (0.0 < *(float *)(local_368 + uVar27 * 4 + 8)) {
            fVar69 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 8 + uVar27 * 4) =
               fVar70 * fVar69 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 8 + uVar27 * 4);
        }
        fVar69 = (float)((uint)*(float *)(local_368 + uVar27 * 4 + 0xc) & uVar36);
        if (fVar69 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0xc + uVar27 * 4) =
               *(undefined4 *)((longlong)&uStack_3d0 + uVar27 * 4 + 4);
        }
        else {
          fVar70 = fVar95;
          if (fVar69 <= fVar95) {
            fVar70 = fVar69;
          }
          fVar69 = DAT_1404929ac;
          if (0.0 < *(float *)(local_368 + uVar27 * 4 + 0xc)) {
            fVar69 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0xc + uVar27 * 4) =
               fVar70 * fVar69 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 0xc + uVar27 * 4);
        }
        fVar69 = *(float *)((longlong)&local_358 + uVar27 * 4);
        fVar70 = (float)((uint)fVar69 & uVar36);
        if (fVar70 <= fVar98) {
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x10 + uVar27 * 4) = local_3c8[uVar27];
        }
        else {
          fVar68 = fVar95;
          if (fVar70 <= fVar95) {
            fVar68 = fVar70;
          }
          fVar70 = DAT_1404929ac;
          if (0.0 < fVar69) {
            fVar70 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x10 + uVar27 * 4) =
               fVar68 * fVar70 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x10 + uVar27 * 4);
        }
        fVar69 = *(float *)((longlong)&local_358 + uVar27 * 4 + 4);
        fVar70 = (float)((uint)fVar69 & uVar36);
        if (fVar70 <= fVar98) {
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x14 + uVar27 * 4) = local_3c8[uVar27 + 1];
        }
        else {
          fVar68 = fVar95;
          if (fVar70 <= fVar95) {
            fVar68 = fVar70;
          }
          fVar70 = DAT_1404929ac;
          if (0.0 < fVar69) {
            fVar70 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x14 + uVar27 * 4) =
               fVar68 * fVar70 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x14 + uVar27 * 4);
        }
        fVar69 = *(float *)((longlong)&uStack_350 + uVar27 * 4);
        fVar70 = (float)((uint)fVar69 & uVar36);
        if (fVar70 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x18 + uVar27 * 4) =
               *(undefined4 *)((longlong)&uStack_3c0 + uVar27 * 4);
        }
        else {
          fVar68 = fVar95;
          if (fVar70 <= fVar95) {
            fVar68 = fVar70;
          }
          fVar70 = DAT_1404929ac;
          if (0.0 < fVar69) {
            fVar70 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x18 + uVar27 * 4) =
               fVar68 * fVar70 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x18 + uVar27 * 4);
        }
        fVar69 = *(float *)((longlong)&uStack_350 + uVar27 * 4 + 4);
        fVar70 = (float)((uint)fVar69 & uVar36);
        if (fVar70 <= fVar98) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x1c + uVar27 * 4) =
               *(undefined4 *)((longlong)&uStack_3c0 + uVar27 * 4 + 4);
        }
        else {
          fVar68 = fVar95;
          if (fVar70 <= fVar95) {
            fVar68 = fVar70;
          }
          fVar70 = DAT_1404929ac;
          if (0.0 < fVar69) {
            fVar70 = fVar97;
          }
          *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x1c + uVar27 * 4) =
               fVar68 * fVar70 + *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x1c + uVar27 * 4);
        }
        uVar40 = (int)uVar27 + 8;
        uVar27 = (ulonglong)uVar40;
      } while ((int)uVar40 < 0x10);
      pfVar33 = *(float **)(param_1 + 0x1b0);
      auVar72 = ZEXT416((uint)DAT_140492608);
      local_208[0] = ZEXT416((uint)*pfVar33);
      if (*pfVar33 < DAT_140492608) {
        local_208[0] = auVar72;
      }
      local_238[0] = ZEXT416((uint)pfVar33[1]);
      if (pfVar33[1] < DAT_140492608) {
        local_238[0] = auVar72;
      }
      _local_368 = ZEXT416((uint)pfVar33[2]);
      if (pfVar33[2] < DAT_140492608) {
        _local_368 = auVar72;
      }
      fVar95 = pfVar33[3];
      if (pfVar33[3] < DAT_140492608) {
        fVar95 = DAT_140492608;
      }
      fVar69 = pfVar33[4];
      if (pfVar33[4] < DAT_140492608) {
        fVar69 = DAT_140492608;
      }
      fVar70 = pfVar33[5];
      if (pfVar33[5] < DAT_140492608) {
        fVar70 = DAT_140492608;
      }
      fVar68 = pfVar33[6];
      if (pfVar33[6] < DAT_140492608) {
        fVar68 = DAT_140492608;
      }
      fVar91 = pfVar33[7];
      if (pfVar33[7] < DAT_140492608) {
        fVar91 = DAT_140492608;
      }
      fVar93 = pfVar33[8];
      if (pfVar33[8] < DAT_140492608) {
        fVar93 = DAT_140492608;
      }
      fVar98 = pfVar33[9];
      if (pfVar33[9] < DAT_140492608) {
        fVar98 = DAT_140492608;
      }
      fVar82 = pfVar33[10];
      if (pfVar33[10] < DAT_140492608) {
        fVar82 = DAT_140492608;
      }
      fVar67 = pfVar33[0xb];
      if (pfVar33[0xb] < DAT_140492608) {
        fVar67 = DAT_140492608;
      }
      fVar61 = pfVar33[0xc];
      if (pfVar33[0xc] < DAT_140492608) {
        fVar61 = DAT_140492608;
      }
      fVar81 = pfVar33[0xd];
      if (pfVar33[0xd] < DAT_140492608) {
        fVar81 = DAT_140492608;
      }
      fVar90 = pfVar33[0xe];
      if (pfVar33[0xe] < DAT_140492608) {
        fVar90 = DAT_140492608;
      }
      fVar92 = pfVar33[0xf];
      if (pfVar33[0xf] < DAT_140492608) {
        fVar92 = DAT_140492608;
      }
      auVar53._4_4_ = local_208[0]._0_4_;
      auVar53._0_4_ = local_208[0]._0_4_;
      auVar53._8_4_ = local_208[0]._0_4_;
      auVar53._12_4_ = local_208[0]._0_4_;
      _local_1e8 = rcpps(auVar53,auVar53);
      auVar54._4_4_ = local_238[0]._0_4_;
      auVar54._0_4_ = local_238[0]._0_4_;
      auVar54._8_4_ = local_238[0]._0_4_;
      auVar54._12_4_ = local_238[0]._0_4_;
      _local_1d8 = rcpps(auVar54,auVar54);
      auVar55._4_4_ = local_368;
      auVar55._0_4_ = local_368;
      auVar55._8_4_ = local_368;
      auVar55._12_4_ = local_368;
      local_1c8 = rcpps(auVar55,auVar55);
      auVar16._4_4_ = fVar95;
      auVar16._0_4_ = fVar95;
      auVar16._8_4_ = fVar95;
      auVar16._12_4_ = fVar95;
      local_1b8 = rcpps(local_1c8,auVar16);
      auVar15._4_4_ = fVar69;
      auVar15._0_4_ = fVar69;
      auVar15._8_4_ = fVar69;
      auVar15._12_4_ = fVar69;
      local_1a8 = rcpps(local_1b8,auVar15);
      auVar14._4_4_ = fVar70;
      auVar14._0_4_ = fVar70;
      auVar14._8_4_ = fVar70;
      auVar14._12_4_ = fVar70;
      local_198 = rcpps(local_1a8,auVar14);
      auVar13._4_4_ = fVar68;
      auVar13._0_4_ = fVar68;
      auVar13._8_4_ = fVar68;
      auVar13._12_4_ = fVar68;
      local_188 = rcpps(local_198,auVar13);
      auVar96._4_4_ = fVar93;
      auVar96._0_4_ = fVar93;
      auVar96._8_4_ = fVar93;
      auVar96._12_4_ = fVar93;
      auVar12._4_4_ = fVar91;
      auVar12._0_4_ = fVar91;
      auVar12._8_4_ = fVar91;
      auVar12._12_4_ = fVar91;
      local_178 = rcpps(local_188,auVar12);
      local_168 = rcpps(local_178,auVar96);
      auVar11._4_4_ = fVar98;
      auVar11._0_4_ = fVar98;
      auVar11._8_4_ = fVar98;
      auVar11._12_4_ = fVar98;
      local_158 = rcpps(local_168,auVar11);
      auVar10._4_4_ = fVar82;
      auVar10._0_4_ = fVar82;
      auVar10._8_4_ = fVar82;
      auVar10._12_4_ = fVar82;
      local_148 = rcpps(local_158,auVar10);
      auVar85._4_4_ = fVar67;
      auVar85._0_4_ = fVar67;
      auVar85._8_4_ = fVar67;
      auVar85._12_4_ = fVar67;
      local_138 = rcpps(local_148,auVar85);
      auVar80._4_4_ = fVar61;
      auVar80._0_4_ = fVar61;
      auVar80._8_4_ = fVar61;
      auVar80._12_4_ = fVar61;
      local_128 = rcpps(local_138,auVar80);
      auVar76._4_4_ = fVar81;
      auVar76._0_4_ = fVar81;
      auVar76._8_4_ = fVar81;
      auVar76._12_4_ = fVar81;
      local_118 = rcpps(local_128,auVar76);
      auVar74._4_4_ = fVar90;
      auVar74._0_4_ = fVar90;
      auVar74._8_4_ = fVar90;
      auVar74._12_4_ = fVar90;
      local_108 = rcpps(local_118,auVar74);
      auVar62._4_4_ = fVar92;
      auVar62._0_4_ = fVar92;
      auVar62._8_4_ = fVar92;
      auVar62._12_4_ = fVar92;
      local_f8 = rcpps(local_108,auVar62);
      fVar95 = (float)local_res20 * DAT_14049288c;
      if (fVar97 <= (float)local_res20 * DAT_14049288c) {
        fVar95 = fVar97;
      }
      fVar69 = (float)local_res20 * _DAT_1404928c4;
      if (fVar97 <= (float)local_res20 * _DAT_1404928c4) {
        fVar69 = fVar97;
      }
      uVar26 = CONCAT44(fVar69,fVar69);
      fVar70 = (float)local_res20 * _DAT_140492a10;
      if ((float)local_res20 * _DAT_140492a10 <= DAT_1404929b8) {
        fVar70 = DAT_1404929b8;
      }
      uVar27 = uVar34;
      if (bVar44) {
        FUN_1404217a0(puVar28,0,0x200);
      }
      else {
        do {
          iVar45 = (int)uVar27 * 8;
          lVar41 = (longlong)iVar45;
          auVar63._8_4_ = fVar69;
          auVar63._0_8_ = uVar26;
          auVar63._12_4_ = fVar69;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + lVar41 * 4);
          pfVar1 = (float *)((longlong)puVar28 + lVar41 * 4);
          lVar42 = uVar27 * 0x10;
          fVar68 = *(float *)(local_1e8 + lVar42);
          fVar91 = *(float *)(local_1e8 + lVar42 + 4);
          fVar93 = *(float *)(local_1e8 + lVar42 + 8);
          fVar98 = *(float *)(local_1e8 + lVar42 + 0xc);
          fVar81 = (*pfVar1 * fVar68 - *pfVar33) * fVar95 + *pfVar33;
          fVar90 = (pfVar1[1] * fVar91 - pfVar33[1]) * fVar95 + pfVar33[1];
          fVar92 = (pfVar1[2] * fVar93 - pfVar33[2]) * fVar95 + pfVar33[2];
          fVar94 = (pfVar1[3] * fVar98 - pfVar33[3]) * fVar95 + pfVar33[3];
          auVar56._4_4_ = fVar70;
          auVar56._0_4_ = fVar70;
          auVar56._8_4_ = fVar70;
          auVar56._12_4_ = fVar70;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + lVar41 * 4);
          *pfVar33 = fVar81;
          pfVar33[1] = fVar90;
          pfVar33[2] = fVar92;
          pfVar33[3] = fVar94;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a0) + lVar41 * 4);
          fVar82 = pfVar33[1];
          fVar67 = pfVar33[2];
          fVar61 = pfVar33[3];
          auVar86._0_4_ = fVar81 - *pfVar33;
          auVar86._4_4_ = fVar90 - fVar82;
          auVar86._8_4_ = fVar92 - fVar67;
          auVar86._12_4_ = fVar94 - fVar61;
          auVar72 = maxps(auVar56,auVar86);
          auVar79 = minps(auVar63,auVar86);
          pfVar1 = (float *)((longlong)puVar28 + lVar41 * 4 + 0x10);
          fVar81 = *pfVar1;
          fVar90 = pfVar1[1];
          fVar92 = pfVar1[2];
          fVar94 = pfVar1[3];
          auVar64._8_4_ = fVar69;
          auVar64._0_8_ = uVar26;
          auVar64._12_4_ = fVar69;
          pfVar1 = (float *)((longlong)puVar28 + lVar41 * 4);
          *pfVar1 = (float)(~-(uint)(0.0 < auVar86._0_4_) & auVar72._0_4_ |
                           auVar79._0_4_ & -(uint)(0.0 < auVar86._0_4_)) + *pfVar33;
          pfVar1[1] = (float)(~-(uint)(0.0 < auVar86._4_4_) & auVar72._4_4_ |
                             auVar79._4_4_ & -(uint)(0.0 < auVar86._4_4_)) + fVar82;
          pfVar1[2] = (float)(~-(uint)(0.0 < auVar86._8_4_) & auVar72._8_4_ |
                             auVar79._8_4_ & -(uint)(0.0 < auVar86._8_4_)) + fVar67;
          pfVar1[3] = (float)(~-(uint)(0.0 < auVar86._12_4_) & auVar72._12_4_ |
                             auVar79._12_4_ & -(uint)(0.0 < auVar86._12_4_)) + fVar61;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x10 + lVar41 * 4);
          fVar82 = (fVar81 * fVar68 - *pfVar33) * fVar95 + *pfVar33;
          fVar67 = (fVar90 * fVar91 - pfVar33[1]) * fVar95 + pfVar33[1];
          fVar61 = (fVar92 * fVar93 - pfVar33[2]) * fVar95 + pfVar33[2];
          fVar98 = (fVar94 * fVar98 - pfVar33[3]) * fVar95 + pfVar33[3];
          auVar57._4_4_ = fVar70;
          auVar57._0_4_ = fVar70;
          auVar57._8_4_ = fVar70;
          auVar57._12_4_ = fVar70;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x10 + lVar41 * 4);
          *pfVar33 = fVar82;
          pfVar33[1] = fVar67;
          pfVar33[2] = fVar61;
          pfVar33[3] = fVar98;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a0) + 0x10 + lVar41 * 4);
          fVar68 = pfVar33[1];
          fVar91 = pfVar33[2];
          fVar93 = pfVar33[3];
          auVar87._0_4_ = fVar82 - *pfVar33;
          auVar87._4_4_ = fVar67 - fVar68;
          auVar87._8_4_ = fVar61 - fVar91;
          auVar87._12_4_ = fVar98 - fVar93;
          auVar72 = maxps(auVar57,auVar87);
          lVar42 = (uVar27 + 1) * 0x10;
          fVar98 = *(float *)(local_1e8 + lVar42);
          fVar82 = *(float *)(local_1e8 + lVar42 + 4);
          fVar67 = *(float *)(local_1e8 + lVar42 + 8);
          fVar61 = *(float *)(local_1e8 + lVar42 + 0xc);
          auVar79 = minps(auVar64,auVar87);
          auVar65._8_4_ = fVar69;
          auVar65._0_8_ = uVar26;
          auVar65._12_4_ = fVar69;
          pfVar1 = (float *)((longlong)puVar28 + lVar41 * 4 + 0x10);
          *pfVar1 = (float)(~-(uint)(0.0 < auVar87._0_4_) & auVar72._0_4_ |
                           auVar79._0_4_ & -(uint)(0.0 < auVar87._0_4_)) + *pfVar33;
          pfVar1[1] = (float)(~-(uint)(0.0 < auVar87._4_4_) & auVar72._4_4_ |
                             auVar79._4_4_ & -(uint)(0.0 < auVar87._4_4_)) + fVar68;
          pfVar1[2] = (float)(~-(uint)(0.0 < auVar87._8_4_) & auVar72._8_4_ |
                             auVar79._8_4_ & -(uint)(0.0 < auVar87._8_4_)) + fVar91;
          pfVar1[3] = (float)(~-(uint)(0.0 < auVar87._12_4_) & auVar72._12_4_ |
                             auVar79._12_4_ & -(uint)(0.0 < auVar87._12_4_)) + fVar93;
          lVar42 = (longlong)iVar45;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x20 + lVar42 * 4);
          pfVar1 = (float *)((longlong)puVar28 + lVar42 * 4 + 0x20);
          fVar81 = (*pfVar1 * fVar98 - *pfVar33) * fVar95 + *pfVar33;
          fVar90 = (pfVar1[1] * fVar82 - pfVar33[1]) * fVar95 + pfVar33[1];
          fVar92 = (pfVar1[2] * fVar67 - pfVar33[2]) * fVar95 + pfVar33[2];
          fVar94 = (pfVar1[3] * fVar61 - pfVar33[3]) * fVar95 + pfVar33[3];
          auVar58._4_4_ = fVar70;
          auVar58._0_4_ = fVar70;
          auVar58._8_4_ = fVar70;
          auVar58._12_4_ = fVar70;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x20 + lVar42 * 4);
          *pfVar33 = fVar81;
          pfVar33[1] = fVar90;
          pfVar33[2] = fVar92;
          pfVar33[3] = fVar94;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a0) + 0x20 + lVar42 * 4);
          fVar68 = pfVar33[1];
          fVar91 = pfVar33[2];
          fVar93 = pfVar33[3];
          auVar88._0_4_ = fVar81 - *pfVar33;
          auVar88._4_4_ = fVar90 - fVar68;
          auVar88._8_4_ = fVar92 - fVar91;
          auVar88._12_4_ = fVar94 - fVar93;
          auVar72 = maxps(auVar58,auVar88);
          auVar79 = minps(auVar65,auVar88);
          pfVar1 = (float *)((longlong)puVar28 + lVar42 * 4 + 0x20);
          *pfVar1 = (float)(~-(uint)(0.0 < auVar88._0_4_) & auVar72._0_4_ |
                           auVar79._0_4_ & -(uint)(0.0 < auVar88._0_4_)) + *pfVar33;
          pfVar1[1] = (float)(~-(uint)(0.0 < auVar88._4_4_) & auVar72._4_4_ |
                             auVar79._4_4_ & -(uint)(0.0 < auVar88._4_4_)) + fVar68;
          pfVar1[2] = (float)(~-(uint)(0.0 < auVar88._8_4_) & auVar72._8_4_ |
                             auVar79._8_4_ & -(uint)(0.0 < auVar88._8_4_)) + fVar91;
          pfVar1[3] = (float)(~-(uint)(0.0 < auVar88._12_4_) & auVar72._12_4_ |
                             auVar79._12_4_ & -(uint)(0.0 < auVar88._12_4_)) + fVar93;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x30 + lVar42 * 4);
          pfVar1 = (float *)((longlong)puVar28 + lVar42 * 4 + 0x30);
          auVar66._8_4_ = fVar69;
          auVar66._0_8_ = uVar26;
          auVar66._12_4_ = fVar69;
          uVar36 = (int)uVar27 + 2;
          fVar68 = (*pfVar1 * fVar98 - *pfVar33) * fVar95 + *pfVar33;
          fVar91 = (pfVar1[1] * fVar82 - pfVar33[1]) * fVar95 + pfVar33[1];
          fVar93 = (pfVar1[2] * fVar67 - pfVar33[2]) * fVar95 + pfVar33[2];
          fVar98 = (pfVar1[3] * fVar61 - pfVar33[3]) * fVar95 + pfVar33[3];
          auVar59._4_4_ = fVar70;
          auVar59._0_4_ = fVar70;
          auVar59._8_4_ = fVar70;
          auVar59._12_4_ = fVar70;
          pfVar33 = (float *)(*(longlong *)(param_1 + 0x1a8) + 0x30 + lVar42 * 4);
          *pfVar33 = fVar68;
          pfVar33[1] = fVar91;
          pfVar33[2] = fVar93;
          pfVar33[3] = fVar98;
          auVar72 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x1a0) + 0x30 + lVar42 * 4);
          auVar89._0_4_ = fVar68 - auVar72._0_4_;
          auVar89._4_4_ = fVar91 - auVar72._4_4_;
          auVar89._8_4_ = fVar93 - auVar72._8_4_;
          auVar89._12_4_ = fVar98 - auVar72._12_4_;
          auVar79 = maxps(auVar59,auVar89);
          auVar84 = minps(auVar66,auVar89);
          auVar77._0_4_ =
               (float)(~-(uint)(0.0 < auVar89._0_4_) & auVar79._0_4_ |
                      auVar84._0_4_ & -(uint)(0.0 < auVar89._0_4_)) + auVar72._0_4_;
          auVar77._4_4_ =
               (float)(~-(uint)(0.0 < auVar89._4_4_) & auVar79._4_4_ |
                      auVar84._4_4_ & -(uint)(0.0 < auVar89._4_4_)) + auVar72._4_4_;
          auVar77._8_4_ =
               (float)(~-(uint)(0.0 < auVar89._8_4_) & auVar79._8_4_ |
                      auVar84._8_4_ & -(uint)(0.0 < auVar89._8_4_)) + auVar72._8_4_;
          auVar77._12_4_ =
               (float)(~-(uint)(0.0 < auVar89._12_4_) & auVar79._12_4_ |
                      auVar84._12_4_ & -(uint)(0.0 < auVar89._12_4_)) + auVar72._12_4_;
          *(undefined1 (*) [16])((longlong)puVar28 + lVar42 * 4 + 0x30) = auVar77;
          uVar27 = (ulonglong)uVar36;
        } while ((int)uVar36 < 0x10);
        lVar42 = 4;
        puVar32 = *(undefined8 **)(param_1 + 0x1a0);
        puVar38 = puVar28;
        do {
          uVar26 = puVar38[1];
          *puVar32 = *puVar38;
          puVar32[1] = uVar26;
          uVar26 = puVar38[3];
          puVar32[2] = puVar38[2];
          puVar32[3] = uVar26;
          uVar26 = puVar38[5];
          puVar32[4] = puVar38[4];
          puVar32[5] = uVar26;
          uVar26 = puVar38[7];
          puVar32[6] = puVar38[6];
          puVar32[7] = uVar26;
          uVar26 = puVar38[9];
          puVar32[8] = puVar38[8];
          puVar32[9] = uVar26;
          uVar26 = puVar38[0xb];
          puVar32[10] = puVar38[10];
          puVar32[0xb] = uVar26;
          uVar26 = puVar38[0xd];
          puVar32[0xc] = puVar38[0xc];
          puVar32[0xd] = uVar26;
          uVar26 = puVar38[0xf];
          puVar32[0xe] = puVar38[0xe];
          puVar32[0xf] = uVar26;
          lVar42 = lVar42 + -1;
          puVar32 = puVar32 + 0x10;
          puVar38 = puVar38 + 0x10;
        } while (lVar42 != 0);
      }
      uVar27 = uVar34;
      uVar36 = _DAT_140492fc0;
      fVar91 = DAT_14049268c;
      fVar68 = DAT_14049263c;
      fVar70 = DAT_140492608;
      fVar69 = DAT_1404925fc;
      fVar95 = DAT_1404926c0;
    }
    do {
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x200) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x100) +
           *(float *)((longlong)puVar28 + uVar27 * 4)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x204) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x104) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 4)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x208) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x108) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 8)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x20c) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x10c) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0xc)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x210) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x110) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x10)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x214) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x114) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x14)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x218) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x118) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x18)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x21c) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x11c) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x1c)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x220) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x120) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x20)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x224) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x124) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x24)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x228) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x128) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x28)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x22c) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 300) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x2c)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x230) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x130) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x30)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x234) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x134) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x34)) * fVar95;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x238) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x138) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x38)) * fVar95;
      uVar40 = (int)uVar27 + 0x10;
      *(float *)((longlong)puVar28 + uVar27 * 4 + 0x23c) =
           (*(float *)((longlong)puVar28 + uVar27 * 4 + 0x13c) +
           *(float *)((longlong)puVar28 + uVar27 * 4 + 0x3c)) * fVar95;
      uVar27 = (ulonglong)uVar40;
      uVar49 = uVar34;
      uVar50 = uVar34;
    } while ((int)uVar40 < 0x40);
    do {
      iVar45 = (int)uVar50;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 4);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      iVar24 = (int)uVar49;
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0xc);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 8);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 4 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x14);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 4) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 8 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x1c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 6) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xc + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x24);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 8) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x10 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x2c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 10) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x14 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x34);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0xc) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x18 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x3c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0xe) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x1c + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x44);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x10) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x20 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x4c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x12) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x24 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x54);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x14) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x28 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x5c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x16) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x2c + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 100);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x18) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x30 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x6c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x1a) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x34 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x74);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x1c) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x38 + uVar49 * 4) = fVar98;
      fVar98 = *(float *)((longlong)puVar28 + (longlong)iVar45 * 4 + 0x7c);
      fVar93 = *(float *)((longlong)puVar28 + (longlong)(iVar24 * 2 + 0x1e) * 4);
      if (fVar98 <= fVar93) {
        fVar98 = fVar93;
      }
      *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x3c + uVar49 * 4) = fVar98;
      uVar49 = (ulonglong)(iVar24 + 0x10U);
      uVar50 = (ulonglong)(iVar45 + 0x20);
    } while ((int)(iVar24 + 0x10U) < 0x60);
    fVar98 = (*(float **)(lVar48 + 0x2d8))[1];
    fVar93 = **(float **)(lVar48 + 0x2d8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    **(float **)(lVar48 + 0x2e0) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xc);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 4) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x14);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x10);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 8) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x1c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x18);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xc) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x24);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x20);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x10) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x2c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x28);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x14) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x34);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x30);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x18) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x3c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x38);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x1c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x44);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x40);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x20) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x4c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x48);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x24) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x54);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x50);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x28) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x5c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x58);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x2c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 100);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x60);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x30) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x6c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x68);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x34) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x74);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x70);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x38) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x7c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x78);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x3c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x84);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x80);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x40) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x8c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x88);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x44) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x94);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x90);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x48) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x9c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x98);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x4c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xa4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xa0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x50) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xac);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xa8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x54) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xb4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xb0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x58) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xbc);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xb8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x5c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xc4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xc0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x60) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xcc);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 200);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 100) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xd4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xd0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x68) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xdc);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xd8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x6c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xe4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xe0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x70) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xec);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xe8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x74) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xf4);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xf0);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x78) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xfc);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0xf8);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x7c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x104);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x100);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x80) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x10c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x108);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x84) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x114);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x110);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x88) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x11c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x118);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x8c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x124);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x120);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x90) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 300);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x128);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x94) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x134);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x130);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x98) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x13c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x138);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0x9c) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x144);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x140);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xa0) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x14c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x148);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xa4) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x154);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x150);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xa8) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x15c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x158);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xac) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x164);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x160);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xb0) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x16c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x168);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xb4) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x174);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x170);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xb8) = fVar98;
    fVar98 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x17c);
    fVar93 = *(float *)(*(longlong *)(lVar48 + 0x2d8) + 0x178);
    if (fVar98 <= fVar93) {
      fVar98 = fVar93;
    }
    *(float *)(*(longlong *)(lVar48 + 0x2e0) + 0xbc) = fVar98;
  }
  FUN_14017fa70(*(undefined8 *)(param_1 + 0x180));
  if (*(longlong *)(param_1 + 0x428) != *(longlong *)(param_1 + 0x430)) {
    FUN_140015140(param_1 + 0x448);
    plVar47 = *(longlong **)(param_1 + 0x430);
    plVar39 = *(longlong **)(param_1 + 0x428);
    local_res10 = plVar47;
    if (plVar39 != plVar47) {
      do {
        if (*(int *)(param_1 + 0x18c) - 1U < 0x1e) {
LAB_140113243:
          lVar48 = *(longlong *)(param_1 + 0x180);
          if (*(longlong *)(lVar48 + 0x3098) != 0) {
            local_res8 = *(LARGE_INTEGER *)(plVar39 + 4);
            if (*(longlong *)(lVar48 + 0x31d0) == 0) {
              uVar100 = (undefined4)plVar39[1];
              uVar101 = *(undefined4 *)((longlong)plVar39 + 4);
              uVar102 = (undefined4)((ulonglong)hWnd >> 0x20);
              in_stack_fffffffffffffbd0 = in_stack_fffffffffffffbd0 & 0xffffffff00000000;
              uVar26 = FUN_1401ab570(lVar48 + 0x16d0,uVar101,uVar100,1,"_rt_pluginCpuDownsample",
                                     in_stack_fffffffffffffbd0);
              *(undefined8 *)(lVar48 + 0x31d0) = uVar26;
              in_stack_fffffffffffffbd0 = in_stack_fffffffffffffbd0 & 0xffffffff00000000;
              uVar26 = FUN_1401ab570(lVar48 + 0x16d0,uVar101,uVar100,1,"_rt_pluginCpuBuffer1",
                                     in_stack_fffffffffffffbd0);
              hWnd = (HWND)CONCAT44(uVar102,5);
              *(undefined8 *)(lVar48 + 0x31d8) = uVar26;
              in_stack_fffffffffffffbd0 = in_stack_fffffffffffffbd0 & 0xffffffff00000000;
              pcVar99 = "_rt_pluginCpuBuffer2";
              uVar26 = FUN_1401ab570(lVar48 + 0x16d0,uVar101,uVar100,1,"_rt_pluginCpuBuffer2",
                                     in_stack_fffffffffffffbd0);
              *(undefined8 *)(lVar48 + 0x31e0) = uVar26;
              plVar47 = local_res10;
            }
            lVar42 = *(longlong *)(lVar48 + 0x3168);
            if (lVar42 == 0) {
              if (((*(uint *)(lVar48 + 0x128) >> 0xd & 1) == 0) ||
                 (pcVar43 = "materials/util/downsample_quarter_linear.json",
                 *(longlong *)(lVar48 + 0x70) != 0)) {
                pcVar43 = "materials/util/downsample_quarter.json";
              }
              lVar42 = FUN_14014ff70(lVar48 + 0x1640,pcVar43);
              *(longlong *)(lVar48 + 0x3168) = lVar42;
            }
            lVar41 = *(longlong *)(lVar48 + 0x70);
            if (lVar41 == 0) {
              (**(code **)(**(longlong **)(lVar48 + 0x3098) + 8))();
              lVar41 = *(longlong *)(lVar48 + 0x3098);
              lVar42 = *(longlong *)(lVar48 + 0x3168);
            }
            *(undefined8 *)(lVar42 + 0xd0) = *(undefined8 *)(lVar41 + 0x20);
            plVar9 = *(longlong **)(lVar48 + 0x31d0);
            lVar42 = plVar9[1];
            plVar46 = (longlong *)(lVar42 + 0x50);
            *plVar46 = *plVar46 + 8;
            **(longlong **)(lVar42 + 0x50) = (longlong)plVar9;
            (**(code **)(*plVar9 + 0x48))();
            FUN_140155fc0(*(undefined8 *)(lVar48 + 0x3168));
            (**(code **)(**(longlong **)(lVar48 + 0x58) + 8))();
            FUN_140157430(*(undefined8 *)(lVar48 + 0x3168));
            plVar46 = *(longlong **)(lVar48 + 0x31d0);
            *(longlong *)(plVar46[1] + 0x50) = *(longlong *)(plVar46[1] + 0x50) + -8;
            if ((longlong *)**(longlong **)(plVar46[1] + 0x50) == (longlong *)0x0) {
              (**(code **)(*plVar46 + 0x50))(plVar46);
            }
            else {
              (**(code **)(*(longlong *)**(longlong **)(plVar46[1] + 0x50) + 0x48))();
            }
            plVar46 = *(longlong **)(lVar48 + 0x31d8 + (longlong)*(int *)(lVar48 + 0x31e8) * 8);
            (**(code **)(*plVar46 + 0x18))(plVar46,*(undefined8 *)(lVar48 + 0x31d0));
            iVar45 = *(int *)(lVar48 + 0x31e8);
            uVar40 = iVar45 + 1;
            *(uint *)(lVar48 + 0x31e8) = uVar40;
            if (iVar45 == 1) {
              *(undefined4 *)(lVar48 + 0x31e8) = 0;
              uVar40 = 0;
            }
            cVar21 = (**(code **)(**(longlong **)
                                    (*(longlong *)(lVar48 + 0x31d8 + (longlong)(int)uVar40 * 8) +
                                    0x20) + 0x40))();
            if (cVar21 != '\0') {
              (*(code *)plVar39[2])(plVar39[3]);
            }
          }
        }
        else {
          fVar93 = *(float *)((longlong)plVar39 + 0xc) - fVar52;
          *(float *)((longlong)plVar39 + 0xc) = fVar93;
          if (fVar93 <= 0.0) {
            *(float *)((longlong)plVar39 + 0xc) = fVar93 + fVar68;
            goto LAB_140113243;
          }
        }
        plVar39 = plVar39 + 5;
      } while (plVar39 != plVar47);
    }
    FUN_140290ea0(param_1 + 0x448);
  }
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    iVar45 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0xb0))();
    if ((iVar45 + 0x7785fffbU & 0xfffffffd) != 0) goto LAB_140113503;
  }
  FUN_140098760("DXGI device lost in render loop.\n");
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
LAB_140113503:
  (**(code **)(**(longlong **)(param_1 + 0x208) + 0x48))();
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    plVar39 = *(longlong **)(**(longlong **)(param_1 + 0x180) + 0x160);
    for (plVar47 = *(longlong **)(**(longlong **)(param_1 + 0x180) + 0x158); plVar47 != plVar39;
        plVar47 = plVar47 + 1) {
      plVar46 = (longlong *)*plVar47;
      iVar45 = (**(code **)(*plVar46 + 0x60))(plVar46);
      if (iVar45 == 1) {
        lVar48 = *(longlong *)(plVar46[0x93] + 0xd0);
        if ((lVar48 != 0) && ((*(uint *)(lVar48 + 0x1c) >> 2 & 1) != 0)) {
          pfVar33 = *(float **)(lVar48 + 0xb8);
          if (pfVar33 != *(float **)(lVar48 + 0xc0)) {
            iVar45 = *(int *)(lVar48 + 0x9c);
            if ((-1 < iVar45) &&
               ((ulonglong)(longlong)iVar45 <
                (ulonglong)((longlong)*(float **)(lVar48 + 0xc0) - (longlong)pfVar33 >> 5))) {
              pfVar33 = pfVar33 + (longlong)iVar45 * 8;
            }
            fVar93 = *pfVar33 - *(float *)(lVar48 + 0xa0);
            auVar60 = ZEXT416((uint)fVar93);
            if (0.0 < fVar93) goto LAB_1401135c3;
          }
        }
        break;
      }
    }
    auVar60 = ZEXT816(0);
LAB_1401135c3:
    if (fVar70 < *(float *)(param_1 + 400)) {
      auVar60._0_4_ = auVar60._0_4_ / *(float *)(param_1 + 400);
    }
    if (fVar91 <= auVar60._0_4_) {
      auVar60._0_4_ = fVar91;
    }
    Sleep((DWORD)(longlong)(auVar60._0_4_ * DAT_140492944));
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  if (*(int *)(param_1 + 0x18c) == 0) {
    QueryPerformanceCounter(local_378);
  }
  else {
    QueryPerformanceCounter(local_378);
    LVar51 = local_378[0];
    lVar48 = local_300 - (local_378[0].QuadPart - (longlong)local_290);
    if ((lVar48 < 0) || (*(int *)(param_1 + 0x18c) - 1U <= local_3e4)) {
      lVar48 = *(longlong *)(param_1 + 0x168);
      local_3e4 = 0;
    }
    else {
      local_3e4 = local_3e4 + 1;
    }
    DVar37 = (DWORD)((float)(longlong)
                            ((double)lVar48 / (double)(int)(*(int *)(param_1 + 0x18c) - local_3e4) -
                            (double)(local_378[0].QuadPart - (longlong)local_290)) /
                    ((float)*(longlong *)(param_1 + 0x168) / DAT_140492944));
    if (0 < (int)DVar37) {
      Sleep(DVar37);
    }
    QueryPerformanceCounter(local_378);
    local_290.s = local_378[0].s;
    local_300 = lVar48 + (LVar51.QuadPart - (longlong)local_378[0]);
  }
  goto LAB_140110cde;
LAB_1401136f2:
  plVar47 = *(longlong **)(param_1 + 0x180);
  *(uint *)(plVar47 + 0x25) = *(uint *)(plVar47 + 0x25) | 0xc000000;
  plVar47[0x2ef] = 0;
  if ((longlong *)plVar47[0x308] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar47[0x308] + 0x10))();
  }
  puVar28 = (undefined8 *)*plVar47;
  if (puVar28 != (undefined8 *)0x0) {
    (**(code **)*puVar28)(puVar28,1);
  }
  puVar28 = (undefined8 *)plVar47[0xb];
  *plVar47 = 0;
  if (puVar28 != (undefined8 *)0x0) {
    (**(code **)*puVar28)(puVar28,1);
  }
  plVar47[0x614] = 0;
  plVar47[0x615] = 0;
  plVar47[0x616] = 0;
  plVar47[0xb] = 0;
  plVar47[0x612] = 0;
  plVar47[0x613] = 0;
  plVar47[0x61f] = 0;
  plVar47[0x620] = 0;
  plVar47[0x617] = 0;
  plVar47[0x618] = 0;
  plVar47[0x619] = 0;
  plVar47[0x61a] = 0;
  plVar47[0x61b] = 0;
  plVar47[0x61c] = 0;
  plVar47[0x61d] = 0;
  plVar47[0x61e] = 0;
  plVar47[0x2a2] = 0;
  plVar47[0x63a] = 0;
  plVar47[0x63b] = 0;
  plVar47[0x63c] = 0;
  *(undefined4 *)(plVar47 + 0x63d) = 0;
  puVar28 = (undefined8 *)plVar47[0x2db];
  for (puVar32 = (undefined8 *)*puVar28; puVar32 != puVar28; puVar32 = (undefined8 *)*puVar32) {
    puVar38 = (undefined8 *)puVar32[6];
    if (puVar38 != (undefined8 *)0x0) {
      (**(code **)*puVar38)(puVar38,1);
    }
  }
  FUN_140151e70(plVar47 + 0x2da);
  FUN_14017eb50(plVar47);
  *(uint *)(plVar47 + 0x25) = *(uint *)(plVar47 + 0x25) & 0xf3ffffff;
  lVar48 = *(longlong *)(param_1 + 0x180);
  if (lVar48 != 0) {
    FUN_140017240(lVar48 + 0x3128);
    FUN_14017d730(lVar48 + 0x10);
    thunk_FUN_14028af80(lVar48,0x31f0);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_14012b820(param_1 + 0x1e8);
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))();
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400fb390(param_1 + 0x2c8);
  }
  uVar34 = *(ulonglong *)(param_1 + 0x298);
  if (uVar34 != 0) {
    plVar47 = *(longlong **)(param_1 + 0x290);
    if (uVar34 < *(ulonglong *)(param_1 + 0x2c0) >> 3) {
      plVar39 = (longlong *)*plVar47;
      local_300 = (longlong)plVar39;
      if (plVar39 != plVar47) {
        local_res10 = (longlong *)plVar39[1];
        LVar51 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0x2a0))->QuadPart;
        local_res8 = LVar51;
        lVar48 = FUN_1400398f0(param_1 + 0x288,plVar39 + 2);
        local_res18 = (longlong *)(lVar48 * 0x10);
        local_res20 = *(longlong *)((longlong)local_res18 + LVar51.QuadPart);
        local_298 = *(longlong **)((longlong)local_res18 + LVar51.QuadPart + 8U);
        do {
          plVar46 = (longlong *)*plVar39;
          FUN_140017240(plVar39 + 2);
          uVar26 = thunk_FUN_14028af80(plVar39,0x38);
          *(longlong *)(param_1 + 0x298) = *(longlong *)(param_1 + 0x298) + -1;
          if (plVar39 == local_298) {
            plVar39 = local_res10;
            if (local_res20 == local_300) {
              *(longlong **)((longlong)local_res18 + LVar51.QuadPart) = plVar47;
              plVar39 = plVar47;
            }
            *(longlong **)((longlong)local_res18 + LVar51.QuadPart + 8U) = plVar39;
            if (plVar46 != plVar47) goto LAB_1401139e2;
            goto LAB_14011399e;
          }
          plVar39 = plVar46;
        } while (plVar46 != plVar47);
        if (local_res20 == local_300) {
          *(longlong **)((longlong)local_res18 + LVar51.QuadPart) = plVar46;
        }
LAB_14011399e:
        *local_res10 = (longlong)plVar46;
        plVar46[1] = (longlong)local_res10;
      }
    }
    else {
      FUN_140035290(uVar34,plVar47);
      *(undefined8 *)*(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x290);
      *(longlong *)(*(longlong *)(param_1 + 0x290) + 8) = *(longlong *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x298) = 0;
      local_res8 = *(LARGE_INTEGER *)(param_1 + 0x290);
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0x2a8),&local_res8);
    }
  }
LAB_140113ad4:
  if ((*(uint *)(param_1 + 0x1b8) >> 0x1e & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x1c8),(RECT *)0x0,1);
    iVar45 = PeekMessageW(&local_270,(HWND)0x0,0,0,3);
    while (iVar45 != 0) {
      TranslateMessage(&local_270);
      DispatchMessageW(&local_270);
      iVar45 = PeekMessageW(&local_270,(HWND)0x0,0,0,3);
    }
  }
  BVar23 = IsWindow(*(HWND *)(param_1 + 0x1c8));
  if (BVar23 != 0) {
    SetWindowLongPtrW(*(HWND *)(param_1 + 0x1c8),-0x15,0);
LAB_140113b81:
    PostMessageW(*(HWND *)(param_1 + 0x1c8),0x10,0,0);
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  return;
}

