// Function: FUN_14025da80
// Addr: 14025da80
// Size: 3930 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14025da80(ulonglong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  void *pvVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 unaff_RSI;
  undefined8 uVar15;
  ulonglong local_res8 [4];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uVar16;
  
  puVar13 = auStack_98;
  local_res8[0] = param_1;
  FUN_140153760(&DAT_1404e8960);
  local_58 = 5;
  uStack_60 = 0;
  local_68._0_5_ = CONCAT14(s_color_140489070[4],s_color_140489070._0_4_);
  local_50 = 0xf;
  local_68 = (char *)(ulonglong)(uint5)local_68;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (local_50 < 0x10) {
LAB_14025db21:
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"color",5);
    *(undefined4 *)(lVar1 + 0x34) = 0x2cc;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4560;
    cVar7 = s_intensity_140491b98[8];
    local_68 = (char *)s_intensity_140491b98._0_8_;
    *(undefined4 *)(lVar1 + 0x30) = 2;
    *(code **)(lVar1 + 0x38) = FUN_1401a4230;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a4530;
    local_58 = 9;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(byte)cVar7;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"intensity",9);
    uVar3 = s_radius_14048fb8c._0_4_;
    *(undefined4 *)(lVar1 + 0x34) = 0x2e4;
    uStack_60 = 0;
    local_68._0_6_ = CONCAT24(s_radius_14048fb8c._4_2_,uVar3);
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 6;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint6)local_68;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"radius",6);
    local_68 = (char *)s_exponent_14048f5a8._0_8_;
    *(undefined4 *)(lVar1 + 0x34) = 0x2e8;
    uStack_60 = 0;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 8;
    local_50 = 0xf;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"exponent",8);
    cVar7 = s_innercone_140491ba8[8];
    *(undefined4 *)(lVar1 + 0x34) = 0x2ec;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    local_68 = (char *)s_innercone_140491ba8._0_8_;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 9;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(byte)cVar7;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"innercone",9);
    cVar7 = s_outercone_140491bb8[8];
    *(undefined4 *)(lVar1 + 0x34) = 0x2f0;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    local_68 = (char *)s_outercone_140491bb8._0_8_;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 9;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(byte)cVar7;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"outercone",9);
    local_68._0_6_ = CONCAT24(s_density_140491b20._4_2_,s_density_140491b20._0_4_);
    uVar16 = 0;
    uVar15 = 0;
    local_68._0_7_ = CONCAT16(s_density_140491b20[6],(uint6)local_68);
    *(undefined4 *)(lVar1 + 0x34) = 0x2f4;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    uStack_60 = 0;
    local_58 = 7;
    local_50 = 0xf;
    local_68 = (char *)(ulonglong)(uint7)local_68;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    unaff_RSI = uVar16;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"density",7);
    *(undefined4 *)(lVar1 + 0x34) = 0x2f8;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0;
    local_50 = 0;
    local_68 = (char *)FUN_14028af20(0x20);
    uVar6 = s_volumetricsexponent_140491b28._12_4_;
    uVar5 = s_volumetricsexponent_140491b28._8_4_;
    uVar4 = s_volumetricsexponent_140491b28._4_4_;
    uVar3 = CONCAT31(s_volumetricsexponent_140491b28._16_3_,s_volumetricsexponent_140491b28[0xf]);
    local_58 = 0x13;
    local_50 = 0x1f;
    *(undefined4 *)local_68 = s_volumetricsexponent_140491b28._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar4;
    *(undefined4 *)(local_68 + 8) = uVar5;
    *(undefined4 *)(local_68 + 0xc) = uVar6;
    *(undefined4 *)(local_68 + 0xf) = uVar3;
    local_68[0x13] = '\0';
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"volumetricsexponent",0x13);
    *(undefined4 *)(lVar1 + 0x34) = 0x2fc;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0;
    local_50 = 0;
    local_68 = (char *)FUN_14028af20(0x20);
    uVar5 = s_cascadedistance0_140491b40._12_4_;
    uVar4 = s_cascadedistance0_140491b40._8_4_;
    uVar3 = s_cascadedistance0_140491b40._4_4_;
    local_58 = 0x10;
    local_50 = 0x1f;
    *(undefined4 *)local_68 = s_cascadedistance0_140491b40._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar3;
    *(undefined4 *)(local_68 + 8) = uVar4;
    *(undefined4 *)(local_68 + 0xc) = uVar5;
    local_68[0x10] = '\0';
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"cascadedistance0",0x10);
    *(undefined4 *)(lVar1 + 0x34) = 0x300;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0;
    local_50 = 0;
    local_res8[0] = 0x1f;
    local_68 = (char *)FUN_1400173f0(&local_68,local_res8);
    uVar5 = s_cascadedistance1_140491b58._12_4_;
    uVar4 = s_cascadedistance1_140491b58._8_4_;
    uVar3 = s_cascadedistance1_140491b58._4_4_;
    local_50 = local_res8[0];
    local_58 = 0x10;
    *(undefined4 *)local_68 = s_cascadedistance1_140491b58._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar3;
    *(undefined4 *)(local_68 + 8) = uVar4;
    *(undefined4 *)(local_68 + 0xc) = uVar5;
    local_68[0x10] = '\0';
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    unaff_RSI = uVar15;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"cascadedistance1",0x10);
    *(undefined4 *)(lVar1 + 0x34) = 0x304;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0;
    local_50 = 0;
    local_res8[0] = 0x1f;
    local_68 = (char *)FUN_1400173f0(&local_68,local_res8);
    uVar5 = s_cascadedistance2_140491c00._12_4_;
    uVar4 = s_cascadedistance2_140491c00._8_4_;
    uVar3 = s_cascadedistance2_140491c00._4_4_;
    local_50 = local_res8[0];
    local_58 = 0x10;
    *(undefined4 *)local_68 = s_cascadedistance2_140491c00._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar3;
    *(undefined4 *)(local_68 + 8) = uVar4;
    *(undefined4 *)(local_68 + 0xc) = uVar5;
    local_68[0x10] = '\0';
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"cascadedistance2",0x10);
    local_68 = (char *)s_lightsourcesize_140491c18._0_8_;
    uStack_60._0_6_ = CONCAT24(s_lightsourcesize_140491c18._12_2_,s_lightsourcesize_140491c18._8_4_)
    ;
    uStack_60._0_7_ = CONCAT16(s_lightsourcesize_140491c18[0xe],(undefined6)uStack_60);
    *(undefined4 *)(lVar1 + 0x34) = 0x308;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0xf;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(uint7)uStack_60;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar1 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"lightsourcesize",0xf);
    uVar3 = s_controlpoint_14048f540._8_4_;
    *(undefined4 *)(lVar1 + 0x34) = 0x30c;
    *(undefined4 *)(lVar1 + 0x30) = 4;
    local_68 = (char *)s_controlpoint_14048f540._0_8_;
    *(code **)(lVar1 + 0x38) = FUN_1401a4b00;
    *(undefined1 **)(lVar1 + 0x48) = &LAB_1401a49f0;
    *(undefined1 **)(lVar1 + 0x50) = &LAB_1401a4a10;
    local_58 = 0xc;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(uint)uVar3;
    FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_14025e827;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    lVar9 = local_78[0];
    FUN_14000f880(local_78[0] + 0x68,"controlpoint",0xc);
    *(undefined1 **)(lVar9 + 0x50) = &LAB_1401a4560;
    pvVar8 = ThreadLocalStoragePointer;
    *(undefined4 *)(lVar9 + 0x34) = 0x2d8;
    *(undefined4 *)(lVar9 + 0x30) = 2;
    *(code **)(lVar9 + 0x38) = FUN_1401a4230;
    lVar1 = *(longlong *)pvVar8;
    *(undefined1 **)(lVar9 + 0x48) = &LAB_1401a4530;
    puVar12 = auStack_98;
    unaff_RSI = uVar16;
    if (DAT_1404e9ce0 <= *(int *)(lVar1 + 0x130)) goto LAB_14025e469;
  }
  else {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (uVar11 < 0x1000) {
LAB_14025db1c:
      thunk_FUN_14028af80(pcVar10,uVar11);
      goto LAB_14025db21;
    }
    pcVar10 = *(char **)(local_68 + -8);
    if (local_68 + (-8 - (longlong)pcVar10) < (char *)0x20) {
      uVar11 = local_50 + 0x28;
      goto LAB_14025db1c;
    }
LAB_14025e827:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar13 = auStack_90;
  }
  *(undefined8 *)(puVar13 + -8) = 0x14025e83a;
  FUN_14028b140(&DAT_1404e9ce0);
  puVar12 = puVar13;
  if (DAT_1404e9ce0 == -1) {
    *(undefined8 *)(puVar13 + -8) = 0x14025e853;
    FUN_14028b410(FUN_140425570);
    _DAT_1404e9d9c = (undefined4)unaff_RSI;
    uRam00000001404e9cf8 = 0;
    uRam00000001404e9d20 = 0;
    uRam00000001404e9d48 = 0;
    uRam00000001404e9d70 = 0;
    DAT_1404e9d98 = s_ldirectional_140491bd0[8];
    DAT_1404e9d98_1._0_1_ = s_ldirectional_140491bd0[9];
    DAT_1404e9d98_1._1_1_ = s_ldirectional_140491bd0[10];
    DAT_1404e9d98_1._2_1_ = s_ldirectional_140491bd0[0xb];
    DAT_1404e9cd0 = &DAT_1404e9cf0;
    DAT_1404e9cd8 = &DAT_1404e9db8;
    _DAT_1404e9d00 = 5;
    _DAT_1404e9d08 = 0xf;
    DAT_1404e9d38 = (undefined1)unaff_RSI;
    _DAT_1404e9cf0 =
         (ulonglong)CONCAT15(DAT_1404e9d38,CONCAT14(s_point_14048e4d8[4],s_point_14048e4d8._0_4_));
    DAT_1404e9d10 = 5;
    _DAT_1404e9d28 = 6;
    _DAT_1404e9d30 = 0xf;
    _DAT_1404e9d18 =
         (ulonglong)
         CONCAT16(DAT_1404e9d38,CONCAT24(s_lpoint_140491c28._4_2_,s_lpoint_140491c28._0_4_));
    _DAT_1404e9d50 = 5;
    _DAT_1404e9d58 = 0xf;
    _DAT_1404e9d40 = (ulonglong)CONCAT15(DAT_1404e9d38,CONCAT14(DAT_140491c34,DAT_140491c30));
    DAT_1404e9d60 = 1;
    _DAT_1404e9d78 = 5;
    _DAT_1404e9d80 = 0xf;
    _DAT_1404e9d68 = (ulonglong)CONCAT15(DAT_1404e9d38,CONCAT14(DAT_140491bc8,DAT_140491bc4));
    DAT_1404e9d88 = 2;
    _DAT_1404e9da0 = 0xc;
    _DAT_1404e9da8 = 0xf;
    DAT_1404e9d90 = s_ldirectional_140491bd0[0];
    DAT_1404e9d90_1._0_1_ = s_ldirectional_140491bd0[1];
    DAT_1404e9d90_1._1_1_ = s_ldirectional_140491bd0[2];
    DAT_1404e9d90_1._2_1_ = s_ldirectional_140491bd0[3];
    DAT_1404e9d90_1._3_1_ = s_ldirectional_140491bd0[4];
    DAT_1404e9d90_1._4_1_ = s_ldirectional_140491bd0[5];
    DAT_1404e9d90_1._5_1_ = s_ldirectional_140491bd0[6];
    DAT_1404e9d90_1._6_1_ = s_ldirectional_140491bd0[7];
    DAT_1404e9db0 = 3;
    *(undefined8 *)(puVar13 + -8) = 0x14025e9d5;
    _Init_thread_footer(&DAT_1404e9ce0);
  }
