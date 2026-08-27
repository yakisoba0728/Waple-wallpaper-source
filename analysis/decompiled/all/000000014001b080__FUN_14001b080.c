// Function: FUN_14001b080
// Addr: 14001b080
// Size: 697 bytes


void FUN_14001b080(void)

{
  undefined *_Str;
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char local_58 [8];
  char local_50 [4];
  char local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = 0xd;
  local_4a = 0;
  local_50 = (char  [4])s__nowallpapers_140473f58._8_4_;
  local_4c = s__nowallpapers_140473f58[0xc];
  local_40 = 0xf;
  local_58 = (char  [8])s__nowallpapers_140473f58._0_8_;
  local_4b = 0;
  cVar1 = FUN_14000dc20((int)s__nowallpapers_140473f58._0_8_,local_58);
  if (cVar1 != '\0') {
    DAT_1404df540 = DAT_1404df540 | 0x100;
    return;
  }
  if (DAT_1404e52b8 == 2) {
    FUN_140098b00("Detected monitors (%s):\n","ApplyRefreshWallpaperConfig");
    iVar5 = 0;
    if (0 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f) {
      do {
        lVar4 = (longlong)iVar5 * 0x88;
        puVar7 = (undefined8 *)(DAT_1404e8ec8 + 0x58 + lVar4);
        if (0xf < *(ulonglong *)(lVar4 + 0x70 + DAT_1404e8ec8)) {
          puVar7 = (undefined8 *)*puVar7;
        }
        puVar6 = (undefined8 *)(DAT_1404e8ec8 + 0x18 + lVar4);
        if (0xf < *(ulonglong *)(lVar4 + 0x30 + DAT_1404e8ec8)) {
          puVar6 = (undefined8 *)*puVar6;
        }
        FUN_140098b00("Monitor %i. Device name \'%s\'. Friendly name \'%s\'. Bounds %i %i %i %i (window %i %i)\n"
                      ,iVar5,puVar6,puVar7,*(undefined4 *)(lVar4 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar4 + 4 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar4 + 8 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar4 + 0xc + DAT_1404e8ec8),
                      *(undefined4 *)(lVar4 + 0x10 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar4 + 0x14 + DAT_1404e8ec8));
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f);
    }
  }
  _Str = PTR_s_wallpaperconfig_1404df5a0;
  DAT_1404df540 = DAT_1404df540 & 0xfffffeff;
  local_30 = (local_30 >> 8 & 0xfffffe) << 8;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uVar2 = FUN_140086de0(&DAT_1404df5e8,"general","");
  sVar3 = strlen(_Str);
  lVar4 = FUN_140087490(uVar2,_Str,_Str + sVar3);
  if (lVar4 != 0) {
    sVar3 = strlen(_Str);
    uVar2 = FUN_140086de0(uVar2,_Str,_Str + sVar3);
    FUN_140085520(&local_38,uVar2);
  }
  FUN_14006a490(&DAT_1404e52e0,&local_38);
  if (7 < (byte)local_30) {
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar4 = local_28;
    local_38 = 0;
    if (local_28 != 0) {
      FUN_140017240(local_28 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001b2d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_14001b374 + (ulonglong)(byte)local_30 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_14001b374 + (ulonglong)(byte)local_30 * 4));
  return;
}

