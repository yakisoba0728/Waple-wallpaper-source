// Function: FUN_1402ed040
// Addr: 1402ed040
// Size: 399 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_1402ed040(uint param_1,longlong param_2,int *param_3,undefined8 param_4,short param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9,
                       undefined8 *param_10,undefined8 param_11)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  UINT fuLoad;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  HWND hWnd;
  int iVar10;
  IMAGE_DATA_DIRECTORY IVar11;
  char cVar12;
  byte bVar13;
  LSTATUS LVar14;
  int iVar15;
  DWORD DVar16;
  HICON pHVar17;
  longlong lVar18;
  IMAGE_DATA_DIRECTORY IVar19;
  IMAGE_DATA_DIRECTORY hmenu;
  longlong lVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  HMODULE hModule;
  FARPROC pFVar23;
  uint uVar24;
  IMAGE_SECTION_HEADER *pIVar25;
  IMAGE_DATA_DIRECTORY IVar26;
  IMAGE_DATA_DIRECTORY IVar27;
  char acVar28 [8];
  byte bVar29;
  ulonglong uVar30;
  uint uVar31;
  HKEY unaff_RSI;
  ulonglong uVar32;
  char *pcVar33;
  byte *pbVar34;
  byte *pbVar35;
  IMAGE_DATA_DIRECTORY unaff_R12;
  IMAGE_DATA_DIRECTORY unaff_R13;
  undefined8 uVar36;
  
  iVar15 = *param_3;
  uVar32 = (ulonglong)iVar15;
  pbVar34 = (byte *)((ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) +
                    *(longlong *)(param_2 + 8));
  bVar1 = pbVar34[3];
  if (2 < (*pbVar34 & 7)) {
    if ((bVar1 & 0x1f) != 0) {
      uVar31 = 0;
      pbVar34 = pbVar34 + (ulonglong)(bVar1 & 0x1f) + 4;
      pbVar35 = pbVar34;
      uVar24 = uVar31;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar34 = pbVar35 + 3;
          if (*pbVar35 >> 3 != 0) {
            pbVar34 = pbVar35 + (ulonglong)(uint)(*pbVar35 >> 3) + 6;
          }
          uVar24 = uVar24 + 1;
          pbVar35 = pbVar34;
        } while (uVar24 < bVar1 >> 5);
      }
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar13 = *pbVar34;
          bVar29 = bVar13;
          if (((bVar13 < 4) || (bVar29 = bVar13 & 0xf, (byte)(bVar29 - 8) < 3)) ||
             (bVar29 = bVar13 & 7, (byte)(bVar29 - 4) < 4)) {
            if (bVar29 == 0) break;
            if (3 < bVar13) {
              bVar29 = bVar13 & 0xf;
              if ((2 < (byte)((bVar13 & 0xf) - 8)) &&
                 (bVar29 = bVar13 & 7, 3 < (byte)((bVar13 & 7) - 4))) goto LAB_1402ed148;
              bVar13 = bVar29;
              if (0x20 < bVar13) goto switchD_1402ed16c_caseD_4;
            }
          }
          else {
LAB_1402ed148:
            if ((bVar13 & 0x3f) != 0x20) goto switchD_1402ed16c_caseD_4;
            bVar13 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((longlong)&UINT_1402ed1e4 + (ulonglong)bVar13)) {
          case 0:
            lVar18 = 2;
            break;
          case 1:
            lVar18 = 5;
            break;
          case 2:
            lVar18 = 3;
            break;
          case 3:
            lVar18 = 1;
            break;
          case 4:
switchD_1402ed16c_caseD_4:
            FUN_1402ed010();
            pcVar2 = (code *)swi(3);
            uVar32 = (*pcVar2)();
            return uVar32;
          case 5:
            pcVar33 = "core_tray_pause";
            if ((param_1 & 1) != 0) {
              pcVar33 = (char *)0x40474b40;
            }
            FUN_140097640(&DAT_1404e6d80,&IMAGE_SECTION_HEADER_140000218,pcVar33);
            FUN_140097640(&DAT_1404e6d80,0x140000068);
            UNK_140000080._64_8_ = 0;
            UNK_140000080._72_8_ = 0;
            UNK_140000080._80_8_ = 0;
            UNK_140000080._88_8_ = 0;
            UNK_140000080._96_8_ = 0;
            UNK_140000080._104_8_ = 0;
            UNK_140000080._112_8_ = 0;
            UNK_140000080._120_8_ = 0;
            IRam000000013fffff98.VirtualAddress = 0;
            IRam000000013fffff98.Size = 0;
            IRam000000013fffffa0.VirtualAddress = 0;
            IRam000000013fffffa0.Size = 0;
            UNK_140000080._48_4_ = 0x50;
            UNK_140000080._52_4_ = 0xc0;
            IRam000000013fffffa8 = unaff_R13;
            UNK_140000080._56_8_ = unaff_R13;
            cVar12 = FUN_140015180(10,0);
            if ((cVar12 == '\0') ||
               (LVar14 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize"
                                       ,0,0xf003f,(PHKEY)&stack0x00000018), LVar14 != 0)) {
LAB_140020244:
              uVar36 = 0xcc;
            }
            else {
              iRam00000001400006b8 = 4;
              LVar14 = RegQueryValueExW(unaff_RSI,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                                        &UNK_140000080.field_0x28,(LPDWORD)&iRam00000001400006b8);
              if ((LVar14 != 0) || (UNK_140000080._40_4_ == iVar15)) {
                RegCloseKey(unaff_RSI);
                goto LAB_140020244;
              }
              uVar36 = 0x33;
              RegCloseKey(unaff_RSI);
            }
            fuLoad = unaff_R13.VirtualAddress;
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)((ulonglong)((byte)param_1 & 1) | 0x96),1,
                                 0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            pIVar25 = &IMAGE_SECTION_HEADER_140000218;
            if (7 < (ulonglong)IMAGE_SECTION_HEADER_140000218._24_8_) {
              pIVar25 = (IMAGE_SECTION_HEADER *)IMAGE_SECTION_HEADER_140000218.Name;
            }
            UNK_140000080._104_8_ = pIVar25;
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c56,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,
                                 (LPCWSTR)((ulonglong)((byte)(param_1 >> 6) & 1) | 0x9a),1,0x10,0x10
                                 ,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
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
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c5f,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            UNK_140000080._52_4_ = 0x80;
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x98,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c4d,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x99,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c5c,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9c,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c59,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9d,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c61,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9f,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c4a,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9e,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c52,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa0,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c5b,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            pHVar17 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa1,1,0x10,0x10,fuLoad);
            UNK_140000080._120_8_ = FUN_14001cb20(pHVar17,uVar36);
            FUN_1400302d0(&IRam000000013fffff98,0x1400000f8);
            SetMenuItemInfoW((HMENU)unaff_R12,0x9c53,0,(LPCMENUITEMINFOW)&UNK_140000080.field_0x30);
            DestroyIcon(pHVar17);
            FUN_140084dd0(0x140000238,0);
            FUN_140084dd0(0x140000170,0);
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[8].VirtualAddress =
                 CONCAT31(IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[8].
                          VirtualAddress._1_3_,(char)iVar15);
            uVar24 = IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[8].VirtualAddress &
                     0xfffffeff;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[9].VirtualAddress = 0;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[9].Size = 0;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[10].VirtualAddress = 0;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[10].Size = 0;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[8].VirtualAddress = uVar24;
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xb] = unaff_R13;
            uVar36 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar18 = FUN_140087490(uVar36,"wallpaperconfigrecent","");
            if (lVar18 != 0) {
              uVar36 = FUN_140086de0(uVar36,"wallpaperconfigrecent","");
              FUN_140085520(0x140000238,uVar36);
            }
            uVar36 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar18 = FUN_140087490(uVar36,"playlists","");
            if (lVar18 != 0) {
              uVar36 = FUN_140086de0(uVar36,"playlists","");
              FUN_140085520(0x140000170,uVar36);
            }
            uVar36 = FUN_140086de0(&DAT_1404df5e8,"general","");
            lVar18 = FUN_140087490(uVar36,"profiles","");
            if (lVar18 != 0) {
              uVar36 = FUN_140086de0(uVar36,"profiles","");
              FUN_140085520(0x1400001d0,uVar36);
              uVar24 = IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[8].VirtualAddress;
            }
            if (((char)uVar24 != '\x06') || (iVar15 = FUN_1400863a0(), iVar15 == 0))
            goto LAB_140020ad5;
            IVar19 = (IMAGE_DATA_DIRECTORY)CreatePopupMenu();
            uVar24 = uVar24 & 0xff;
            uVar30 = (ulonglong)unaff_R13 & 0xffffffff;
            uRam000000013fffffd8 = 0;
            uRam000000013fffffd0 = 0x50;
            uRam000000013fffffe0 = 0;
            IRam000000013fffffe8 = (IMAGE_DATA_DIRECTORY)0x0;
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
            if (((uVar24 == 6) || (uVar24 == 7)) &&
               (IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[7] !=
                (IMAGE_DATA_DIRECTORY)0x0)) {
              bVar9 = false;
              IVar27 = **(IMAGE_DATA_DIRECTORY **)
                         IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[7];
            }
            else {
              bVar9 = true;
              IVar27 = unaff_R13;
            }
            if (((uVar24 == 6) || (uVar24 == 7)) &&
               (IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[7] !=
                (IMAGE_DATA_DIRECTORY)0x0)) {
              bVar8 = false;
              hmenu = *(IMAGE_DATA_DIRECTORY *)
                       IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[7];
            }
            else {
              bVar8 = true;
              hmenu = unaff_R13;
            }
            goto LAB_140020906;
          }
          pbVar34 = pbVar34 + lVar18;
          uVar31 = uVar31 + 1;
        } while (uVar31 < (bVar1 & 0x1f));
      }
    }
  }
  return uVar32 & 0xfffffffffffffff8;
