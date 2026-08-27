// Function: FUN_140177f70
// Addr: 140177f70
// Size: 1922 bytes


undefined * FUN_140177f70(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e8140);
  local_18 = 4;
  uStack_20 = 0;
  local_28 = (ulonglong)DAT_1404884a4;
  local_10 = 0xf;
  FUN_14015a000(&DAT_1404e8140,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_1404884a4,4);
  *(undefined4 *)(lVar6 + 0x34) = 0xd0;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  local_18 = 3;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (ulonglong)(uint3)DAT_140476edc;
  FUN_14015a000(&DAT_1404e8140,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_140476edc,3);
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_140170770;
  uVar5 = s_frameCount_14048de98._8_2_;
  local_28._0_1_ = s_frameCount_14048de98[0];
  local_28._1_1_ = s_frameCount_14048de98[1];
  local_28._2_1_ = s_frameCount_14048de98[2];
  local_28._3_1_ = s_frameCount_14048de98[3];
  local_28._4_1_ = s_frameCount_14048de98[4];
  local_28._5_1_ = s_frameCount_14048de98[5];
  local_28._6_1_ = s_frameCount_14048de98[6];
  local_28._7_1_ = s_frameCount_14048de98[7];
  *(undefined1 *)(lVar6 + 0x60) = 2;
  local_18 = 10;
  local_10 = 0xf;
  uStack_20 = (ulonglong)(ushort)uVar5;
  FUN_14015a000(&DAT_1404e8140,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"frameCount",10);
  *(undefined4 *)(lVar6 + 0x30) = 0;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_140170790;
  uVar3 = s_duration_140489b60._0_8_;
  *(undefined1 *)(lVar6 + 0x60) = 2;
  uVar4 = s_duration_140489b60._0_8_;
  s_duration_140489b60[0] = (char)uVar3;
  s_duration_140489b60[1] = SUB81(uVar3,1);
  s_duration_140489b60[2] = SUB81(uVar3,2);
  s_duration_140489b60[3] = SUB81(uVar3,3);
  s_duration_140489b60[4] = SUB81(uVar3,4);
  s_duration_140489b60[5] = SUB81(uVar3,5);
  s_duration_140489b60[6] = SUB81(uVar3,6);
  s_duration_140489b60[7] = SUB81(uVar3,7);
  local_28._0_1_ = s_duration_140489b60[0];
  local_28._1_1_ = s_duration_140489b60[1];
  local_28._2_1_ = s_duration_140489b60[2];
  local_28._3_1_ = s_duration_140489b60[3];
  local_28._4_1_ = s_duration_140489b60[4];
  local_28._5_1_ = s_duration_140489b60[5];
  local_28._6_1_ = s_duration_140489b60[6];
  local_28._7_1_ = s_duration_140489b60[7];
  local_18 = 8;
  local_10 = 0xf;
  uStack_20 = 0;
  s_duration_140489b60._0_8_ = uVar4;
  FUN_14015a000(&DAT_1404e8140,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"duration",8);
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401707a0;
  uVar2 = DAT_1404748b8;
  uStack_20 = 0;
  *(undefined1 *)(lVar6 + 0x60) = 2;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)uVar2;
  FUN_14015a000(&DAT_1404e8140,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_1404748b8,4);
  *(undefined4 *)(lVar6 + 0x30) = 5;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401707b0;
  uVar2 = DAT_140473b3c;
  uStack_20 = 0;
  *(undefined1 *)(lVar6 + 0x60) = 2;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)uVar2;
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b3c,4);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_1401707f0;
  local_18 = 5;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (ulonglong)CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"pause",5);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_140170820;
  uStack_20 = 0;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)DAT_140473b34;
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b34,4);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_140170830;
  local_28._0_1_ = s_isPlaying_14048de88[0];
  local_28._1_1_ = s_isPlaying_14048de88[1];
  local_28._2_1_ = s_isPlaying_14048de88[2];
  local_28._3_1_ = s_isPlaying_14048de88[3];
  local_28._4_1_ = s_isPlaying_14048de88[4];
  local_28._5_1_ = s_isPlaying_14048de88[5];
  local_28._6_1_ = s_isPlaying_14048de88[6];
  local_28._7_1_ = s_isPlaying_14048de88[7];
  local_18 = 9;
  local_10 = 0xf;
  uStack_20 = (ulonglong)(byte)s_isPlaying_14048de88[8];
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"isPlaying",9);
  *(undefined4 *)(lVar6 + 0x70) = 2;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_140170860;
  local_18 = 8;
  local_28._0_1_ = s_setFrame_14048de78[0];
  local_28._1_1_ = s_setFrame_14048de78[1];
  local_28._2_1_ = s_setFrame_14048de78[2];
  local_28._3_1_ = s_setFrame_14048de78[3];
  local_28._4_1_ = s_setFrame_14048de78[4];
  local_28._5_1_ = s_setFrame_14048de78[5];
  local_28._6_1_ = s_setFrame_14048de78[6];
  local_28._7_1_ = s_setFrame_14048de78[7];
  local_10 = 0xf;
  uStack_20 = 0;
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) goto LAB_1401786ea;
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  lVar6 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"setFrame",8);
  *(undefined4 *)(lVar6 + 0x70) = 1;
  *(undefined1 **)(lVar6 + 0x30) = &LAB_140170880;
  local_res8 = CONCAT44(local_res8._4_4_,4);
  FUN_14002ff50(lVar6 + 0x58,&local_res8);
  local_18 = 8;
  local_28._0_1_ = s_getFrame_14048de68[0];
  local_28._1_1_ = s_getFrame_14048de68[1];
  local_28._2_1_ = s_getFrame_14048de68[2];
  local_28._3_1_ = s_getFrame_14048de68[3];
  local_28._4_1_ = s_getFrame_14048de68[4];
  local_28._5_1_ = s_getFrame_14048de68[5];
  local_28._6_1_ = s_getFrame_14048de68[6];
  local_28._7_1_ = s_getFrame_14048de68[7];
  uStack_20 = 0;
  local_10 = 0xf;
  FUN_140178e90(&DAT_1404e8180,local_38,&local_28);
  if (0xf < local_10) {
    uVar9 = local_10 + 1;
    uVar8 = local_28;
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar8) - 8) {
LAB_1401786ea:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar7 = (undefined *)(*pcVar1)();
        return puVar7;
      }
      uVar9 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar8,uVar9);
  }
  FUN_14000f880(local_38[0] + 0x38,"getFrame",8);
  *(undefined4 *)(local_38[0] + 0x70) = 4;
  *(undefined1 **)(local_38[0] + 0x30) = &LAB_1401708a0;
  return &DAT_1404e8140;
}

