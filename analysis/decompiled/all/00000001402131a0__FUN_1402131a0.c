// Function: FUN_1402131a0
// Addr: 1402131a0
// Size: 1755 bytes


undefined * FUN_1402131a0(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e8660);
  local_18 = 4;
  uStack_20 = 0;
  local_28 = (ulonglong)DAT_1404884a4;
  local_10 = 0xf;
  FUN_14015a000(&DAT_1404e8660,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,&DAT_1404884a4,4);
  *(undefined4 *)(lVar5 + 0x34) = 0xe4;
  *(undefined4 *)(lVar5 + 0x30) = 4;
  uVar3 = s_frameCount_14048de98._0_8_;
  *(code **)(lVar5 + 0x38) = FUN_1401a4b00;
  local_18 = 10;
  *(undefined1 **)(lVar5 + 0x48) = &LAB_1401a49f0;
  local_10 = 0xf;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar5 + 0x58) = &LAB_1401fa4a0;
  uVar4 = s_frameCount_14048de98._0_8_;
  s_frameCount_14048de98[0] = (char)uVar3;
  s_frameCount_14048de98[1] = SUB81(uVar3,1);
  s_frameCount_14048de98[2] = SUB81(uVar3,2);
  s_frameCount_14048de98[3] = SUB81(uVar3,3);
  s_frameCount_14048de98[4] = SUB81(uVar3,4);
  s_frameCount_14048de98[5] = SUB81(uVar3,5);
  s_frameCount_14048de98[6] = SUB81(uVar3,6);
  s_frameCount_14048de98[7] = SUB81(uVar3,7);
  local_28._0_1_ = s_frameCount_14048de98[0];
  local_28._1_1_ = s_frameCount_14048de98[1];
  local_28._2_1_ = s_frameCount_14048de98[2];
  local_28._3_1_ = s_frameCount_14048de98[3];
  local_28._4_1_ = s_frameCount_14048de98[4];
  local_28._5_1_ = s_frameCount_14048de98[5];
  local_28._6_1_ = s_frameCount_14048de98[6];
  local_28._7_1_ = s_frameCount_14048de98[7];
  uStack_20 = (ulonglong)(ushort)s_frameCount_14048de98._8_2_;
  s_frameCount_14048de98._0_8_ = uVar4;
  FUN_14015a000(&DAT_1404e8660,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"frameCount",10);
  *(undefined4 *)(lVar5 + 0x30) = 0;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401fa2a0;
  uVar3 = s_duration_140489b60._0_8_;
  *(undefined1 *)(lVar5 + 0x60) = 2;
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
  FUN_14015a000(&DAT_1404e8660,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"duration",8);
  *(undefined4 *)(lVar5 + 0x30) = 4;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401fa2f0;
  uVar2 = DAT_140473b3c;
  uStack_20 = 0;
  *(undefined1 *)(lVar5 + 0x60) = 2;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)uVar2;
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b3c,4);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa330;
  local_18 = 5;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (ulonglong)CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"pause",5);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa340;
  uStack_20 = 0;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)DAT_140473b34;
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b34,4);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa3a0;
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
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"isPlaying",9);
  *(undefined4 *)(lVar5 + 0x70) = 2;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa3d0;
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
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"setFrame",8);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa400;
  local_res8 = CONCAT44(local_res8._4_4_,8);
  FUN_14002ff50(lVar5 + 0x58,&local_res8);
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
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_140213873;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"getFrame",8);
  *(undefined4 *)(lVar5 + 0x70) = 8;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_1401fa430;
  uStack_20 = 0;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)DAT_140490fe4;
  FUN_140178e90(&DAT_1404e86a0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) {
LAB_140213873:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar6 = (undefined *)(*pcVar1)();
        return puVar6;
      }
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  FUN_14000f880(local_38[0] + 0x38,&DAT_140490fe4,4);
  *(undefined4 *)(local_38[0] + 0x70) = 1;
  *(undefined1 **)(local_38[0] + 0x30) = &LAB_1401fa490;
  return &DAT_1404e8660;
}

