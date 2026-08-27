// Function: FUN_140046870
// Addr: 140046870
// Size: 1632 bytes


/* WARNING: Removing unreachable block (ram,0x0001400469b1) */
/* WARNING: Removing unreachable block (ram,0x000140046e99) */
/* WARNING: Removing unreachable block (ram,0x0001400469c6) */

undefined8 FUN_140046870(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  char *pcVar14;
  size_t sVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  double dVar22;
  undefined1 local_res8 [32];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  _SYSTEMTIME local_218;
  char *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  char *local_1e8;
  uint local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1c0;
  uint local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong local_198;
  uint local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  uint local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  
  puVar18 = auStack_238;
  puVar19 = auStack_238;
  uVar11 = FUN_140086de0(param_1 + 0x48,"general","");
  lVar12 = FUN_140087490(uVar11,&DAT_1404737fc,&DAT_140473800);
  if (lVar12 == 0) {
    return 0;
  }
  lVar12 = FUN_140086de0(uVar11,&DAT_1404737fc,&DAT_140473800);
  pcVar17 = (char *)0x0;
  if (*(char *)(lVar12 + 8) == '\a') {
    uVar13 = FUN_140086de0(lVar12,"uiskin","");
    FUN_140085090(&local_1e8,uVar13);
  }
  else {
    local_1e0 = (local_1e0 >> 8 & 0xfffffe) << 8;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
  }
  if (*(char *)(lVar12 + 8) == '\a') {
    uVar13 = FUN_140086de0(lVar12,"uiskinseasonal","");
    FUN_140085090(&local_198,uVar13);
  }
  else {
    local_190 = (local_190 >> 8 & 0xfffffe) << 8;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
  }
  local_218.wYear = 0;
  local_218.wMonth = 0;
  local_218.wDayOfWeek = 0;
  local_218.wDay = 0;
  local_218.wHour = 0;
  local_218.wMinute = 0;
  local_218.wSecond = 0;
  local_218.wMilliseconds = 0;
  GetLocalTime(&local_218);
  if ((((char)local_190 != '\x05') || ((local_190 & 0xff) == 0)) || ((char)local_198 == '\0'))
  goto LAB_1400469fe;
  local_1f8 = 0;
  local_1f0 = 0xf;
  uStack_200 = 0;
  local_208 = (char *)0x0;
  if (local_218.wMonth == 10) {
    if (local_218.wDay < 0x18) goto LAB_1400469fe;
LAB_140046a2d:
    FUN_14000f880(param_2,"halloween",9);
    pcVar14 = (char *)FUN_14028af20(0x30);
    uVar6 = s_ui_browse_modal_seasonal_info_he_140476d58._24_4_;
    uVar5 = s_ui_browse_modal_seasonal_info_he_140476d58._20_4_;
    uVar4 = s_ui_browse_modal_seasonal_info_he_140476d58._16_4_;
    uVar13 = s_ui_browse_modal_seasonal_info_he_140476d58._8_8_;
    uVar2 = CONCAT22(s_ui_browse_modal_seasonal_info_he_140476d58._30_2_,
                     s_ui_browse_modal_seasonal_info_he_140476d58._28_2_);
    uVar20 = 0x2e;
    *(undefined8 *)pcVar14 = s_ui_browse_modal_seasonal_info_he_140476d58._0_8_;
    *(undefined8 *)(pcVar14 + 8) = uVar13;
    uVar7 = s_ui_browse_modal_seasonal_info_he_140476d58._38_8_;
    uVar13 = CONCAT62(s_ui_browse_modal_seasonal_info_he_140476d58._32_6_,
                      s_ui_browse_modal_seasonal_info_he_140476d58._30_2_);
    *(undefined4 *)(pcVar14 + 0x10) = uVar4;
    *(undefined4 *)(pcVar14 + 0x14) = uVar5;
    *(undefined4 *)(pcVar14 + 0x18) = uVar6;
    *(undefined4 *)(pcVar14 + 0x1c) = uVar2;
    *(undefined8 *)(pcVar14 + 0x1e) = uVar13;
    *(undefined8 *)(pcVar14 + 0x26) = uVar7;
    pcVar14[0x2e] = '\0';
    uVar21 = (uint)local_218.wYear * 10000 + 0x44e;
LAB_140046b2e:
    param_2 = 0x2f;
    local_1f0 = 0x2f;
    local_208 = pcVar14;
    local_1f8 = uVar20;
    if (param_3 != (undefined1 *)0x0) {
      lVar12 = FUN_140086de0(uVar11,"browser","");
      if (*(char *)(lVar12 + 8) == '\a') {
        uVar11 = FUN_140086de0(lVar12,"seasonaldialogdisabled","");
        FUN_140085090(local_170,uVar11);
      }
      else {
        local_168 = (local_168 >> 8 & 0xfffffe) << 8;
        local_160 = 0;
        uStack_158 = 0;
        local_150 = 0;
      }
      if (*(char *)(lVar12 + 8) == '\a') {
        uVar11 = FUN_140086de0(lVar12,"seasonaldialogtimestamp","");
        FUN_140085090(&local_1c0,uVar11);
      }
      else {
        local_1b8 = (local_1b8 >> 8 & 0xfffffe) << 8;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0 = 0;
      }
      if (((char)local_168 == '\x05') && (cVar8 = FUN_140086300(local_170), cVar8 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar10 = local_1b8 & 0xff;
      if (uVar10 == 1) {
        if (-1 < (longlong)local_1c0) goto LAB_140046c87;
LAB_140046c51:
        uVar10 = 0;
      }
      else {
        if (uVar10 == 2) {
LAB_140046c87:
          if (0xffffffff < (ulonglong)local_1c0) goto LAB_140046c51;
        }
        else if ((((uVar10 != 3) || (local_1c0 < 0.0)) || (DAT_1404928a0 < local_1c0)) ||
                (dVar22 = (double)FUN_1402d3b50(1,local_res8), dVar22 != 0.0)) goto LAB_140046c51;
        uVar10 = FUN_140085f70(&local_1c0);
      }
      if ((uVar21 <= uVar10) || (bVar3)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      *param_3 = uVar9;
      *(uint *)(param_3 + 0x28) = uVar21;
      if ((char **)(param_3 + 8) != &local_208) {
        FUN_14000f880(param_3 + 8,pcVar14,uVar20);
        pcVar14 = local_208;
        param_2 = local_1f0;
      }
      FUN_140085440(&local_1c0);
      FUN_140085440(local_170);
    }
    puVar19 = auStack_238;
    if (param_2 < 0x10) goto LAB_140046d37;
    uVar16 = param_2 + 1;
    pcVar17 = pcVar14;
    if (0xfff < uVar16) {
      pcVar17 = *(char **)(pcVar14 + -8);
      pcVar14 = pcVar14 + (-8 - (longlong)pcVar17);
      if ((char *)0x1f < pcVar14) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar18 = auStack_230;
LAB_140046d10:
        pcVar17 = pcVar14;
        puVar19 = puVar18;
        if ((*(uint *)(puVar18 + 0x58) >> 8 & 1) != 0) {
          pcVar17 = pcVar14 + 4;
        }
        goto LAB_140046d21;
      }
      uVar16 = param_2 + 0x28;
    }
    thunk_FUN_14028af80(pcVar17,uVar16);
    puVar19 = auStack_238;
  }
  else {
    if (local_218.wMonth == 0xb) {
      if (2 < local_218.wDay) goto LAB_1400469fe;
      goto LAB_140046a2d;
    }
    if (local_218.wMonth != 0xc) {
      if ((local_218.wMonth != 1) || (0x1f < local_218.wDay)) goto LAB_1400469fe;
LAB_140046abf:
      FUN_14000f880(param_2,"winter",6);
      pcVar14 = (char *)FUN_14028af20(0x30);
      uVar6 = s_ui_browse_modal_seasonal_info_he_140476d90._28_4_;
      uVar5 = s_ui_browse_modal_seasonal_info_he_140476d90._24_4_;
      uVar4 = s_ui_browse_modal_seasonal_info_he_140476d90._20_4_;
      uVar2 = s_ui_browse_modal_seasonal_info_he_140476d90._16_4_;
      uVar13 = s_ui_browse_modal_seasonal_info_he_140476d90._8_8_;
      uVar20 = 0x2b;
      *(undefined8 *)pcVar14 = s_ui_browse_modal_seasonal_info_he_140476d90._0_8_;
      *(undefined8 *)(pcVar14 + 8) = uVar13;
      uVar7 = s_ui_browse_modal_seasonal_info_he_140476d90._35_8_;
      uVar13 = CONCAT35(s_ui_browse_modal_seasonal_info_he_140476d90._32_3_,
                        CONCAT41(s_ui_browse_modal_seasonal_info_he_140476d90._28_4_,
                                 s_ui_browse_modal_seasonal_info_he_140476d90[0x1b]));
      *(undefined4 *)(pcVar14 + 0x10) = uVar2;
      *(undefined4 *)(pcVar14 + 0x14) = uVar4;
      *(undefined4 *)(pcVar14 + 0x18) = uVar5;
      *(undefined4 *)(pcVar14 + 0x1c) = uVar6;
      *(undefined8 *)(pcVar14 + 0x1b) = uVar13;
      *(undefined8 *)(pcVar14 + 0x23) = uVar7;
      pcVar14[0x2b] = '\0';
      uVar21 = ((uint)(local_218.wMonth == 0xc) + (uint)local_218.wYear) * 10000 + 0x59;
      goto LAB_140046b2e;
    }
    if (local_218.wDay != 0) goto LAB_140046abf;
LAB_1400469fe:
    if ((char)local_1e0 != '\x04') {
      switch((char)local_190) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x05':
        break;
      case '\x04':
        if ((local_190 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_198);
        }
        break;
      case '\x06':
      case '\a':
        if (local_198 != 0) {
          FUN_140088e40(local_198);
          thunk_FUN_14028af80(local_198,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar12 = local_188;
      local_198 = 0;
      if (local_188 != 0) {
        FUN_140017240(local_188 + 0x40);
        FUN_140017240(lVar12 + 0x20);
        FUN_140017240(lVar12);
        thunk_FUN_14028af80(lVar12,0x60);
      }
      switch((char)local_1e0) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x05':
        break;
      case '\x04':
        if ((local_1e0 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_1e8);
        }
        break;
      case '\x06':
      case '\a':
        if (local_1e8 != (char *)0x0) {
          FUN_140088e40(local_1e8);
          thunk_FUN_14028af80(local_1e8,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar12 = local_1d8;
      local_1e8 = (char *)0x0;
      if (local_1d8 != 0) {
        FUN_140017240(local_1d8 + 0x40);
        FUN_140017240(lVar12 + 0x20);
        FUN_140017240(lVar12);
        thunk_FUN_14028af80(lVar12,0x60);
      }
      return 0;
    }
    pcVar14 = local_1e8;
    if (local_1e8 != (char *)0x0) goto LAB_140046d10;
LAB_140046d21:
    *(undefined8 *)(puVar19 + -8) = 0x140046d29;
    sVar15 = strlen(pcVar17);
    *(undefined8 *)(puVar19 + -8) = 0x140046d37;
    FUN_14000f880(param_2,pcVar17,sVar15);
  }
LAB_140046d37:
  *(undefined8 *)(puVar19 + -8) = 0x140046d40;
  FUN_140085440(&local_198);
  *(undefined8 *)(puVar19 + -8) = 0x140046d4a;
  FUN_140085440(puVar19 + 0x50);
  return 1;
}

