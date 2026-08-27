// Function: FUN_1401a5c40
// Addr: 1401a5c40
// Size: 4126 bytes


/* WARNING: Removing unreachable block (ram,0x0001401a5dd6) */
/* WARNING: Removing unreachable block (ram,0x0001401a64f9) */

longlong FUN_1401a5c40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char ***pppcVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  size_t sVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  char ****ppppcVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  longlong local_res20;
  char local_108;
  char cStack_107;
  char cStack_106;
  undefined4 uStack_105;
  char cStack_101;
  char cStack_100;
  char cStack_ff;
  char cStack_fe;
  char cStack_fd;
  char cStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined8 local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char ***local_a8 [3];
  ulonglong local_90;
  byte local_88 [8];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  
  local_res20 = 0;
  local_e8 = 0;
  FUN_1401a6c60(param_1,param_2,&local_res20,&local_e8);
  uVar29 = 0xcbf29ce484222325;
  lVar18 = local_res20;
  if (param_3 != (longlong *)0x0) {
    puVar21 = *(undefined8 **)(local_e8 + 8);
    for (puVar3 = (undefined8 *)*puVar21; puVar3 != puVar21; puVar3 = (undefined8 *)*puVar3) {
      lVar18 = *param_3;
      if ((ulonglong)puVar3[9] < 0x10) {
        puVar20 = puVar3 + 6;
      }
      else {
        puVar20 = (undefined8 *)puVar3[6];
      }
      uVar19 = 0;
      uVar27 = 0xcbf29ce484222325;
      if (puVar3[8] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar20 + uVar19);
          uVar19 = uVar19 + 1;
          uVar27 = (uVar27 ^ *pbVar1) * 0x100000001b3;
        } while (uVar19 < (ulonglong)puVar3[8]);
      }
      lVar12 = FUN_1400110a0(lVar18,&local_e8,puVar3 + 6,uVar27);
      if ((*(longlong *)(lVar12 + 8) == 0) ||
         (*(longlong *)(lVar12 + 8) == *(longlong *)(lVar18 + 8))) {
        uVar11 = *(undefined4 *)(puVar3 + 10);
        plVar13 = (longlong *)FUN_14015af00(lVar18,&local_108,puVar3 + 6);
        *(undefined4 *)(*plVar13 + 0x30) = uVar11;
      }
    }
    lVar18 = *param_3;
    local_88[0] = (char)s_LIGHTING_140486930._0_8_;
    local_88[1] = SUB81(s_LIGHTING_140486930._0_8_,1);
    local_88[2] = SUB81(s_LIGHTING_140486930._0_8_,2);
    local_88[3] = SUB81(s_LIGHTING_140486930._0_8_,3);
    local_88[4] = SUB81(s_LIGHTING_140486930._0_8_,4);
    local_88[5] = SUB81(s_LIGHTING_140486930._0_8_,5);
    local_88[6] = SUB81(s_LIGHTING_140486930._0_8_,6);
    local_88[7] = SUB81(s_LIGHTING_140486930._0_8_,7);
    uStack_80 = 0;
    local_78 = 8;
    uVar19 = 0xcbf29ce484222325;
    local_70 = 0xf;
    uVar27 = 0;
    do {
      pbVar1 = local_88 + uVar27;
      uVar27 = uVar27 + 1;
      uVar19 = (uVar19 ^ *pbVar1) * 0x100000001b3;
    } while (uVar27 < 8);
    uVar19 = uVar19 & *(ulonglong *)(lVar18 + 0x30);
    lVar12 = *(longlong *)(lVar18 + 8);
    lVar22 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 8 + uVar19 * 0x10);
    if (lVar22 != lVar12) {
      lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + uVar19 * 0x10);
      while( true ) {
        puVar21 = (undefined8 *)(lVar22 + 0x10);
        if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
          puVar21 = (undefined8 *)*puVar21;
        }
        if ((*(longlong *)(lVar22 + 0x20) == 8) &&
           (iVar10 = memcmp(local_88,puVar21,8), iVar10 == 0)) goto LAB_1401a5e10;
        if (lVar22 == lVar18) break;
        lVar22 = *(longlong *)(lVar22 + 8);
      }
    }
    lVar22 = 0;
