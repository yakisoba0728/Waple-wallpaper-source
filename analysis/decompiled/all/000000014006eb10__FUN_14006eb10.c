// Function: FUN_14006eb10
// Addr: 14006eb10
// Size: 507 bytes


void FUN_14006eb10(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  undefined *_Str;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  _Str = PTR_s_wallpaperconfig_1404df5a0;
  if (param_2 == '\0') {
    DAT_1404e52e4 = DAT_1404e52e4 & 0xfffffff7;
  }
  else {
    DAT_1404e52e4 = DAT_1404e52e4 | 8;
  }
  if ((DAT_1404e52e4 & 0xc) == 0) {
    local_30 = (local_30 >> 8 & 0xfffffe) << 8;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uVar3 = FUN_140086de0(&DAT_1404df5e8,"general","");
    sVar4 = strlen(_Str);
    lVar5 = FUN_140087490(uVar3,_Str,_Str + sVar4);
    if (lVar5 != 0) {
      sVar4 = strlen(_Str);
      uVar3 = FUN_140086de0(uVar3,_Str,_Str + sVar4);
      FUN_140085520(&local_38,uVar3);
    }
    FUN_14006a490(&DAT_1404e52e0,&local_38);
    if ((byte)local_30 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014006eca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_14006ed44 + (ulonglong)(byte)local_30 * 4)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&DAT_14006ed44 + (ulonglong)(byte)local_30 * 4));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar5 = local_28;
    local_38 = 0;
    if (local_28 != 0) {
      FUN_140017240(local_28 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  else {
    FUN_14000d660(&DAT_1404e8ae0);
    puVar2 = DAT_1404e5330;
    for (puVar1 = (undefined8 *)*DAT_1404e5330; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      lVar5 = puVar1[6];
      if (lVar5 != 0) {
        if (puVar1 != (undefined8 *)(lVar5 + 0x40)) {
          plVar6 = (longlong *)(lVar5 + 0xe0);
          if (0xf < *(ulonglong *)(lVar5 + 0xf8)) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_14000f880(puVar1 + 0x14,plVar6,*(undefined8 *)(lVar5 + 0xf0));
        }
        lVar5 = puVar1[6];
        if (puVar1 != (undefined8 *)(lVar5 + 0x60)) {
          plVar6 = (longlong *)(lVar5 + 0x120);
          if (0xf < *(ulonglong *)(lVar5 + 0x138)) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_14000f880(puVar1 + 0x18,plVar6,*(undefined8 *)(lVar5 + 0x130));
        }
      }
      if ((longlong *)puVar1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[6] + 0x18))();
        puVar1[6] = 0;
      }
    }
  }
  FUN_14006e0c0();
  return;
}