LAB_140020906:
  bVar7 = bVar8;
  if (!bVar9) {
    bVar7 = IVar27 == hmenu;
  }
  if (bVar7) goto LAB_140020a42;
  FUN_140085090(0x140000140,(longlong)IVar27 + 0x30);
  lVar18 = FUN_140086de0(0x140000140,&DAT_1404748b8,&DAT_1404748bc);
  if (*(char *)(lVar18 + 8) == '\x04') {
    uVar32 = (ulonglong)((uint)uVar32 | 1);
    FUN_140085cc0(lVar18,0x140000120);
    FUN_140005880(&param_10);
  }
  else {
    param_10 = (undefined8 *)0x0;
    param_11 = 0;
    IRam000000013fffff88 = unaff_R13;
    IRam000000013fffff90 = unaff_R13;
    FUN_140016170(&param_10,&DAT_140474bc4,2);
  }
  if ((uVar32 & 1) != 0) {
    uVar32 = (ulonglong)((uint)uVar32 & 0xfffffffe);
    FUN_140017240(0x140000120);
  }
  uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
  IMAGE_DOS_HEADER_140000000._8_8_ = &param_10;
  if (7 < (ulonglong)IRam000000013fffff90) {
    IMAGE_DOS_HEADER_140000000._8_8_ = param_10;
  }
  uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,(int)uVar30 + 0x8cae);
  InsertMenuItemW((HMENU)IVar19,0,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
  uVar24 = (int)uVar30 + 1;
  uVar30 = (ulonglong)uVar24;
  if (0x3e6 < (int)uVar24) goto LAB_140020a2c;
  if (7 < (ulonglong)IRam000000013fffff90) {
    FUN_140016a90(&param_10,param_10);
  }
  FUN_140085440(0x140000140);
  FUN_1400175a0(&stack0x00000018);
  goto LAB_140020906;
LAB_140020a2c:
  FUN_140016770(&param_10);
  FUN_140085440(0x140000140);
LAB_140020a42:
  FUN_140097640(&DAT_1404e6d80,&param_6,"core_tray_saved_profiles");
  uRam000000013fffffd0 = CONCAT44(0x46,(undefined4)uRam000000013fffffd0);
  IMAGE_DOS_HEADER_140000000._8_8_ = &param_6;
  if (7 < param_9) {
    IMAGE_DOS_HEADER_140000000._8_8_ = (undefined8 *)CONCAT62(param_6._2_6_,(undefined2)param_6);
  }
  IRam000000013fffffe8 = IVar19;
  InsertMenuItemW((HMENU)unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
  if (7 < param_9) {
    lVar20 = CONCAT62(param_6._2_6_,(undefined2)param_6);
    uVar30 = param_9 * 2 + 2;
    lVar18 = lVar20;
    if (0xfff < uVar30) {
      lVar18 = *(longlong *)(lVar20 + -8);
      if (0x1f < (lVar20 - lVar18) - 8U) goto LAB_1400219e4;
      uVar30 = param_9 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar18,uVar30);
  }
LAB_140020ad5:
  uVar24 = (uint)IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackCommit;
  hmenu.Size = 0;
  hmenu.VirtualAddress = (uint)IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackCommit;
  if (((char)(uint)IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackCommit == '\x06') &&
     (iVar15 = FUN_1400863a0(0x140000170), iVar15 != 0)) {
    IVar19 = (IMAGE_DATA_DIRECTORY)CreatePopupMenu();
    uVar24 = uVar24 & 0xff;
    iVar15 = 0;
    uRam000000013fffffd8 = 0;
    uRam000000013fffffd0 = 0x50;
    uRam000000013fffffe0 = 0;
    IRam000000013fffffe8.VirtualAddress = 0;
    IRam000000013fffffe8.Size = 0;
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
    if (((uVar24 == 6) || (uVar24 == 7)) &&
       (IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackReserve != 0)) {
      bVar9 = false;
      hmenu = **(IMAGE_DATA_DIRECTORY **)
                IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackReserve;
    }
    else {
      hmenu.VirtualAddress = 0;
      hmenu.Size = 0;
      bVar9 = true;
    }
    if (((uVar24 == 6) || (uVar24 == 7)) &&
       (IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackReserve != 0)) {
      IVar27 = *(IMAGE_DATA_DIRECTORY *)
                IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackReserve;
      bVar8 = false;
      iVar15 = 0;
    }
    else {
      IVar27.VirtualAddress = 0;
      IVar27.Size = 0;
      bVar8 = true;
    }
    while( true ) {
      bVar7 = bVar8;
      if (!bVar9) {
        bVar7 = hmenu == IVar27;
      }
      if (bVar7) goto LAB_140020d94;
      FUN_140085090(0x140000140,(longlong)hmenu + 0x30);
      lVar18 = FUN_140086de0(0x140000140,&DAT_1404748b8,&DAT_1404748bc);
      if (*(char *)(lVar18 + 8) == '\x04') {
        uVar32 = (ulonglong)((uint)uVar32 | 2);
        FUN_140085cc0(lVar18,0x1400001f8);
        FUN_140005880(&IRam000000013fffffb0);
      }
      else {
        lRam000000013fffffc0 = 0;
        uRam000000013fffffc8 = 0;
        IRam000000013fffffb0.VirtualAddress = 0;
        IRam000000013fffffb0.Size = 0;
        IRam000000013fffffb8.VirtualAddress = 0;
        IRam000000013fffffb8.Size = 0;
        FUN_140016170(&IRam000000013fffffb0,&DAT_140474bc4,2);
      }
      if ((uVar32 & 2) != 0) {
        uVar32 = 0;
        if (0xf < CONCAT44(IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].Size,
                           IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].
                           VirtualAddress)) {
          lVar20 = CONCAT44(IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xc].Size,
                            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xc].
                            VirtualAddress);
          lVar18 = lVar20;
          if ((0xfff < CONCAT44(IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].Size,
                                IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].
                                VirtualAddress) + 1) &&
             (lVar18 = *(longlong *)(lVar20 + -8), 0x1f < (lVar20 - lVar18) - 8U))
          goto LAB_1400219e4;
          thunk_FUN_14028af80(lVar18);
        }
      }
      uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
      IMAGE_DOS_HEADER_140000000._8_8_ = &IRam000000013fffffb0;
      if (7 < uRam000000013fffffc8) {
        IMAGE_DOS_HEADER_140000000._8_8_ = IRam000000013fffffb0;
      }
      uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,iVar15 + 0x88c6);
      InsertMenuItemW((HMENU)IVar19,0,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
      iVar15 = iVar15 + 1;
      if (0x3e6 < iVar15) break;
      if (7 < uRam000000013fffffc8) {
        uVar30 = uRam000000013fffffc8 * 2 + 2;
        IVar26 = IRam000000013fffffb0;
        if (0xfff < uVar30) {
          IVar26 = *(IMAGE_DATA_DIRECTORY *)((longlong)IRam000000013fffffb0 + -8);
          if (0x1f < ((longlong)IRam000000013fffffb0 - (longlong)IVar26) - 8U) goto LAB_1400219e4;
          uVar30 = uRam000000013fffffc8 * 2 + 0x29;
        }
        thunk_FUN_14028af80(IVar26,uVar30);
      }
      FUN_140085440(0x140000140);
      IVar26 = *(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 0x10);
      if (*(char *)((longlong)IVar26 + 0x19) == '\0') {
        cVar12 = *(char *)(*(longlong *)IVar26 + 0x19);
        hmenu = IVar26;
        while (cVar12 == '\0') {
          hmenu = *(IMAGE_DATA_DIRECTORY *)hmenu;
          cVar12 = *(char *)(*(longlong *)hmenu + 0x19);
        }
      }
      else {
        cVar12 = *(char *)((longlong)*(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 8) + 0x19);
        IVar11 = *(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 8);
        IVar26 = hmenu;
        while ((hmenu = IVar11, cVar12 == '\0' &&
               (IVar26 == *(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 0x10)))) {
          cVar12 = *(char *)((longlong)*(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 8) + 0x19);
          IVar11 = *(IMAGE_DATA_DIRECTORY *)((longlong)hmenu + 8);
          IVar26 = hmenu;
        }
      }
    }
    if (7 < uRam000000013fffffc8) {
      uVar32 = uRam000000013fffffc8 * 2 + 2;
      IVar27 = IRam000000013fffffb0;
      if (0xfff < uVar32) {
        IVar27 = *(IMAGE_DATA_DIRECTORY *)((longlong)IRam000000013fffffb0 + -8);
        if (0x1f < ((longlong)IRam000000013fffffb0 - (longlong)IVar27) - 8U) goto LAB_1400219e4;
        uVar32 = uRam000000013fffffc8 * 2 + 0x29;
      }
      thunk_FUN_14028af80(IVar27,uVar32);
    }
    lRam000000013fffffc0 = 0;
    IRam000000013fffffb0 =
         (IMAGE_DATA_DIRECTORY)((ulonglong)IRam000000013fffffb0 & 0xffffffffffff0000);
    uRam000000013fffffc8 = 7;
    FUN_140085440(0x140000140);
