// Function: FUN_140258ca0
// Addr: 140258ca0
// Size: 6771 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140258ca0(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *unaff_R14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  puVar15 = auStack_98;
  FUN_140153760(&DAT_1404e88e0);
  local_58 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_50 = 0;
  local_68 = (char *)FUN_14028af20(0x20);
  uVar7 = s_backgroundbrightness_1404917f8._16_4_;
  uVar6 = s_backgroundbrightness_1404917f8._12_4_;
  uVar5 = s_backgroundbrightness_1404917f8._8_4_;
  uVar4 = s_backgroundbrightness_1404917f8._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_backgroundbrightness_1404917f8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined4 *)(local_68 + 0x10) = uVar7;
  local_68[0x14] = '\0';
  FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
  if (local_50 < 0x10) {
LAB_140258d55:
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"backgroundbrightness",0x14);
    *(undefined4 *)(lVar2 + 0x34) = 0x4dc;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_68 = (char *)FUN_14028af20(0x20);
    uVar6 = s_opaquebackground_140491810._12_4_;
    uVar5 = s_opaquebackground_140491810._8_4_;
    uVar4 = s_opaquebackground_140491810._4_4_;
    local_58 = 0x10;
    local_50 = 0x1f;
    *(undefined4 *)local_68 = s_opaquebackground_140491810._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar4;
    *(undefined4 *)(local_68 + 8) = uVar5;
    *(undefined4 *)(local_68 + 0xc) = uVar6;
    local_68[0x10] = '\0';
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"opaquebackground",0x10);
    *(undefined4 *)(lVar2 + 0x34) = 0x594;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    local_68 = (char *)s_limitwidth_140491828._0_8_;
    unaff_R14 = &LAB_140256ad0;
    *(code **)(lVar2 + 0x38) = FUN_14019b4e0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(code **)(lVar2 + 0x40) = FUN_14019b5b0;
    local_58 = 10;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14019b6b0;
    local_50 = 0xf;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14019b6e0;
    uStack_60 = (ulonglong)(ushort)s_limitwidth_140491828._8_2_;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"limitwidth",10);
    *(undefined4 *)(lVar2 + 0x34) = 0x594;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    local_68 = (char *)s_limitrows_140491838._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_14019bfa0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(code **)(lVar2 + 0x40) = FUN_14019c070;
    local_58 = 9;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14019c170;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14019c1a0;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(byte)s_limitrows_140491838[8];
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"limitrows",9);
    *(undefined4 *)(lVar2 + 0x34) = 0x594;
    *(code **)(lVar2 + 0x38) = FUN_14025aca0;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    *(code **)(lVar2 + 0x40) = FUN_14025ad70;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14025ae70;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14025aea0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_68 = (char *)FUN_14028af20(0x20);
    uVar6 = s_limituseellipsis_1404917b0._12_4_;
    uVar5 = s_limituseellipsis_1404917b0._8_4_;
    uVar4 = s_limituseellipsis_1404917b0._4_4_;
    local_58 = 0x10;
    local_50 = 0x1f;
    *(undefined4 *)local_68 = s_limituseellipsis_1404917b0._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar4;
    *(undefined4 *)(local_68 + 8) = uVar5;
    *(undefined4 *)(local_68 + 0xc) = uVar6;
    local_68[0x10] = '\0';
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"limituseellipsis",0x10);
    *(undefined4 *)(lVar2 + 0x34) = 0x594;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    local_68 = (char *)s_blockalign_1404917c8._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_14025aec0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(code **)(lVar2 + 0x40) = FUN_14025af90;
    local_58 = 10;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14025b090;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14025b0c0;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(ushort)s_blockalign_1404917c8._8_2_;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"blockalign",10);
    local_68 = (char *)s_backgroundcolor_1404917d8._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_14019b920;
    *(undefined4 *)(lVar2 + 0x34) = 0x594;
    *(code **)(lVar2 + 0x40) = FUN_14019b9f0;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14019baf0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14019bb20;
    uStack_60._0_6_ = CONCAT24(s_backgroundcolor_1404917d8._12_2_,s_backgroundcolor_1404917d8._8_4_)
    ;
    uStack_60._0_7_ = CONCAT16(s_backgroundcolor_1404917d8[0xe],(uint6)uStack_60);
    local_58 = 0xf;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(uint7)uStack_60;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"backgroundcolor",0xf);
    *(undefined4 *)(lVar2 + 0x34) = 0x4d0;
    *(undefined4 *)(lVar2 + 0x30) = 2;
    local_68 = (char *)s_pointsize_1404917e8._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_1401a4230;
    local_58 = 9;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4530;
    local_50 = 0xf;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4560;
    uStack_60 = (ulonglong)(byte)s_pointsize_1404917e8[8];
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"pointsize",9);
    local_68._0_6_ = CONCAT24(s_padding_140491870._4_2_,s_padding_140491870._0_4_);
    local_68._0_7_ = CONCAT16(s_padding_140491870[6],(undefined6)local_68);
    *(undefined4 *)(lVar2 + 0x34) = 0x4e0;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    uStack_60 = 0;
    local_58 = 7;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint7)local_68;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"padding",7);
    *(undefined4 *)(lVar2 + 0x34) = 0x4e8;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4200;
    *(undefined4 *)(lVar2 + 0x30) = 1;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4220;
    local_68._0_6_ = CONCAT24(s_spacing_140491878._4_2_,s_spacing_140491878._0_4_);
    local_68._0_7_ = CONCAT16(s_spacing_140491878[6],(undefined6)local_68);
    *(code **)(lVar2 + 0x38) = FUN_1401a3fc0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    uStack_60 = 0;
    local_58 = 7;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint7)local_68;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"spacing",7);
    *(undefined4 *)(lVar2 + 0x34) = 0x4f8;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4200;
    *(undefined4 *)(lVar2 + 0x30) = 1;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4220;
    local_68 = (char *)s_maxwidth_140491880._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_1401a3fc0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    local_58 = 8;
    local_50 = 0xf;
    uStack_60 = 0;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"maxwidth",8);
    local_68._0_6_ = CONCAT24(DAT_140491890._4_2_,(undefined4)DAT_140491890);
    local_68._0_7_ = CONCAT16(DAT_140491890._6_1_,(undefined6)local_68);
    *(undefined4 *)(lVar2 + 0x34) = 0x508;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    uStack_60 = 0;
    local_58 = 7;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint7)local_68;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,&DAT_140491890,7);
    *(undefined4 *)(lVar2 + 0x34) = 0x510;
    *(code **)(lVar2 + 0x38) = FUN_1401a4930;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    uStack_60 = 0;
    local_58 = 4;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)DAT_140491844;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pcVar12 = local_68;
      if (0xfff < uVar13) {
        pcVar12 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar12)) goto LAB_14025a1e4;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar12,uVar13);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,&DAT_140491844,4);
    *(undefined4 *)(lVar2 + 0x34) = 0x518;
    *(code **)(lVar2 + 0x38) = FUN_1401e1a90;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    *(code **)(lVar2 + 0x40) = FUN_1401e1b60;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401e1c60;
    uStack_60 = 0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401e1c90;
    local_68._0_6_ = CONCAT24(s_outline_140491850._4_2_,s_outline_140491850._0_4_);
    local_68._0_7_ = CONCAT16(s_outline_140491850[6],(undefined6)local_68);
    local_58 = 7;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint7)local_68;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"outline",7);
    *(undefined4 *)(lVar2 + 0x34) = 0x518;
    *(code **)(lVar2 + 0x38) = FUN_14019b4e0;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    *(code **)(lVar2 + 0x40) = FUN_14019b5b0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14019b6b0;
    local_58 = 4;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14019b6e0;
    uStack_60 = 0;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)DAT_140491858;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,&DAT_140491858,4);
    *(undefined4 *)(lVar2 + 0x34) = 0x518;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    uVar8 = s_dropshadow_140491860._0_8_;
    *(code **)(lVar2 + 0x38) = FUN_14019bfa0;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(code **)(lVar2 + 0x40) = FUN_14019c070;
    local_58 = 10;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14019c170;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14019c1a0;
    uVar9 = s_dropshadow_140491860._0_8_;
    local_50 = 0xf;
    s_dropshadow_140491860[0] = (char)uVar8;
    s_dropshadow_140491860[1] = SUB81(uVar8,1);
    s_dropshadow_140491860[2] = SUB81(uVar8,2);
    s_dropshadow_140491860[3] = SUB81(uVar8,3);
    s_dropshadow_140491860[4] = SUB81(uVar8,4);
    s_dropshadow_140491860[5] = SUB81(uVar8,5);
    s_dropshadow_140491860[6] = SUB81(uVar8,6);
    s_dropshadow_140491860[7] = SUB81(uVar8,7);
    local_68._0_1_ = s_dropshadow_140491860[0];
    local_68._1_1_ = s_dropshadow_140491860[1];
    local_68._2_1_ = s_dropshadow_140491860[2];
    local_68._3_1_ = s_dropshadow_140491860[3];
    local_68._4_1_ = s_dropshadow_140491860[4];
    local_68._5_1_ = s_dropshadow_140491860[5];
    local_68._6_1_ = s_dropshadow_140491860[6];
    local_68._7_1_ = s_dropshadow_140491860[7];
    uStack_60 = (ulonglong)(ushort)s_dropshadow_140491860._8_2_;
    s_dropshadow_140491860._0_8_ = uVar9;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"dropshadow",10);
    *(undefined4 *)(lVar2 + 0x34) = 0x518;
    *(code **)(lVar2 + 0x38) = FUN_14025aca0;
    *(undefined4 *)(lVar2 + 0x30) = 6;
    *(code **)(lVar2 + 0x40) = FUN_14025ad70;
    *(undefined1 **)(lVar2 + 0x58) = &LAB_140256ad0;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_14025ae70;
    local_58 = 0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_14025aea0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    FUN_140017480(&local_68,"outlinethickness",0x10);
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"outlinethickness",0x10);
    uVar4 = s_outlinecolor_140491900._8_4_;
    *(undefined4 *)(lVar2 + 0x34) = 0x520;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    local_68._0_1_ = s_outlinecolor_140491900[0];
    local_68._1_1_ = s_outlinecolor_140491900[1];
    local_68._2_1_ = s_outlinecolor_140491900[2];
    local_68._3_1_ = s_outlinecolor_140491900[3];
    local_68._4_1_ = s_outlinecolor_140491900[4];
    local_68._5_1_ = s_outlinecolor_140491900[5];
    local_68._6_1_ = s_outlinecolor_140491900[6];
    local_68._7_1_ = s_outlinecolor_140491900[7];
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    local_58 = 0xc;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(uint)uVar4;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"outlinecolor",0xc);
    *(undefined4 *)(lVar2 + 0x34) = 0x524;
    *(code **)(lVar2 + 0x38) = FUN_1401a4230;
    *(undefined4 *)(lVar2 + 0x30) = 2;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4530;
    local_58 = 8;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4560;
    local_68._0_1_ = s_blursize_140491910[0];
    local_68._1_1_ = s_blursize_140491910[1];
    local_68._2_1_ = s_blursize_140491910[2];
    local_68._3_1_ = s_blursize_140491910[3];
    local_68._4_1_ = s_blursize_140491910[4];
    local_68._5_1_ = s_blursize_140491910[5];
    local_68._6_1_ = s_blursize_140491910[6];
    local_68._7_1_ = s_blursize_140491910[7];
    local_50 = 0xf;
    uStack_60 = 0;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"blursize",8);
    uVar8 = s_dropshadowsize_140491920._0_8_;
    uStack_60._0_6_ = CONCAT24(s_dropshadowsize_140491920._12_2_,s_dropshadowsize_140491920._8_4_);
    *(undefined4 *)(lVar2 + 0x34) = 0x530;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    uVar9 = s_dropshadowsize_140491920._0_8_;
    uStack_60 = (ulonglong)(uint6)uStack_60;
    local_58 = 0xe;
    local_50 = 0xf;
    s_dropshadowsize_140491920[0] = (char)uVar8;
    s_dropshadowsize_140491920[1] = SUB81(uVar8,1);
    s_dropshadowsize_140491920[2] = SUB81(uVar8,2);
    s_dropshadowsize_140491920[3] = SUB81(uVar8,3);
    s_dropshadowsize_140491920[4] = SUB81(uVar8,4);
    s_dropshadowsize_140491920[5] = SUB81(uVar8,5);
    s_dropshadowsize_140491920[6] = SUB81(uVar8,6);
    s_dropshadowsize_140491920[7] = SUB81(uVar8,7);
    local_68._0_1_ = s_dropshadowsize_140491920[0];
    local_68._1_1_ = s_dropshadowsize_140491920[1];
    local_68._2_1_ = s_dropshadowsize_140491920[2];
    local_68._3_1_ = s_dropshadowsize_140491920[3];
    local_68._4_1_ = s_dropshadowsize_140491920[4];
    local_68._5_1_ = s_dropshadowsize_140491920[5];
    local_68._6_1_ = s_dropshadowsize_140491920[6];
    local_68._7_1_ = s_dropshadowsize_140491920[7];
    s_dropshadowsize_140491920._0_8_ = uVar9;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"dropshadowsize",0xe);
    *(undefined4 *)(lVar2 + 0x34) = 0x534;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    local_58 = 0;
    local_50 = 0;
    FUN_140017480(&local_68,"dropshadowopacity",0x11);
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"dropshadowopacity",0x11);
    uVar8 = s_dropshadowcolor_1404918b0._0_8_;
    uStack_60._0_6_ = CONCAT24(s_dropshadowcolor_1404918b0._12_2_,s_dropshadowcolor_1404918b0._8_4_)
    ;
    uStack_60._0_7_ = CONCAT16(s_dropshadowcolor_1404918b0[0xe],(uint6)uStack_60);
    *(undefined4 *)(lVar2 + 0x34) = 0x538;
    *(undefined4 *)(lVar2 + 0x30) = 4;
    *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
    uVar9 = s_dropshadowcolor_1404918b0._0_8_;
    local_58 = 0xf;
    local_50 = 0xf;
    s_dropshadowcolor_1404918b0[0] = (char)uVar8;
    s_dropshadowcolor_1404918b0[1] = SUB81(uVar8,1);
    s_dropshadowcolor_1404918b0[2] = SUB81(uVar8,2);
    s_dropshadowcolor_1404918b0[3] = SUB81(uVar8,3);
    s_dropshadowcolor_1404918b0[4] = SUB81(uVar8,4);
    s_dropshadowcolor_1404918b0[5] = SUB81(uVar8,5);
    s_dropshadowcolor_1404918b0[6] = SUB81(uVar8,6);
    s_dropshadowcolor_1404918b0[7] = SUB81(uVar8,7);
    local_68._0_1_ = s_dropshadowcolor_1404918b0[0];
    local_68._1_1_ = s_dropshadowcolor_1404918b0[1];
    local_68._2_1_ = s_dropshadowcolor_1404918b0[2];
    local_68._3_1_ = s_dropshadowcolor_1404918b0[3];
    local_68._4_1_ = s_dropshadowcolor_1404918b0[4];
    local_68._5_1_ = s_dropshadowcolor_1404918b0[5];
    local_68._6_1_ = s_dropshadowcolor_1404918b0[6];
    local_68._7_1_ = s_dropshadowcolor_1404918b0[7];
    uStack_60 = (ulonglong)(uint7)uStack_60;
    s_dropshadowcolor_1404918b0._0_8_ = uVar9;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"dropshadowcolor",0xf);
    *(undefined4 *)(lVar2 + 0x34) = 0x544;
    *(code **)(lVar2 + 0x38) = FUN_1401a4230;
    *(undefined4 *)(lVar2 + 0x30) = 2;
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4530;
    local_58 = 0;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4560;
    local_50 = 0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    FUN_140017480(&local_68,"dropshadowoffset",0x10);
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar2 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"dropshadowoffset",0x10);
    *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a4200;
    *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4220;
    pvVar10 = ThreadLocalStoragePointer;
    *(undefined4 *)(lVar2 + 0x34) = 0x53c;
    *(undefined4 *)(lVar2 + 0x30) = 1;
    *(code **)(lVar2 + 0x38) = FUN_1401a3fc0;
    lVar2 = *(longlong *)pvVar10;
    if (*(int *)(lVar2 + 0x130) < DAT_1404e99d0) {
      FUN_14028b140(&DAT_1404e99d0);
      if (DAT_1404e99d0 == -1) {
        FUN_14028b410(FUN_140425510);
        _DAT_1404e99f0 = 0;
        _DAT_1404e99f8 = 0;
        _DAT_1404e99e0 = 0;
        uRam00000001404e99e8 = 0;
        FUN_140017480(&DAT_1404e99e0,"disabled",8);
        DAT_1404e9a00 = 1;
        _DAT_1404e9a18 = 0;
        _DAT_1404e9a20 = 0;
        _DAT_1404e9a08 = 0;
        uRam00000001404e9a10 = 0;
        FUN_140017480(&DAT_1404e9a08,"enabled",7);
        DAT_1404e9a28 = 0;
        DAT_1404e9998 = &DAT_1404e9a30;
        DAT_1404e9990 = &DAT_1404e99e0;
        _Init_thread_footer(&DAT_1404e99d0);
      }
    }
    local_58 = 9;
    local_50 = 0xf;
    local_68._0_1_ = s_depthtest_14048b6b0[0];
    local_68._1_1_ = s_depthtest_14048b6b0[1];
    local_68._2_1_ = s_depthtest_14048b6b0[2];
    local_68._3_1_ = s_depthtest_14048b6b0[3];
    local_68._4_1_ = s_depthtest_14048b6b0[4];
    local_68._5_1_ = s_depthtest_14048b6b0[5];
    local_68._6_1_ = s_depthtest_14048b6b0[6];
    local_68._7_1_ = s_depthtest_14048b6b0[7];
    uStack_60 = (ulonglong)(byte)s_depthtest_14048b6b0[8];
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar11 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"depthtest",9);
    *(undefined4 *)(lVar11 + 0x34) = 0x5a0;
    *(code **)(lVar11 + 0x38) = FUN_14025b0e0;
    *(code **)(lVar11 + 0x40) = FUN_14025b270;
    *(code **)(lVar11 + 0x48) = FUN_14025a720;
    *(code **)(lVar11 + 0x50) = FUN_14025a800;
    iVar1 = *(int *)(lVar2 + 0x130);
    *(undefined4 *)(lVar11 + 0x30) = 5;
    *(undefined1 **)(lVar11 + 0x58) = &LAB_140256ad0;
    if (iVar1 < DAT_1404e9a30) {
      FUN_14028b140(&DAT_1404e9a30);
      if (DAT_1404e9a30 == -1) {
        FUN_14028b410(FUN_1404254e0);
        _DAT_1404e9a50 = 0;
        _DAT_1404e9a58 = 0;
        _DAT_1404e9a40 = 0;
        uRam00000001404e9a48 = 0;
        FUN_140017480(&DAT_1404e9a40,&DAT_140490de0,4);
        DAT_1404e9a60 = 0;
        _DAT_1404e9a78 = 0;
        _DAT_1404e9a80 = 0;
        _DAT_1404e9a68 = 0;
        uRam00000001404e9a70 = 0;
        FUN_140017480(&DAT_1404e9a68,"center",6);
        DAT_1404e9a88 = 1;
        _DAT_1404e9aa0 = 0;
        _DAT_1404e9aa8 = 0;
        _DAT_1404e9a90 = 0;
        uRam00000001404e9a98 = 0;
        FUN_140017480(&DAT_1404e9a90,"right",5);
        DAT_1404e9ab0 = 2;
        DAT_1404e99a8 = &DAT_1404e9ab8;
        DAT_1404e99a0 = &DAT_1404e9a40;
        _Init_thread_footer(&DAT_1404e9a30);
      }
    }
    uStack_60._0_6_ = CONCAT24(s_horizontalalign_1404918d8._12_2_,s_horizontalalign_1404918d8._8_4_)
    ;
    uStack_60._0_7_ = CONCAT16(s_horizontalalign_1404918d8[0xe],(uint6)uStack_60);
    local_58 = 0xf;
    local_50 = 0xf;
    local_68._0_1_ = s_horizontalalign_1404918d8[0];
    local_68._1_1_ = s_horizontalalign_1404918d8[1];
    local_68._2_1_ = s_horizontalalign_1404918d8[2];
    local_68._3_1_ = s_horizontalalign_1404918d8[3];
    local_68._4_1_ = s_horizontalalign_1404918d8[4];
    local_68._5_1_ = s_horizontalalign_1404918d8[5];
    local_68._6_1_ = s_horizontalalign_1404918d8[6];
    local_68._7_1_ = s_horizontalalign_1404918d8[7];
    uStack_60 = (ulonglong)(uint7)uStack_60;
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar11 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"horizontalalign",0xf);
    *(undefined4 *)(lVar11 + 0x34) = 0x59c;
    *(code **)(lVar11 + 0x38) = FUN_14025b450;
    *(code **)(lVar11 + 0x40) = FUN_14025b5e0;
    *(code **)(lVar11 + 0x48) = FUN_14025a880;
    *(code **)(lVar11 + 0x50) = FUN_14025a960;
    iVar1 = *(int *)(lVar2 + 0x130);
    *(undefined4 *)(lVar11 + 0x30) = 5;
    *(undefined1 **)(lVar11 + 0x58) = &LAB_140256ad0;
    if (iVar1 < DAT_1404e9ab8) {
      FUN_14028b140(&DAT_1404e9ab8);
      if (DAT_1404e9ab8 == -1) {
        FUN_14028b410(FUN_1404254b0);
        _DAT_1404e9ad0 = 0;
        _DAT_1404e9ad8 = 0;
        _DAT_1404e9ac0 = 0;
        uRam00000001404e9ac8 = 0;
        FUN_140017480(&DAT_1404e9ac0,"center",6);
        DAT_1404e9ae0 = 1;
        _DAT_1404e9af8 = 0;
        _DAT_1404e9b00 = 0;
        _DAT_1404e9ae8 = 0;
        uRam00000001404e9af0 = 0;
        FUN_140017480(&DAT_1404e9ae8,&DAT_140490d60,3);
        DAT_1404e9b08 = 2;
        _DAT_1404e9b20 = 0;
        _DAT_1404e9b28 = 0;
        _DAT_1404e9b10 = 0;
        uRam00000001404e9b18 = 0;
        FUN_140017480(&DAT_1404e9b10,"bottom",6);
        DAT_1404e9b30 = 0;
        DAT_1404e99b8 = &DAT_1404e9b38;
        DAT_1404e99b0 = &DAT_1404e9ac0;
        _Init_thread_footer(&DAT_1404e9ab8);
      }
    }
    local_58 = 0;
    local_50 = 0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    FUN_140017480(&local_68,"verticalalign",0xd);
    FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
    if (0xf < local_50) {
      FUN_140017200(&local_68,local_68);
    }
    lVar11 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"verticalalign",0xd);
    *(undefined4 *)(lVar11 + 0x34) = 0x59e;
    *(code **)(lVar11 + 0x38) = FUN_14025b7c0;
    *(code **)(lVar11 + 0x40) = FUN_14025b950;
    *(code **)(lVar11 + 0x48) = FUN_14025a9e0;
    *(code **)(lVar11 + 0x50) = FUN_14025aac0;
    iVar1 = *(int *)(lVar2 + 0x130);
    *(undefined4 *)(lVar11 + 0x30) = 5;
    *(undefined1 **)(lVar11 + 0x58) = &LAB_140256ad0;
    puVar14 = auStack_98;
    if (DAT_1404e9b38 <= iVar1) goto LAB_140259fff;
  }
  else {
    uVar13 = local_50 + 1;
    pcVar12 = local_68;
    if (uVar13 < 0x1000) {
LAB_140258d50:
      thunk_FUN_14028af80(pcVar12,uVar13);
      goto LAB_140258d55;
    }
    pcVar12 = *(char **)(local_68 + -8);
    if (local_68 + (-8 - (longlong)pcVar12) < (char *)0x20) {
      uVar13 = local_50 + 0x28;
      goto LAB_140258d50;
    }
LAB_14025a1e4:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar15 = auStack_90;
  }
  *(undefined8 *)(puVar15 + -8) = 0x14025a1f7;
  FUN_14028b140(&DAT_1404e9b38);
  puVar14 = puVar15;
  if (DAT_1404e9b38 == -1) {
    *(undefined8 *)(puVar15 + -8) = 0x14025a210;
    FUN_14028b410(FUN_140425470);
    _DAT_1404e9b50 = 0;
    _DAT_1404e9b58 = 0;
    _DAT_1404e9b40 = 0;
    uRam00000001404e9b48 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a244;
    FUN_140017480(&DAT_1404e9b40,&DAT_14047709c,4);
    DAT_1404e9b60 = 0;
    _DAT_1404e9b78 = 0;
    _DAT_1404e9b80 = 0;
    _DAT_1404e9b68 = 0;
    uRam00000001404e9b70 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a27c;
    FUN_140017480(&DAT_1404e9b68,"center",6);
    DAT_1404e9b88 = 1;
    _DAT_1404e9ba0 = 0;
    _DAT_1404e9ba8 = 0;
    _DAT_1404e9b90 = 0;
    uRam00000001404e9b98 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a2b4;
    FUN_140017480(&DAT_1404e9b90,&DAT_140490d60,3);
    DAT_1404e9bb0 = 2;
    _DAT_1404e9bc8 = 0;
    _DAT_1404e9bd0 = 0;
    _DAT_1404e9bb8 = 0;
    uRam00000001404e9bc0 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a2ec;
    FUN_140017480(&DAT_1404e9bb8,"topright",8);
    DAT_1404e9bd8 = 3;
    _DAT_1404e9bf0 = 0;
    _DAT_1404e9bf8 = 0;
    _DAT_1404e9be0 = 0;
    uRam00000001404e9be8 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a324;
    FUN_140017480(&DAT_1404e9be0,"right",5);
    DAT_1404e9c00 = 4;
    _DAT_1404e9c18 = 0;
    _DAT_1404e9c20 = 0;
    _DAT_1404e9c08 = 0;
    uRam00000001404e9c10 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a35c;
    FUN_140017480(&DAT_1404e9c08,"bottomright",0xb);
    DAT_1404e9c28 = 5;
    _DAT_1404e9c40 = 0;
    _DAT_1404e9c48 = 0;
    _DAT_1404e9c30 = 0;
    uRam00000001404e9c38 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a394;
    FUN_140017480(&DAT_1404e9c30,"bottom",6);
    DAT_1404e9c50 = 6;
    _DAT_1404e9c68 = 0;
    _DAT_1404e9c70 = 0;
    _DAT_1404e9c58 = 0;
    uRam00000001404e9c60 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a3cc;
    FUN_140017480(&DAT_1404e9c58,"bottomleft",10);
    DAT_1404e9c78 = 7;
    _DAT_1404e9c80 = 0;
    uRam00000001404e9c88 = 0;
    _DAT_1404e9c90 = 0;
    _DAT_1404e9c98 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a404;
    FUN_140017480(&DAT_1404e9c80,&DAT_140490de0,4);
    DAT_1404e9ca0 = 8;
    _DAT_1404e9cb8 = 0;
    _DAT_1404e9cc0 = 0;
    _DAT_1404e9ca8 = 0;
    uRam00000001404e9cb0 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x14025a43c;
    FUN_140017480(&DAT_1404e9ca8,"topleft",7);
    DAT_1404e9cc8 = 9;
    DAT_1404e99c8 = &DAT_1404e9cd0;
    DAT_1404e99c0 = &DAT_1404e9b40;
    *(undefined8 *)(puVar15 + -8) = 0x14025a464;
    _Init_thread_footer(&DAT_1404e9b38);
  }
