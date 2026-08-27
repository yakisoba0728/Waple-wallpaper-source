// Function: FUN_140214050
// Addr: 140214050
// Size: 1866 bytes


undefined * FUN_140214050(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e86e0);
  local_18 = 4;
  uStack_20 = 0;
  local_28 = (char *)(ulonglong)DAT_1404884a4;
  local_10 = 0xf;
  FUN_14015a000(&DAT_1404e86e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_1404884a4,4);
  *(undefined4 *)(lVar6 + 0x34) = 0xe8;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  local_18 = 4;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  local_10 = 0xf;
  *(undefined1 **)(lVar6 + 0x58) = &LAB_1401fa6d0;
  uStack_20 = 0;
  local_28 = (char *)(ulonglong)DAT_140490a74;
  FUN_14015a000(&DAT_1404e86e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_140490a74,4);
  *(undefined4 *)(lVar6 + 0x34) = 0xec;
  *(code **)(lVar6 + 0x38) = FUN_1401a4a20;
  *(undefined4 *)(lVar6 + 0x30) = 8;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a4ad0;
  local_18 = 8;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4af0;
  local_10 = 0xf;
  *(undefined1 **)(lVar6 + 0x58) = &LAB_1401fa700;
  local_28 = (char *)s_duration_140489b60._0_8_;
  uStack_20 = 0;
  FUN_14015a000(&DAT_1404e86e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"duration",8);
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(code **)(lVar6 + 0x50) = FUN_1401fa690;
  uVar2 = DAT_140473b3c;
  uStack_20 = 0;
  *(undefined1 *)(lVar6 + 0x60) = 2;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (char *)(ulonglong)uVar2;
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b3c,4);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(code **)(lVar6 + 0x30) = FUN_1401fa510;
  local_18 = 5;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (char *)(ulonglong)CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"pause",5);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_1401fa560;
  uStack_20 = 0;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (char *)(ulonglong)DAT_140473b34;
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b34,4);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(code **)(lVar6 + 0x30) = FUN_1401fa580;
  local_28 = (char *)s_isPlaying_14048de88._0_8_;
  local_18 = 9;
  local_10 = 0xf;
  uStack_20 = (ulonglong)(byte)s_isPlaying_14048de88[8];
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"isPlaying",9);
  local_28 = (char *)s_setCurrentTime_140490ff0._0_8_;
  *(code **)(lVar6 + 0x30) = FUN_1401fa5d0;
  uStack_20._0_6_ = CONCAT24(s_setCurrentTime_140490ff0._12_2_,s_setCurrentTime_140490ff0._8_4_);
  *(undefined4 *)(lVar6 + 0x70) = 2;
  uStack_20 = (ulonglong)(uint6)uStack_20;
  local_18 = 0xe;
  local_10 = 0xf;
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"setCurrentTime",0xe);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_1401fa650;
  local_res8 = CONCAT44(local_res8._4_4_,4);
  FUN_14002ff50(lVar6 + 0x58,&local_res8);
  uStack_20._0_6_ = CONCAT24(s_getCurrentTime_140491000._12_2_,s_getCurrentTime_140491000._8_4_);
  uStack_20 = (ulonglong)(uint6)uStack_20;
  local_18 = 0xe;
  local_10 = 0xf;
  local_28 = (char *)s_getCurrentTime_140491000._0_8_;
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) goto LAB_140214792;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"getCurrentTime",0xe);
  *(undefined4 *)(lVar6 + 0x70) = 4;
  *(code **)(lVar6 + 0x30) = FUN_1401fa620;
  local_res8 = 0x1f;
  local_18 = 0;
  local_10 = 0;
  local_28 = (char *)0x0;
  uStack_20 = 0;
  local_28 = (char *)FUN_1400173f0(&local_28,&local_res8);
  uVar5 = s_addEndedCallback_140491068._12_4_;
  uVar4 = s_addEndedCallback_140491068._8_4_;
  uVar3 = s_addEndedCallback_140491068._4_4_;
  local_10 = local_res8;
  local_18 = 0x10;
  *(undefined4 *)local_28 = s_addEndedCallback_140491068._0_4_;
  *(undefined4 *)(local_28 + 4) = uVar3;
  *(undefined4 *)(local_28 + 8) = uVar4;
  *(undefined4 *)(local_28 + 0xc) = uVar5;
  local_28[0x10] = '\0';
  FUN_140178e90(&DAT_1404e8720,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    pcVar8 = local_28;
    if (0xfff < uVar9) {
      pcVar8 = *(char **)(local_28 + -8);
      if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar8)) {
LAB_140214792:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar7 = (undefined *)(*pcVar1)();
        return puVar7;
      }
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(pcVar8,uVar9);
  }
  FUN_14000f880(local_38[0] + 0x38,"addEndedCallback",0x10);
  *(undefined4 *)(local_38[0] + 0x70) = 1;
  *(code **)(local_38[0] + 0x30) = FUN_1401fa730;
  local_res8 = CONCAT44(local_res8._4_4_,0x2000);
  FUN_14002ff50(local_38[0] + 0x58,&local_res8);
  return &DAT_1404e86e0;
}

