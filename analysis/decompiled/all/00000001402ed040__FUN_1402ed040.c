// Function: FUN_1402ed040
// Addr: 1402ed040
// Size: 399 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1402ed040(uint param_1,longlong param_2,int *param_3,undefined8 param_4,short param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9,
                       undefined8 *param_10,undefined8 param_11)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  UINT fuLoad;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  HWND hWnd;
  int iVar9;
  RECT *pRVar10;
  char cVar11;
  byte bVar12;
  LSTATUS LVar13;
  int iVar14;
  DWORD DVar15;
  HICON pHVar16;
  longlong lVar17;
  RECT *pRVar18;
  RECT *hmenu;
  longlong lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  HMODULE hModule;
  FARPROC pFVar22;
  uint uVar23;
  RECT *pRVar24;
  RECT *pRVar25;
  undefined *puVar26;
  byte bVar27;
  ulonglong uVar28;
  uint uVar29;
  HKEY unaff_RSI;
  ulonglong uVar30;
  char *pcVar31;
  IMAGE_DATA_DIRECTORY IVar32;
  byte *pbVar33;
  byte *pbVar34;
  HMENU unaff_R12;
  RECT *unaff_R13;
  undefined8 uVar35;
  
  iVar14 = *param_3;
  uVar30 = (ulonglong)iVar14;
  pbVar33 = (byte *)((ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) +
                    *(longlong *)(param_2 + 8));
  bVar1 = pbVar33[3];
  if (2 < (*pbVar33 & 7)) {
    if ((bVar1 & 0x1f) != 0) {
      uVar29 = 0;
      pbVar33 = pbVar33 + (ulonglong)(bVar1 & 0x1f) + 4;
      pbVar34 = pbVar33;
      uVar23 = uVar29;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar33 = pbVar34 + 3;
          if (*pbVar34 >> 3 != 0) {
            pbVar33 = pbVar34 + (ulonglong)(uint)(*pbVar34 >> 3) + 6;
          }
          uVar23 = uVar23 + 1;
          pbVar34 = pbVar33;
        } while (uVar23 < bVar1 >> 5);
      }
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar12 = *pbVar33;
          bVar27 = bVar12;
          if (((bVar12 < 4) || (bVar27 = bVar12 & 0xf, (byte)(bVar27 - 8) < 3)) ||
             (bVar27 = bVar12 & 7, (byte)(bVar27 - 4) < 4)) {
            if (bVar27 == 0) break;
            if (3 < bVar12) {
              bVar27 = bVar12 & 0xf;
              if ((2 < (byte)((bVar12 & 0xf) - 8)) &&
                 (bVar27 = bVar12 & 7, 3 < (byte)((bVar12 & 7) - 4))) goto LAB_1402ed148;
              bVar12 = bVar27;
              if (0x20 < bVar12) goto switchD_1402ed16c_caseD_4;
            }
          }
          else {
LAB_1402ed148:
            if ((bVar12 & 0x3f) != 0x20) goto switchD_1402ed16c_caseD_4;
            bVar12 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((longlong)&UINT_1402ed1e4 + (ulonglong)bVar12)) {
          case 0:
            lVar17 = 2;
            break;
          case 1:
            lVar17 = 5;
            break;
          case 2:
            lVar17 = 3;
            break;
          case 3:
            lVar17 = 1;
            break;
          case 4:
switchD_1402ed16c_caseD_4:
            FUN_1402ed010();
            pcVar2 = (code *)swi(3);
            uVar30 = (*pcVar2)();
            return uVar30;
          case 5:
            pcVar31 = "core_tray_pause";
            if ((param_1 & 1) != 0) {
              pcVar31 = (char *)0x40474b40;
            }
            FUN_140097640(&DAT_1404e6d80,&UNK_140000218,pcVar31);
            FUN_140097640(&DAT_1404e6d80,0x140000068);
            UNK_140000080._64_8_ = 0;
            UNK_140000080._72_8_ = 0;
            UNK_140000080._80_8_ = 0;
            UNK_140000080._88_8_ = 0;
            UNK_140000080._96_8_ = 0;
            UNK_140000080._104_8_ = 0;
            UNK_140000080._112_8_ = 0;
            UNK_140000080._120_8_ = 0;
            pRRam000000013fffff98 = (RECT *)0x0;
            pRRam000000013fffffa0 = (RECT *)0x0;
            UNK_140000080._48_4_ = 0x50;
            UNK_140000080._52_4_ = 0xc0;
            pRRam000000013fffffa8 = unaff_R13;
            UNK_140000080._56_8_ = unaff_R13;
            cVar11 = FUN_140015180(10,0);
            if ((cVar11 == '\0') ||
               (LVar13 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize"
                                       ,0,0xf003f,(PHKEY)&stack0x00000018), LVar13 != 0)) {
LAB_140020244:
              uVar35 = 0xcc;
            }
            else {
              iRam00000001400006b8 = 4;
              LVar13 = RegQueryValueExW(unaff_RSI,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                                        &UNK_140000080.field_0x28,(LPDWORD)&iRam00000001400006b8);
              if ((LVar13 != 0) || (UNK_140000080._40_4_ == iVar14)) {
                RegCloseKey(unaff_RSI);
                goto LAB_140020244;
              }
              uVar35 = 0x33;
              RegCloseKey(unaff_RSI);
            }
            fuLoad = (UINT)unaff_R13;
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)((ulonglong)((byte)param_1 & 1) | 0x96),1,
                                 0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            UNK_140000080._104_8_ = &UNK_140000218;
            if (7 < _UNK_140000230) {
              UNK_140000080._104_8_ = _UNK_140000218;
            }
            SetMenuItemInfoW(unaff_R12,0x9c56,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,
                                 (LPCWSTR)((ulonglong)((byte)(param_1 >> 6) & 1) | 0x9a),1,0x10,0x10
                                 ,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            uVar3._2_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2a];
            uVar3._3_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2b];
            uVar3._4_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2c];
            uVar3._5_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2d];
            uVar3._6_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2e];
            uVar3._7_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x2f];
            uVar3._0_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x28];
            uVar3._1_1_ = IMAGE_DOS_HEADER_140000000.e_program[0x29];
            UNK_140000080._104_8_ = 0x140000068;
            if (7 < (ulonglong)UNK_140000080._0_8_) {
              UNK_140000080._104_8_ = uVar3;
            }
            SetMenuItemInfoW(unaff_R12,0x9c5f,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            UNK_140000080._52_4_ = 0x80;
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x98,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c4d,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x99,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c5c,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9c,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c59,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9d,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c61,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9f,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c4a,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9e,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c52,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa0,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c5b,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            pHVar16 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa1,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar16,uVar35);
            FUN_1400302d0(&pRRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW(unaff_R12,0x9c53,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar16);
            FUN_140084dd0(&UNK_140000238,0);
            FUN_140084dd0(&UNK_140000170,0);
            _UNK_1400001d8 = CONCAT31(_UNK_1400001d9,(char)iVar14);
            uVar23 = _UNK_1400001d8 & 0xfffffeff;
            _UNK_1400001e0 = 0;
            _UNK_1400001e8 = 0;
            _UNK_1400001d8 = uVar23;
            _UNK_1400001f0 = unaff_R13;
            uVar35 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar17 = FUN_140087490(uVar35,"wallpaperconfigrecent","");
            if (lVar17 != 0) {
              uVar35 = FUN_140086de0(uVar35,"wallpaperconfigrecent","");
              FUN_140085520(&UNK_140000238,uVar35);
            }
            uVar35 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar17 = FUN_140087490(uVar35,"playlists","");
            if (lVar17 != 0) {
              uVar35 = FUN_140086de0(uVar35,"playlists","");
              FUN_140085520(&UNK_140000170,uVar35);
            }
            uVar35 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar17 = FUN_140087490(uVar35,"profiles","");
            if (lVar17 != 0) {
              uVar35 = FUN_140086de0(uVar35,"profiles","");
              FUN_140085520(&UNK_1400001d0,uVar35);
              uVar23 = _UNK_1400001d8;
            }
            if (((char)uVar23 != '\x06') || (iVar14 = FUN_1400863a0(), iVar14 == 0))
            goto LAB_140020ad5;
            pRVar18 = (RECT *)CreatePopupMenu();
            uVar23 = uVar23 & 0xff;
            uVar28 = (ulonglong)unaff_R13 & 0xffffffff;
            uRam000000013fffffd8 = 0;
            uRam000000013fffffd0 = 0x50;
            uRam000000013fffffe0 = 0;
            pRRam000000013fffffe8 = (RECT *)0x0;
            uRam000000013ffffff0 = 0;
            uRam000000013ffffff8 = 0;
            IMAGE_DOS_HEADER_140000000.e_magic[0] = '\0';
            IMAGE_DOS_HEADER_140000000.e_magic[1] = '\0';
            IMAGE_DOS_HEADER_140000000.e_cblp = 0;
            IMAGE_DOS_HEADER_140000000.e_cp = 0;
            IMAGE_DOS_HEADER_140000000.e_crlc = 0;
            IMAGE_DOS_HEADER_140000000.e_cparhdr = 0;
            IMAGE_DOS_HEADER_140000000.e_minalloc = 0;
            IMAGE_DOS_HEADER_140000000.e_maxalloc = 0;
            IMAGE_DOS_HEADER_140000000.e_ss = 0;
            IMAGE_DOS_HEADER_140000000.e_sp = 0;
            IMAGE_DOS_HEADER_140000000.e_csum = 0;
            IMAGE_DOS_HEADER_140000000.e_ip = 0;
            IMAGE_DOS_HEADER_140000000.e_cs = 0;
            IMAGE_DOS_HEADER_140000000.e_lfarlc = 0;
            IMAGE_DOS_HEADER_140000000.e_ovno = 0;
            IMAGE_DOS_HEADER_140000000.e_res_4_[0] = 0;
            IMAGE_DOS_HEADER_140000000.e_res_4_[1] = 0;
            if (((uVar23 == 6) || (uVar23 == 7)) && (_UNK_1400001d0 != (undefined8 *)0x0)) {
              bVar8 = false;
              pRVar25 = *(RECT **)*_UNK_1400001d0;
            }
            else {
              bVar8 = true;
              pRVar25 = unaff_R13;
            }
            if (((uVar23 == 6) || (uVar23 == 7)) && (_UNK_1400001d0 != (undefined8 *)0x0)) {
              bVar7 = false;
              hmenu = (RECT *)*_UNK_1400001d0;
            }
            else {
              bVar7 = true;
              hmenu = unaff_R13;
            }
            goto LAB_140020906;
          }
          pbVar33 = pbVar33 + lVar17;
          uVar29 = uVar29 + 1;
        } while (uVar29 < (bVar1 & 0x1f));
      }
    }
  }
  return uVar30 & 0xfffffffffffffff8;
