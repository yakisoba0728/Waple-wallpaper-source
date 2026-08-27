// Function: FUN_1401f7090
// Addr: 1401f7090
// Size: 2822 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401f7090(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined7 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 unaff_R15;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  char local_58 [4];
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined8 local_48;
  ulonglong local_40;
  
  FUN_140153760(&DAT_1404e8560);
  local_48 = 6;
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  cStack_4b = '\0';
  uStack_4a = 0;
  local_58[0] = s_volume_14048849c[0];
  local_58[1] = s_volume_14048849c[1];
  local_58[2] = s_volume_14048849c[2];
  local_58[3] = s_volume_14048849c[3];
  cStack_54 = (char)s_volume_14048849c._4_2_;
  cStack_53 = SUB21(s_volume_14048849c._4_2_,1);
  local_40 = 0xf;
  cStack_52 = '\0';
  FUN_14015a000(&DAT_1404e8560,local_68,local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar7 = local_40 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      puVar8 = auStack_88;
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  lVar6 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"volume",6);
  *(undefined4 *)(lVar6 + 0x34) = 0x2f0;
  *(code **)(lVar6 + 0x58) = FUN_1401f4c20;
  local_58[0] = s_mintime_140490aa8[0];
  local_58[1] = s_mintime_140490aa8[1];
  local_58[2] = s_mintime_140490aa8[2];
  local_58[3] = s_mintime_140490aa8[3];
  cStack_54 = (char)s_mintime_140490aa8._4_2_;
  cStack_53 = SUB21(s_mintime_140490aa8._4_2_,1);
  cStack_52 = s_mintime_140490aa8[6];
  uVar10 = 0;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  cStack_4b = '\0';
  uStack_4a = 0;
  local_48 = 7;
  local_40 = 0xf;
  cStack_51 = '\0';
  FUN_14015a000(&DAT_1404e8560,local_68,local_58);
  unaff_R15 = uVar10;
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar7 = local_40 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      puVar8 = auStack_88;
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  lVar6 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"mintime",7);
  local_58[0] = s_maxtime_140490ab0[0];
  local_58[1] = s_maxtime_140490ab0[1];
  local_58[2] = s_maxtime_140490ab0[2];
  local_58[3] = s_maxtime_140490ab0[3];
  cStack_54 = (char)s_maxtime_140490ab0._4_2_;
  cStack_53 = SUB21(s_maxtime_140490ab0._4_2_,1);
  cStack_52 = s_maxtime_140490ab0[6];
  *(undefined4 *)(lVar6 + 0x34) = 0x2f4;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  cStack_4b = '\0';
  uStack_4a = 0;
  local_48 = 7;
  local_40 = 0xf;
  cStack_51 = '\0';
  FUN_14015a000(&DAT_1404e8560,local_68,local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar7 = local_40 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      puVar8 = auStack_88;
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  lVar6 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"maxtime",7);
  local_58 = SUB74(s_attenuation_140490ab8._0_7_,0);
  cStack_54 = SUB71(s_attenuation_140490ab8._0_7_,4);
  cStack_53 = SUB71(s_attenuation_140490ab8._0_7_,5);
  cStack_52 = SUB71(s_attenuation_140490ab8._0_7_,6);
  cStack_51 = (char)s_attenuation_140490ab8._7_4_;
  cStack_50 = SUB41(s_attenuation_140490ab8._7_4_,1);
  cStack_4f = SUB41(s_attenuation_140490ab8._7_4_,2);
  cStack_4e = SUB41(s_attenuation_140490ab8._7_4_,3);
  *(undefined4 *)(lVar6 + 0x34) = 0x2f8;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  cStack_4c = '\0';
  cStack_4b = '\0';
  uStack_4a = 0;
  local_48 = 0xb;
  local_40 = 0xf;
  cStack_4d = '\0';
  FUN_14015a000(&DAT_1404e8560,local_68,local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar7 = local_40 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      puVar8 = auStack_88;
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  lVar6 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"attenuation",0xb);
  local_58 = SUB74(s_mindistance_140490a68._0_7_,0);
  cStack_54 = SUB71(s_mindistance_140490a68._0_7_,4);
  cStack_53 = SUB71(s_mindistance_140490a68._0_7_,5);
  cStack_52 = SUB71(s_mindistance_140490a68._0_7_,6);
  cStack_51 = (char)s_mindistance_140490a68._7_4_;
  cStack_50 = SUB41(s_mindistance_140490a68._7_4_,1);
  cStack_4f = SUB41(s_mindistance_140490a68._7_4_,2);
  cStack_4e = SUB41(s_mindistance_140490a68._7_4_,3);
  *(undefined4 *)(lVar6 + 0x34) = 0x304;
  *(undefined4 *)(lVar6 + 0x30) = 4;
  *(code **)(lVar6 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar6 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar6 + 0x50) = &LAB_1401a4a10;
  cStack_4c = '\0';
  cStack_4b = '\0';
  uStack_4a = 0;
  local_48 = 0xb;
  local_40 = 0xf;
  cStack_4d = '\0';
  FUN_14015a000(&DAT_1404e8560,local_68,local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar7 = local_40 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      puVar8 = auStack_88;
      unaff_R15 = 0;
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  lVar2 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"mindistance",0xb);
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)(lVar2 + 0x34) = 0x308;
  *(undefined4 *)(lVar2 + 0x30) = 4;
  lVar6 = *(longlong *)pvVar4;
  *(code **)(lVar2 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar2 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar2 + 0x50) = &LAB_1401a4a10;
  puVar8 = auStack_88;
  puVar5 = auStack_88;
  unaff_R15 = uVar10;
  if (*(int *)(lVar6 + 0x130) < DAT_1404e9750) goto LAB_1401f7a80;
  do {
    local_48 = 0xc;
    cStack_4b = '\0';
    uStack_4a = 0;
    local_40 = 0xf;
    local_58 = SUB84(s_playbackmode_140490a80._0_8_,0);
    cStack_54 = SUB81(s_playbackmode_140490a80._0_8_,4);
    cStack_53 = SUB81(s_playbackmode_140490a80._0_8_,5);
    cStack_52 = SUB81(s_playbackmode_140490a80._0_8_,6);
    cStack_51 = SUB81(s_playbackmode_140490a80._0_8_,7);
    cStack_50 = (char)s_playbackmode_140490a80._8_4_;
    cStack_4f = SUB41(s_playbackmode_140490a80._8_4_,1);
    cStack_4e = SUB41(s_playbackmode_140490a80._8_4_,2);
    cStack_4d = SUB41(s_playbackmode_140490a80._8_4_,3);
    cVar9 = (char)unaff_R15;
    cStack_4c = cVar9;
    *(undefined8 *)(puVar8 + -8) = 0x1401f74bc;
    FUN_14015a000(&DAT_1404e8560,local_68,local_58);
    if (local_40 < 0x10) {
LAB_1401f74f7:
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x68;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7511;
      FUN_14000f880(lVar6,"playbackmode",0xc);
      *(undefined4 *)(lVar2 + 0x34) = 0x30c;
      cStack_4b = '\0';
      uStack_4a = 0;
      *(undefined4 *)(lVar2 + 0x30) = 5;
      uVar10 = s_muteineditor_140490a90._0_8_;
      *(code **)(lVar2 + 0x38) = FUN_1401f7d00;
      local_48 = 0xc;
      *(code **)(lVar2 + 0x40) = FUN_1401f7e90;
      local_40 = 0xf;
      *(code **)(lVar2 + 0x48) = FUN_1401f7ba0;
      *(code **)(lVar2 + 0x50) = FUN_1401f7c80;
      cStack_50 = (char)s_muteineditor_140490a90._8_4_;
      cStack_4f = SUB41(s_muteineditor_140490a90._8_4_,1);
      cStack_4e = SUB41(s_muteineditor_140490a90._8_4_,2);
      cStack_4d = SUB41(s_muteineditor_140490a90._8_4_,3);
      local_58 = SUB84(uVar10,0);
      cStack_54 = SUB81(uVar10,4);
      cStack_53 = SUB81(uVar10,5);
      cStack_52 = SUB81(uVar10,6);
      cStack_51 = SUB81(uVar10,7);
      cStack_4c = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7590;
      FUN_14015a000(&DAT_1404e8560,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f75cb;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x68;
      *(undefined8 *)(puVar8 + -8) = 0x1401f75e5;
      FUN_14000f880(lVar6,"muteineditor",0xc);
      uVar3 = s_startsilent_140490ac8._0_7_;
      *(code **)(lVar2 + 0x38) = FUN_1401e1a90;
      local_58 = SUB74(uVar3,0);
      cStack_54 = SUB71(uVar3,4);
      cStack_53 = SUB71(uVar3,5);
      cStack_52 = SUB71(uVar3,6);
      *(code **)(lVar2 + 0x40) = FUN_1401e1b60;
      *(undefined4 *)(lVar2 + 0x34) = 0x310;
      *(undefined1 **)(lVar2 + 0x48) = &LAB_1401e1c60;
      *(undefined4 *)(lVar2 + 0x30) = 6;
      *(undefined1 **)(lVar2 + 0x50) = &LAB_1401e1c90;
      cStack_51 = (char)s_startsilent_140490ac8._7_4_;
      cStack_50 = SUB41(s_startsilent_140490ac8._7_4_,1);
      cStack_4f = SUB41(s_startsilent_140490ac8._7_4_,2);
      cStack_4e = SUB41(s_startsilent_140490ac8._7_4_,3);
      *(undefined8 *)(lVar2 + 0x58) = unaff_R15;
      cStack_4b = (char)((ulonglong)unaff_R15 >> 8);
      uStack_4a = (undefined2)((ulonglong)unaff_R15 >> 0x10);
      local_48 = 0xb;
      local_40 = 0xf;
      cStack_4d = cVar9;
      cStack_4c = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7665;
      FUN_14015a000(&DAT_1404e8560,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f76a0;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x68;
      *(undefined8 *)(puVar8 + -8) = 0x1401f76ba;
      FUN_14000f880(lVar6,"startsilent",0xb);
      uVar10 = s_spatialization_140490ad8._0_8_;
      *(code **)(lVar2 + 0x38) = FUN_14019b4e0;
      *(undefined4 *)(lVar2 + 0x34) = 0x310;
      *(code **)(lVar2 + 0x40) = FUN_14019b5b0;
      *(undefined4 *)(lVar2 + 0x30) = 6;
      *(undefined1 **)(lVar2 + 0x48) = &LAB_14019b6b0;
      *(undefined8 *)(lVar2 + 0x58) = unaff_R15;
      *(undefined1 **)(lVar2 + 0x50) = &LAB_14019b6e0;
      cStack_50 = (char)s_spatialization_140490ad8._8_4_;
      cStack_4f = SUB41(s_spatialization_140490ad8._8_4_,1);
      cStack_4e = SUB41(s_spatialization_140490ad8._8_4_,2);
      cStack_4d = SUB41(s_spatialization_140490ad8._8_4_,3);
      cStack_4c = (char)s_spatialization_140490ad8._12_2_;
      cStack_4b = SUB21(s_spatialization_140490ad8._12_2_,1);
      uStack_4a = (undefined2)unaff_R15;
      local_48 = 0xe;
      local_40 = 0xf;
      local_58 = SUB84(uVar10,0);
      cStack_54 = SUB81(uVar10,4);
      cStack_53 = SUB81(uVar10,5);
      cStack_52 = SUB81(uVar10,6);
      cStack_51 = SUB81(uVar10,7);
      *(undefined8 *)(puVar8 + -8) = 0x1401f7742;
      FUN_14015a000(&DAT_1404e8560,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f777d;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x68;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7797;
      FUN_14000f880(lVar6,"spatialization",0xe);
      *(undefined4 *)(lVar2 + 0x34) = 0x310;
      *(code **)(lVar2 + 0x38) = FUN_14019bfa0;
      *(undefined4 *)(lVar2 + 0x30) = 6;
      *(code **)(lVar2 + 0x40) = FUN_14019c070;
      *(undefined8 *)(lVar2 + 0x58) = unaff_R15;
      *(undefined1 **)(lVar2 + 0x48) = &LAB_14019c170;
      local_48 = 4;
      *(undefined1 **)(lVar2 + 0x50) = &LAB_14019c1a0;
      cStack_53 = '\0';
      cStack_52 = '\0';
      cStack_51 = '\0';
      cStack_50 = '\0';
      cStack_4f = '\0';
      cStack_4e = '\0';
      cStack_4d = '\0';
      cStack_4c = '\0';
      cStack_4b = '\0';
      uStack_4a = 0;
      local_58[0] = (char)DAT_140473b3c;
      local_58[1] = DAT_140473b3c._1_1_;
      local_58[2] = DAT_140473b3c._2_1_;
      local_58[3] = DAT_140473b3c._3_1_;
      local_40 = 0xf;
      cStack_54 = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f780d;
      FUN_140178e90(&DAT_1404e85a0,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f7848;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x38;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7862;
      FUN_14000f880(lVar6,&DAT_140473b3c,4);
      *(undefined4 *)(lVar2 + 0x70) = 1;
      *(undefined1 **)(lVar2 + 0x30) = &LAB_1401f6e50;
      cStack_53 = '\0';
      cStack_52 = '\0';
      cStack_51 = '\0';
      cStack_50 = '\0';
      cStack_4f = '\0';
      cStack_4e = '\0';
      cStack_4d = '\0';
      cStack_4c = '\0';
      cStack_4b = '\0';
      uStack_4a = 0;
      local_58[0] = (char)DAT_140473b34;
      local_58[1] = DAT_140473b34._1_1_;
      local_58[2] = DAT_140473b34._2_1_;
      local_58[3] = DAT_140473b34._3_1_;
      local_48 = 4;
      local_40 = 0xf;
      cStack_54 = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f78ac;
      FUN_140178e90(&DAT_1404e85a0,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f78e7;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x38;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7901;
      FUN_14000f880(lVar6,&DAT_140473b34,4);
      *(undefined4 *)(lVar2 + 0x70) = 1;
      *(code **)(lVar2 + 0x30) = FUN_1401f6e60;
      local_48 = 5;
      cStack_52 = '\0';
      cStack_51 = '\0';
      cStack_50 = '\0';
      cStack_4f = '\0';
      cStack_4e = '\0';
      cStack_4d = '\0';
      cStack_4c = '\0';
      cStack_4b = '\0';
      uStack_4a = 0;
      local_58[0] = s_pause_140473b2c[0];
      local_58[1] = s_pause_140473b2c[1];
      local_58[2] = s_pause_140473b2c[2];
      local_58[3] = s_pause_140473b2c[3];
      cStack_54 = s_pause_140473b2c[4];
      local_40 = 0xf;
      cStack_53 = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7955;
      FUN_140178e90(&DAT_1404e85a0,local_68,local_58);
      if (0xf < local_40) {
        lVar2 = CONCAT17(cStack_51,
                         CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
        uVar7 = local_40 + 1;
        lVar6 = lVar2;
        if (0xfff < uVar7) {
          lVar6 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f7a79;
          uVar7 = local_40 + 0x28;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1401f7990;
        thunk_FUN_14028af80(lVar6,uVar7);
      }
      lVar2 = local_68[0];
      lVar6 = local_68[0] + 0x38;
      *(undefined8 *)(puVar8 + -8) = 0x1401f79aa;
      FUN_14000f880(lVar6,"pause",5);
      *(undefined4 *)(lVar2 + 0x70) = 1;
      *(code **)(lVar2 + 0x30) = FUN_1401f6f00;
      cStack_50 = s_isPlaying_14048de88[8];
      cStack_4e = '\0';
      cStack_4d = '\0';
      cStack_4c = '\0';
      cStack_4b = '\0';
      uStack_4a = 0;
      local_58 = SUB84(s_isPlaying_14048de88._0_8_,0);
      cStack_54 = SUB81(s_isPlaying_14048de88._0_8_,4);
      cStack_53 = SUB81(s_isPlaying_14048de88._0_8_,5);
      cStack_52 = SUB81(s_isPlaying_14048de88._0_8_,6);
      cStack_51 = SUB81(s_isPlaying_14048de88._0_8_,7);
      local_48 = 9;
      local_40 = 0xf;
      cStack_4f = cVar9;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7a02;
      FUN_140178e90(&DAT_1404e85a0,local_68,local_58);
      if (local_40 < 0x10) goto LAB_1401f7a39;
      lVar2 = CONCAT17(cStack_51,
                       CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
      uVar7 = local_40 + 1;
      lVar6 = lVar2;
      if (uVar7 < 0x1000) goto LAB_1401f7a34;
      lVar6 = *(longlong *)(lVar2 + -8);
      if ((lVar2 - lVar6) - 8U < 0x20) {
        uVar7 = local_40 + 0x28;
LAB_1401f7a34:
        *(undefined8 *)(puVar8 + -8) = 0x1401f7a39;
        thunk_FUN_14028af80(lVar6,uVar7);
LAB_1401f7a39:
        *(undefined8 *)(puVar8 + -8) = 0x1401f7a53;
        FUN_14000f880(local_68[0] + 0x38,"isPlaying",9);
        *(undefined4 *)(local_68[0] + 0x70) = 2;
        *(code **)(local_68[0] + 0x30) = FUN_1401f6fb0;
        return &DAT_1404e8560;
      }
    }
    else {
      lVar2 = CONCAT17(cStack_51,
                       CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))));
      uVar7 = local_40 + 1;
      lVar6 = lVar2;
      if (uVar7 < 0x1000) {
LAB_1401f74f2:
        *(undefined8 *)(puVar8 + -8) = 0x1401f74f7;
        thunk_FUN_14028af80(lVar6,uVar7);
        goto LAB_1401f74f7;
      }
      lVar6 = *(longlong *)(lVar2 + -8);
      if ((lVar2 - lVar6) - 8U < 0x20) {
        uVar7 = local_40 + 0x28;
        goto LAB_1401f74f2;
      }
    }
LAB_1401f7a79:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = puVar8 + 8;
LAB_1401f7a80:
    puVar8 = puVar5;
    *(undefined8 *)(puVar8 + -8) = 0x1401f7a8c;
    FUN_14028b140(&DAT_1404e9750);
    if (DAT_1404e9750 == -1) {
      *(undefined8 *)(puVar8 + -8) = 0x1401f7aa5;
      FUN_14028b410(FUN_140425240);
      _DAT_1404e9770 = 4;
      uRam00000001404e9790 = 0;
      _DAT_1404e9778 = 0xf;
      uRam00000001404e97b8 = 0;
      DAT_1404e9780 = (undefined1)unaff_R15;
      uRam00000001404e9768 = 0;
      DAT_1404e9740 = &DAT_1404e9760;
      DAT_1404e9748 = &DAT_1404e97d8;
      _DAT_1404e9760 = (ulonglong)CONCAT14(DAT_1404e9780,DAT_140490a74);
      _DAT_1404e9798 = 6;
      _DAT_1404e97a0 = 0xf;
      _DAT_1404e9788 =
           (ulonglong)
           CONCAT16(DAT_1404e9780,CONCAT24(s_random_140478098._4_2_,s_random_140478098._0_4_));
      DAT_1404e97a8 = 1;
      _DAT_1404e97c0 = 6;
      _DAT_1404e97c8 = 0xf;
      _DAT_1404e97b0 =
           (ulonglong)
           CONCAT16(DAT_1404e9780,CONCAT24(s_single_14048eed4._4_2_,s_single_14048eed4._0_4_));
      DAT_1404e97d0 = 2;
      *(undefined8 *)(puVar8 + -8) = 0x1401f7b91;
      _Init_thread_footer(&DAT_1404e9750);
    }
  } while( true );
}

