// Function: FUN_14026c980
// Addr: 14026c980
// Size: 3167 bytes


undefined * FUN_14026c980(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  char cVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res8 [4];
  longlong local_68 [2];
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_res8[0] = param_1;
  FUN_140153760(&DAT_1404e8a60);
  local_58._0_6_ = CONCAT24(s_visible_1404903a0._4_2_,s_visible_1404903a0._0_4_);
  local_58._0_7_ = CONCAT16(s_visible_1404903a0[6],(undefined6)local_58);
  uStack_50 = 0;
  local_48 = 7;
  local_40 = 0xf;
  local_58 = (ulonglong)(uint7)local_58;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"visible",7);
  *(undefined4 *)(lVar8 + 0x34) = 0xd0;
  *(code **)(lVar8 + 0x38) = FUN_1401e1a90;
  *(undefined4 *)(lVar8 + 0x30) = 6;
  *(code **)(lVar8 + 0x40) = FUN_1401e1b60;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_1401e1c60;
  local_48 = 8;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_1401e1c90;
  local_58._0_1_ = s_additive_14048b520[0];
  local_58._1_1_ = s_additive_14048b520[1];
  local_58._2_1_ = s_additive_14048b520[2];
  local_58._3_1_ = s_additive_14048b520[3];
  local_58._4_1_ = s_additive_14048b520[4];
  local_58._5_1_ = s_additive_14048b520[5];
  local_58._6_1_ = s_additive_14048b520[6];
  local_58._7_1_ = s_additive_14048b520[7];
  local_40 = 0xf;
  uStack_50 = 0;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"additive",8);
  *(undefined4 *)(lVar8 + 0x34) = 0xd0;
  *(code **)(lVar8 + 0x38) = FUN_14019b4e0;
  *(undefined4 *)(lVar8 + 0x30) = 6;
  *(code **)(lVar8 + 0x40) = FUN_14019b5b0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_14019b6b0;
  uStack_50 = 0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14019b6e0;
  local_58._0_6_ = CONCAT24(s_blendin_140490bd0._4_2_,s_blendin_140490bd0._0_4_);
  local_58._0_7_ = CONCAT16(s_blendin_140490bd0[6],(undefined6)local_58);
  local_48 = 7;
  local_40 = 0xf;
  local_58 = (ulonglong)(uint7)local_58;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"blendin",7);
  *(undefined4 *)(lVar8 + 0x34) = 0xd0;
  *(code **)(lVar8 + 0x38) = FUN_14019bfa0;
  *(undefined4 *)(lVar8 + 0x30) = 6;
  *(code **)(lVar8 + 0x40) = FUN_14019c070;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_14019c170;
  local_48 = 8;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14019c1a0;
  local_58._0_1_ = s_blendout_140490bd8[0];
  local_58._1_1_ = s_blendout_140490bd8[1];
  local_58._2_1_ = s_blendout_140490bd8[2];
  local_58._3_1_ = s_blendout_140490bd8[3];
  local_58._4_1_ = s_blendout_140490bd8[4];
  local_58._5_1_ = s_blendout_140490bd8[5];
  local_58._6_1_ = s_blendout_140490bd8[6];
  local_58._7_1_ = s_blendout_140490bd8[7];
  local_40 = 0xf;
  uStack_50 = 0;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"blendout",8);
  *(undefined4 *)(lVar8 + 0x34) = 0xd0;
  *(code **)(lVar8 + 0x38) = FUN_14025aca0;
  *(undefined4 *)(lVar8 + 0x30) = 6;
  *(code **)(lVar8 + 0x40) = FUN_14025ad70;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_14025ae70;
  local_48 = 4;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14025aea0;
  uStack_50 = 0;
  local_40 = 0xf;
  local_58 = (ulonglong)DAT_1404748b8;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,&DAT_1404748b8,4);
  *(undefined4 *)(lVar8 + 0x34) = 0xd8;
  *(code **)(lVar8 + 0x38) = FUN_1401a4bc0;
  *(undefined4 *)(lVar8 + 0x30) = 5;
  *(code **)(lVar8 + 0x48) = FUN_1401a4d00;
  local_48 = 4;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_1401a4d60;
  uStack_50 = 0;
  local_40 = 0xf;
  local_58 = (ulonglong)DAT_1404884a4;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,&DAT_1404884a4,4);
  uVar3 = s_blend_14048e374._0_4_;
  *(undefined4 *)(lVar8 + 0x34) = 200;
  uStack_50 = 0;
  local_58._0_5_ = CONCAT14(s_blend_14048e374[4],uVar3);
  *(undefined4 *)(lVar8 + 0x30) = 4;
  *(code **)(lVar8 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_1401a4a10;
  local_48 = 5;
  local_40 = 0xf;
  local_58 = (ulonglong)(uint5)local_58;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"blend",5);
  cVar7 = s_blendtime_1404921e8[8];
  *(undefined4 *)(lVar8 + 0x34) = 0xcc;
  *(undefined4 *)(lVar8 + 0x30) = 4;
  local_58._0_1_ = s_blendtime_1404921e8[0];
  local_58._1_1_ = s_blendtime_1404921e8[1];
  local_58._2_1_ = s_blendtime_1404921e8[2];
  local_58._3_1_ = s_blendtime_1404921e8[3];
  local_58._4_1_ = s_blendtime_1404921e8[4];
  local_58._5_1_ = s_blendtime_1404921e8[5];
  local_58._6_1_ = s_blendtime_1404921e8[6];
  local_58._7_1_ = s_blendtime_1404921e8[7];
  *(code **)(lVar8 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_1401a4a10;
  local_48 = 9;
  local_40 = 0xf;
  uStack_50 = (ulonglong)(byte)cVar7;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"blendtime",9);
  uVar3 = DAT_140476edc;
  *(undefined4 *)(lVar8 + 0x34) = 0x18c;
  uStack_50 = 0;
  uVar2 = (uint)DAT_140476edc >> 0x10;
  *(undefined4 *)(lVar8 + 0x30) = 4;
  *(code **)(lVar8 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar8 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_1401a4a10;
  local_48 = 3;
  local_40 = 0xf;
  local_58 = (ulonglong)CONCAT12((char)uVar2,(short)uVar3);
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,&DAT_140476edc,3);
  *(undefined4 *)(lVar8 + 0x30) = 4;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14026c3e0;
  uVar6 = s_frameCount_14048de98._8_2_;
  local_58._0_1_ = s_frameCount_14048de98[0];
  local_58._1_1_ = s_frameCount_14048de98[1];
  local_58._2_1_ = s_frameCount_14048de98[2];
  local_58._3_1_ = s_frameCount_14048de98[3];
  local_58._4_1_ = s_frameCount_14048de98[4];
  local_58._5_1_ = s_frameCount_14048de98[5];
  local_58._6_1_ = s_frameCount_14048de98[6];
  local_58._7_1_ = s_frameCount_14048de98[7];
  *(undefined1 *)(lVar8 + 0x60) = 2;
  local_48 = 10;
  local_40 = 0xf;
  uStack_50 = (ulonglong)(ushort)uVar6;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"frameCount",10);
  *(undefined4 *)(lVar8 + 0x30) = 0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14026c400;
  uVar4 = s_duration_140489b60._0_8_;
  *(undefined1 *)(lVar8 + 0x60) = 2;
  uVar5 = s_duration_140489b60._0_8_;
  s_duration_140489b60[0] = (char)uVar4;
  s_duration_140489b60[1] = SUB81(uVar4,1);
  s_duration_140489b60[2] = SUB81(uVar4,2);
  s_duration_140489b60[3] = SUB81(uVar4,3);
  s_duration_140489b60[4] = SUB81(uVar4,4);
  s_duration_140489b60[5] = SUB81(uVar4,5);
  s_duration_140489b60[6] = SUB81(uVar4,6);
  s_duration_140489b60[7] = SUB81(uVar4,7);
  local_58._0_1_ = s_duration_140489b60[0];
  local_58._1_1_ = s_duration_140489b60[1];
  local_58._2_1_ = s_duration_140489b60[2];
  local_58._3_1_ = s_duration_140489b60[3];
  local_58._4_1_ = s_duration_140489b60[4];
  local_58._5_1_ = s_duration_140489b60[5];
  local_58._6_1_ = s_duration_140489b60[6];
  local_58._7_1_ = s_duration_140489b60[7];
  local_48 = 8;
  local_40 = 0xf;
  uStack_50 = 0;
  s_duration_140489b60._0_8_ = uVar5;
  FUN_14015a000(&DAT_1404e8a60,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"duration",8);
  *(undefined4 *)(lVar8 + 0x30) = 4;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_14026c410;
  uVar2 = DAT_140473b3c;
  uStack_50 = 0;
  *(undefined1 *)(lVar8 + 0x60) = 2;
  local_48 = 4;
  local_40 = 0xf;
  local_58 = (ulonglong)uVar2;
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) goto LAB_14026d5d7;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,&DAT_140473b3c,4);
  *(undefined4 *)(lVar8 + 0x70) = 1;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c420;
  local_48 = 5;
  uStack_50 = 0;
  local_58._0_5_ = CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
  local_40 = 0xf;
  local_58 = (ulonglong)(uint5)local_58;
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    uVar10 = local_58;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar10) - 8) {
LAB_14026d5d7:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar9 = (undefined *)(*pcVar1)();
        return puVar9;
      }
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(uVar10,uVar11);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"pause",5);
  *(undefined4 *)(lVar8 + 0x70) = 1;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c450;
  uStack_50 = 0;
  local_48 = 4;
  local_40 = 0xf;
  local_58 = (ulonglong)DAT_140473b34;
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,local_58);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,&DAT_140473b34,4);
  *(undefined4 *)(lVar8 + 0x70) = 1;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c460;
  local_58._0_1_ = s_isPlaying_14048de88[0];
  local_58._1_1_ = s_isPlaying_14048de88[1];
  local_58._2_1_ = s_isPlaying_14048de88[2];
  local_58._3_1_ = s_isPlaying_14048de88[3];
  local_58._4_1_ = s_isPlaying_14048de88[4];
  local_58._5_1_ = s_isPlaying_14048de88[5];
  local_58._6_1_ = s_isPlaying_14048de88[6];
  local_58._7_1_ = s_isPlaying_14048de88[7];
  local_48 = 9;
  local_40 = 0xf;
  uStack_50 = (ulonglong)(byte)s_isPlaying_14048de88[8];
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,local_58);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"isPlaying",9);
  *(undefined4 *)(lVar8 + 0x70) = 2;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c480;
  local_48 = 8;
  local_58._0_1_ = s_setFrame_14048de78[0];
  local_58._1_1_ = s_setFrame_14048de78[1];
  local_58._2_1_ = s_setFrame_14048de78[2];
  local_58._3_1_ = s_setFrame_14048de78[3];
  local_58._4_1_ = s_setFrame_14048de78[4];
  local_58._5_1_ = s_setFrame_14048de78[5];
  local_58._6_1_ = s_setFrame_14048de78[6];
  local_58._7_1_ = s_setFrame_14048de78[7];
  local_40 = 0xf;
  uStack_50 = 0;
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,local_58);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"setFrame",8);
  *(undefined4 *)(lVar8 + 0x70) = 1;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c4a0;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,4);
  FUN_14002ff50(lVar8 + 0x58,local_res8);
  local_48 = 8;
  local_58._0_1_ = s_getFrame_14048de68[0];
  local_58._1_1_ = s_getFrame_14048de68[1];
  local_58._2_1_ = s_getFrame_14048de68[2];
  local_58._3_1_ = s_getFrame_14048de68[3];
  local_58._4_1_ = s_getFrame_14048de68[4];
  local_58._5_1_ = s_getFrame_14048de68[5];
  local_58._6_1_ = s_getFrame_14048de68[6];
  local_58._7_1_ = s_getFrame_14048de68[7];
  uStack_50 = 0;
  local_40 = 0xf;
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,local_58);
  }
  lVar8 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getFrame",8);
  *(undefined4 *)(lVar8 + 0x70) = 4;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_14026c4d0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140017480(&local_58,"addEndedCallback",0x10);
  FUN_140178e90(&DAT_1404e8aa0,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,local_58);
  }
  FUN_14000f880(local_68[0] + 0x38,"addEndedCallback",0x10);
  *(undefined4 *)(local_68[0] + 0x70) = 1;
  *(code **)(local_68[0] + 0x30) = FUN_14026c4f0;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x2000);
  FUN_14002ff50(local_68[0] + 0x58,local_res8);
  return &DAT_1404e8a60;
}