LAB_1401a5e10:
    if (lVar22 == 0) {
      lVar22 = lVar12;
    }
    if ((lVar22 != *(longlong *)(*param_3 + 8)) && (*(int *)(lVar22 + 0x30) != 0)) {
      uVar28 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xc;
      local_108 = (char)s_LIGHTS_POINT_140487630._0_8_;
      cStack_107 = SUB81(s_LIGHTS_POINT_140487630._0_8_,1);
      cStack_106 = SUB81(s_LIGHTS_POINT_140487630._0_8_,2);
      uStack_105 = SUB84(s_LIGHTS_POINT_140487630._0_8_,3);
      cStack_101 = SUB81(s_LIGHTS_POINT_140487630._0_8_,7);
      uStack_f0 = 0xf;
      cStack_100 = (char)s_LIGHTS_POINT_140487630._8_4_;
      cStack_ff = SUB41(s_LIGHTS_POINT_140487630._8_4_,1);
      cStack_fe = SUB41(s_LIGHTS_POINT_140487630._8_4_,2);
      cStack_fd = SUB41(s_LIGHTS_POINT_140487630._8_4_,3);
      cStack_fc = '\0';
      puVar14 = (uint *)FUN_14015a440(*param_3,&local_108);
      *puVar14 = uVar28 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      uVar28 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      local_108 = (char)s_LIGHTS_SPOT_140487678._0_7_;
      cStack_107 = SUB71(s_LIGHTS_SPOT_140487678._0_7_,1);
      cStack_106 = SUB71(s_LIGHTS_SPOT_140487678._0_7_,2);
      uStack_105 = SUB74(s_LIGHTS_SPOT_140487678._0_7_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_101 = (char)s_LIGHTS_SPOT_140487678._7_4_;
      cStack_100 = SUB41(s_LIGHTS_SPOT_140487678._7_4_,1);
      cStack_ff = SUB41(s_LIGHTS_SPOT_140487678._7_4_,2);
      cStack_fe = SUB41(s_LIGHTS_SPOT_140487678._7_4_,3);
      cStack_fd = '\0';
      puVar14 = (uint *)FUN_14015a440(*param_3,&local_108);
      *puVar14 = uVar28 >> 4 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      uVar28 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      local_108 = (char)s_LIGHTS_TUBE_140487770._0_7_;
      cStack_107 = SUB71(s_LIGHTS_TUBE_140487770._0_7_,1);
      cStack_106 = SUB71(s_LIGHTS_TUBE_140487770._0_7_,2);
      uStack_105 = SUB74(s_LIGHTS_TUBE_140487770._0_7_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_101 = (char)s_LIGHTS_TUBE_140487770._7_4_;
      cStack_100 = SUB41(s_LIGHTS_TUBE_140487770._7_4_,1);
      cStack_ff = SUB41(s_LIGHTS_TUBE_140487770._7_4_,2);
      cStack_fe = SUB41(s_LIGHTS_TUBE_140487770._7_4_,3);
      cStack_fd = '\0';
      puVar14 = (uint *)FUN_14015a440(*param_3,&local_108);
      *puVar14 = uVar28 >> 8 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      lVar18 = *param_3;
      uVar28 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      local_f8 = 0;
      local_108 = '\0';
      cStack_107 = '\0';
      cStack_106 = '\0';
      uStack_105 = 0;
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      uStack_f0 = 0;
      FUN_140017480(&local_108,"LIGHTS_DIRECTIONAL",0x12);
      puVar14 = (uint *)FUN_14015a440(lVar18,&local_108);
      *puVar14 = uVar28 >> 0xc & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      lVar18 = *param_3;
      local_f8 = 0;
      uStack_f0 = 0;
      uVar28 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      uVar30 = uVar28 >> 0x14 & 3;
      local_108 = '\0';
      cStack_107 = '\0';
      cStack_106 = '\0';
      uStack_105 = 0;
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      FUN_140017480(&local_108,"LIGHTS_SPOT_SHADOW_COOKIE",0x19);
      puVar14 = (uint *)FUN_14015a440(lVar18,&local_108);
      *puVar14 = uVar30;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      local_f8 = 0;
      uStack_f0 = 0;
      lVar18 = *param_3;
      uVar31 = uVar28 >> 0x10 & 3;
      local_108 = '\0';
      cStack_107 = '\0';
      cStack_106 = '\0';
      uStack_105 = 0;
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      FUN_140017480(&local_108,"LIGHTS_SPOT_SHADOW",0x12);
      puVar14 = (uint *)FUN_14015a440(lVar18,&local_108);
      *puVar14 = uVar31;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      lVar18 = *param_3;
      local_f8 = 0;
      uStack_f0 = 0;
      uVar25 = uVar28 >> 0x12 & 3;
      local_108 = '\0';
      cStack_107 = '\0';
      cStack_106 = '\0';
      uStack_105 = 0;
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      FUN_140017480(&local_108,"LIGHTS_SPOT_COOKIE",0x12);
      puVar14 = (uint *)FUN_14015a440(lVar18,&local_108);
      *puVar14 = uVar25;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
      lVar18 = *param_3;
      uVar26 = uVar28 >> 0x16 & 3;
      local_f8 = 0;
      uVar28 = uVar28 >> 0x18 & 3;
      uStack_f0 = 0;
      local_108 = '\0';
      cStack_107 = 0;
      cStack_106 = 0;
      uStack_105 = 0;
      cStack_101 = 0;
      cStack_100 = 0;
      cStack_ff = 0;
      cStack_fe = 0;
      cStack_fd = 0;
      cStack_fc = 0;
      uStack_fb = 0;
      uStack_fa = 0;
      FUN_140017480(&local_108,"LIGHTS_DIRECTIONAL_SHADOW",0x19);
      puVar14 = (uint *)FUN_14015a440(lVar18,&local_108);
      *puVar14 = uVar26;
      FUN_140017240(&local_108);
      local_108 = '\0';
      cStack_107 = '\0';
      cStack_106 = '\0';
      uStack_105 = 0;
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      lVar18 = *param_3;
      local_f8 = 0;
      uStack_f0 = 0;
      FUN_140017480(&local_108,"LIGHTS_POINT_SHADOW",0x13);
      puVar14 = (uint *)FUN_14015a440(lVar18);
      *puVar14 = uVar28;
      FUN_140017240(&local_108);
      if (uVar28 + uVar26 + uVar31 + uVar30 != 0) {
        lVar18 = *param_3;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = '\0';
        cStack_107 = 0;
        cStack_106 = 0;
        uStack_105 = 0;
        cStack_101 = 0;
        cStack_100 = 0;
        cStack_ff = 0;
        cStack_fe = 0;
        cStack_fd = 0;
        cStack_fc = 0;
        uStack_fb = 0;
        uStack_fa = 0;
        FUN_140017480(&local_108,"LIGHTS_SHADOW_MAPPING",0x15);
        puVar15 = (undefined4 *)FUN_14015a440(lVar18,&local_108);
        *puVar15 = 1;
        if (0xf < uStack_f0) {
          FUN_140017200(&local_108,
                        CONCAT17(cStack_101,
                                 CONCAT43(uStack_105,
                                          CONCAT12(cStack_106,CONCAT11(cStack_107,local_108)))));
        }
        lVar18 = *param_3;
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x80) + 0x1ac);
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = '\0';
        cStack_107 = '\0';
        cStack_106 = '\0';
        uStack_105 = 0;
        cStack_101 = '\0';
        cStack_100 = '\0';
        cStack_ff = '\0';
        cStack_fe = '\0';
        cStack_fd = '\0';
        cStack_fc = '\0';
        uStack_fb = 0;
        uStack_fa = 0;
        FUN_140017480(&local_108,"LIGHTS_SHADOW_MAPPING_QUALITY",0x1d);
        puVar14 = (uint *)FUN_14015a440(lVar18);
        *puVar14 = (uint)bVar2;
        if (0xf < uStack_f0) {
          FUN_140017200(&local_108);
        }
      }
      if (uVar25 + uVar30 != 0) {
        uStack_fa = 0;
        cStack_100 = (char)s_LIGHTS_COOKIE_14048ee08._8_4_;
        cStack_ff = SUB41(s_LIGHTS_COOKIE_14048ee08._8_4_,1);
        cStack_fe = SUB41(s_LIGHTS_COOKIE_14048ee08._8_4_,2);
        cStack_fd = SUB41(s_LIGHTS_COOKIE_14048ee08._8_4_,3);
        cStack_fc = s_LIGHTS_COOKIE_14048ee08[0xc];
        local_f8 = 0xd;
        uStack_f0 = 0xf;
        local_108 = (char)s_LIGHTS_COOKIE_14048ee08._0_8_;
        cStack_107 = SUB81(s_LIGHTS_COOKIE_14048ee08._0_8_,1);
        cStack_106 = SUB81(s_LIGHTS_COOKIE_14048ee08._0_8_,2);
        uStack_105 = SUB84(s_LIGHTS_COOKIE_14048ee08._0_8_,3);
        cStack_101 = SUB81(s_LIGHTS_COOKIE_14048ee08._0_8_,7);
        uStack_fb = 0;
        puVar15 = (undefined4 *)FUN_14015a440(*param_3);
        *puVar15 = 1;
        if (0xf < uStack_f0) {
          FUN_140017200(&local_108);
        }
      }
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 10 & 1) != 0) {
      local_108 = (char)s_SCENE_ORTHO_14048ee18._0_7_;
      cStack_107 = SUB71(s_SCENE_ORTHO_14048ee18._0_7_,1);
      cStack_106 = SUB71(s_SCENE_ORTHO_14048ee18._0_7_,2);
      uStack_105 = SUB74(s_SCENE_ORTHO_14048ee18._0_7_,3);
      cStack_101 = (char)s_SCENE_ORTHO_14048ee18._7_4_;
      cStack_100 = SUB41(s_SCENE_ORTHO_14048ee18._7_4_,1);
      cStack_ff = SUB41(s_SCENE_ORTHO_14048ee18._7_4_,2);
      cStack_fe = SUB41(s_SCENE_ORTHO_14048ee18._7_4_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_fd = '\0';
      puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        lVar18 = lVar12;
        if ((0xfff < uStack_f0 + 1) &&
           (lVar18 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar18) - 8U)) goto LAB_1401a6c56;
        thunk_FUN_14028af80(lVar18);
      }
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) & 0x1800000) != 0) {
      lVar18 = *param_3;
      local_b8 = 3;
      uStack_c0 = 0;
      uVar19 = 0xcbf29ce484222325;
      local_c8 = (ulonglong)(uint3)DAT_14048ee24;
      uVar27 = 0;
      local_b0 = 0xf;
      do {
        pbVar1 = (byte *)((longlong)&local_c8 + uVar27);
        uVar27 = uVar27 + 1;
        uVar19 = (uVar19 ^ *pbVar1) * 0x100000001b3;
      } while (uVar27 < 3);
      uVar19 = uVar19 & *(ulonglong *)(lVar18 + 0x30);
      lVar12 = *(longlong *)(lVar18 + 8);
      lVar22 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 8 + uVar19 * 0x10);
      if (lVar22 != lVar12) {
        lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + uVar19 * 0x10);
        while( true ) {
          puVar21 = (undefined8 *)(lVar22 + 0x10);
          if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
            puVar21 = (undefined8 *)*puVar21;
          }
          if ((*(longlong *)(lVar22 + 0x20) == 3) &&
             (iVar10 = memcmp(&local_c8,puVar21,3), iVar10 == 0)) goto LAB_1401a658c;
          if (lVar22 == lVar18) break;
          lVar22 = *(longlong *)(lVar22 + 8);
        }
      }
      lVar22 = 0;