LAB_140020906:
  bVar6 = bVar7;
  if (!bVar8) {
    bVar6 = pRVar25 == hmenu;
  }
  if (bVar6) goto LAB_140020a42;
  FUN_140085090(&UNK_140000140,pRVar25 + 3);
  lVar17 = FUN_140086de0(&UNK_140000140,&DAT_1404748b8,&DAT_1404748bc);
  if (*(char *)(lVar17 + 8) == '\x04') {
    uVar30 = (ulonglong)((uint)uVar30 | 1);
    FUN_140085cc0(lVar17,&UNK_140000120);
    FUN_140005880(&param_10);
  }
  else {
    param_10 = (undefined8 *)0x0;
    param_11 = 0;
    pRRam000000013fffff88 = unaff_R13;
    pRRam000000013fffff90 = unaff_R13;
    FUN_140016170(&param_10,&DAT_140474bc4,2);
  }
  if ((uVar30 & 1) != 0) {
    uVar30 = (ulonglong)((uint)uVar30 & 0xfffffffe);
    FUN_140017240(&UNK_140000120);
  }
  uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
  IMAGE_DOS_HEADER_140000000._8_8_ = &param_10;
  if ((RECT *)0x7 < pRRam000000013fffff90) {
    IMAGE_DOS_HEADER_140000000._8_8_ = param_10;
  }
  uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,(int)uVar28 + 0x8cae);
  InsertMenuItemW((HMENU)pRVar18,0,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
  uVar23 = (int)uVar28 + 1;
  uVar28 = (ulonglong)uVar23;
  if (0x3e6 < (int)uVar23) goto LAB_140020a2c;
  if ((RECT *)0x7 < pRRam000000013fffff90) {
    FUN_140016a90(&param_10,param_10);
  }
  FUN_140085440(&UNK_140000140);
  FUN_1400175a0(&stack0x00000018);
  goto LAB_140020906;
LAB_140020a2c:
  FUN_140016770(&param_10);
  FUN_140085440(&UNK_140000140);
LAB_140020a42:
  FUN_140097640(&DAT_1404e6d80,&param_6,"core_tray_saved_profiles");
  uRam000000013fffffd0 = CONCAT44(0x46,(undefined4)uRam000000013fffffd0);
  IMAGE_DOS_HEADER_140000000._8_8_ = &param_6;
  if (7 < param_9) {
    IMAGE_DOS_HEADER_140000000._8_8_ = (undefined8 *)CONCAT62(param_6._2_6_,(undefined2)param_6);
  }
  pRRam000000013fffffe8 = pRVar18;
  InsertMenuItemW(unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
  if (7 < param_9) {
    lVar19 = CONCAT62(param_6._2_6_,(undefined2)param_6);
    uVar28 = param_9 * 2 + 2;
    lVar17 = lVar19;
    if (0xfff < uVar28) {
      lVar17 = *(longlong *)(lVar19 + -8);
      if (0x1f < (lVar19 - lVar17) - 8U) goto LAB_1400219e4;
      uVar28 = param_9 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar17,uVar28);
  }
LAB_140020ad5:
  uVar23 = _UNK_140000178;
  hmenu = (RECT *)(ulonglong)_UNK_140000178;
  if (((char)_UNK_140000178 == '\x06') && (iVar14 = FUN_1400863a0(&UNK_140000170), iVar14 != 0)) {
    pRVar18 = (RECT *)CreatePopupMenu();
    uVar23 = uVar23 & 0xff;
    iVar14 = 0;
    uRam000000013fffffd8 = 0;
    uRam000000013fffffd0 = 0x50;
    uRam000000013fffffe0 = 0;
    pRRam000000013fffffe8 = (RECT *)0x0;
    uRam000000013ffffff0 = 0;
    uRam000000013ffffff8 = 0;
    IMAGE_DOS_HEADER_140000000.e_magic[0] = '\0';
    IMAGE_DOS_HEADER_140000000.e_magic[1] = '\0';
    IMAGE_DOS_HEADER_140000000.e_cblp = 0;
    IMAGE_DOS_HEADER_140000000.e_cp = 0;
    IMAGE_DOS_HEADER_140000000.e_crlc = 0;
    IMAGE_DOS_HEADER_140000000.e_cparhdr = 0;
    IMAGE_DOS_HEADER_140000000.e_minalloc = 0;
    IMAGE_DOS_HEADER_140000000.e_maxalloc = 0;
    IMAGE_DOS_HEADER_140000000.e_ss = 0;
    IMAGE_DOS_HEADER_140000000.e_sp = 0;
    IMAGE_DOS_HEADER_140000000.e_csum = 0;
    IMAGE_DOS_HEADER_140000000.e_ip = 0;
    IMAGE_DOS_HEADER_140000000.e_cs = 0;
    IMAGE_DOS_HEADER_140000000.e_lfarlc = 0;
    IMAGE_DOS_HEADER_140000000.e_ovno = 0;
    IMAGE_DOS_HEADER_140000000.e_res_4_[0] = 0;
    IMAGE_DOS_HEADER_140000000.e_res_4_[1] = 0;
    if (((uVar23 == 6) || (uVar23 == 7)) && (_UNK_140000170 != (undefined8 *)0x0)) {
      bVar8 = false;
      hmenu = *(RECT **)*_UNK_140000170;
    }
    else {
      hmenu = (RECT *)0x0;
      bVar8 = true;
    }
    if (((uVar23 == 6) || (uVar23 == 7)) && (_UNK_140000170 != (undefined8 *)0x0)) {
      pRVar25 = (RECT *)*_UNK_140000170;
      bVar7 = false;
      iVar14 = 0;
    }
    else {
      pRVar25 = (RECT *)0x0;
      bVar7 = true;
    }
    while( true ) {
      bVar6 = bVar7;
      if (!bVar8) {
        bVar6 = hmenu == pRVar25;
      }
      if (bVar6) goto LAB_140020d94;
      FUN_140085090(&UNK_140000140,hmenu + 3);
      lVar17 = FUN_140086de0(&UNK_140000140,&DAT_1404748b8,&DAT_1404748bc);
      if (*(char *)(lVar17 + 8) == '\x04') {
        uVar30 = (ulonglong)((uint)uVar30 | 2);
        FUN_140085cc0(lVar17,&UNK_1400001f8);
        FUN_140005880(&pRRam000000013fffffb0);
      }
      else {
        lRam000000013fffffc0 = 0;
        uRam000000013fffffc8 = 0;
        pRRam000000013fffffb0 = (RECT *)0x0;
        pRRam000000013fffffb8 = (RECT *)0x0;
        FUN_140016170(&pRRam000000013fffffb0,&DAT_140474bc4,2);
      }
      if ((uVar30 & 2) != 0) {
        uVar30 = 0;
        if (0xf < CONCAT44(_UNK_140000214,_UNK_140000210)) {
          lVar19 = CONCAT44(_UNK_1400001fc,_UNK_1400001f8);
          lVar17 = lVar19;
          if ((0xfff < CONCAT44(_UNK_140000214,_UNK_140000210) + 1) &&
             (lVar17 = *(longlong *)(lVar19 + -8), 0x1f < (lVar19 - lVar17) - 8U))
          goto LAB_1400219e4;
          thunk_FUN_14028af80(lVar17);
        }
      }
      uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
      IMAGE_DOS_HEADER_140000000._8_8_ = (RECT *)&pRRam000000013fffffb0;
      if (7 < uRam000000013fffffc8) {
        IMAGE_DOS_HEADER_140000000._8_8_ = pRRam000000013fffffb0;
      }
      uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,iVar14 + 0x88c6);
      InsertMenuItemW((HMENU)pRVar18,0,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
      iVar14 = iVar14 + 1;
      if (0x3e6 < iVar14) break;
      if (7 < uRam000000013fffffc8) {
        uVar28 = uRam000000013fffffc8 * 2 + 2;
        pRVar24 = pRRam000000013fffffb0;
        if (0xfff < uVar28) {
          pRVar24 = *(RECT **)&pRRam000000013fffffb0[-1].right;
          if (0x1f < (ulonglong)((longlong)pRRam000000013fffffb0 + (-8 - (longlong)pRVar24)))
          goto LAB_1400219e4;
          uVar28 = uRam000000013fffffc8 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pRVar24,uVar28);
      }
      FUN_140085440(&UNK_140000140);
      pRVar24 = *(RECT **)(hmenu + 1);
      if (*(char *)((longlong)&pRVar24[1].right + 1) == '\0') {
        cVar11 = *(char *)(*(longlong *)pRVar24 + 0x19);
        hmenu = pRVar24;
        while (cVar11 == '\0') {
          hmenu = *(RECT **)hmenu;
          cVar11 = *(char *)(*(longlong *)hmenu + 0x19);
        }
      }
      else {
        cVar11 = *(char *)((longlong)&(*(RECT **)&hmenu->right)[1].right + 1);
        pRVar10 = *(RECT **)&hmenu->right;
        pRVar24 = hmenu;
        while ((hmenu = pRVar10, cVar11 == '\0' && (pRVar24 == *(RECT **)(hmenu + 1)))) {
          cVar11 = *(char *)((longlong)&(*(RECT **)&hmenu->right)[1].right + 1);
          pRVar10 = *(RECT **)&hmenu->right;
          pRVar24 = hmenu;
        }
      }
    }
    if (7 < uRam000000013fffffc8) {
      uVar30 = uRam000000013fffffc8 * 2 + 2;
      pRVar25 = pRRam000000013fffffb0;
      if (0xfff < uVar30) {
        pRVar25 = *(RECT **)&pRRam000000013fffffb0[-1].right;
        if (0x1f < (ulonglong)((longlong)pRRam000000013fffffb0 + (-8 - (longlong)pRVar25)))
        goto LAB_1400219e4;
        uVar30 = uRam000000013fffffc8 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pRVar25,uVar30);
    }
    lRam000000013fffffc0 = 0;
    pRRam000000013fffffb0 = (RECT *)((ulonglong)pRRam000000013fffffb0 & 0xffffffffffff0000);
    uRam000000013fffffc8 = 7;
    FUN_140085440(&UNK_140000140);
LAB_140020d94:
    FUN_140097640(&DAT_1404e6d80,&param_6,"core_tray_saved_playlists");
    unaff_R12 = _UNK_1400001c0;
    IMAGE_DOS_HEADER_140000000._8_8_ = &param_6;
    if (7 < param_9) {
      IMAGE_DOS_HEADER_140000000._8_8_ = (undefined8 *)CONCAT62(param_6._2_6_,(undefined2)param_6);
    }
    uRam000000013fffffd0 = CONCAT44(0x46,(undefined4)uRam000000013fffffd0);
    pRRam000000013fffffe8 = pRVar18;
    InsertMenuItemW(_UNK_1400001c0,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
    if (7 < param_9) {
      lVar19 = CONCAT62(param_6._2_6_,(undefined2)param_6);
      uVar30 = param_9 * 2 + 2;
      lVar17 = lVar19;
      if (0xfff < uVar30) {
        lVar17 = *(longlong *)(lVar19 + -8);
        if (0x1f < (lVar19 - lVar17) - 8U) goto LAB_1400219e4;
        uVar30 = param_9 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar17,uVar30);
    }
    unaff_R13 = (RECT *)0x0;
  }
  if ((IMAGE_NT_HEADERS64_140000240.Signature[0] == '\x06') &&
     (iVar14 = FUN_1400863a0(&UNK_140000238), iVar14 != 0)) {
    hmenu = (RECT *)CreatePopupMenu();
    uRam000000013fffffd8 = 0;
    uRam000000013fffffd0 = 0x50;
    uRam000000013fffffe0 = 0;
    pRRam000000013fffffe8 = (RECT *)0x0;
    uRam000000013ffffff0 = 0;
    uRam000000013ffffff8 = 0;
    IMAGE_DOS_HEADER_140000000.e_magic[0] = '\0';
    IMAGE_DOS_HEADER_140000000.e_magic[1] = '\0';
    IMAGE_DOS_HEADER_140000000.e_cblp = 0;
    IMAGE_DOS_HEADER_140000000.e_cp = 0;
    IMAGE_DOS_HEADER_140000000.e_crlc = 0;
    IMAGE_DOS_HEADER_140000000.e_cparhdr = 0;
    IMAGE_DOS_HEADER_140000000.e_minalloc = 0;
    IMAGE_DOS_HEADER_140000000.e_maxalloc = 0;
    IMAGE_DOS_HEADER_140000000.e_ss = 0;
    IMAGE_DOS_HEADER_140000000.e_sp = 0;
    IMAGE_DOS_HEADER_140000000.e_csum = 0;
    IMAGE_DOS_HEADER_140000000.e_ip = 0;
    IMAGE_DOS_HEADER_140000000.e_cs = 0;
    IMAGE_DOS_HEADER_140000000.e_lfarlc = 0;
    IMAGE_DOS_HEADER_140000000.e_ovno = 0;
    IMAGE_DOS_HEADER_140000000.e_res_4_[0] = 0;
    IMAGE_DOS_HEADER_140000000.e_res_4_[1] = 0;
    pRVar18 = hmenu;
    iVar14 = FUN_1400863a0(&UNK_140000238);
    iVar14 = iVar14 + -1;
    if (-1 < iVar14) {
      iRam00000001400006b8 = 1;
      do {
        uVar35 = FUN_140086540(&UNK_140000238,iVar14);
        FUN_140085090(&UNK_140000140,uVar35);
        lVar17 = FUN_140086de0(&UNK_140000140,"title","");
        if (((*(char *)(lVar17 + 8) == '\x04') &&
            (lVar17 = FUN_140086de0(&UNK_140000140,"config",""), *(char *)(lVar17 + 8) == '\a')) &&
           (lVar17 = FUN_140086de0(lVar17,"selectedwallpapers",""), *(char *)(lVar17 + 8) == '\a'))
        {
          bVar8 = false;
          FUN_140088360(lVar17,&pRRam000000013fffffb0);
          pRVar24 = pRRam000000013fffffb8;
          pRVar25 = pRRam000000013fffffb0;
          for (hmenu = pRRam000000013fffffb0; hmenu != pRVar24; hmenu = hmenu + 2) {
            FUN_140016fc0(0x140000048,hmenu);
            lVar19 = 0x140000048;
            if (0xf < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar19 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                                IMAGE_DOS_HEADER_140000000.e_program._8_2_);
            }
            lVar19 = FUN_140086de0(lVar17,lVar19,
                                   IMAGE_DOS_HEADER_140000000.e_program._24_8_ + lVar19);
            if ((*(char *)(lVar19 + 8) == '\a') &&
               (lVar19 = FUN_140086de0(lVar19,&DAT_140473b68,&DAT_140473b6c),
               *(char *)(lVar19 + 8) == '\x04')) {
              uVar35 = FUN_140085cc0(lVar19,&UNK_140000120);
              puVar20 = (undefined4 *)FUN_140005880(0x140000260,uVar35);
              _UNK_1400001f8 = *puVar20;
              _UNK_1400001fc = puVar20[1];
              _UNK_140000200 = puVar20[2];
              _UNK_140000204 = puVar20[3];
              _UNK_140000208 = puVar20[4];
              _UNK_14000020c = puVar20[5];
              _UNK_140000210 = puVar20[6];
              _UNK_140000214 = puVar20[7];
              *(undefined8 *)(puVar20 + 4) = 0;
              *(undefined8 *)(puVar20 + 6) = 7;
              *(undefined2 *)puVar20 = 0;
              if (7 < (ulonglong)IMAGE_NT_HEADERS64_140000240.OptionalHeader._32_8_) {
                uVar30 = IMAGE_NT_HEADERS64_140000240.OptionalHeader._32_8_ * 2 + 2;
                lVar19 = IMAGE_NT_HEADERS64_140000240.OptionalHeader._8_8_;
                if (0xfff < uVar30) {
                  lVar19 = *(longlong *)(IMAGE_NT_HEADERS64_140000240.OptionalHeader._8_8_ + -8);
                  if (0x1f < (IMAGE_NT_HEADERS64_140000240.OptionalHeader._8_8_ - lVar19) - 8U)
                  goto LAB_1400219e4;
                  uVar30 = IMAGE_NT_HEADERS64_140000240.OptionalHeader._32_8_ * 2 + 0x29;
                }
                thunk_FUN_14028af80(lVar19,uVar30);
              }
              if (0xf < _UNK_140000138) {
                uVar30 = _UNK_140000138 + 1;
                lVar19 = _UNK_140000120;
                if (0xfff < uVar30) {
                  lVar19 = *(longlong *)(_UNK_140000120 + -8);
                  if (0x1f < (_UNK_140000120 - lVar19) - 8U) goto LAB_1400219e4;
                  uVar30 = _UNK_140000138 + 0x28;
                }
                thunk_FUN_14028af80(lVar19,uVar30);
              }
              if ((bVar8) || (cVar11 = FUN_140018f30(&UNK_1400001f8), cVar11 != '\0')) {
                bVar8 = true;
              }
              FUN_140016770(&UNK_1400001f8);
            }
            if (0xf < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar5 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                               IMAGE_DOS_HEADER_140000000.e_program._8_2_);
              uVar30 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ + 1;
              lVar19 = lVar5;
              if (0xfff < uVar30) {
                lVar19 = *(longlong *)(lVar5 + -8);
                if (0x1f < (lVar5 - lVar19) - 8U) goto LAB_1400219e4;
                uVar30 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ + 0x28;
              }
              thunk_FUN_14028af80(lVar19,uVar30);
            }
          }
          pRVar10 = pRVar25;
          if (pRVar25 != (RECT *)0x0) {
            while (pRVar10 != pRVar24) {
              FUN_140017240(pRVar10);
              hmenu = pRVar10 + 2;
              pRVar10 = hmenu;
            }
            uVar30 = lRam000000013fffffc0 - (longlong)pRVar25 & 0xffffffffffffffe0;
            if (0xfff < uVar30) {
              if (0x1f < (ulonglong)
                         ((longlong)pRVar25 + (-8 - (longlong)*(RECT **)&pRVar25[-1].right)))
              goto LAB_1400219e4;
              uVar30 = uVar30 + 0x27;
              pRVar25 = *(RECT **)&pRVar25[-1].right;
            }
            thunk_FUN_14028af80(pRVar25,uVar30);
          }
          hmenu = pRVar18;
          pRVar18 = hmenu;
          if (bVar8) {
            lVar17 = FUN_140086de0(&UNK_140000140,"playlist","");
            _UNK_140000118 = 7;
            _UNK_140000110 = 0;
            UNK_140000080._136_8_ = 0;
            UNK_140000080._128_8_ = 0;
            pRVar18 = hmenu;
            if ((*(char *)(lVar17 + 8) == '\x05') &&
               (cVar11 = FUN_140086300(lVar17), pRVar18 = hmenu, cVar11 != '\0')) {
              uVar35 = FUN_140097640(&DAT_1404e6d80,&UNK_140000120,"core_tray_playlist_prefix");
              puVar21 = (undefined8 *)FUN_1400164d0(uVar35,&DAT_140474c1c,1);
              uVar35 = *puVar21;
              uVar3 = puVar21[1];
              uVar4 = puVar21[2];
              uVar30 = puVar21[3];
              puVar21[2] = 0;
              puVar21[3] = 7;
              *(undefined2 *)puVar21 = 0;
              pRVar18 = hmenu;
              if (7 < _UNK_140000118) {
                FUN_140016a90(0x140000100,UNK_140000080._128_8_);
                pRVar18 = hmenu;
              }
              UNK_140000080._128_8_ = uVar35;
              UNK_140000080._136_8_ = uVar3;
              _UNK_140000110 = uVar4;
              _UNK_140000118 = uVar30;
              FUN_140016770(&UNK_140000120);
            }
            FUN_14000df80(0x140000280);
            uVar35 = FUN_140086de0(&UNK_140000140,"title","");
            uVar35 = FUN_140085cc0(uVar35,&UNK_140000120);
            hmenu = (RECT *)FUN_140005880(0x140000048,uVar35);
            iVar9 = iRam00000001400006b8;
            uVar35 = FUN_14000ea80(0x140000290,iRam00000001400006b8);
            uVar35 = FUN_1400300a0(uVar35,&DAT_140474c3c);
            uVar35 = FUN_14000d440(uVar35,0x140000100);
            FUN_14000d440(uVar35,hmenu);
            if (7 < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar19 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                                IMAGE_DOS_HEADER_140000000.e_program._8_2_);
              uVar30 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ * 2 + 2;
              lVar17 = lVar19;
              if (0xfff < uVar30) {
                lVar17 = *(longlong *)(lVar19 + -8);
                if (0x1f < (lVar19 - lVar17) - 8U) goto LAB_1400219e4;
                uVar30 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ * 2 + 0x29;
              }
              thunk_FUN_14028af80(lVar17,uVar30);
            }
            IMAGE_DOS_HEADER_140000000.e_program[0x18] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x19] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1a] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1b] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1c] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1d] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1e] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x1f] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x20] = 7;
            IMAGE_DOS_HEADER_140000000.e_program[0x21] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x22] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x23] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x24] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x25] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x26] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[0x27] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[8] = 0;
            IMAGE_DOS_HEADER_140000000.e_program[9] = 0;
            if (0xf < _UNK_140000138) {
              uVar30 = _UNK_140000138 + 1;
              lVar17 = _UNK_140000120;
              if (0xfff < uVar30) {
                lVar17 = *(longlong *)(_UNK_140000120 + -8);
                if (0x1f < (_UNK_140000120 - lVar17) - 8U) goto LAB_1400219e4;
                uVar30 = _UNK_140000138 + 0x28;
              }
              thunk_FUN_14028af80(lVar17,uVar30);
            }
            hmenu = pRVar18;
            lRam000000013fffffc0 = 0;
            pRRam000000013fffff88 = (RECT *)0x0;
            pRRam000000013fffff90 = (RECT *)0x7;
            param_11 = 0;
            param_10 = (undefined8 *)0x0;
            pRRam000000013fffffb0 = (RECT *)0x0;
            pRRam000000013fffffb8 = (RECT *)0x0;
            if ((((byte)IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[8].VirtualAddress
                 & 0x22) == 2) ||
               (IVar32 = *(IMAGE_DATA_DIRECTORY *)
                          IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[2],
               IVar32 == (IMAGE_DATA_DIRECTORY)0x0)) {
              if ((IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[8].VirtualAddress & 4)
                  == 0) {
                if (*(longlong *)IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[1] == 0)
                {
                  lVar19 = 0;
                  lVar17 = 0;
                }
                else {
                  lVar17 = *(longlong *)
                            IMAGE_NT_HEADERS64_140000240.OptionalHeader.SizeOfHeapReserve;
                  lVar19 = (*(longlong *)
                             IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[1] +
                           (longlong)
                           *(int *)IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[4] * 2)
                           - lVar17 >> 1;
                }
                goto LAB_1400213d2;
              }
            }
            else {
              lVar17 = *(longlong *)IMAGE_NT_HEADERS64_140000240.OptionalHeader.SizeOfHeapCommit;
              if ((ulonglong)IVar32 <
                  (ulonglong)IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[7]) {
                IVar32 = IMAGE_NT_HEADERS64_140000240.OptionalHeader.DataDirectory[7];
              }
              lVar19 = (longlong)IVar32 - lVar17 >> 1;
LAB_1400213d2:
              if (lVar17 != 0) {
                FUN_140016ae0(&param_10,lVar17,lVar19);
              }
            }
            uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
            IMAGE_DOS_HEADER_140000000._8_8_ = &param_10;
            if ((RECT *)0x7 < pRRam000000013fffff90) {
              IMAGE_DOS_HEADER_140000000._8_8_ = param_10;
            }
            uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,iVar14 + 0x88bb);
            pRVar18 = hmenu;
            InsertMenuItemW((HMENU)hmenu,10,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
            if ((RECT *)0x7 < pRRam000000013fffff90) {
              uVar30 = (longlong)pRRam000000013fffff90 * 2 + 2;
              puVar21 = param_10;
              if (0xfff < uVar30) {
                puVar21 = (undefined8 *)param_10[-1];
                if (0x1f < (ulonglong)((longlong)param_10 + (-8 - (longlong)puVar21)))
                goto LAB_1400219e4;
                uVar30 = (longlong)pRRam000000013fffff90 * 2 + 0x29;
              }
              thunk_FUN_14028af80(puVar21,uVar30);
            }
            pRRam000000013fffff88 = (RECT *)0x0;
            pRRam000000013fffff90 = (RECT *)0x7;
            param_10 = (undefined8 *)((ulonglong)param_10 & 0xffffffffffff0000);
            FUN_140005b50(0x140000280);
            if (7 < _UNK_140000118) {
              uVar30 = _UNK_140000118 * 2 + 2;
              lVar17 = UNK_140000080._128_8_;
              if (0xfff < uVar30) {
                lVar17 = *(longlong *)(UNK_140000080._128_8_ + -8);
                if (0x1f < (UNK_140000080._128_8_ - lVar17) - 8U) goto LAB_1400219e4;
                uVar30 = _UNK_140000118 * 2 + 0x29;
              }
              thunk_FUN_14028af80(lVar17,uVar30);
            }
            iRam00000001400006b8 = iVar9 + 1;
            _UNK_140000110 = 0;
            _UNK_140000118 = 7;
            UNK_140000080._128_8_ = UNK_140000080._128_8_ & 0xffffffffffff0000;
          }
        }
        FUN_140085440(&UNK_140000140);
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    unaff_R13 = (RECT *)0x0;
    InsertMenuW((HMENU)hmenu,0xb,0xc00,0,(LPCWSTR)0x0);
    FUN_140097640(&DAT_1404e6d80,0x140000088,"core_tray_recent_wallpapers_clear");
    uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
    IMAGE_DOS_HEADER_140000000._8_8_ = 0x140000088;
    if (7 < (ulonglong)UNK_140000080._32_8_) {
      IMAGE_DOS_HEADER_140000000._8_8_ = UNK_140000080._8_8_;
    }
    uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,0x88c5);
    InsertMenuItemW((HMENU)hmenu,0xc,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
    FUN_140097640(&DAT_1404e6d80,&param_6,"core_tray_recent_wallpapers");
    uRam000000013fffffd0 = CONCAT44(0x46,(undefined4)uRam000000013fffffd0);
    IMAGE_DOS_HEADER_140000000._8_8_ = &param_6;
    if (7 < param_9) {
      IMAGE_DOS_HEADER_140000000._8_8_ = (undefined8 *)CONCAT62(param_6._2_6_,(undefined2)param_6);
    }
    pRRam000000013fffffe8 = hmenu;
    InsertMenuItemW(unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
    if (7 < param_9) {
      lVar19 = CONCAT62(param_6._2_6_,(undefined2)param_6);
      uVar30 = param_9 * 2 + 2;
      lVar17 = lVar19;
      if (0xfff < uVar30) {
        lVar17 = *(longlong *)(lVar19 + -8);
        if (0x1f < (lVar19 - lVar17) - 8U) goto LAB_1400219e4;
        uVar30 = param_9 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar17,uVar30);
    }
    param_8 = 0;
    param_9 = 7;
    param_6._0_2_ = 0;
    if (7 < (ulonglong)UNK_140000080._32_8_) {
      uVar30 = UNK_140000080._32_8_ * 2 + 2;
      lVar17 = UNK_140000080._8_8_;
      if (0xfff < uVar30) {
        lVar17 = *(longlong *)(UNK_140000080._8_8_ + -8);
        if (0x1f < (UNK_140000080._8_8_ - lVar17) - 8U) goto LAB_1400219e4;
        uVar30 = UNK_140000080._32_8_ * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar17,uVar30);
    }
  }
  for (puVar21 = (undefined8 *)*DAT_1404e5330; puVar21 != DAT_1404e5330;
      puVar21 = (undefined8 *)*puVar21) {
    if ((puVar21[7] != puVar21[8]) && (1 < *(int *)(puVar21 + 0xe) - 2U)) {
      uRam000000013fffffd8 = 0;
      uRam000000013fffffd0 = 0x50;
      uRam000000013fffffe0 = 0;
      pRRam000000013fffffe8 = (RECT *)0x0;
      uRam000000013ffffff0 = 0;
      uRam000000013ffffff8 = 0;
      IMAGE_DOS_HEADER_140000000.e_magic[0] = '\0';
      IMAGE_DOS_HEADER_140000000.e_magic[1] = '\0';
      IMAGE_DOS_HEADER_140000000.e_cblp = 0;
      IMAGE_DOS_HEADER_140000000.e_cp = 0;
      IMAGE_DOS_HEADER_140000000.e_crlc = 0;
      IMAGE_DOS_HEADER_140000000.e_cparhdr = 0;
      IMAGE_DOS_HEADER_140000000.e_minalloc = 0;
      IMAGE_DOS_HEADER_140000000.e_maxalloc = 0;
      IMAGE_DOS_HEADER_140000000.e_ss = 0;
      IMAGE_DOS_HEADER_140000000.e_sp = 0;
      IMAGE_DOS_HEADER_140000000.e_csum = 0;
      IMAGE_DOS_HEADER_140000000.e_ip = 0;
      IMAGE_DOS_HEADER_140000000.e_cs = 0;
      IMAGE_DOS_HEADER_140000000.e_lfarlc = 0;
      IMAGE_DOS_HEADER_140000000.e_ovno = 0;
      IMAGE_DOS_HEADER_140000000.e_res_4_[0] = 0;
      IMAGE_DOS_HEADER_140000000.e_res_4_[1] = 0;
      FUN_140097640(&DAT_1404e6d80,0x140000088,"core_tray_next_wallpaper");
      uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
      IMAGE_DOS_HEADER_140000000._8_8_ = 0x140000088;
      if (7 < (ulonglong)UNK_140000080._32_8_) {
        IMAGE_DOS_HEADER_140000000._8_8_ = UNK_140000080._8_8_;
      }
      uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,0x9c5d);
      InsertMenuItemW(unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
      if (7 < (ulonglong)UNK_140000080._32_8_) {
        uVar30 = UNK_140000080._32_8_ * 2 + 2;
        lVar17 = UNK_140000080._8_8_;
        if (0xfff < uVar30) {
          lVar17 = *(longlong *)(UNK_140000080._8_8_ + -8);
          if (0x1f < (UNK_140000080._8_8_ - lVar17) - 8U) goto LAB_1400219e4;
          uVar30 = UNK_140000080._32_8_ * 2 + 0x29;
        }
        thunk_FUN_14028af80(lVar17,uVar30);
      }
      break;
    }
  }
  if ((param_5 == 0x7b) || (param_5 == 0x401)) {
    IMAGE_DOS_HEADER_140000000.e_program._0_4_ = SEXT24((short)uRam00000001400006c0);
    IMAGE_DOS_HEADER_140000000.e_program._4_4_ =
         SEXT24((short)((ulonglong)uRam00000001400006c0 >> 0x10));
  }
  else {
    GetCursorPos((LPPOINT)IMAGE_DOS_HEADER_140000000.e_program);
  }
  hWnd = pHRam00000001400006b0;
  if (((pHRam00000001400006b0 != DAT_1404e8f10) && (cVar11 = FUN_140015180(10,0,0), cVar11 != '\0'))
     && (DVar15 = GetVersion(), DVar15 + 0xb8460000 < 0x38460000)) {
    DAT_1404e8f10 = hWnd;
    hModule = LoadLibraryW(L"uxtheme.dll");
    pFVar22 = GetProcAddress(hModule,(LPCSTR)0x87);
    (*pFVar22)(1);
    FreeLibrary(hModule);
  }
  SetForegroundWindow(hWnd);
  TrackPopupMenu(unaff_R12,0x22,IMAGE_DOS_HEADER_140000000.e_program._0_4_ + 1,
                 IMAGE_DOS_HEADER_140000000.e_program._4_4_,(int)unaff_R13,DAT_1404e5280,unaff_R13);
  PostMessageW(hWnd,0,0,0);
  pRVar18 = pRRam000000013fffffa0;
  for (hmenu = pRRam000000013fffff98; hmenu != pRVar18; hmenu = (RECT *)&hmenu->right) {
    DeleteObject(*(RECT **)hmenu);
  }
  FUN_140085440(&UNK_1400001d0);
  FUN_140085440(&UNK_140000170);
  FUN_140085440(&UNK_140000238);
  if (pRRam000000013fffff98 != (RECT *)0x0) {
    uVar30 = ((longlong)pRRam000000013fffffa8 - (longlong)pRRam000000013fffff98 >> 3) * 8;
    pRVar18 = pRRam000000013fffff98;
    if (0xfff < uVar30) {
      if (0x1f < (ulonglong)
                 ((longlong)pRRam000000013fffff98 +
                 (-8 - (longlong)*(RECT **)&pRRam000000013fffff98[-1].right))) goto LAB_1400219e4;
      uVar30 = uVar30 + 0x27;
      pRVar18 = *(RECT **)&pRRam000000013fffff98[-1].right;
    }
    thunk_FUN_14028af80(pRVar18,uVar30);
    pRRam000000013fffff98 = (RECT *)0x0;
    pRRam000000013fffffa0 = (RECT *)0x0;
    pRRam000000013fffffa8 = unaff_R13;
  }
  if (7 < (ulonglong)UNK_140000080._0_8_) {
    lVar19 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._42_6_,
                      IMAGE_DOS_HEADER_140000000.e_program._40_2_);
    uVar30 = UNK_140000080._0_8_ * 2 + 2;
    lVar17 = lVar19;
    if (0xfff < uVar30) {
      lVar17 = *(longlong *)(lVar19 + -8);
      if (0x1f < (lVar19 - lVar17) - 8U) goto LAB_1400219e4;
      uVar30 = UNK_140000080._0_8_ * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar17,uVar30);
  }
  UNK_140000080._0_8_ = 7;
  IMAGE_DOS_HEADER_140000000.e_program._40_2_ = SUB82(unaff_R13,0);
  IMAGE_DOS_HEADER_140000000.e_program._56_8_ = unaff_R13;
  if (7 < _UNK_140000230) {
    uVar30 = _UNK_140000230 * 2 + 2;
    puVar26 = _UNK_140000218;
    if (0xfff < uVar30) {
      puVar26 = *(undefined **)(_UNK_140000218 + -8);
      if ((undefined *)0x1f < _UNK_140000218 + (-8 - (longlong)puVar26)) {
LAB_1400219e4:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        IMAGE_NT_HEADERS64_140000240.OptionalHeader.MajorImageVersion = 0;
        IMAGE_NT_HEADERS64_140000240.OptionalHeader.MinorImageVersion = 0;
        FUN_1404217a0(0x140000294,0,0x3bc);
        IMAGE_NT_HEADERS64_140000240.OptionalHeader.SizeOfImage = 1000;
        IMAGE_NT_HEADERS64_140000240.OptionalHeader.MajorOperatingSystemVersion = 0x3d0;
        IMAGE_NT_HEADERS64_140000240.OptionalHeader.MinorOperatingSystemVersion = 0;
        IMAGE_NT_HEADERS64_140000240.OptionalHeader._48_8_ = hmenu;
        Shell_NotifyIconW(2,(PNOTIFYICONDATAW)
                            &IMAGE_NT_HEADERS64_140000240.OptionalHeader.MajorOperatingSystemVersion
                         );
        return 0;
      }
      uVar30 = _UNK_140000230 * 2 + 0x29;
    }
    thunk_FUN_14028af80(puVar26,uVar30);
  }
  DestroyMenu(_UNK_1400001c8);
  DAT_1404e8f18 = 0;
  return 0;
}

