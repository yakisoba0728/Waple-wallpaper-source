// Function: FUN_14024d940
// Addr: 14024d940
// Size: 4143 bytes


undefined * FUN_14024d940(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e8860);
  local_38 = 5;
  uStack_40 = 0;
  local_48._0_5_ = CONCAT14(s_alpha_140486af0[4],s_alpha_140486af0._0_4_);
  local_30 = 0xf;
  local_48 = (char *)(ulonglong)(uint5)local_48;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"alpha",5);
  uVar2 = DAT_14048fb5c;
  *(undefined4 *)(lVar9 + 0x34) = 200;
  uStack_40 = 0;
  local_48 = (char *)(ulonglong)uVar2;
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 4;
  local_30 = 0xf;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,&DAT_14048fb5c,4);
  uVar3 = s_count_14048f72c._0_4_;
  *(undefined4 *)(lVar9 + 0x34) = 0xcc;
  uStack_40 = 0;
  local_48._0_5_ = CONCAT14(s_count_14048f72c[4],uVar3);
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 5;
  local_30 = 0xf;
  local_48 = (char *)(ulonglong)(uint5)local_48;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"count",5);
  uVar3 = s_speed_1404913f0._0_4_;
  *(undefined4 *)(lVar9 + 0x34) = 0xd0;
  uStack_40 = 0;
  local_48._0_5_ = CONCAT14(s_speed_1404913f0[4],uVar3);
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 5;
  local_30 = 0xf;
  local_48 = (char *)(ulonglong)(uint5)local_48;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"speed",5);
  local_48 = (char *)s_lifetime_1404913f8._0_8_;
  *(undefined4 *)(lVar9 + 0x34) = 0xd4;
  uStack_40 = 0;
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 8;
  local_30 = 0xf;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"lifetime",8);
  uVar4 = s_brightness_140490880._8_2_;
  *(undefined4 *)(lVar9 + 0x34) = 0xd8;
  *(undefined4 *)(lVar9 + 0x30) = 4;
  local_48 = (char *)s_brightness_140490880._0_8_;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 10;
  local_30 = 0xf;
  uStack_40 = (ulonglong)(ushort)uVar4;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"brightness",10);
  uVar2 = DAT_1404884a4;
  *(undefined4 *)(lVar9 + 0x34) = 0xe0;
  uStack_40 = 0;
  local_48 = (char *)(ulonglong)uVar2;
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 4;
  local_30 = 0xf;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,&DAT_1404884a4,4);
  uVar3 = s_colorn_14048fd44._0_4_;
  *(undefined4 *)(lVar9 + 0x34) = 0xdc;
  uStack_40 = 0;
  local_48._0_6_ = CONCAT24(s_colorn_14048fd44._4_2_,uVar3);
  *(undefined4 *)(lVar9 + 0x30) = 4;
  *(code **)(lVar9 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4a10;
  local_38 = 6;
  local_30 = 0xf;
  local_48 = (char *)(ulonglong)(uint6)local_48;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"colorn",6);
  local_48 = (char *)s_controlpoint0_140491408._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint0_140491408[0xc],s_controlpoint0_140491408._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0xe4;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0xd;
  local_30 = 0xf;
  uStack_40 = (ulonglong)(uint5)uStack_40;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint0",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0xf0;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  local_res8 = 0x1f;
  local_48 = (char *)FUN_1400173f0(&local_48,&local_res8);
  uVar4 = s_controlpointangle0_140491490._16_2_;
  uVar8 = s_controlpointangle0_140491490._12_4_;
  uVar7 = s_controlpointangle0_140491490._8_4_;
  uVar3 = s_controlpointangle0_140491490._4_4_;
  local_30 = local_res8;
  local_38 = 0x12;
  *(undefined4 *)local_48 = s_controlpointangle0_140491490._0_4_;
  *(undefined4 *)(local_48 + 4) = uVar3;
  *(undefined4 *)(local_48 + 8) = uVar7;
  *(undefined4 *)(local_48 + 0xc) = uVar8;
  *(undefined2 *)(local_48 + 0x10) = uVar4;
  local_48[0x12] = '\0';
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle0",0x12);
  local_48 = (char *)s_controlpoint1_1404914a8._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint1_1404914a8[0xc],s_controlpoint1_1404914a8._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x150;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0xd;
  local_30 = 0xf;
  uStack_40 = (ulonglong)(uint5)uStack_40;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint1",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0xfc;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle1",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle1",0x12);
  local_48 = (char *)s_controlpoint2_1404914d0._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint2_1404914d0[0xc],s_controlpoint2_1404914d0._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x15c;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0xd;
  local_30 = 0xf;
  uStack_40 = (ulonglong)(uint5)uStack_40;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) goto LAB_14024e967;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint2",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0x108;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle2",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    uVar12 = local_30 + 1;
    pcVar11 = local_48;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar11)) {
LAB_14024e967:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar10 = (undefined *)(*pcVar1)();
        return puVar10;
      }
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(pcVar11,uVar12);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle2",0x12);
  uVar5 = s_controlpoint3_140491458._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint3_140491458[0xc],s_controlpoint3_140491458._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x168;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  uVar6 = s_controlpoint3_140491458._0_8_;
  local_38 = 0xd;
  local_30 = 0xf;
  s_controlpoint3_140491458[0] = (char)uVar5;
  s_controlpoint3_140491458[1] = SUB81(uVar5,1);
  s_controlpoint3_140491458[2] = SUB81(uVar5,2);
  s_controlpoint3_140491458[3] = SUB81(uVar5,3);
  s_controlpoint3_140491458[4] = SUB81(uVar5,4);
  s_controlpoint3_140491458[5] = SUB81(uVar5,5);
  s_controlpoint3_140491458[6] = SUB81(uVar5,6);
  s_controlpoint3_140491458[7] = SUB81(uVar5,7);
  local_48._0_1_ = s_controlpoint3_140491458[0];
  local_48._1_1_ = s_controlpoint3_140491458[1];
  local_48._2_1_ = s_controlpoint3_140491458[2];
  local_48._3_1_ = s_controlpoint3_140491458[3];
  local_48._4_1_ = s_controlpoint3_140491458[4];
  local_48._5_1_ = s_controlpoint3_140491458[5];
  local_48._6_1_ = s_controlpoint3_140491458[6];
  local_48._7_1_ = s_controlpoint3_140491458[7];
  uStack_40 = (ulonglong)(uint5)uStack_40;
  s_controlpoint3_140491458._0_8_ = uVar6;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint3",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0x114;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle3",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle3",0x12);
  uVar5 = s_controlpoint4_140491480._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint4_140491480[0xc],s_controlpoint4_140491480._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x174;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  uVar6 = s_controlpoint4_140491480._0_8_;
  local_38 = 0xd;
  local_30 = 0xf;
  s_controlpoint4_140491480[0] = (char)uVar5;
  s_controlpoint4_140491480[1] = SUB81(uVar5,1);
  s_controlpoint4_140491480[2] = SUB81(uVar5,2);
  s_controlpoint4_140491480[3] = SUB81(uVar5,3);
  s_controlpoint4_140491480[4] = SUB81(uVar5,4);
  s_controlpoint4_140491480[5] = SUB81(uVar5,5);
  s_controlpoint4_140491480[6] = SUB81(uVar5,6);
  s_controlpoint4_140491480[7] = SUB81(uVar5,7);
  local_48._0_1_ = s_controlpoint4_140491480[0];
  local_48._1_1_ = s_controlpoint4_140491480[1];
  local_48._2_1_ = s_controlpoint4_140491480[2];
  local_48._3_1_ = s_controlpoint4_140491480[3];
  local_48._4_1_ = s_controlpoint4_140491480[4];
  local_48._5_1_ = s_controlpoint4_140491480[5];
  local_48._6_1_ = s_controlpoint4_140491480[6];
  local_48._7_1_ = s_controlpoint4_140491480[7];
  uStack_40 = (ulonglong)(uint5)uStack_40;
  s_controlpoint4_140491480._0_8_ = uVar6;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint4",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0x120;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle4",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle4",0x12);
  uVar5 = s_controlpoint5_140491538._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint5_140491538[0xc],s_controlpoint5_140491538._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x180;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  uVar6 = s_controlpoint5_140491538._0_8_;
  local_38 = 0xd;
  local_30 = 0xf;
  s_controlpoint5_140491538[0] = (char)uVar5;
  s_controlpoint5_140491538[1] = SUB81(uVar5,1);
  s_controlpoint5_140491538[2] = SUB81(uVar5,2);
  s_controlpoint5_140491538[3] = SUB81(uVar5,3);
  s_controlpoint5_140491538[4] = SUB81(uVar5,4);
  s_controlpoint5_140491538[5] = SUB81(uVar5,5);
  s_controlpoint5_140491538[6] = SUB81(uVar5,6);
  s_controlpoint5_140491538[7] = SUB81(uVar5,7);
  local_48._0_1_ = s_controlpoint5_140491538[0];
  local_48._1_1_ = s_controlpoint5_140491538[1];
  local_48._2_1_ = s_controlpoint5_140491538[2];
  local_48._3_1_ = s_controlpoint5_140491538[3];
  local_48._4_1_ = s_controlpoint5_140491538[4];
  local_48._5_1_ = s_controlpoint5_140491538[5];
  local_48._6_1_ = s_controlpoint5_140491538[6];
  local_48._7_1_ = s_controlpoint5_140491538[7];
  uStack_40 = (ulonglong)(uint5)uStack_40;
  s_controlpoint5_140491538._0_8_ = uVar6;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint5",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 300;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle5",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle5",0x12);
  uVar5 = s_controlpoint6_140491560._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint6_140491560[0xc],s_controlpoint6_140491560._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x18c;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  uVar6 = s_controlpoint6_140491560._0_8_;
  local_38 = 0xd;
  local_30 = 0xf;
  s_controlpoint6_140491560[0] = (char)uVar5;
  s_controlpoint6_140491560[1] = SUB81(uVar5,1);
  s_controlpoint6_140491560[2] = SUB81(uVar5,2);
  s_controlpoint6_140491560[3] = SUB81(uVar5,3);
  s_controlpoint6_140491560[4] = SUB81(uVar5,4);
  s_controlpoint6_140491560[5] = SUB81(uVar5,5);
  s_controlpoint6_140491560[6] = SUB81(uVar5,6);
  s_controlpoint6_140491560[7] = SUB81(uVar5,7);
  local_48._0_1_ = s_controlpoint6_140491560[0];
  local_48._1_1_ = s_controlpoint6_140491560[1];
  local_48._2_1_ = s_controlpoint6_140491560[2];
  local_48._3_1_ = s_controlpoint6_140491560[3];
  local_48._4_1_ = s_controlpoint6_140491560[4];
  local_48._5_1_ = s_controlpoint6_140491560[5];
  local_48._6_1_ = s_controlpoint6_140491560[6];
  local_48._7_1_ = s_controlpoint6_140491560[7];
  uStack_40 = (ulonglong)(uint5)uStack_40;
  s_controlpoint6_140491560._0_8_ = uVar6;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint6",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0x138;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle6",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle6",0x12);
  uVar5 = s_controlpoint7_1404914f8._0_8_;
  uStack_40._0_5_ = CONCAT14(s_controlpoint7_1404914f8[0xc],s_controlpoint7_1404914f8._8_4_);
  *(undefined4 *)(lVar9 + 0x34) = 0x198;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  uVar6 = s_controlpoint7_1404914f8._0_8_;
  local_38 = 0xd;
  local_30 = 0xf;
  s_controlpoint7_1404914f8[0] = (char)uVar5;
  s_controlpoint7_1404914f8[1] = SUB81(uVar5,1);
  s_controlpoint7_1404914f8[2] = SUB81(uVar5,2);
  s_controlpoint7_1404914f8[3] = SUB81(uVar5,3);
  s_controlpoint7_1404914f8[4] = SUB81(uVar5,4);
  s_controlpoint7_1404914f8[5] = SUB81(uVar5,5);
  s_controlpoint7_1404914f8[6] = SUB81(uVar5,6);
  s_controlpoint7_1404914f8[7] = SUB81(uVar5,7);
  local_48._0_1_ = s_controlpoint7_1404914f8[0];
  local_48._1_1_ = s_controlpoint7_1404914f8[1];
  local_48._2_1_ = s_controlpoint7_1404914f8[2];
  local_48._3_1_ = s_controlpoint7_1404914f8[3];
  local_48._4_1_ = s_controlpoint7_1404914f8[4];
  local_48._5_1_ = s_controlpoint7_1404914f8[5];
  local_48._6_1_ = s_controlpoint7_1404914f8[6];
  local_48._7_1_ = s_controlpoint7_1404914f8[7];
  uStack_40 = (ulonglong)(uint5)uStack_40;
  s_controlpoint7_1404914f8._0_8_ = uVar6;
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  lVar9 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"controlpoint7",0xd);
  *(undefined4 *)(lVar9 + 0x34) = 0x144;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  *(code **)(lVar9 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar9 + 0x58) = &LAB_14022ab30;
  local_38 = 0;
  local_30 = 0;
  FUN_140017480(&local_48,"controlpointangle7",0x12);
  FUN_14015a000(&DAT_1404e8860,local_58,&local_48);
  if (0xf < local_30) {
    FUN_140017200(&local_48,local_48);
  }
  FUN_14000f880(local_58[0] + 0x68,"controlpointangle7",0x12);
  *(undefined1 **)(local_58[0] + 0x58) = &LAB_14022ab30;
  *(undefined4 *)(local_58[0] + 0x34) = 0x1a4;
  *(undefined4 *)(local_58[0] + 0x30) = 2;
  *(code **)(local_58[0] + 0x38) = FUN_1401a4230;
  *(undefined1 **)(local_58[0] + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(local_58[0] + 0x50) = &LAB_1401a4560;
  return &DAT_1404e8860;
}

