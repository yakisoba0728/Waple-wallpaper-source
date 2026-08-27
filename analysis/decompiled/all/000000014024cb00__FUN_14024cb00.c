// Function: FUN_14024cb00
// Addr: 14024cb00
// Size: 1315 bytes


undefined * FUN_14024cb00(undefined8 param_1)

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
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e87e0);
  uStack_20 = 0;
  local_18 = 7;
  local_10 = 0xf;
  local_28 = (ulonglong)
             CONCAT16(s_visible_1404903a0[6],
                      CONCAT24(s_visible_1404903a0._4_2_,s_visible_1404903a0._0_4_));
  FUN_14015a000(&DAT_1404e87e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"visible",7);
  *(undefined4 *)(lVar5 + 0x34) = 0x120;
  *(code **)(lVar5 + 0x38) = FUN_1401e1a90;
  *(undefined4 *)(lVar5 + 0x30) = 6;
  *(code **)(lVar5 + 0x40) = FUN_1401e1b60;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined1 **)(lVar5 + 0x48) = &LAB_1401e1c60;
  local_18 = 8;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401e1c90;
  local_28._0_1_ = s_instance_140490c48[0];
  local_28._1_1_ = s_instance_140490c48[1];
  local_28._2_1_ = s_instance_140490c48[2];
  local_28._3_1_ = s_instance_140490c48[3];
  local_28._4_1_ = s_instance_140490c48[4];
  local_28._5_1_ = s_instance_140490c48[5];
  local_28._6_1_ = s_instance_140490c48[6];
  local_28._7_1_ = s_instance_140490c48[7];
  local_10 = 0xf;
  uStack_20 = 0;
  FUN_14015a000(&DAT_1404e87e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  *(undefined1 *)(local_38[0] + 0x60) = 2;
  FUN_14000f880(local_38[0] + 0x68,"instance",8);
  *(undefined4 *)(lVar5 + 0x34) = 0x778;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401a4da0;
  uVar2 = DAT_140473b3c;
  uStack_20 = 0;
  *(undefined4 *)(lVar5 + 0x30) = 7;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)uVar2;
  FUN_140178e90(&DAT_1404e8820,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b3c,4);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(code **)(lVar5 + 0x30) = FUN_14024c5b0;
  local_18 = 5;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (ulonglong)CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
  FUN_140178e90(&DAT_1404e8820,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"pause",5);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(undefined1 **)(lVar5 + 0x30) = &LAB_14024c670;
  uStack_20 = 0;
  local_18 = 4;
  local_10 = 0xf;
  local_28 = (ulonglong)DAT_140473b34;
  FUN_140178e90(&DAT_1404e8820,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,&DAT_140473b34,4);
  *(undefined4 *)(lVar5 + 0x70) = 1;
  *(code **)(lVar5 + 0x30) = FUN_14024c680;
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
  FUN_140178e90(&DAT_1404e8820,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) goto LAB_14024d01b;
      uVar8 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar7,uVar8);
  }
  lVar5 = local_38[0];
  FUN_14000f880(local_38[0] + 0x38,"isPlaying",9);
  uVar3 = s_emitParticles_1404913e0._0_8_;
  *(code **)(lVar5 + 0x30) = FUN_14024ca10;
  *(undefined4 *)(lVar5 + 0x70) = 2;
  uVar4 = s_emitParticles_1404913e0._0_8_;
  local_18 = 0xd;
  local_10 = 0xf;
  s_emitParticles_1404913e0[0] = (char)uVar3;
  s_emitParticles_1404913e0[1] = SUB81(uVar3,1);
  s_emitParticles_1404913e0[2] = SUB81(uVar3,2);
  s_emitParticles_1404913e0[3] = SUB81(uVar3,3);
  s_emitParticles_1404913e0[4] = SUB81(uVar3,4);
  s_emitParticles_1404913e0[5] = SUB81(uVar3,5);
  s_emitParticles_1404913e0[6] = SUB81(uVar3,6);
  s_emitParticles_1404913e0[7] = SUB81(uVar3,7);
  local_28._0_1_ = s_emitParticles_1404913e0[0];
  local_28._1_1_ = s_emitParticles_1404913e0[1];
  local_28._2_1_ = s_emitParticles_1404913e0[2];
  local_28._3_1_ = s_emitParticles_1404913e0[3];
  local_28._4_1_ = s_emitParticles_1404913e0[4];
  local_28._5_1_ = s_emitParticles_1404913e0[5];
  local_28._6_1_ = s_emitParticles_1404913e0[6];
  local_28._7_1_ = s_emitParticles_1404913e0[7];
  uStack_20 = (ulonglong)CONCAT14(s_emitParticles_1404913e0[0xc],s_emitParticles_1404913e0._8_4_);
  s_emitParticles_1404913e0._0_8_ = uVar4;
  FUN_140178e90(&DAT_1404e8820,local_38,&local_28);
  if (0xf < local_10) {
    uVar8 = local_10 + 1;
    uVar7 = local_28;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar7) - 8) {
LAB_14024d01b:
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
  FUN_14000f880(local_38[0] + 0x38,"emitParticles",0xd);
  *(undefined4 *)(local_38[0] + 0x70) = 1;
  *(undefined1 **)(local_38[0] + 0x30) = &LAB_14024cac0;
  local_res8 = CONCAT44(local_res8._4_4_,8);
  FUN_14002ff50(local_38[0] + 0x58,&local_res8);
  return &DAT_1404e87e0;
}