LAB_140259fff:
  local_58 = 0;
  local_50 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  *(undefined8 *)(puVar14 + -8) = 0x14025a024;
  FUN_140017480(&local_68,"anchor",6);
  *(undefined8 *)(puVar14 + -8) = 0x14025a038;
  FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar14 + -8) = 0x14025a04f;
    FUN_140017200(&local_68,local_68);
  }
  lVar2 = local_78[0];
  *(undefined8 *)(puVar14 + -8) = 0x14025a069;
  FUN_14000f880(local_78[0] + 0x68,"anchor",6);
  *(undefined4 *)(lVar2 + 0x34) = 0x550;
  *(code **)(lVar2 + 0x38) = FUN_14025bb30;
  *(undefined4 *)(lVar2 + 0x30) = 5;
  *(code **)(lVar2 + 0x40) = FUN_14025bcc0;
  *(undefined1 **)(lVar2 + 0x58) = unaff_R14;
  *(code **)(lVar2 + 0x48) = FUN_14025ab40;
  local_58 = 0;
  *(code **)(lVar2 + 0x50) = FUN_14025ac20;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_50 = 0;
  *(undefined8 *)(puVar14 + -8) = 0x14025a0cc;
  FUN_140017480(&local_68,&DAT_140488b08,4);
  *(undefined8 *)(puVar14 + -8) = 0x14025a0e0;
  FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar14 + -8) = 0x14025a0f7;
    FUN_140017200(&local_68,local_68);
  }
  lVar2 = local_78[0];
  *(undefined8 *)(puVar14 + -8) = 0x14025a111;
  FUN_14000f880(local_78[0] + 0x68,&DAT_140488b08,4);
  *(undefined4 *)(lVar2 + 0x34) = 0x450;
  *(undefined4 *)(lVar2 + 0x30) = 5;
  *(code **)(lVar2 + 0x38) = FUN_1401a4bc0;
  *(code **)(lVar2 + 0x48) = FUN_1401a4d00;
  *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4d60;
  *(undefined1 **)(lVar2 + 0x58) = unaff_R14;
  local_58 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_50 = 0;
  *(undefined8 *)(puVar14 + -8) = 0x14025a169;
  FUN_140017480(&local_68,&DAT_140491948,4);
  *(undefined8 *)(puVar14 + -8) = 0x14025a17d;
  FUN_14015a000(&DAT_1404e88e0,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar14 + -8) = 0x14025a194;
    FUN_140017200(&local_68,local_68);
  }
  *(undefined8 *)(puVar14 + -8) = 0x14025a1ae;
  FUN_14000f880(local_78[0] + 0x68,&DAT_140491948,4);
  *(undefined4 *)(local_78[0] + 0x34) = 0x490;
  *(undefined4 *)(local_78[0] + 0x30) = 5;
  *(code **)(local_78[0] + 0x38) = FUN_1401a4bc0;
  *(code **)(local_78[0] + 0x48) = FUN_1401a4d00;
  *(undefined1 **)(local_78[0] + 0x50) = &LAB_1401a4d60;
  *(undefined1 **)(local_78[0] + 0x58) = unaff_R14;
  return &DAT_1404e88e0;
}