LAB_14025e469:
  local_58 = 5;
  uStack_60 = 0;
  local_68._0_5_ = CONCAT14(s_light_14048e5f8[4],s_light_14048e5f8._0_4_);
  local_50 = 0xf;
  uVar14 = (undefined1)unaff_RSI;
  local_68._0_6_ = CONCAT15(uVar14,(uint5)local_68);
  local_68 = (char *)(ulonglong)(uint6)local_68;
  *(undefined8 *)(puVar12 + -8) = 0x14025e4ab;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar12 + -8) = 0x14025e4c2;
    FUN_140017200(&local_68,local_68);
  }
  lVar1 = local_78[0];
  *(undefined8 *)(puVar12 + -8) = 0x14025e4dc;
  FUN_14000f880(local_78[0] + 0x68,"light",5);
  *(undefined4 *)(lVar1 + 0x34) = 0x2c0;
  *(code **)(lVar1 + 0x38) = FUN_14025eb40;
  *(undefined4 *)(lVar1 + 0x30) = 5;
  *(code **)(lVar1 + 0x40) = FUN_14025ecd0;
  *(code **)(lVar1 + 0x48) = FUN_14025e9e0;
  local_58 = 7;
  *(code **)(lVar1 + 0x50) = FUN_14025eac0;
  *(code **)(lVar1 + 0x58) = FUN_14025c610;
  local_68._0_6_ = CONCAT24(s_visible_1404903a0._4_2_,s_visible_1404903a0._0_4_);
  local_68._0_7_ = CONCAT16(s_visible_1404903a0[6],(uint6)local_68);
  local_50 = 0xf;
  local_68 = (char *)CONCAT17(uVar14,(uint7)local_68);
  *(undefined8 *)(puVar12 + -8) = 0x14025e56c;
  uStack_60 = unaff_RSI;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar12 + -8) = 0x14025e583;
    FUN_140017200(&local_68,local_68);
  }
  lVar1 = local_78[0];
  *(undefined8 *)(puVar12 + -8) = 0x14025e59d;
  FUN_14000f880(local_78[0] + 0x68,"visible",7);
  *(undefined4 *)(lVar1 + 0x34) = 0x120;
  *(undefined4 *)(lVar1 + 0x30) = 6;
  uVar15 = s_castshadow_1404908a0._0_8_;
  *(code **)(lVar1 + 0x38) = FUN_1401e1a90;
  *(undefined8 *)(lVar1 + 0x58) = unaff_RSI;
  *(code **)(lVar1 + 0x40) = FUN_1401e1b60;
  local_58 = 10;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_1401e1c60;
  *(undefined1 **)(lVar1 + 0x50) = &LAB_1401e1c90;
  uVar16 = s_castshadow_1404908a0._0_8_;
  local_50 = 0xf;
  s_castshadow_1404908a0[0] = (char)uVar15;
  s_castshadow_1404908a0[1] = SUB81(uVar15,1);
  s_castshadow_1404908a0[2] = SUB81(uVar15,2);
  s_castshadow_1404908a0[3] = SUB81(uVar15,3);
  s_castshadow_1404908a0[4] = SUB81(uVar15,4);
  s_castshadow_1404908a0[5] = SUB81(uVar15,5);
  s_castshadow_1404908a0[6] = SUB81(uVar15,6);
  s_castshadow_1404908a0[7] = SUB81(uVar15,7);
  local_68._0_1_ = s_castshadow_1404908a0[0];
  local_68._1_1_ = s_castshadow_1404908a0[1];
  local_68._2_1_ = s_castshadow_1404908a0[2];
  local_68._3_1_ = s_castshadow_1404908a0[3];
  local_68._4_1_ = s_castshadow_1404908a0[4];
  local_68._5_1_ = s_castshadow_1404908a0[5];
  local_68._6_1_ = s_castshadow_1404908a0[6];
  local_68._7_1_ = s_castshadow_1404908a0[7];
  uStack_60 = (ulonglong)CONCAT12(uVar14,s_castshadow_1404908a0._8_2_);
  *(undefined8 *)(puVar12 + -8) = 0x14025e622;
  s_castshadow_1404908a0._0_8_ = uVar16;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar12 + -8) = 0x14025e639;
    FUN_140017200(&local_68,local_68);
  }
  lVar1 = local_78[0];
  *(undefined8 *)(puVar12 + -8) = 0x14025e653;
  FUN_14000f880(local_78[0] + 0x68,"castshadow",10);
  *(undefined4 *)(lVar1 + 0x34) = 0x2c4;
  *(undefined4 *)(lVar1 + 0x30) = 6;
  uVar15 = s_usecookie_140491be0._0_8_;
  *(code **)(lVar1 + 0x38) = FUN_1401e1a90;
  *(code **)(lVar1 + 0x58) = FUN_14025c610;
  *(code **)(lVar1 + 0x40) = FUN_1401e1b60;
  local_58 = 9;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_1401e1c60;
  local_50 = 0xf;
  *(undefined1 **)(lVar1 + 0x50) = &LAB_1401e1c90;
  uVar16 = s_usecookie_140491be0._0_8_;
  s_usecookie_140491be0[0] = (char)uVar15;
  s_usecookie_140491be0[1] = SUB81(uVar15,1);
  s_usecookie_140491be0[2] = SUB81(uVar15,2);
  s_usecookie_140491be0[3] = SUB81(uVar15,3);
  s_usecookie_140491be0[4] = SUB81(uVar15,4);
  s_usecookie_140491be0[5] = SUB81(uVar15,5);
  s_usecookie_140491be0[6] = SUB81(uVar15,6);
  s_usecookie_140491be0[7] = SUB81(uVar15,7);
  local_68._0_1_ = s_usecookie_140491be0[0];
  local_68._1_1_ = s_usecookie_140491be0[1];
  local_68._2_1_ = s_usecookie_140491be0[2];
  local_68._3_1_ = s_usecookie_140491be0[3];
  local_68._4_1_ = s_usecookie_140491be0[4];
  local_68._5_1_ = s_usecookie_140491be0[5];
  local_68._6_1_ = s_usecookie_140491be0[6];
  local_68._7_1_ = s_usecookie_140491be0[7];
  uStack_60 = (ulonglong)CONCAT11(uVar14,s_usecookie_140491be0[8]);
  *(undefined8 *)(puVar12 + -8) = 0x14025e6de;
  s_usecookie_140491be0._0_8_ = uVar16;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar12 + -8) = 0x14025e6f5;
    FUN_140017200(&local_68,local_68);
  }
  lVar1 = local_78[0];
  *(undefined8 *)(puVar12 + -8) = 0x14025e70f;
  FUN_14000f880(local_78[0] + 0x68,"usecookie",9);
  uVar15 = s_castvolumetrics_140491bf0._0_8_;
  *(code **)(lVar1 + 0x38) = FUN_14019b4e0;
  *(undefined4 *)(lVar1 + 0x34) = 0x2c4;
  *(code **)(lVar1 + 0x40) = FUN_14019b5b0;
  *(undefined4 *)(lVar1 + 0x30) = 6;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_14019b6b0;
  *(code **)(lVar1 + 0x58) = FUN_14025c610;
  *(undefined1 **)(lVar1 + 0x50) = &LAB_14019b6e0;
  uVar16 = s_castvolumetrics_140491bf0._0_8_;
  uStack_60._0_6_ = CONCAT24(s_castvolumetrics_140491bf0._12_2_,s_castvolumetrics_140491bf0._8_4_);
  uStack_60._0_7_ = CONCAT16(s_castvolumetrics_140491bf0[0xe],(undefined6)uStack_60);
  local_58 = 0xf;
  local_50 = 0xf;
  s_castvolumetrics_140491bf0[0] = (char)uVar15;
  s_castvolumetrics_140491bf0[1] = SUB81(uVar15,1);
  s_castvolumetrics_140491bf0[2] = SUB81(uVar15,2);
  s_castvolumetrics_140491bf0[3] = SUB81(uVar15,3);
  s_castvolumetrics_140491bf0[4] = SUB81(uVar15,4);
  s_castvolumetrics_140491bf0[5] = SUB81(uVar15,5);
  s_castvolumetrics_140491bf0[6] = SUB81(uVar15,6);
  s_castvolumetrics_140491bf0[7] = SUB81(uVar15,7);
  local_68._0_1_ = s_castvolumetrics_140491bf0[0];
  local_68._1_1_ = s_castvolumetrics_140491bf0[1];
  local_68._2_1_ = s_castvolumetrics_140491bf0[2];
  local_68._3_1_ = s_castvolumetrics_140491bf0[3];
  local_68._4_1_ = s_castvolumetrics_140491bf0[4];
  local_68._5_1_ = s_castvolumetrics_140491bf0[5];
  local_68._6_1_ = s_castvolumetrics_140491bf0[6];
  local_68._7_1_ = s_castvolumetrics_140491bf0[7];
  uStack_60 = CONCAT17(uVar14,(uint7)uStack_60);
  *(undefined8 *)(puVar12 + -8) = 0x14025e7a0;
  s_castvolumetrics_140491bf0._0_8_ = uVar16;
  FUN_14015a000(&DAT_1404e8960,local_78,&local_68);
  if (0xf < local_50) {
    *(undefined8 *)(puVar12 + -8) = 0x14025e7b7;
    FUN_140017200(&local_68,local_68);
  }
  *(undefined8 *)(puVar12 + -8) = 0x14025e7d1;
  FUN_14000f880(local_78[0] + 0x68,"castvolumetrics",0xf);
  *(undefined4 *)(local_78[0] + 0x34) = 0x2c4;
  *(code **)(local_78[0] + 0x38) = FUN_14019bfa0;
  *(undefined4 *)(local_78[0] + 0x30) = 6;
  *(code **)(local_78[0] + 0x40) = FUN_14019c070;
  *(undefined1 **)(local_78[0] + 0x48) = &LAB_14019c170;
  *(undefined1 **)(local_78[0] + 0x50) = &LAB_14019c1a0;
  *(undefined8 *)(local_78[0] + 0x58) = unaff_RSI;
  return &DAT_1404e8960;
}