LAB_1401a658c:
      if (lVar22 == 0) {
        lVar22 = lVar12;
      }
      if ((lVar22 != *(longlong *)(*param_3 + 8)) && (*(int *)(lVar22 + 0x30) != 0)) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0x17 & 1) != 0) {
          local_f8 = 8;
          cStack_ff = '\0';
          cStack_fe = '\0';
          cStack_fd = '\0';
          cStack_fc = '\0';
          uStack_fb = 0;
          uStack_fa = 0;
          local_108 = (char)s_FOG_DIST_14048ee28._0_8_;
          cStack_107 = SUB81(s_FOG_DIST_14048ee28._0_8_,1);
          cStack_106 = SUB81(s_FOG_DIST_14048ee28._0_8_,2);
          uStack_105 = SUB84(s_FOG_DIST_14048ee28._0_8_,3);
          cStack_101 = SUB81(s_FOG_DIST_14048ee28._0_8_,7);
          cStack_100 = '\0';
          uStack_f0 = 0xf;
          puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
          *puVar15 = 1;
          FUN_140017240(&local_108);
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0x18 & 1) != 0) {
          cStack_fd = '\0';
          cStack_fc = '\0';
          uStack_fb = 0;
          uStack_fa = 0;
          local_f8 = 10;
          local_108 = (char)s_FOG_HEIGHT_14048ee78._0_8_;
          cStack_107 = SUB81(s_FOG_HEIGHT_14048ee78._0_8_,1);
          cStack_106 = SUB81(s_FOG_HEIGHT_14048ee78._0_8_,2);
          uStack_105 = SUB84(s_FOG_HEIGHT_14048ee78._0_8_,3);
          cStack_101 = SUB81(s_FOG_HEIGHT_14048ee78._0_8_,7);
          uStack_f0 = 0xf;
          cStack_100 = (char)s_FOG_HEIGHT_14048ee78._8_2_;
          cStack_ff = SUB21(s_FOG_HEIGHT_14048ee78._8_2_,1);
          cStack_fe = '\0';
          puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
          *puVar15 = 1;
          FUN_140017240(&local_108);
        }
      }
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x118) & 2) != 0) {
      uStack_fa = 0;
      cStack_100 = (char)s_BACKBUFFER_MS_140487a30._8_4_;
      cStack_ff = SUB41(s_BACKBUFFER_MS_140487a30._8_4_,1);
      cStack_fe = SUB41(s_BACKBUFFER_MS_140487a30._8_4_,2);
      cStack_fd = SUB41(s_BACKBUFFER_MS_140487a30._8_4_,3);
      cStack_fc = s_BACKBUFFER_MS_140487a30[0xc];
      local_f8 = 0xd;
      uStack_f0 = 0xf;
      local_108 = (char)s_BACKBUFFER_MS_140487a30._0_8_;
      cStack_107 = SUB81(s_BACKBUFFER_MS_140487a30._0_8_,1);
      cStack_106 = SUB81(s_BACKBUFFER_MS_140487a30._0_8_,2);
      uStack_105 = SUB84(s_BACKBUFFER_MS_140487a30._0_8_,3);
      cStack_101 = SUB81(s_BACKBUFFER_MS_140487a30._0_8_,7);
      uStack_fb = 0;
      puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar18 = lVar12;
        if (0xfff < uVar19) {
          lVar18 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar18) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar18,uVar19);
      }
    }
    lVar18 = local_res20;
    param_3[2] = local_res20;
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) & 0x2000) != 0) {
      cStack_101 = '\0';
      cStack_100 = '\0';
      cStack_ff = '\0';
      cStack_fe = '\0';
      cStack_fd = '\0';
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_108 = (char)DAT_14048ee84;
      cStack_107 = (char)((uint)DAT_14048ee84 >> 8);
      cStack_106 = (char)((uint)DAT_14048ee84 >> 0x10);
      local_f8 = 3;
      uStack_f0 = 0xf;
      uStack_105 = 0;
      puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar22 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar12 = lVar22;
        if (0xfff < uVar19) {
          lVar12 = *(longlong *)(lVar22 + -8);
          if (0x1f < (lVar22 - lVar12) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar12,uVar19);
      }
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0xc & 1) != 0) {
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xc;
      local_108 = (char)s_REVERSEDEPTH_14048ee88._0_8_;
      cStack_107 = SUB81(s_REVERSEDEPTH_14048ee88._0_8_,1);
      cStack_106 = SUB81(s_REVERSEDEPTH_14048ee88._0_8_,2);
      uStack_105 = SUB84(s_REVERSEDEPTH_14048ee88._0_8_,3);
      cStack_101 = SUB81(s_REVERSEDEPTH_14048ee88._0_8_,7);
      uStack_f0 = 0xf;
      cStack_100 = (char)s_REVERSEDEPTH_14048ee88._8_4_;
      cStack_ff = SUB41(s_REVERSEDEPTH_14048ee88._8_4_,1);
      cStack_fe = SUB41(s_REVERSEDEPTH_14048ee88._8_4_,2);
      cStack_fd = SUB41(s_REVERSEDEPTH_14048ee88._8_4_,3);
      cStack_fc = '\0';
      puVar15 = (undefined4 *)FUN_14015a440(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar22 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar19 = uStack_f0 + 1;
        lVar12 = lVar22;
        if (0xfff < uVar19) {
          lVar12 = *(longlong *)(lVar22 + -8);
          if (0x1f < (lVar22 - lVar12) - 8U) goto LAB_1401a6c56;
          uVar19 = uStack_f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar12,uVar19);
      }
    }
    if (param_3[1] != 0) {
      uVar19 = 0;
      do {
        lVar12 = *(longlong *)(param_3[1] + uVar19 * 8);
        lVar22 = *(longlong *)(lVar18 + 8);
        uVar27 = ((((uVar19 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar19 >> 8 & 0xff) *
                   0x100000001b3 ^ uVar19 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar19 >> 0x18) *
                 0x100000001b3 & *(ulonglong *)(lVar18 + 0x30);
        lVar23 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 8 + uVar27 * 0x10);
        if (lVar23 == lVar22) {
LAB_1401a68f4:
          lVar23 = 0;
        }
        else {
          iVar10 = *(int *)(lVar23 + 0x10);
          while ((int)uVar19 != iVar10) {
            if (lVar23 == *(longlong *)(*(longlong *)(lVar18 + 0x18) + uVar27 * 0x10))
            goto LAB_1401a68f4;
            lVar23 = *(longlong *)(lVar23 + 8);
            iVar10 = *(int *)(lVar23 + 0x10);
          }
        }
        if (lVar23 == 0) {
          lVar23 = lVar22;
        }
        if (lVar12 == 0) {
          if (((lVar23 != lVar22) && (*(char *)(lVar23 + 0x80) != '\0')) &&
             (*(longlong *)(lVar23 + 0x30) != 0)) {
            plVar13 = (longlong *)(lVar23 + 0x20);
            if (0xf < *(ulonglong *)(lVar23 + 0x38)) {
              plVar13 = (longlong *)*plVar13;
            }
            lVar12 = FUN_14014cf90(*(longlong *)(param_1 + 0x80) + 0x1520,plVar13,
                                   CONCAT71((int7)(uVar19 >> 8),1));
            if (lVar12 != 0) goto LAB_1401a6953;
          }
        }
        else {
LAB_1401a6953:
          if ((lVar23 != *(longlong *)(lVar18 + 8)) && (*(char *)(lVar23 + 0x80) != '\0')) {
            uVar11 = *(undefined4 *)(lVar12 + 0x18);
            lVar12 = *param_3;
            uVar16 = FUN_140053e40(local_68,uVar19);
            uVar16 = FUN_14002fd20(&local_e8,&DAT_14048ee70,uVar16);
            puVar15 = (undefined4 *)FUN_1400532a0(uVar16,"FORMAT",6);
            uVar5 = *puVar15;
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            local_108 = (char)uVar5;
            cStack_107 = (char)((uint)uVar5 >> 8);
            cStack_106 = (char)((uint)uVar5 >> 0x10);
            uStack_105._1_3_ = (undefined3)puVar15[1];
            uStack_105 = CONCAT31(uStack_105._1_3_,(char)((uint)uVar5 >> 0x18));
            cStack_101 = (char)((uint)puVar15[1] >> 0x18);
            cStack_100 = (char)uVar6;
            cStack_ff = (char)((uint)uVar6 >> 8);
            cStack_fe = (char)((uint)uVar6 >> 0x10);
            cStack_fd = (char)((uint)uVar6 >> 0x18);
            cStack_fc = (char)uVar7;
            uStack_fb = (undefined1)((uint)uVar7 >> 8);
            uStack_fa = (undefined2)((uint)uVar7 >> 0x10);
            local_f8 = *(undefined8 *)(puVar15 + 4);
            uStack_f0 = *(ulonglong *)(puVar15 + 6);
            *(undefined8 *)(puVar15 + 4) = 0;
            *(undefined1 *)puVar15 = 0;
            *(undefined8 *)(puVar15 + 6) = 0xf;
            puVar15 = (undefined4 *)FUN_14015a440(lVar12,&local_108);
            *puVar15 = uVar11;
            if (0xf < uStack_f0) {
              lVar22 = CONCAT17(cStack_101,
                                CONCAT43(uStack_105,
                                         CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
              uVar27 = uStack_f0 + 1;
              lVar12 = lVar22;
              if (0xfff < uVar27) {
                lVar12 = *(longlong *)(lVar22 + -8);
                if (0x1f < (lVar22 - lVar12) - 8U) goto LAB_1401a6c56;
                uVar27 = uStack_f0 + 0x28;
              }
              thunk_FUN_14028af80(lVar12,uVar27);
            }
            local_f8 = 0;
            uStack_f0 = 0xf;
            local_108 = '\0';
            FUN_140017240(&local_e8);
            FUN_140017240(local_68);
          }
        }
        uVar28 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar28;
      } while ((int)uVar28 < 10);
    }
  }
  uVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1518) + 0x30))();
  FUN_14016c990(local_a8,uVar11,param_2,param_3,lVar18);
  uVar19 = local_90;
  pppcVar8 = local_a8[0];
  ppppcVar24 = local_a8;
  if (0xf < local_90) {
    ppppcVar24 = (char ****)local_a8[0];
  }
  sVar17 = strlen((char *)ppppcVar24);
  uVar27 = 0;
  if (sVar17 != 0) {
    do {
      pbVar1 = (byte *)((longlong)ppppcVar24 + uVar27);
      uVar27 = uVar27 + 1;
      uVar29 = (uVar29 ^ *pbVar1) * 0x100000001b3;
    } while (uVar27 < sVar17);
  }
  uVar29 = uVar29 & *(ulonglong *)(param_1 + 0x70);
  lVar18 = *(longlong *)(param_1 + 0x48);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8 + uVar29 * 0x10);
  if (lVar12 == lVar18) {
LAB_1401a6b2b:
    lVar12 = 0;
  }
  else {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar29 * 0x10);
    cVar9 = FUN_14000d010(lVar12 + 0x10,ppppcVar24);
    while (cVar9 == '\0') {
      if (lVar12 == lVar22) goto LAB_1401a6b2b;
      lVar12 = *(longlong *)(lVar12 + 8);
      cVar9 = FUN_14000d010(lVar12 + 0x10,ppppcVar24);
    }
  }
  if ((lVar12 == 0) || (lVar12 == lVar18)) {
    lVar18 = FUN_1401a7350(param_1,param_2,param_3);
    if (lVar18 == 0) {
      lVar18 = FUN_1401a7350(param_1,"error",0);
    }
    local_d8 = 0;
    ppppcVar24 = local_a8;
    if (0xf < local_90) {
      ppppcVar24 = (char ****)local_a8[0];
    }
    local_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    sVar17 = strlen((char *)ppppcVar24);
    FUN_140017480(&local_e8,ppppcVar24,sVar17);
    plVar13 = (longlong *)FUN_1401a7600(param_1 + 0x40,&local_108,&local_e8);
    *(longlong *)(*plVar13 + 0x30) = lVar18;
    if (0xf < local_d0) {
      uVar29 = local_d0 + 1;
      lVar12 = local_e8;
      if (0xfff < uVar29) {
        lVar12 = *(longlong *)(local_e8 + -8);
        if (0x1f < (local_e8 - lVar12) - 8U) goto LAB_1401a6c56;
        uVar29 = local_d0 + 0x28;
      }
      thunk_FUN_14028af80(lVar12,uVar29);
    }
  }
  else {
    lVar18 = *(longlong *)(lVar12 + 0x30);
    local_a8[0] = pppcVar8;
    local_90 = uVar19;
  }
  if (0xf < local_90) {
    uVar29 = local_90 + 1;
    ppppcVar24 = (char ****)local_a8[0];
    if (0xfff < uVar29) {
      ppppcVar24 = (char ****)local_a8[0][-1];
      if ((char *)0x1f < (char *)((longlong)local_a8[0] + (-8 - (longlong)ppppcVar24))) {
LAB_1401a6c56:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        lVar18 = (*pcVar4)();
        return lVar18;
      }
      uVar29 = local_90 + 0x28;
    }
    thunk_FUN_14028af80(ppppcVar24,uVar29);
  }
  return lVar18;
}

