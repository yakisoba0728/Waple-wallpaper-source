// Function: FUN_1401f3460
// Addr: 1401f3460
// Size: 1109 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401f3460(void)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar8 = auStack_78;
  FUN_140153760(&DAT_1404e8460);
  uStack_40 = 0;
  local_38 = 7;
  local_30 = 0xf;
  local_48 = (ulonglong)
             CONCAT16(s_visible_1404903a0[6],
                      CONCAT24(s_visible_1404903a0._4_2_,s_visible_1404903a0._0_4_));
  FUN_14015a000(&DAT_1404e8460,local_58,&local_48);
  if (0xf < local_30) {
    uVar7 = local_30 + 1;
    uVar6 = local_48;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_48 - 8);
      puVar9 = auStack_78;
      if (0x1f < (local_48 - uVar6) - 8) goto LAB_1401f37cb;
      uVar7 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(uVar6,uVar7);
  }
  lVar1 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,"visible",7);
  *(undefined4 *)(lVar1 + 0x34) = 0x120;
  *(code **)(lVar1 + 0x38) = FUN_1401e1a90;
  *(undefined4 *)(lVar1 + 0x30) = 6;
  *(code **)(lVar1 + 0x40) = FUN_1401e1b60;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_1401e1c60;
  local_38 = 3;
  *(undefined1 **)(lVar1 + 0x50) = &LAB_1401e1c90;
  uStack_40 = 0;
  local_30 = 0xf;
  local_48 = (ulonglong)(uint3)DAT_14048e880;
  FUN_14015a000(&DAT_1404e8460,local_58,&local_48);
  if (0xf < local_30) {
    uVar7 = local_30 + 1;
    uVar6 = local_48;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_48 - 8);
      puVar9 = auStack_78;
      if (0x1f < (local_48 - uVar6) - 8) goto LAB_1401f37cb;
      uVar7 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(uVar6,uVar7);
  }
  lVar1 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,&DAT_14048e880,3);
  uVar3 = DAT_14048e73c;
  *(undefined4 *)(lVar1 + 0x34) = 0x2d8;
  uStack_40 = 0;
  local_48 = (ulonglong)uVar3;
  *(undefined4 *)(lVar1 + 0x30) = 4;
  *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
  local_38 = 4;
  local_30 = 0xf;
  FUN_14015a000(&DAT_1404e8460,local_58,&local_48);
  if (0xf < local_30) {
    uVar7 = local_30 + 1;
    uVar6 = local_48;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_48 - 8);
      puVar9 = auStack_78;
      if (0x1f < (local_48 - uVar6) - 8) goto LAB_1401f37cb;
      uVar7 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(uVar6,uVar7);
  }
  lVar5 = local_58[0];
  FUN_14000f880(local_58[0] + 0x68,&DAT_14048e73c,4);
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)(lVar5 + 0x34) = 0x2dc;
  *(undefined4 *)(lVar5 + 0x30) = 4;
  lVar1 = *(longlong *)pvVar4;
  *(code **)(lVar5 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar5 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar5 + 0x50) = &LAB_1401a4a10;
  puVar9 = auStack_78;
  if (*(int *)(lVar1 + 0x130) < DAT_1404e96e0) goto LAB_1401f37d2;
  do {
    local_38 = 9;
    local_30 = 0xf;
    local_48._0_1_ = s_queuemode_140490970[0];
    local_48._1_1_ = s_queuemode_140490970[1];
    local_48._2_1_ = s_queuemode_140490970[2];
    local_48._3_1_ = s_queuemode_140490970[3];
    local_48._4_1_ = s_queuemode_140490970[4];
    local_48._5_1_ = s_queuemode_140490970[5];
    local_48._6_1_ = s_queuemode_140490970[6];
    local_48._7_1_ = s_queuemode_140490970[7];
    uStack_40 = (ulonglong)(byte)s_queuemode_140490970[8];
    *(undefined8 *)(puVar8 + -8) = 0x1401f372e;
    FUN_14015a000(&DAT_1404e8460,local_58,&local_48);
    if (local_30 < 0x10) {
LAB_1401f3765:
      *(undefined8 *)(puVar8 + -8) = 0x1401f377f;
      FUN_14000f880(local_58[0] + 0x68,"queuemode",9);
      *(undefined4 *)(local_58[0] + 0x34) = 0x350;
      *(code **)(local_58[0] + 0x38) = FUN_1401f3a20;
      *(undefined4 *)(local_58[0] + 0x30) = 5;
      *(code **)(local_58[0] + 0x40) = FUN_1401f3bb0;
      *(code **)(local_58[0] + 0x48) = FUN_1401f38c0;
      *(code **)(local_58[0] + 0x50) = FUN_1401f39a0;
      return &DAT_1404e8460;
    }
    uVar7 = local_30 + 1;
    uVar6 = local_48;
    if (uVar7 < 0x1000) {
LAB_1401f3760:
      *(undefined8 *)(puVar8 + -8) = 0x1401f3765;
      thunk_FUN_14028af80(uVar6,uVar7);
      goto LAB_1401f3765;
    }
    uVar6 = *(ulonglong *)(local_48 - 8);
    puVar9 = puVar8;
    if ((local_48 - uVar6) - 8 < 0x20) {
      uVar7 = local_30 + 0x28;
      goto LAB_1401f3760;
    }
LAB_1401f37cb:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = puVar9 + 8;
LAB_1401f37d2:
    puVar8 = puVar9;
    *(undefined8 *)(puVar8 + -8) = 0x1401f37de;
    FUN_14028b140(&DAT_1404e96e0);
    if (DAT_1404e96e0 == -1) {
      *(undefined8 *)(puVar8 + -8) = 0x1401f37f7;
      FUN_14028b410(FUN_1404251a0);
      _DAT_1404e9700 = 6;
      uRam00000001404e96f8 = 0;
      DAT_1404e96d0 = &DAT_1404e96f0;
      DAT_1404e96d8 = &DAT_1404e9740;
      _DAT_1404e9708 = 0xf;
      _DAT_1404e96f0 = (ulonglong)CONCAT24(s_random_140478098._4_2_,s_random_140478098._0_4_);
      DAT_1404e9710 = 0;
      _DAT_1404e9728 = 10;
      _DAT_1404e9730 = 0xf;
      DAT_1404e9718 = s_sequential_140490960[0];
      DAT_1404e9718_1._0_1_ = s_sequential_140490960[1];
      DAT_1404e9718_1._1_1_ = s_sequential_140490960[2];
      DAT_1404e9718_1._2_1_ = s_sequential_140490960[3];
      DAT_1404e9718_1._3_1_ = s_sequential_140490960[4];
      DAT_1404e9718_1._4_1_ = s_sequential_140490960[5];
      DAT_1404e9718_1._5_1_ = s_sequential_140490960[6];
      DAT_1404e9718_1._6_1_ = s_sequential_140490960[7];
      _DAT_1404e9720 = (ulonglong)(ushort)s_sequential_140490960._8_2_;
      DAT_1404e9738 = 1;
      *(undefined8 *)(puVar8 + -8) = 0x1401f38b0;
      _Init_thread_footer(&DAT_1404e96e0);
    }
  } while( true );
}

