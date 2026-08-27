// Function: FUN_14010c650
// Addr: 14010c650
// Size: 2669 bytes


longlong * FUN_14010c650(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong *local_d8;
  uint local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0 [3];
  ulonglong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  
  puVar17 = auStack_f8;
  plVar16 = (longlong *)0x0;
  lVar5 = FUN_140086de0(param_1 + 2,"general","");
  *(undefined1 *)(param_2 + 1) = 7;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffeff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  plVar6 = (longlong *)FUN_14028af20(0x10);
  *plVar6 = 0;
  plVar6[1] = 0;
  lVar7 = FUN_14028af20(0x58);
  uVar18 = 1;
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  *(longlong *)(lVar7 + 0x10) = lVar7;
  *(undefined2 *)(lVar7 + 0x18) = 0x101;
  *plVar6 = lVar7;
  *param_2 = (longlong)plVar6;
  if (*(char *)(lVar5 + 8) == '\a') {
    uVar8 = FUN_140086de0(lVar5,"properties","");
    FUN_140085520(param_2,uVar8);
    cVar3 = FUN_14010d100(param_1);
    if (cVar3 != '\0') {
      uVar8 = FUN_140086de0(param_2,"audioprocessing","");
      local_d0 = CONCAT31(local_d0._1_3_,5);
      local_d0 = local_d0 & 0xfffffeff;
      local_b8 = 0;
      local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
      local_c8 = 0;
      uStack_c0 = 0;
      uVar9 = FUN_140086de0(uVar8,"value","");
      FUN_140085610(uVar9,&local_d8);
      FUN_140085440(&local_d8);
      local_d0 = CONCAT31(local_d0._1_3_,4);
      local_d0 = local_d0 | 0x100;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (longlong *)FUN_140084b30(&DAT_140488b48,4);
      uVar9 = FUN_140086de0(uVar8,&DAT_140474874,&DAT_140474878);
      FUN_140085610(uVar9,&local_d8);
      FUN_140085440(&local_d8);
      local_d0 = CONCAT31(local_d0._1_3_,4);
      local_d0 = local_d0 | 0x100;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (longlong *)FUN_140084b30("fa-microphone",0xd);
      uVar9 = FUN_140086de0(uVar8,&DAT_140488b2c,&DAT_140488b30);
      FUN_140085610(uVar9,&local_d8);
      FUN_140085440(&local_d8);
      local_d0 = CONCAT31(local_d0._1_3_,4);
      local_d0 = local_d0 | 0x100;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (longlong *)FUN_140084b30("ui_browse_properties_audio_recording",0x24);
      uVar9 = FUN_140086de0(uVar8,&DAT_140488b08,&DAT_140488b0c);
      FUN_140085610(uVar9,&local_d8);
      FUN_140085440(&local_d8);
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_d0 = local_d0 & 0xfffffeff;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_d8 = (longlong *)0xffffffffffffffff;
      uVar8 = FUN_140086de0(uVar8,"order","");
      FUN_140085610(uVar8,&local_d8);
      FUN_140085440(&local_d8);
      uVar18 = 2;
    }
  }
  lVar5 = FUN_140086de0(param_2,"schemecolor","");
  if ((*(char *)(lVar5 + 8) == '\a') &&
     (lVar7 = FUN_140087490(&DAT_1404e7ed0,"schemecolor",""), lVar7 == 0)) {
    local_d0 = CONCAT31(local_d0._1_3_,1);
    local_d0 = local_d0 & 0xfffffeff;
    local_b8 = 0;
    local_d8 = (longlong *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar8 = FUN_140086de0(lVar5,"order","");
    FUN_140085610(uVar8,&local_d8);
    FUN_140085440(&local_d8);
    local_d0 = CONCAT31(local_d0._1_3_,4);
    local_d0 = local_d0 | 0x100;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (longlong *)FUN_140084b30("fa-palette",10);
    uVar8 = FUN_140086de0(lVar5,&DAT_140488b2c,&DAT_140488b30);
    FUN_140085610(uVar8,&local_d8);
    FUN_140085440(&local_d8);
  }
  else {
    local_d0 = CONCAT31(local_d0._1_3_,7);
    local_d0 = local_d0 & 0xfffffeff;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    plVar6 = (longlong *)FUN_14028af20(0x10);
    *plVar6 = 0;
    plVar6[1] = 0;
    lVar7 = FUN_14028af20(0x58);
    *(longlong *)lVar7 = lVar7;
    *(longlong *)(lVar7 + 8) = lVar7;
    *(longlong *)(lVar7 + 0x10) = lVar7;
    *(undefined2 *)(lVar7 + 0x18) = 0x101;
    *plVar6 = lVar7;
    local_d8 = plVar6;
    FUN_140085610(lVar5,&local_d8);
    plVar6 = local_d8;
    switch((undefined1)local_d0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_d0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_d8);
      }
      break;
    case 6:
    case 7:
      if (local_d8 != (longlong *)0x0) {
        FUN_140088e40(local_d8);
        thunk_FUN_14028af80(plVar6,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar7 = local_c8;
    if (local_c8 != 0) {
      FUN_140017240(local_c8 + 0x40);
      FUN_140017240(lVar7 + 0x20);
      FUN_140017240(lVar7);
      thunk_FUN_14028af80(lVar7,0x60);
    }
    lVar7 = FUN_140087490(&DAT_1404e7ed0,"schemecolor","");
    if (lVar7 == 0) {
      local_d0 = CONCAT31(local_d0._1_3_,4);
      local_d0 = local_d0 | 0x100;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (longlong *)FUN_140084b30("0.5 0.5 0.5",0xb);
      uVar8 = FUN_140086de0(lVar5,"value","");
      FUN_140085520(uVar8,&local_d8);
      pplVar13 = &local_d8;
    }
    else {
      lVar7 = FUN_140087490(&DAT_1404e7ed0,"schemecolor","");
      if (lVar7 == 0) {
        lVar7 = FUN_140084ac0();
      }
      uVar8 = FUN_140085090(local_b0,lVar7);
      uVar9 = FUN_140086de0(lVar5,"value","");
      FUN_140085520(uVar9,uVar8);
      pplVar13 = local_b0;
    }
    FUN_140085440(pplVar13);
    local_d0 = CONCAT31(local_d0._1_3_,4);
    puVar10 = (undefined4 *)_malloc_base(0xf);
    uVar8 = s_fa_palette_140488fb8._0_8_;
    if (puVar10 == (undefined4 *)0x0) {
      FUN_140017170(local_b0,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(local_b0);
    }
    *puVar10 = 10;
    *(undefined8 *)(puVar10 + 1) = uVar8;
    uVar15 = local_d0 | 0x100;
    *(undefined2 *)(puVar10 + 3) = s_fa_palette_140488fb8._8_2_;
    *(undefined1 *)((longlong)puVar10 + 0xe) = 0;
    puVar12 = (undefined8 *)FUN_140086de0(lVar5,&DAT_140488b2c,&DAT_140488b30);
    local_d0 = *(uint *)(puVar12 + 1);
    *(uint *)(puVar12 + 1) = uVar15;
    local_d8 = (longlong *)*puVar12;
    *puVar12 = puVar10;
    lVar7 = puVar12[2];
    puVar12[2] = 0;
    local_b8 = puVar12[4];
    uStack_c0 = puVar12[3];
    puVar12[3] = 0;
    puVar12[4] = 0;
    local_c8 = lVar7;
    FUN_140086d30(&local_d8);
    if (lVar7 != 0) {
      FUN_140017240(lVar7 + 0x40);
      FUN_140017240(lVar7 + 0x20);
      FUN_140017240(lVar7);
      thunk_FUN_14028af80(lVar7,0x60);
    }
    local_d0 = CONCAT31(local_d0._1_3_,4);
    puVar10 = (undefined4 *)_malloc_base(10);
    if (puVar10 == (undefined4 *)0x0) goto LAB_14010d08b;
    *puVar10 = 5;
    puVar10[1] = s_color_140489070._0_4_;
    uVar15 = local_d0 | 0x100;
    *(char *)(puVar10 + 2) = s_color_140489070[4];
    *(undefined1 *)((longlong)puVar10 + 9) = 0;
    puVar12 = (undefined8 *)FUN_140086de0(lVar5,&DAT_140474874,&DAT_140474878);
    local_d0 = *(uint *)(puVar12 + 1);
    *(uint *)(puVar12 + 1) = uVar15;
    local_d8 = (longlong *)*puVar12;
    *puVar12 = puVar10;
    local_c8 = puVar12[2];
    puVar12[2] = 0;
    uStack_c0 = puVar12[3];
    local_b8 = puVar12[4];
    puVar12[3] = 0;
    puVar12[4] = 0;
    FUN_140085440(&local_d8);
    local_d0 = CONCAT31(local_d0._1_3_,4);
    local_d0 = local_d0 | 0x100;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (longlong *)FUN_140084b30("ui_browse_properties_scheme_color",0x21);
    uVar8 = FUN_140086de0(lVar5,&DAT_140488b08,&DAT_140488b0c);
    FUN_140085610(uVar8,&local_d8);
    FUN_140085440(&local_d8);
    local_d0 = CONCAT31(local_d0._1_3_,1);
    local_d0 = local_d0 & 0xfffffeff;
    local_b8 = 0;
    local_d8 = (longlong *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar8 = FUN_140086de0(lVar5,"order","");
    FUN_140085610(uVar8,&local_d8);
    FUN_140085440(&local_d8);
  }
  iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  switch(*(uint *)(param_2 + 1) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    if (((longlong *)*param_2)[1] != 0) {
      plVar6 = *(longlong **)*param_2;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        lVar5 = *plVar6;
        if (*(char *)(lVar5 + 0x19) == '\0') {
          cVar3 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
          while (cVar3 == '\0') {
            lVar5 = *(longlong *)(lVar5 + 0x10);
            cVar3 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
          }
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
        }
        else {
          cVar3 = *(char *)(plVar6[1] + 0x19);
          plVar11 = (longlong *)plVar6[1];
          while ((cVar3 == '\0' && (plVar6 == (longlong *)*plVar11))) {
            cVar3 = *(char *)(plVar11[1] + 0x19);
            plVar6 = plVar11;
            plVar11 = (longlong *)plVar11[1];
          }
          if (*(char *)((longlong)plVar6 + 0x19) != '\0') {
            plVar11 = plVar6;
          }
          uVar15 = (int)plVar11[5] + 1;
        }
      }
      else {
        uVar15 = *(int *)(plVar6[2] + 0x28) + 1;
      }
      goto LAB_14010ce1d;
    }
    break;
  case 7:
    uVar15 = *(uint *)(*param_2 + 8);
LAB_14010ce1d:
    if ((uVar18 < uVar15) && (iVar4 - 1U < 2)) {
      uVar8 = FUN_140086de0(param_2,&DAT_140489060,&DAT_140489063);
      local_d0 = CONCAT31(local_d0._1_3_,4);
      local_d0 = local_d0 | 0x100;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (longlong *)FUN_140084b30("divider",7);
      uVar9 = FUN_140086de0(uVar8,&DAT_140474874,&DAT_140474878);
      FUN_140085610(uVar9,&local_d8);
      FUN_140085440(&local_d8);
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_d0 = local_d0 & 0xfffffeff;
      local_b8 = 0;
      local_d8 = plVar16;
      if (iVar4 == 1) {
        local_d8 = (longlong *)0x63;
      }
      local_c8 = 0;
      uStack_c0 = 0;
      uVar8 = FUN_140086de0(uVar8,"order","");
      FUN_140085610(uVar8,&local_d8);
      FUN_140085440(&local_d8);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x3a1);
  }
  puVar12 = (undefined8 *)FUN_140005880(local_b0,param_1 + 0x20);
  local_88 = *puVar12;
  uStack_80 = puVar12[1];
  local_78 = puVar12[2];
  uStack_70 = puVar12[3];
  puVar12[2] = 0;
  puVar12[3] = 7;
  *(undefined2 *)puVar12 = 0;
  if (7 < local_98) {
    uVar14 = local_98 * 2 + 2;
    plVar6 = local_b0[0];
    if (uVar14 < 0x1000) {
LAB_14010cf8f:
      thunk_FUN_14028af80(plVar6,uVar14);
      goto LAB_14010cf94;
    }
    plVar6 = (longlong *)local_b0[0][-1];
    if ((ulonglong)((longlong)local_b0[0] + (-8 - (longlong)plVar6)) < 0x20) {
      uVar14 = local_98 * 2 + 0x29;
      goto LAB_14010cf8f;
    }
LAB_14010d084:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar17 = auStack_f0;
LAB_14010d08b:
    *(undefined8 *)(puVar17 + -8) = 0x14010d09b;
    FUN_140017170(local_b0,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar17 + -8) = &UNK_14010d0a4;
    FUN_140084bc0(local_b0);
  }
LAB_14010cf94:
  uVar8 = FUN_140053f80(&local_88,&local_d8);
  puVar12 = (undefined8 *)FUN_140018ce0(uVar8,&local_68);
  if (iVar4 == 2) {
    plVar6 = puVar12 + 2;
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    if (*plVar6 == 5) {
      iVar4 = memcmp(puVar12,&DAT_140488af8,5);
      plVar16 = (longlong *)0x43;
      if (iVar4 == 0) goto LAB_14010cff7;
    }
    plVar16 = (longlong *)0x170;
LAB_14010cff7:
    bVar2 = true;
  }
  else {
    if (iVar4 == 4) {
      plVar16 = (longlong *)0xd5;
      goto LAB_14010cff7;
    }
    bVar2 = false;
  }
  if (local_50 < 0x10) goto LAB_14010d031;
  lVar7 = CONCAT71(uStack_67,local_68);
  uVar14 = local_50 + 1;
  lVar5 = lVar7;
  if (0xfff < uVar14) {
    lVar5 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar5) - 8U) goto LAB_14010d084;
    uVar14 = local_50 + 0x28;
  }
  thunk_FUN_14028af80(lVar5,uVar14);
LAB_14010d031:
  local_58 = 0;
  local_50 = 0xf;
  local_68 = 0;
  FUN_140016770(&local_d8);
  FUN_140016770(&local_88);
  if (bVar2) {
    FUN_140104b60(param_2,plVar16);
  }
  FUN_14010d170(param_1,param_2);
  return param_2;
}

