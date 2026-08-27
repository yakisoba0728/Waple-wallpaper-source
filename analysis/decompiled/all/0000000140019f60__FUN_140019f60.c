// Function: FUN_140019f60
// Addr: 140019f60
// Size: 561 bytes


void FUN_140019f60(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_38 [8];
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar2 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
  puVar1 = PTR_s_wallpaperconfig_1404df5a0;
  if (iVar2 == 0) {
    uVar7 = (local_30 >> 8 & 0xfffffe) << 8;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = uVar7;
    uVar3 = FUN_140086de0(&DAT_1404df5e8,"general","");
    sVar4 = strlen(puVar1);
    lVar5 = FUN_140087490(uVar3,puVar1,puVar1 + sVar4);
    if (lVar5 != 0) {
      sVar4 = strlen(puVar1);
      uVar3 = FUN_140086de0(uVar3,puVar1,puVar1 + sVar4);
      FUN_140085520(local_38,uVar3);
      lVar5 = FUN_140087490(local_38,"sameaswallpaper","");
      uVar7 = local_30;
      if (lVar5 != 0) {
        uVar3 = FUN_140086de0(local_38,"sameaswallpaper","");
        uVar6 = FUN_140086de0(param_1,"sameaswallpaper","");
        FUN_140085520(uVar6,uVar3);
        uVar7 = local_30;
      }
    }
    if ((uVar7 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001a09f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&LAB_14001a1c8 + (ulonglong)(uVar7 & 0xff) * 4)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&LAB_14001a1c8 + (ulonglong)(uVar7 & 0xff) * 4));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar5 = local_28;
    if (local_28 != 0) {
      FUN_140017240(local_28 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  puVar1 = PTR_s_wallpaperconfig_1404df5a0;
  uVar3 = FUN_140086de0(&DAT_1404df5e8,"general","");
  sVar4 = strlen(puVar1);
  uVar3 = FUN_140086de0(uVar3,puVar1,puVar1 + sVar4);
  FUN_140085520(uVar3,param_1);
  FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
  FUN_140019350(0);
  if (iVar2 == 0) {
    KillTimer(DAT_1404e5280,0x76);
    SetTimer(DAT_1404e5280,0x76,500,(TIMERPROC)0x0);
  }
  FUN_140085440(param_1);
  return;
}

