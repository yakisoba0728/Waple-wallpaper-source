// Function: FUN_14001d3c0
// Addr: 14001d3c0
// Size: 1875 bytes


longlong * FUN_14001d3c0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined *_Str;
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  size_t sVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong *local_118;
  uint local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  uint local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong *local_c8;
  uint local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  char local_70;
  longlong *local_50 [5];
  
  plVar8 = (longlong *)0x0;
  if (((*(char *)(param_1 + 8) == '\a') &&
      (uVar1 = FUN_140086de0(param_1,&DAT_14047491c,&DAT_140474921), in_RAX = uVar1,
      *(char *)(uVar1 + 8) == '\x06')) && (in_RAX = FUN_1400863a0(uVar1), (int)in_RAX != 0)) {
    uVar2 = FUN_140086540(uVar1,0);
    FUN_140085090(local_78,uVar2);
    if ((local_70 == '\a') &&
       (lVar3 = FUN_140086de0(local_78,&DAT_140473b68,&DAT_140473b6c),
       *(char *)(lVar3 + 8) == '\x04')) {
      uVar2 = FUN_140086de0(local_78,&DAT_140473b68,&DAT_140473b6c);
      FUN_140085520(local_78,uVar2);
    }
    if (local_70 == '\x04') {
      local_c0 = CONCAT31(local_c0._1_3_,7);
      local_c0 = local_c0 & 0xfffffeff;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      plVar4 = (longlong *)FUN_14028af20(0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      lVar3 = FUN_14028af20(0x58);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar4 = lVar3;
      local_e8 = CONCAT31(local_e8._1_3_,7);
      local_e8 = local_e8 & 0xfffffeff;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_c8 = plVar4;
      plVar4 = (longlong *)FUN_14028af20(0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      lVar3 = FUN_14028af20(0x58);
      local_98 = CONCAT31(local_98._1_3_,7);
      local_98 = local_98 & 0xfffffeff;
      local_90 = 0;
      uStack_88 = 0;
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar4 = lVar3;
      local_80 = 0;
      local_f0 = plVar4;
      plVar4 = (longlong *)FUN_14028af20(0x10);
      *plVar4 = 0;
      plVar4[1] = 0;
      lVar3 = FUN_14028af20(0x58);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar4 = lVar3;
      local_a0 = plVar4;
      FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,&local_c8);
      uVar2 = FUN_140086de0(&local_a0,&DAT_140473b68,&DAT_140473b6c);
      FUN_140085520(uVar2,local_78);
      uVar2 = FUN_140086de0(&local_a0,"playlist","");
      FUN_140085520(uVar2,param_1);
      if (param_3 == '\0') {
        uVar2 = FUN_140086de0(&local_c8,"layout","");
        uVar5 = FUN_140086de0(&local_f0,"layout","");
        FUN_140085520(uVar5,uVar2);
        lVar3 = FUN_140086de0(&local_c8,"profile","");
        if (*(char *)(lVar3 + 8) == '\a') {
          uVar2 = FUN_140086de0(&local_c8,"profile","");
          uVar2 = FUN_140085090(local_50,uVar2);
          uVar5 = FUN_140086de0(&local_f0,"profile","");
          FUN_140085610(uVar5,uVar2);
          pplVar6 = local_50;
        }
        else {
          local_110 = CONCAT31(local_110._1_3_,7);
          local_110 = local_110 & 0xfffffeff;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          plVar8 = (longlong *)FUN_14028af20(0x10);
          *plVar8 = 0;
          plVar8[1] = 0;
          lVar3 = FUN_14028af20(0x58);
          *(longlong *)lVar3 = lVar3;
          *(longlong *)(lVar3 + 8) = lVar3;
          *(longlong *)(lVar3 + 0x10) = lVar3;
          *(undefined2 *)(lVar3 + 0x18) = 0x101;
          *plVar8 = lVar3;
          local_118 = plVar8;
          uVar2 = FUN_140086de0(&local_f0,"profile","");
          FUN_140085610(uVar2,&local_118);
          pplVar6 = &local_118;
        }
        uVar11 = FUN_140085440(pplVar6);
        FUN_140066370(uVar11,param_2,1);
      }
      else {
        local_108 = 0;
        uStack_100 = 0;
        local_110 = CONCAT31(local_110._1_3_,1);
        local_110 = local_110 & 0xfffffeff;
        local_f8 = 0;
        local_118 = (longlong *)0x2;
        if ((int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f == 1) {
          local_118 = plVar8;
        }
        uVar2 = FUN_140086de0(&local_f0,"layout","");
        FUN_140085610(uVar2,&local_118);
        FUN_140085440(&local_118);
        FUN_1400666c0();
      }
      lVar3 = FUN_140086de0(&local_c8,"selectedwallpapers","");
      bVar10 = *(char *)(lVar3 + 8) != '\a';
      if (bVar10) {
        local_110 = CONCAT31(local_110._1_3_,7);
        local_110 = local_110 & 0xfffffeff;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        plVar8 = (longlong *)FUN_14028af20(0x10);
        *plVar8 = 0;
        plVar8[1] = 0;
        lVar3 = FUN_14028af20(0x58);
        pplVar6 = &local_118;
        *(longlong *)lVar3 = lVar3;
        *(longlong *)(lVar3 + 8) = lVar3;
        *(longlong *)(lVar3 + 0x10) = lVar3;
        *(undefined2 *)(lVar3 + 0x18) = 0x101;
        *plVar8 = lVar3;
        local_118 = plVar8;
      }
      else {
        uVar2 = FUN_140086de0(&local_c8,"selectedwallpapers","");
        pplVar6 = (longlong **)FUN_140085090(local_50,uVar2);
      }
      uVar2 = FUN_140086de0(&local_f0,"selectedwallpapers","");
      FUN_140085610(uVar2,pplVar6);
      plVar8 = local_118;
      if (bVar10) {
        switch((undefined1)local_110) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
          break;
        case 4:
          if ((local_110 >> 8 & 1) != 0) {
            thunk_FUN_1402d9040(local_118);
          }
          break;
        case 6:
        case 7:
          if (local_118 != (longlong *)0x0) {
            FUN_140088e40(local_118);
            thunk_FUN_14028af80(plVar8,0x10);
          }
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        }
        lVar3 = local_108;
        if (local_108 != 0) {
          FUN_140017240(local_108 + 0x40);
          FUN_140017240(lVar3 + 0x20);
          FUN_140017240(lVar3);
          thunk_FUN_14028af80(lVar3,0x60);
        }
      }
      if (!bVar10) {
        FUN_140085440(local_50);
      }
      uVar2 = FUN_140086de0(&local_f0,"selectedwallpapers","");
      puVar9 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar9 = (undefined8 *)*param_2;
      }
      uVar2 = FUN_140086de0(uVar2,puVar9,param_2[2] + (longlong)puVar9);
      FUN_140085520(uVar2,&local_a0);
      FUN_14006a490(&DAT_1404e52e0,&local_f0);
      _Str = PTR_s_wallpaperconfig_1404df5a0;
      uVar2 = FUN_140086de0(&DAT_1404df5e8,"general","");
      sVar7 = strlen(_Str);
      uVar2 = FUN_140086de0(uVar2,_Str,_Str + sVar7);
      FUN_140085520(uVar2,&local_f0);
      if ((byte)local_98 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001d9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (longlong *)
                 (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&DAT_14001dbd8 + (ulonglong)(byte)local_98 * 4)))
                           (IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&DAT_14001dbd8 + (ulonglong)(byte)local_98 * 4));
        return plVar8;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar3 = local_90;
      if (local_90 != 0) {
        FUN_140017240(local_90 + 0x40);
        FUN_140017240(lVar3 + 0x20);
        FUN_140017240(lVar3);
        thunk_FUN_14028af80(lVar3,0x60);
      }
      if ((byte)local_e8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001da67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (longlong *)
                 (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&DAT_14001dbf8 + (ulonglong)(byte)local_e8 * 4)))
                           (IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&DAT_14001dbf8 + (ulonglong)(byte)local_e8 * 4));
        return plVar8;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar3 = local_e0;
      local_f0 = (longlong *)0x0;
      if (local_e0 != 0) {
        FUN_140017240(local_e0 + 0x40);
        FUN_140017240(lVar3 + 0x20);
        FUN_140017240(lVar3);
        thunk_FUN_14028af80(lVar3,0x60);
      }
      if ((byte)local_c0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001db05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (longlong *)
                 (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&DAT_14001dc18 + (ulonglong)(byte)local_c0 * 4)))
                           (IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&DAT_14001dc18 + (ulonglong)(byte)local_c0 * 4));
        return plVar8;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar3 = local_b8;
      plVar8 = (longlong *)0x1;
      if (local_b8 != 0) {
        FUN_140017240(local_b8 + 0x40);
        FUN_140017240(lVar3 + 0x20);
        FUN_140017240(lVar3);
        thunk_FUN_14028af80(lVar3,0x60);
      }
    }
    FUN_140085440(local_78);
  }
  else {
    plVar8 = (longlong *)(in_RAX & 0xffffffffffffff00);
  }
  return plVar8;
}