LAB_140020d94:
    FUN_140097640(&DAT_1404e6d80,&param_6,"core_tray_saved_playlists");
    unaff_R12 = IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[5];
    IMAGE_DOS_HEADER_140000000._8_8_ = &param_6;
    if (7 < param_9) {
      IMAGE_DOS_HEADER_140000000._8_8_ = (undefined8 *)CONCAT62(param_6._2_6_,(undefined2)param_6);
    }
    uRam000000013fffffd0 = CONCAT44(0x46,(undefined4)uRam000000013fffffd0);
    IRam000000013fffffe8 = IVar19;
    InsertMenuItemW((HMENU)IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[5],1,1,
                    (LPCMENUITEMINFOW)&uRam000000013fffffd0);
    if (7 < param_9) {
      lVar20 = CONCAT62(param_6._2_6_,(undefined2)param_6);
      uVar32 = param_9 * 2 + 2;
      lVar18 = lVar20;
      if (0xfff < uVar32) {
        lVar18 = *(longlong *)(lVar20 + -8);
        if (0x1f < (lVar20 - lVar18) - 8U) goto LAB_1400219e4;
        uVar32 = param_9 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar18,uVar32);
    }
    unaff_R13.VirtualAddress = 0;
    unaff_R13.Size = 0;
  }
  if ((IMAGE_SECTION_HEADER_140000240.Name[0] == '\x06') &&
     (iVar15 = FUN_1400863a0(0x140000238), iVar15 != 0)) {
    hmenu = (IMAGE_DATA_DIRECTORY)CreatePopupMenu();
    uRam000000013fffffd8 = 0;
    uRam000000013fffffd0 = 0x50;
    uRam000000013fffffe0 = 0;
    IRam000000013fffffe8.VirtualAddress = 0;
    IRam000000013fffffe8.Size = 0;
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
    IVar19 = hmenu;
    iVar15 = FUN_1400863a0(0x140000238);
    iVar15 = iVar15 + -1;
    if (-1 < iVar15) {
      iRam00000001400006b8 = 1;
      do {
        uVar36 = FUN_140086540(0x140000238,iVar15);
        FUN_140085090(0x140000140,uVar36);
        lVar18 = FUN_140086de0(0x140000140,"title","");
        if (((*(char *)(lVar18 + 8) == '\x04') &&
            (lVar18 = FUN_140086de0(0x140000140,"config",""), *(char *)(lVar18 + 8) == '\a')) &&
           (lVar18 = FUN_140086de0(lVar18,"selectedwallpapers",""), *(char *)(lVar18 + 8) == '\a'))
        {
          bVar9 = false;
          FUN_140088360(lVar18,&IRam000000013fffffb0);
          IVar26 = IRam000000013fffffb8;
          IVar27 = IRam000000013fffffb0;
          for (hmenu = IRam000000013fffffb0; hmenu != IVar26;
              hmenu = (IMAGE_DATA_DIRECTORY)((longlong)hmenu + 0x20)) {
            FUN_140016fc0(0x140000048,hmenu);
            lVar20 = 0x140000048;
            if (0xf < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar20 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                                IMAGE_DOS_HEADER_140000000.e_program._8_2_);
            }
            lVar20 = FUN_140086de0(lVar18,lVar20,
                                   IMAGE_DOS_HEADER_140000000.e_program._24_8_ + lVar20);
            if ((*(char *)(lVar20 + 8) == '\a') &&
               (lVar20 = FUN_140086de0(lVar20,&DAT_140473b68,&DAT_140473b6c),
               *(char *)(lVar20 + 8) == '\x04')) {
              uVar36 = FUN_140085cc0(lVar20,0x140000120);
              puVar21 = (undefined4 *)FUN_140005880(0x140000260,uVar36);
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xc].VirtualAddress =
                   *puVar21;
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xc].Size = puVar21[1];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xd].VirtualAddress =
                   puVar21[2];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xd].Size = puVar21[3];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xe].VirtualAddress =
                   puVar21[4];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xe].Size = puVar21[5];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].VirtualAddress =
                   puVar21[6];
              IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0xf].Size = puVar21[7];
              *(undefined8 *)(puVar21 + 4) = 0;
              *(undefined8 *)(puVar21 + 6) = 7;
              *(undefined2 *)puVar21 = 0;
              if (7 < (ulonglong)IMAGE_SECTION_HEADER_140000268._16_8_) {
                uVar32 = IMAGE_SECTION_HEADER_140000268._16_8_ * 2 + 2;
                lVar20 = IMAGE_SECTION_HEADER_140000240._32_8_;
                if (0xfff < uVar32) {
                  lVar20 = *(longlong *)(IMAGE_SECTION_HEADER_140000240._32_8_ + -8);
                  if (0x1f < (IMAGE_SECTION_HEADER_140000240._32_8_ - lVar20) - 8U)
                  goto LAB_1400219e4;
                  uVar32 = IMAGE_SECTION_HEADER_140000268._16_8_ * 2 + 0x29;
                }
                thunk_FUN_14028af80(lVar20,uVar32);
              }
              if (0xf < (ulonglong)IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_) {
                uVar32 = IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_ + 1;
                lVar20 = IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_;
                if (0xfff < uVar32) {
                  lVar20 = *(longlong *)(IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_ + -8);
                  if (0x1f < (IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_ - lVar20) - 8U)
                  goto LAB_1400219e4;
                  uVar32 = IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_ + 0x28;
                }
                thunk_FUN_14028af80(lVar20,uVar32);
              }
              if ((bVar9) || (cVar12 = FUN_140018f30(0x1400001f8), cVar12 != '\0')) {
                bVar9 = true;
              }
              FUN_140016770(0x1400001f8);
            }
            if (0xf < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar6 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                               IMAGE_DOS_HEADER_140000000.e_program._8_2_);
              uVar32 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ + 1;
              lVar20 = lVar6;
              if (0xfff < uVar32) {
                lVar20 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar20) - 8U) goto LAB_1400219e4;
                uVar32 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ + 0x28;
              }
              thunk_FUN_14028af80(lVar20,uVar32);
            }
          }
          IVar11 = IVar27;
          if (IVar27 != (IMAGE_DATA_DIRECTORY)0x0) {
            while (IVar11 != IVar26) {
              FUN_140017240(IVar11);
              hmenu = (IMAGE_DATA_DIRECTORY)((longlong)IVar11 + 0x20);
              IVar11 = hmenu;
            }
            uVar32 = lRam000000013fffffc0 - (longlong)IVar27 & 0xffffffffffffffe0;
            if (0xfff < uVar32) {
              if (0x1f < ((longlong)IVar27 -
                         (longlong)*(IMAGE_DATA_DIRECTORY *)((longlong)IVar27 + -8)) - 8U)
              goto LAB_1400219e4;
              uVar32 = uVar32 + 0x27;
              IVar27 = *(IMAGE_DATA_DIRECTORY *)((longlong)IVar27 + -8);
            }
            thunk_FUN_14028af80(IVar27,uVar32);
          }
          hmenu = IVar19;
          IVar19 = hmenu;
          if (bVar9) {
            lVar18 = FUN_140086de0(0x140000140,"playlist","");
            IMAGE_NT_HEADERS64_140000110.FileHeader.TimeDateStamp = 7;
            IMAGE_NT_HEADERS64_140000110.FileHeader.PointerToSymbolTable = 0;
            IMAGE_NT_HEADERS64_140000110.Signature[0] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[1] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[2] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[3] = '\0';
            IMAGE_NT_HEADERS64_140000110.FileHeader.Machine = 0;
            IMAGE_NT_HEADERS64_140000110.FileHeader.NumberOfSections = 0;
            UNK_140000080._136_8_ = 0;
            UNK_140000080._128_8_ = 0;
            IVar19 = hmenu;
            if ((*(char *)(lVar18 + 8) == '\x05') &&
               (cVar12 = FUN_140086300(lVar18), IVar19 = hmenu, cVar12 != '\0')) {
              uVar36 = FUN_140097640(&DAT_1404e6d80,0x140000120,"core_tray_playlist_prefix");
              puVar22 = (undefined8 *)FUN_1400164d0(uVar36,&DAT_140474c1c,1);
              uVar36 = *puVar22;
              uVar3 = puVar22[1];
              uVar4 = puVar22[2];
              uVar5 = puVar22[3];
              puVar22[2] = 0;
              puVar22[3] = 7;
              *(undefined2 *)puVar22 = 0;
              IVar19 = hmenu;
              if (7 < (ulonglong)IMAGE_NT_HEADERS64_140000110.FileHeader._4_8_) {
                FUN_140016a90(0x140000100,UNK_140000080._128_8_);
                IVar19 = hmenu;
              }
              UNK_140000080._128_8_ = uVar36;
              UNK_140000080._136_8_ = uVar3;
              IMAGE_NT_HEADERS64_140000110._0_8_ = uVar4;
              IMAGE_NT_HEADERS64_140000110.FileHeader._4_8_ = uVar5;
              FUN_140016770(0x140000120);
            }
            FUN_14000df80(0x140000280);
            uVar36 = FUN_140086de0(0x140000140,"title","");
            uVar36 = FUN_140085cc0(uVar36,0x140000120);
            hmenu = (IMAGE_DATA_DIRECTORY)FUN_140005880(0x140000048,uVar36);
            iVar10 = iRam00000001400006b8;
            uVar36 = FUN_14000ea80(&IMAGE_SECTION_HEADER_140000290,iRam00000001400006b8);
            uVar36 = FUN_1400300a0(uVar36,&DAT_140474c3c);
            uVar36 = FUN_14000d440(uVar36,0x140000100);
            FUN_14000d440(uVar36,hmenu);
            if (7 < (ulonglong)IMAGE_DOS_HEADER_140000000.e_program._32_8_) {
              lVar20 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._10_6_,
                                IMAGE_DOS_HEADER_140000000.e_program._8_2_);
              uVar32 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ * 2 + 2;
              lVar18 = lVar20;
              if (0xfff < uVar32) {
                lVar18 = *(longlong *)(lVar20 + -8);
                if (0x1f < (lVar20 - lVar18) - 8U) goto LAB_1400219e4;
                uVar32 = IMAGE_DOS_HEADER_140000000.e_program._32_8_ * 2 + 0x29;
              }
              thunk_FUN_14028af80(lVar18,uVar32);
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
            if (0xf < (ulonglong)IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_) {
              uVar32 = IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_ + 1;
              lVar18 = IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_;
              if (0xfff < uVar32) {
                lVar18 = *(longlong *)(IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_ + -8);
                if (0x1f < (IMAGE_NT_HEADERS64_140000110.FileHeader._12_8_ - lVar18) - 8U)
                goto LAB_1400219e4;
                uVar32 = IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_ + 0x28;
              }
              thunk_FUN_14028af80(lVar18,uVar32);
            }
            hmenu = IVar19;
            lRam000000013fffffc0 = 0;
            IRam000000013fffff88.VirtualAddress = 0;
            IRam000000013fffff88.Size = 0;
            IRam000000013fffff90.VirtualAddress = 7;
            IRam000000013fffff90.Size = 0;
            param_11 = 0;
            param_10 = (undefined8 *)0x0;
            IRam000000013fffffb0.VirtualAddress = 0;
            IRam000000013fffffb0.Size = 0;
            IRam000000013fffffb8.VirtualAddress = 0;
            IRam000000013fffffb8.Size = 0;
            if (((IMAGE_SECTION_HEADER_140000308.Name[0] & 0x22) == 2) ||
               (uVar32 = *(ulonglong *)IMAGE_SECTION_HEADER_1400002b8._32_8_, uVar32 == 0)) {
              if ((IMAGE_SECTION_HEADER_140000308.Name._0_4_ & 4) == 0) {
                if (*(longlong *)IMAGE_SECTION_HEADER_1400002b8._24_8_ == 0) {
                  lVar20 = 0;
                  lVar18 = 0;
                }
                else {
                  lVar18 = *(longlong *)IMAGE_SECTION_HEADER_140000290._32_8_;
                  lVar20 = (*(longlong *)IMAGE_SECTION_HEADER_1400002b8._24_8_ +
                           (longlong)*(int *)IMAGE_SECTION_HEADER_1400002e0._8_8_ * 2) - lVar18 >> 1
                  ;
                }
                goto LAB_1400213d2;
              }
            }
            else {
              lVar18 = *(longlong *)IMAGE_SECTION_HEADER_1400002b8.Name;
              if (uVar32 < (ulonglong)IMAGE_SECTION_HEADER_1400002e0._32_8_) {
                uVar32 = IMAGE_SECTION_HEADER_1400002e0._32_8_;
              }
              lVar20 = (longlong)(uVar32 - lVar18) >> 1;
LAB_1400213d2:
              if (lVar18 != 0) {
                FUN_140016ae0(&param_10,lVar18,lVar20);
              }
            }
            uRam000000013fffffd0 = CONCAT44(0x42,(undefined4)uRam000000013fffffd0);
            IMAGE_DOS_HEADER_140000000._8_8_ = &param_10;
            if (7 < (ulonglong)IRam000000013fffff90) {
              IMAGE_DOS_HEADER_140000000._8_8_ = param_10;
            }
            uRam000000013fffffe0 = CONCAT44(uRam000000013fffffe0._4_4_,iVar15 + 0x88bb);
            IVar19 = hmenu;
            InsertMenuItemW((HMENU)hmenu,10,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
            if (7 < (ulonglong)IRam000000013fffff90) {
              uVar32 = (longlong)IRam000000013fffff90 * 2 + 2;
              puVar22 = param_10;
              if (0xfff < uVar32) {
                puVar22 = (undefined8 *)param_10[-1];
                if (0x1f < (ulonglong)((longlong)param_10 + (-8 - (longlong)puVar22)))
                goto LAB_1400219e4;
                uVar32 = (longlong)IRam000000013fffff90 * 2 + 0x29;
              }
              thunk_FUN_14028af80(puVar22,uVar32);
            }
            IRam000000013fffff88.VirtualAddress = 0;
            IRam000000013fffff88.Size = 0;
            IRam000000013fffff90.VirtualAddress = 7;
            IRam000000013fffff90.Size = 0;
            param_10 = (undefined8 *)((ulonglong)param_10 & 0xffffffffffff0000);
            FUN_140005b50(0x140000280);
            if (7 < (ulonglong)IMAGE_NT_HEADERS64_140000110.FileHeader._4_8_) {
              uVar32 = IMAGE_NT_HEADERS64_140000110.FileHeader._4_8_ * 2 + 2;
              lVar18 = UNK_140000080._128_8_;
              if (0xfff < uVar32) {
                lVar18 = *(longlong *)(UNK_140000080._128_8_ + -8);
                if (0x1f < (UNK_140000080._128_8_ - lVar18) - 8U) goto LAB_1400219e4;
                uVar32 = IMAGE_NT_HEADERS64_140000110.FileHeader._4_8_ * 2 + 0x29;
              }
              thunk_FUN_14028af80(lVar18,uVar32);
            }
            iRam00000001400006b8 = iVar10 + 1;
            IMAGE_NT_HEADERS64_140000110.Signature[0] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[1] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[2] = '\0';
            IMAGE_NT_HEADERS64_140000110.Signature[3] = '\0';
            IMAGE_NT_HEADERS64_140000110.FileHeader.Machine = 0;
            IMAGE_NT_HEADERS64_140000110.FileHeader.NumberOfSections = 0;
            IMAGE_NT_HEADERS64_140000110.FileHeader.TimeDateStamp = 7;
            IMAGE_NT_HEADERS64_140000110.FileHeader.PointerToSymbolTable = 0;
            UNK_140000080._128_8_ = UNK_140000080._128_8_ & 0xffffffffffff0000;
          }
        }
        FUN_140085440(0x140000140);
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
    unaff_R13.VirtualAddress = 0;
    unaff_R13.Size = 0;
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
    IRam000000013fffffe8 = hmenu;
    InsertMenuItemW((HMENU)unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
    if (7 < param_9) {
      lVar20 = CONCAT62(param_6._2_6_,(undefined2)param_6);
      uVar32 = param_9 * 2 + 2;
      lVar18 = lVar20;
      if (0xfff < uVar32) {
        lVar18 = *(longlong *)(lVar20 + -8);
        if (0x1f < (lVar20 - lVar18) - 8U) goto LAB_1400219e4;
        uVar32 = param_9 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar18,uVar32);
    }
    param_8 = 0;
    param_9 = 7;
    param_6._0_2_ = 0;
    if (7 < (ulonglong)UNK_140000080._32_8_) {
      uVar32 = UNK_140000080._32_8_ * 2 + 2;
      lVar18 = UNK_140000080._8_8_;
      if (0xfff < uVar32) {
        lVar18 = *(longlong *)(UNK_140000080._8_8_ + -8);
        if (0x1f < (UNK_140000080._8_8_ - lVar18) - 8U) goto LAB_1400219e4;
        uVar32 = UNK_140000080._32_8_ * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar18,uVar32);
    }
  }
  for (puVar22 = (undefined8 *)*DAT_1404e5330; puVar22 != DAT_1404e5330;
      puVar22 = (undefined8 *)*puVar22) {
    if ((puVar22[7] != puVar22[8]) && (1 < *(int *)(puVar22 + 0xe) - 2U)) {
      uRam000000013fffffd8 = 0;
      uRam000000013fffffd0 = 0x50;
      uRam000000013fffffe0 = 0;
      IRam000000013fffffe8.VirtualAddress = 0;
      IRam000000013fffffe8.Size = 0;
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
      InsertMenuItemW((HMENU)unaff_R12,1,1,(LPCMENUITEMINFOW)&uRam000000013fffffd0);
      if (7 < (ulonglong)UNK_140000080._32_8_) {
        uVar32 = UNK_140000080._32_8_ * 2 + 2;
        lVar18 = UNK_140000080._8_8_;
        if (0xfff < uVar32) {
          lVar18 = *(longlong *)(UNK_140000080._8_8_ + -8);
          if (0x1f < (UNK_140000080._8_8_ - lVar18) - 8U) goto LAB_1400219e4;
          uVar32 = UNK_140000080._32_8_ * 2 + 0x29;
        }
        thunk_FUN_14028af80(lVar18,uVar32);
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
  if (((pHRam00000001400006b0 != DAT_1404e8f10) && (cVar12 = FUN_140015180(10,0,0), cVar12 != '\0'))
     && (DVar16 = GetVersion(), DVar16 + 0xb8460000 < 0x38460000)) {
    DAT_1404e8f10 = hWnd;
    hModule = LoadLibraryW(L"uxtheme.dll");
    pFVar23 = GetProcAddress(hModule,(LPCSTR)0x87);
    (*pFVar23)(1);
    FreeLibrary(hModule);
  }
  SetForegroundWindow(hWnd);
  TrackPopupMenu((HMENU)unaff_R12,0x22,IMAGE_DOS_HEADER_140000000.e_program._0_4_ + 1,
                 IMAGE_DOS_HEADER_140000000.e_program._4_4_,unaff_R13.VirtualAddress,DAT_1404e5280,
                 (RECT *)unaff_R13);
  PostMessageW(hWnd,0,0,0);
  IVar19 = IRam000000013fffffa0;
  for (hmenu = IRam000000013fffff98; hmenu != IVar19;
      hmenu = (IMAGE_DATA_DIRECTORY)((longlong)hmenu + 8)) {
    DeleteObject(*(HGDIOBJ *)hmenu);
  }
  FUN_140085440(0x1400001d0);
  FUN_140085440(0x140000170);
  FUN_140085440(0x140000238);
  if (IRam000000013fffff98 != (IMAGE_DATA_DIRECTORY)0x0) {
    uVar32 = ((longlong)IRam000000013fffffa8 - (longlong)IRam000000013fffff98 >> 3) * 8;
    IVar19 = IRam000000013fffff98;
    if (0xfff < uVar32) {
      if (0x1f < ((longlong)IRam000000013fffff98 -
                 (longlong)*(IMAGE_DATA_DIRECTORY *)((longlong)IRam000000013fffff98 + -8)) - 8U)
      goto LAB_1400219e4;
      uVar32 = uVar32 + 0x27;
      IVar19 = *(IMAGE_DATA_DIRECTORY *)((longlong)IRam000000013fffff98 + -8);
    }
    thunk_FUN_14028af80(IVar19,uVar32);
    IRam000000013fffff98.VirtualAddress = 0;
    IRam000000013fffff98.Size = 0;
    IRam000000013fffffa0.VirtualAddress = 0;
    IRam000000013fffffa0.Size = 0;
    IRam000000013fffffa8 = unaff_R13;
  }
  if (7 < (ulonglong)UNK_140000080._0_8_) {
    lVar20 = CONCAT62(IMAGE_DOS_HEADER_140000000.e_program._42_6_,
                      IMAGE_DOS_HEADER_140000000.e_program._40_2_);
    uVar32 = UNK_140000080._0_8_ * 2 + 2;
    lVar18 = lVar20;
    if (0xfff < uVar32) {
      lVar18 = *(longlong *)(lVar20 + -8);
      if (0x1f < (lVar20 - lVar18) - 8U) goto LAB_1400219e4;
      uVar32 = UNK_140000080._0_8_ * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar18,uVar32);
  }
  UNK_140000080._0_8_ = 7;
  IMAGE_DOS_HEADER_140000000.e_program._40_2_ = unaff_R13.VirtualAddress._0_2_;
  IMAGE_DOS_HEADER_140000000.e_program._56_8_ = unaff_R13;
  if (7 < (ulonglong)IMAGE_SECTION_HEADER_140000218._24_8_) {
    uVar32 = IMAGE_SECTION_HEADER_140000218._24_8_ * 2 + 2;
    acVar28 = IMAGE_SECTION_HEADER_140000218.Name;
    if (0xfff < uVar32) {
      acVar28 = *(char (*) [8])((longlong)IMAGE_SECTION_HEADER_140000218.Name + -8);
      if (0x1f < ((longlong)IMAGE_SECTION_HEADER_140000218.Name - (longlong)acVar28) - 8U) {
LAB_1400219e4:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        IMAGE_SECTION_HEADER_140000268.PointerToLinenumbers = 0;
        FUN_1404217a0(0x140000294,0,0x3bc);
        IMAGE_SECTION_HEADER_140000290.Name[0] = -0x18;
        IMAGE_SECTION_HEADER_140000290.Name[1] = '\x03';
        IMAGE_SECTION_HEADER_140000290.Name[2] = '\0';
        IMAGE_SECTION_HEADER_140000290.Name[3] = '\0';
        IMAGE_SECTION_HEADER_140000268.PointerToRelocations = 0x3d0;
        IMAGE_SECTION_HEADER_140000268._32_8_ = hmenu;
        Shell_NotifyIconW(2,(PNOTIFYICONDATAW)&IMAGE_SECTION_HEADER_140000268.PointerToRelocations);
        return 0;
      }
      uVar32 = IMAGE_SECTION_HEADER_140000218._24_8_ * 2 + 0x29;
    }
    thunk_FUN_14028af80(acVar28,uVar32);
  }
  DestroyMenu((HMENU)IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6]);
  DAT_1404e8f18 = 0;
  return 0;
}

