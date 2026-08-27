// Function: FUN_140041250
// Addr: 140041250
// Size: 1987 bytes


void FUN_140041250(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [24];
  longlong *local_208;
  uint local_200;
  longlong local_1f8;
  ulonglong uStack_1f0;
  longlong local_1e8;
  longlong local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198 [4];
  undefined1 local_178;
  undefined7 uStack_177;
  undefined8 local_168;
  ulonglong local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined1 local_130 [8];
  uint local_128 [14];
  longlong alStack_f0 [11];
  undefined4 local_94;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  puVar12 = auStack_228;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  plVar14 = (longlong *)(param_1 + 8);
  local_1d8 = (local_1d8 >> 8 & 0xfffffe) << 8;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  plVar5 = plVar14;
  if (7 < *(ulonglong *)(param_1 + 0x20)) {
    plVar5 = (longlong *)*plVar14;
  }
  FUN_14003f7b0(&local_158,plVar5);
  cVar4 = FUN_14003f220(&local_158,&local_1e0,0);
  if (cVar4 == '\0') {
    local_200 = CONCAT31(local_200._1_3_,7);
    local_200 = local_200 & 0xfffffeff;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    plVar5 = (longlong *)FUN_14028af20(0x10);
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar6 = FUN_14028af20(0x58);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    *plVar5 = lVar6;
    local_208 = plVar5;
    FUN_140085610(&local_1e0,&local_208);
    plVar5 = local_208;
    switch((undefined1)local_200) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_200 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_208);
      }
      break;
    case 6:
    case 7:
      if (local_208 != (longlong *)0x0) {
        FUN_140088e40(local_208);
        thunk_FUN_14028af80(plVar5,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar6 = local_1f8;
    if (local_1f8 != 0) {
      FUN_140017240(local_1f8 + 0x40);
      FUN_140017240(lVar6 + 0x20);
      FUN_140017240(lVar6);
      thunk_FUN_14028af80(lVar6,0x60);
    }
  }
  puVar10 = (undefined8 *)(param_1 + 0x28);
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  uVar7 = FUN_140086de0(&local_1e0,puVar10,*(longlong *)(param_1 + 0x38) + (longlong)puVar10);
  FUN_140085520(uVar7,param_1 + 0x48);
  plVar5 = plVar14;
  if (7 < *(ulonglong *)(param_1 + 0x20)) {
    plVar5 = (longlong *)*plVar14;
  }
  local_198[0] = 0;
  local_198[1] = 0;
  local_198[2] = 0;
  local_198[3] = 0;
  FUN_140016170(local_198,plVar5,*(undefined8 *)(param_1 + 0x18));
  uVar7 = FUN_14003fe80(local_198);
  uVar7 = FUN_140018ce0(uVar7,&local_208);
  FUN_140016fc0(&local_1b8,uVar7);
  FUN_1400187b0(&local_1b8);
  if (uStack_1f0 < 0x10) {
LAB_1400414a5:
    local_1f8 = 0;
    uStack_1f0 = 0xf;
    local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
    if (7 < (ulonglong)local_198[3]) {
      uVar9 = local_198[3] * 2 + 2;
      lVar6 = local_198[0];
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(local_198[0] + -8);
        if (0x1f < (local_198[0] - lVar6) - 8U) goto LAB_140041936;
        uVar9 = local_198[3] * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar6,uVar9);
    }
    uVar3 = (undefined4)local_1a8;
    uVar9 = local_1a8 & 0xffffffff;
    local_200 = CONCAT31(local_200._1_3_,4);
    puVar13 = &local_1b8;
    if (0xf < local_1a0) {
      puVar13 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
    }
    puVar8 = (undefined4 *)_malloc_base(uVar9 + 5);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_140017170(&local_208,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_208);
    }
    *puVar8 = uVar3;
    uVar11 = local_200 | 0x100;
    FUN_1404210f0(puVar8 + 1,puVar13,uVar9);
    *(undefined1 *)((longlong)puVar8 + uVar9 + 4) = 0;
    plVar5 = (longlong *)FUN_140086de0(&local_1e0,"?installdirectory","");
    local_200 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = uVar11;
    local_208 = (longlong *)*plVar5;
    *plVar5 = (longlong)puVar8;
    lVar6 = plVar5[2];
    plVar5[2] = 0;
    local_1e8 = plVar5[4];
    uStack_1f0 = plVar5[3];
    plVar5[3] = 0;
    plVar5[4] = 0;
    local_1f8 = lVar6;
    FUN_140086d30(&local_208);
    if (lVar6 != 0) {
      FUN_140017240(lVar6 + 0x40);
      FUN_140017240(lVar6 + 0x20);
      FUN_140017240(lVar6);
      thunk_FUN_14028af80(lVar6,0x60);
    }
    if (*(char *)(param_1 + 0x78) == '\a') {
      puVar10 = (undefined8 *)(param_1 + 0x28);
      if (0xf < *(ulonglong *)(param_1 + 0x40)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      uVar7 = FUN_140086de0(&local_1e0,puVar10,*(longlong *)(param_1 + 0x38) + (longlong)puVar10);
      uVar7 = FUN_140086de0(uVar7,"general","");
      uVar7 = FUN_140086de0(uVar7,"wallpaperconfig","");
      FUN_140085520(uVar7,param_1 + 0x70);
    }
    FUN_140004d00(&local_178,&local_1e0,1);
    if (7 < *(ulonglong *)(param_1 + 0x20)) {
      plVar14 = (longlong *)*plVar14;
    }
    local_88 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_138 = &DAT_140475e00;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1 *)0x0;
    uStack_40 = 0;
    local_90 = std::basic_ostream<char,std::char_traits<char>_>::vftable;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_38 = 0;
    local_94 = 0x98;
    FUN_140013870(&local_90);
    local_48 = local_130;
    uStack_40 = 0;
    local_38 = FUN_140013490(&local_90,0x20);
    if (local_48 == (undefined1 *)0x0) {
      FUN_140013b50(&local_90,(uint)local_80 | 4,0);
    }
    *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
         *(int *)(local_138 + 4) + -0xa8;
    FUN_14004c570(local_130);
    lVar6 = FUN_14004c4c0(local_130,plVar14,2);
    if (lVar6 == 0) {
      lVar6 = (longlong)*(int *)(local_138 + 4);
      uVar11 = 6;
      if (*(longlong *)((longlong)alStack_f0 + lVar6) != 0) {
        uVar11 = 2;
      }
      FUN_140013b50(local_130 + lVar6 + -8,uVar11 | *(uint *)((longlong)local_128 + lVar6),0);
    }
    *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
         *(int *)(local_138 + 4) + -0xa8;
    FUN_14000cbc0(&local_138,&local_178);
    lVar6 = FUN_14004c3c0(local_130);
    if (lVar6 == 0) {
      lVar6 = (longlong)*(int *)(local_138 + 4);
      uVar11 = 6;
      if (*(longlong *)((longlong)alStack_f0 + lVar6) != 0) {
        uVar11 = 2;
      }
      FUN_140013b50(local_130 + lVar6 + -8,uVar11 | *(uint *)((longlong)local_128 + lVar6),0);
    }
    *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
         *(int *)(local_138 + 4) + -0xa8;
    FUN_14004a790(local_130);
    *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
         *(int *)(local_138 + 4) + -0x10;
    local_90 = std::ios_base::vftable;
    FUN_14028c430(&local_90);
    if (0xf < local_160) {
      lVar2 = CONCAT71(uStack_177,local_178);
      uVar9 = local_160 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_140041936;
        uVar9 = local_160 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar9);
    }
    local_168 = 0;
    local_160 = 0xf;
    local_178 = 0;
    if (0xf < local_1a0) {
      lVar2 = CONCAT71(uStack_1b7,local_1b8);
      uVar9 = local_1a0 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_140041936;
        uVar9 = local_1a0 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar9);
    }
    local_1a8 = 0;
    local_1a0 = 0xf;
    local_1b8 = 0;
    if (0xf < local_140) {
      lVar2 = CONCAT71(uStack_157,local_158);
      uVar9 = local_140 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_140041936;
        uVar9 = local_140 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar9);
    }
    local_148 = 0;
    local_140 = 0xf;
    local_158 = 0;
    puVar13 = auStack_228;
    switch((undefined1)local_1d8) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_140041934_caseD_4;
    case 6:
    case 7:
      puVar13 = auStack_228;
      if (local_1e0 != 0) {
        FUN_140088e40(local_1e0);
        thunk_FUN_14028af80(local_1e0,0x10);
        puVar13 = auStack_228;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar13 = auStack_228;
    }
  }
  else {
    uVar9 = uStack_1f0 + 1;
    plVar5 = local_208;
    if (uVar9 < 0x1000) {
LAB_1400414a0:
      thunk_FUN_14028af80(plVar5,uVar9);
      goto LAB_1400414a5;
    }
    plVar5 = (longlong *)local_208[-1];
    if ((ulonglong)((longlong)local_208 + (-8 - (longlong)plVar5)) < 0x20) {
      uVar9 = uStack_1f0 + 0x28;
      goto LAB_1400414a0;
    }
LAB_140041936:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar12 = auStack_220;
switchD_140041934_caseD_4:
    puVar13 = puVar12;
    if ((*(uint *)(puVar12 + 0x50) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar12 + -8) = 0x140041952;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar12 + 0x48));
    }
  }
  lVar6 = *(longlong *)(puVar13 + 0x58);
  *(undefined8 *)(puVar13 + 0x48) = 0;
  if (lVar6 != 0) {
    *(undefined8 *)(puVar13 + -8) = 0x1400419a6;
    FUN_140017240(lVar6 + 0x40);
    *(undefined8 *)(puVar13 + -8) = 0x1400419af;
    FUN_140017240(lVar6 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x1400419b7;
    FUN_140017240(lVar6);
    *(undefined8 *)(puVar13 + -8) = 0x1400419c4;
    thunk_FUN_14028af80(lVar6,0x60);
  }
  return;
}

