// Function: FUN_1401577e0
// Addr: 1401577e0
// Size: 2306 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401577e0(void)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar6 = auStack_78;
  FUN_140153760(&DAT_1404e7fd0);
  lVar4 = *(longlong *)ThreadLocalStoragePointer;
  if (*(int *)(lVar4 + 0x130) < DAT_1404e9388) {
    FUN_14028b140(&DAT_1404e9388);
    if (DAT_1404e9388 == -1) {
      FUN_14028b410(FUN_140424b50);
      _DAT_1404e93a0 = 0;
      _DAT_1404e93a8 = 0;
      _DAT_1404e9390 = 0;
      uRam00000001404e9398 = 0;
      FUN_140017480(&DAT_1404e9390,"normal",6);
      DAT_1404e93b0 = 0;
      _DAT_1404e93c8 = 0;
      _DAT_1404e93d0 = 0;
      _DAT_1404e93b8 = 0;
      uRam00000001404e93c0 = 0;
      FUN_140017480(&DAT_1404e93b8,"translucent",0xb);
      DAT_1404e93d8 = 1;
      _DAT_1404e93f0 = 0;
      _DAT_1404e93f8 = 0;
      _DAT_1404e93e0 = 0;
      uRam00000001404e93e8 = 0;
      FUN_140017480(&DAT_1404e93e0,"additive",8);
      DAT_1404e9400 = 2;
      _DAT_1404e9418 = 0;
      _DAT_1404e9420 = 0;
      _DAT_1404e9408 = 0;
      uRam00000001404e9410 = 0;
      FUN_140017480(&DAT_1404e9408,"alphatocoverage",0xf);
      DAT_1404e9428 = 3;
      DAT_1404e9340 = &DAT_1404e9430;
      DAT_1404e9338 = &DAT_1404e9390;
      _Init_thread_footer(&DAT_1404e9388);
    }
  }
  local_38 = 8;
  local_48._0_1_ = s_blending_14048b638[0];
  local_48._1_1_ = s_blending_14048b638[1];
  local_48._2_1_ = s_blending_14048b638[2];
  local_48._3_1_ = s_blending_14048b638[3];
  local_48._4_1_ = s_blending_14048b638[4];
  local_48._5_1_ = s_blending_14048b638[5];
  local_48._6_1_ = s_blending_14048b638[6];
  local_48._7_1_ = s_blending_14048b638[7];
  uStack_40 = 0;
  local_30 = 0xf;
  FUN_14015a000(&DAT_1404e7fd0,local_58,&local_48);
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar3 = local_48;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(local_48 + -8);
      puVar7 = auStack_78;
      if (0x1f < (local_48 - lVar3) - 8U) goto LAB_140157c7d;
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar5);
  }
  lVar3 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"blending",8);
  *(undefined4 *)(lVar3 + 0x34) = 0x1f0;
  *(code **)(lVar3 + 0x38) = FUN_1401587d0;
  *(code **)(lVar3 + 0x40) = FUN_140158960;
  *(code **)(lVar3 + 0x48) = FUN_1401580f0;
  *(code **)(lVar3 + 0x50) = FUN_1401581d0;
  iVar1 = *(int *)(lVar4 + 0x130);
  *(undefined4 *)(lVar3 + 0x30) = 5;
  if (iVar1 < DAT_1404e9430) {
    FUN_14028b140(&DAT_1404e9430);
    if (DAT_1404e9430 == -1) {
      FUN_14028b410(FUN_140424b20);
      _DAT_1404e9450 = 0;
      _DAT_1404e9458 = 0;
      _DAT_1404e9440 = 0;
      uRam00000001404e9448 = 0;
      FUN_140017480(&DAT_1404e9440,"default",7);
      DAT_1404e9460 = 0;
      _DAT_1404e9478 = 0;
      _DAT_1404e9480 = 0;
      _DAT_1404e9468 = 0;
      uRam00000001404e9470 = 0;
      FUN_140017480(&DAT_1404e9468,"disabled",8);
      DAT_1404e9488 = 2;
      _DAT_1404e94a0 = 0;
      _DAT_1404e94a8 = 0;
      _DAT_1404e9490 = 0;
      uRam00000001404e9498 = 0;
      FUN_140017480(&DAT_1404e9490,"enabled",7);
      DAT_1404e94b0 = 1;
      DAT_1404e9350 = &DAT_1404e94b8;
      DAT_1404e9348 = &DAT_1404e9440;
      _Init_thread_footer(&DAT_1404e9430);
    }
  }
  local_38 = 0xc;
  local_30 = 0xf;
  local_48._0_1_ = s_alphawriting_14048b6c0[0];
  local_48._1_1_ = s_alphawriting_14048b6c0[1];
  local_48._2_1_ = s_alphawriting_14048b6c0[2];
  local_48._3_1_ = s_alphawriting_14048b6c0[3];
  local_48._4_1_ = s_alphawriting_14048b6c0[4];
  local_48._5_1_ = s_alphawriting_14048b6c0[5];
  local_48._6_1_ = s_alphawriting_14048b6c0[6];
  local_48._7_1_ = s_alphawriting_14048b6c0[7];
  uStack_40 = (ulonglong)(uint)s_alphawriting_14048b6c0._8_4_;
  FUN_14015a000(&DAT_1404e7fd0,local_58,&local_48);
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar3 = local_48;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(local_48 + -8);
      puVar7 = auStack_78;
      if (0x1f < (local_48 - lVar3) - 8U) goto LAB_140157c7d;
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar5);
  }
  lVar3 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"alphawriting",0xc);
  *(undefined4 *)(lVar3 + 0x34) = 0x1f1;
  *(code **)(lVar3 + 0x38) = FUN_140158b40;
  *(code **)(lVar3 + 0x40) = FUN_140158cd0;
  *(code **)(lVar3 + 0x48) = FUN_140158250;
  *(code **)(lVar3 + 0x50) = FUN_140158330;
  iVar1 = *(int *)(lVar4 + 0x130);
  *(undefined4 *)(lVar3 + 0x30) = 5;
  if (iVar1 < DAT_1404e94b8) {
    FUN_14028b140(&DAT_1404e94b8);
    if (DAT_1404e94b8 == -1) {
      FUN_14028b410(FUN_140424b00);
      _DAT_1404e94d0 = 0;
      _DAT_1404e94d8 = 0;
      _DAT_1404e94c0 = 0;
      uRam00000001404e94c8 = 0;
      FUN_140017480(&DAT_1404e94c0,"disabled",8);
      DAT_1404e94e0 = 1;
      _DAT_1404e94f8 = 0;
      _DAT_1404e9500 = 0;
      _DAT_1404e94e8 = 0;
      uRam00000001404e94f0 = 0;
      FUN_140017480(&DAT_1404e94e8,"enabled",7);
      DAT_1404e9508 = 0;
      DAT_1404e9360 = &DAT_1404e9510;
      DAT_1404e9358 = &DAT_1404e94c0;
      _Init_thread_footer(&DAT_1404e94b8);
    }
  }
  local_38 = 9;
  local_30 = 0xf;
  local_48._0_1_ = s_depthtest_14048b6b0[0];
  local_48._1_1_ = s_depthtest_14048b6b0[1];
  local_48._2_1_ = s_depthtest_14048b6b0[2];
  local_48._3_1_ = s_depthtest_14048b6b0[3];
  local_48._4_1_ = s_depthtest_14048b6b0[4];
  local_48._5_1_ = s_depthtest_14048b6b0[5];
  local_48._6_1_ = s_depthtest_14048b6b0[6];
  local_48._7_1_ = s_depthtest_14048b6b0[7];
  uStack_40 = (ulonglong)(byte)s_depthtest_14048b6b0[8];
  FUN_14015a000(&DAT_1404e7fd0,local_58,&local_48);
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar3 = local_48;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(local_48 + -8);
      puVar7 = auStack_78;
      if (0x1f < (local_48 - lVar3) - 8U) goto LAB_140157c7d;
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar5);
  }
  lVar3 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"depthtest",9);
  *(undefined4 *)(lVar3 + 0x34) = 0x1f2;
  *(code **)(lVar3 + 0x38) = FUN_140158eb0;
  *(code **)(lVar3 + 0x40) = FUN_140159040;
  *(code **)(lVar3 + 0x48) = FUN_1401583b0;
  *(code **)(lVar3 + 0x50) = FUN_140158490;
  iVar1 = *(int *)(lVar4 + 0x130);
  *(undefined4 *)(lVar3 + 0x30) = 5;
  if (iVar1 < DAT_1404e9510) {
    FUN_14028b140(&DAT_1404e9510);
    if (DAT_1404e9510 == -1) {
      FUN_14028b410(FUN_140424ae0);
      _DAT_1404e9530 = 0;
      _DAT_1404e9538 = 0;
      _DAT_1404e9520 = 0;
      uRam00000001404e9528 = 0;
      FUN_140017480(&DAT_1404e9520,"disabled",8);
      DAT_1404e9540 = 1;
      _DAT_1404e9558 = 0;
      _DAT_1404e9560 = 0;
      _DAT_1404e9548 = 0;
      uRam00000001404e9550 = 0;
      FUN_140017480(&DAT_1404e9548,"enabled",7);
      DAT_1404e9568 = 0;
      DAT_1404e9370 = &DAT_1404e9570;
      DAT_1404e9368 = &DAT_1404e9520;
      _Init_thread_footer(&DAT_1404e9510);
    }
  }
  local_38 = 10;
  local_30 = 0xf;
  local_48._0_1_ = s_depthwrite_14048b6a0[0];
  local_48._1_1_ = s_depthwrite_14048b6a0[1];
  local_48._2_1_ = s_depthwrite_14048b6a0[2];
  local_48._3_1_ = s_depthwrite_14048b6a0[3];
  local_48._4_1_ = s_depthwrite_14048b6a0[4];
  local_48._5_1_ = s_depthwrite_14048b6a0[5];
  local_48._6_1_ = s_depthwrite_14048b6a0[6];
  local_48._7_1_ = s_depthwrite_14048b6a0[7];
  uStack_40 = (ulonglong)(ushort)s_depthwrite_14048b6a0._8_2_;
  FUN_14015a000(&DAT_1404e7fd0,local_58,&local_48);
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar3 = local_48;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(local_48 + -8);
      puVar7 = auStack_78;
      if (0x1f < (local_48 - lVar3) - 8U) goto LAB_140157c7d;
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar5);
  }
  lVar3 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"depthwrite",10);
  *(undefined4 *)(lVar3 + 0x34) = 499;
  *(code **)(lVar3 + 0x38) = FUN_140159220;
  *(code **)(lVar3 + 0x40) = FUN_1401593b0;
  *(code **)(lVar3 + 0x48) = FUN_140158510;
  *(code **)(lVar3 + 0x50) = FUN_1401585f0;
  iVar1 = *(int *)(lVar4 + 0x130);
  *(undefined4 *)(lVar3 + 0x30) = 5;
  puVar7 = auStack_78;
  if (iVar1 < DAT_1404e9570) goto LAB_140157c84;
  do {
    local_38 = 8;
    local_48._0_1_ = s_cullmode_14048b690[0];
    local_48._1_1_ = s_cullmode_14048b690[1];
    local_48._2_1_ = s_cullmode_14048b690[2];
    local_48._3_1_ = s_cullmode_14048b690[3];
    local_48._4_1_ = s_cullmode_14048b690[4];
    local_48._5_1_ = s_cullmode_14048b690[5];
    local_48._6_1_ = s_cullmode_14048b690[6];
    local_48._7_1_ = s_cullmode_14048b690[7];
    uStack_40 = 0;
    local_30 = 0xf;
    *(undefined8 *)(puVar6 + -8) = 0x140157be0;
    FUN_14015a000(&DAT_1404e7fd0,local_58,&local_48);
    if (local_30 < 0x10) {
LAB_140157c17:
      *(undefined8 *)(puVar6 + -8) = 0x140157c31;
      FUN_14000f880(local_58[0] + 0x68,"cullmode",8);
      *(undefined4 *)(local_58[0] + 0x34) = 500;
      *(code **)(local_58[0] + 0x38) = FUN_140159590;
      *(undefined4 *)(local_58[0] + 0x30) = 5;
      *(code **)(local_58[0] + 0x40) = FUN_140159720;
      *(code **)(local_58[0] + 0x48) = FUN_140158670;
      *(code **)(local_58[0] + 0x50) = FUN_140158750;
      return &DAT_1404e7fd0;
    }
    uVar5 = local_30 + 1;
    lVar4 = local_48;
    if (uVar5 < 0x1000) {
LAB_140157c12:
      *(undefined8 *)(puVar6 + -8) = 0x140157c17;
      thunk_FUN_14028af80(lVar4,uVar5);
      goto LAB_140157c17;
    }
    lVar4 = *(longlong *)(local_48 + -8);
    puVar7 = puVar6;
    if ((local_48 - lVar4) - 8U < 0x20) {
      uVar5 = local_30 + 0x28;
      goto LAB_140157c12;
    }
LAB_140157c7d:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_140157c84:
    puVar6 = puVar7;
    *(undefined8 *)(puVar6 + -8) = 0x140157c90;
    FUN_14028b140(&DAT_1404e9570);
    if (DAT_1404e9570 == -1) {
      *(undefined8 *)(puVar6 + -8) = 0x140157ca9;
      FUN_14028b410(FUN_140424ac0);
      _DAT_1404e9590 = 0;
      _DAT_1404e9598 = 0;
      _DAT_1404e9580 = 0;
      uRam00000001404e9588 = 0;
      *(undefined8 *)(puVar6 + -8) = 0x140157cdd;
      FUN_140017480(&DAT_1404e9580,"normal",6);
      DAT_1404e95a0 = 0;
      _DAT_1404e95b8 = 0;
      _DAT_1404e95c0 = 0;
      _DAT_1404e95a8 = 0;
      uRam00000001404e95b0 = 0;
      *(undefined8 *)(puVar6 + -8) = 0x140157d15;
      FUN_140017480(&DAT_1404e95a8,"nocull",6);
      DAT_1404e95c8 = 1;
      DAT_1404e9380 = &DAT_1404e95d0;
      DAT_1404e9378 = &DAT_1404e9580;
      *(undefined8 *)(puVar6 + -8) = 0x140157d3d;
      _Init_thread_footer(&DAT_1404e9570);
    }
  } while( true );
}

