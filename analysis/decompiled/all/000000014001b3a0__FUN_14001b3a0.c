// Function: FUN_14001b3a0
// Addr: 14001b3a0
// Size: 1393 bytes


void FUN_14001b3a0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t sVar9;
  longlong *plVar10;
  longlong lVar11;
  char *_Str;
  undefined1 local_a8 [8];
  uint local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  uint local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar8 = 0;
  FUN_14006c280(&DAT_1404e52e0);
  local_50 = (local_50 >> 8 & 0xfffffe) << 8;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar5 = FUN_140087490(uVar4,&DAT_1404737fc,&DAT_140473800);
  if (lVar5 != 0) {
    uVar4 = FUN_140086de0(uVar4,&DAT_1404737fc,&DAT_140473800);
    FUN_140085520(local_58,uVar4);
  }
  uVar4 = FUN_140017fb0(local_a8,local_58,param_2);
  uVar6 = FUN_140086de0(&DAT_1404df5e8,"general","");
  uVar6 = FUN_140086de0(uVar6,&DAT_1404737fc,&DAT_140473800);
  FUN_140085520(uVar6,uVar4);
  FUN_140085440(local_a8);
  lVar5 = FUN_140086de0(param_2,"language","");
  if (*(char *)(lVar5 + 8) == '\x04') {
    plVar7 = (longlong *)FUN_140086de0(param_2,"steamlanguage","");
    lVar5 = *plVar7;
    lVar11 = lVar8;
    if ((lVar5 != 0) && (lVar11 = lVar5, (*(uint *)(plVar7 + 1) >> 8 & 1) != 0)) {
      lVar11 = lVar5 + 4;
    }
    plVar7 = (longlong *)FUN_140086de0(param_2,"language","");
    lVar5 = *plVar7;
    if ((lVar5 != 0) && (lVar8 = lVar5, (*(uint *)(plVar7 + 1) >> 8 & 1) != 0)) {
      lVar8 = lVar5 + 4;
    }
    FUN_140097570(&DAT_1404e6d80,lVar8,lVar11);
  }
  uVar4 = FUN_140086de0(param_2,"iconopacity","");
  cVar3 = FUN_1400886e0(uVar4);
  if (cVar3 != '\0') {
    uVar4 = FUN_140086de0(param_2,"iconopacity","");
    DAT_1404df54c = FUN_140085ee0(uVar4);
    FUN_14003d930(DAT_1404df54c);
  }
  cVar3 = FUN_1400489a0(param_2,local_58);
  uVar4 = FUN_140085090(local_a8,param_2);
  FUN_140006060(uVar4);
  FUN_14001a1f0(param_2);
  puVar2 = DAT_1404e5330;
  if (cVar3 == '\0') {
    for (puVar1 = (undefined8 *)*DAT_1404e5330; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      plVar7 = (longlong *)puVar1[6];
      if (plVar7 != (longlong *)0x0) {
        _Str = (char *)(puVar1 + 2);
        local_a0 = (local_a0 >> 8 & 0xfffffe) << 8;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        if (0xf < (ulonglong)puVar1[5]) {
          _Str = *(char **)_Str;
        }
        uVar4 = FUN_140086de0(&DAT_1404df5e8,"general","");
        uVar4 = FUN_140086de0(uVar4,&DAT_1404737fc,&DAT_140473800);
        FUN_140085520(local_a8,uVar4);
        lVar8 = FUN_140087490(local_a8,"usermonitors","");
        if ((lVar8 != 0) &&
           (lVar8 = FUN_140086de0(local_a8,"usermonitors",""), *(char *)(lVar8 + 8) == '\a')) {
          sVar9 = strlen(_Str);
          lVar5 = FUN_140087490(lVar8,_Str,_Str + sVar9);
          if (lVar5 != 0) {
            sVar9 = strlen(_Str);
            uVar4 = FUN_140086de0(lVar8,_Str,_Str + sVar9);
            uVar6 = FUN_140086de0(local_a8,"location","");
            FUN_140085520(uVar6,uVar4);
          }
        }
        lVar8 = FUN_140086de0(local_a8,"location","");
        if (*(char *)(lVar8 + 8) != '\a') {
          local_78 = CONCAT31(local_78._1_3_,7);
          local_78 = local_78 & 0xfffffeff;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0;
          plVar10 = (longlong *)FUN_14028af20(0x10);
          *plVar10 = 0;
          plVar10[1] = 0;
          lVar8 = FUN_14028af20(0x58);
          *(longlong *)lVar8 = lVar8;
          *(longlong *)(lVar8 + 8) = lVar8;
          *(longlong *)(lVar8 + 0x10) = lVar8;
          *(undefined2 *)(lVar8 + 0x18) = 0x101;
          *plVar10 = lVar8;
          local_80 = plVar10;
          uVar4 = FUN_140086de0(local_a8,"location","");
          FUN_140085610(uVar4,&local_80);
          if ((byte)local_78 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001b7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_14001b97c + (ulonglong)(byte)local_78 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&DAT_14001b97c + (ulonglong)(byte)local_78 * 4));
            return;
          }
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
          lVar8 = local_70;
          if (local_70 != 0) {
            FUN_140017240(local_70 + 0x40);
            FUN_140017240(lVar8 + 0x20);
            FUN_140017240(lVar8);
            thunk_FUN_14028af80(lVar8,0x60);
          }
        }
        lVar8 = *plVar7;
        uVar4 = FUN_140085090(&local_80,local_a8);
        (**(code **)(lVar8 + 0x88))(plVar7,uVar4);
        if ((byte)local_a0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001b85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                    *(uint *)(&DAT_14001b99c + (ulonglong)(byte)local_a0 * 4)))
                    (IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&DAT_14001b99c + (ulonglong)(byte)local_a0 * 4));
          return;
        }
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
        lVar8 = local_98;
        if (local_98 != 0) {
          FUN_140017240(local_98 + 0x40);
          FUN_140017240(lVar8 + 0x20);
          FUN_140017240(lVar8);
          thunk_FUN_14028af80(lVar8,0x60);
        }
      }
    }
  }
  else {
    FUN_1400666c0();
    FUN_14001b080();
  }
  if ((param_3 != '\0') && (DAT_1404e64d0 != -1)) {
    uVar4 = FUN_140004d00(local_a8,param_2,0);
    FUN_140018240(&local_80,0x7e,uVar4);
    FUN_140017240(local_a8);
    FUN_1400182d0(&DAT_1404e64d0,&local_80);
    thunk_FUN_14028af80(uStack_68);
  }
  FUN_140085440(local_58);
  return;
}

