// Function: FUN_140169140
// Addr: 140169140
// Size: 8085 bytes


void FUN_140169140(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 ******ppppppuVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined8 *****pppppuVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 ******ppppppuVar24;
  undefined1 local_res8;
  uint local_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 ****local_108;
  undefined8 ****ppppuStack_100;
  undefined8 *****local_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  longlong local_d8 [3];
  ulonglong local_c0;
  undefined1 local_a3 [3];
  undefined8 *****local_a0;
  undefined8 uStack_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined8 *****local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong uStack_68;
  uint local_60;
  undefined8 *****local_58 [2];
  longlong local_48;
  ulonglong uStack_40;
  
  lVar16 = *(longlong *)(param_2 + 8);
  uVar19 = *(ulonglong *)(param_2 + 0x30) & 0xc26e191bbabdc4c9;
  lVar22 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + uVar19 * 0x10);
  lVar23 = 0;
  if (lVar22 != lVar16) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x18) + uVar19 * 0x10);
    while( true ) {
      puVar13 = (undefined8 *)(lVar22 + 0x10);
      if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      if (((*(longlong *)(lVar22 + 0x20) == 8) &&
          (iVar3 = memcmp(puVar13,"LIGHTING",8), lVar23 = lVar22, iVar3 == 0)) ||
         (lVar23 = 0, lVar22 == lVar1)) break;
      lVar22 = *(longlong *)(lVar22 + 8);
    }
  }
  plVar15 = param_1 + 2;
  if (lVar23 == 0) {
    lVar23 = lVar16;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((*plVar15 == 10) && (iVar3 = memcmp(param_1,"LightingV1",10), iVar3 == 0)) &&
     (lVar23 != lVar16)) {
    plVar15 = (longlong *)(lVar23 + 0x30);
    if (0xf < *(ulonglong *)(lVar23 + 0x48)) {
      plVar15 = (longlong *)*plVar15;
    }
    iVar3 = FUN_1402c82c0(plVar15);
    if (iVar3 != 0) {
      local_108 = (undefined8 ****)0xc;
      ppppuStack_100 = (undefined8 ****)0xf;
      local_118 = (uint)s_LIGHTS_POINT_140487630._0_8_;
      uStack_114 = SUB84(s_LIGHTS_POINT_140487630._0_8_,4);
      uStack_110._0_1_ = s_LIGHTS_POINT_140487630[8];
      uStack_110._1_1_ = s_LIGHTS_POINT_140487630[9];
      uStack_110._2_1_ = s_LIGHTS_POINT_140487630[10];
      uStack_110._3_1_ = s_LIGHTS_POINT_140487630[0xb];
      uStack_10c = 0;
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar4 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_118 = (uint)s_LIGHTS_SPOT_140487678._0_7_;
      uStack_114._3_1_ = (char)s_LIGHTS_SPOT_140487678._7_4_;
      uStack_114 = CONCAT13(uStack_114._3_1_,SUB73(s_LIGHTS_SPOT_140487678._0_7_,4));
      uStack_110 = (uint)s_LIGHTS_SPOT_140487678._7_4_ >> 8;
      uStack_10c = 0;
      local_108 = (undefined8 ****)0xb;
      ppppuStack_100 = (undefined8 ****)0xf;
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar5 = FUN_1402c82c0(puVar13);
      local_60 = uVar5;
      FUN_140017240(&local_118);
      local_118 = (uint)s_LIGHTS_TUBE_140487770._0_7_;
      uStack_114._3_1_ = (char)s_LIGHTS_TUBE_140487770._7_4_;
      uStack_114 = CONCAT13(uStack_114._3_1_,SUB73(s_LIGHTS_TUBE_140487770._0_7_,4));
      uStack_110 = (uint)s_LIGHTS_TUBE_140487770._7_4_ >> 8;
      uStack_10c = 0;
      local_108 = (undefined8 ****)0xb;
      ppppuStack_100 = (undefined8 ****)0xf;
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar6 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_DIRECTIONAL",0x12);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar7 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_SPOT_SHADOW_COOKIE",0x19);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar8 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_SPOT_SHADOW",0x12);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar9 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_SPOT_COOKIE",0x12);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar10 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_DIRECTIONAL_SHADOW",0x19);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar11 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      local_108 = (undefined8 *****)0x0;
      ppppuStack_100 = (undefined8 *****)0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_140017480(&local_118,"LIGHTS_POINT_SHADOW",0x13);
      puVar13 = (undefined8 *)FUN_14016e550(param_2,&local_118);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar12 = FUN_1402c82c0(puVar13);
      FUN_140017240(&local_118);
      if (uVar4 != 0) {
        FUN_1400ea100(&local_118,uVar4);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LPoint_Color[",&local_118);
        puVar13 = (undefined8 *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*puVar13;
        ppppuStack_f0 = (undefined8 ****)puVar13[1];
        local_e8 = (undefined8 ****)puVar13[2];
        ppppuStack_e0 = (undefined8 ****)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LPoint_Origin[",&local_118);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
      }
      if (uVar5 != 0) {
        FUN_1400ea100(&local_118,uVar5);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LSpot_Color[",&local_118);
        puVar13 = (undefined8 *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*puVar13;
        ppppuStack_f0 = (undefined8 ****)puVar13[1];
        local_e8 = (undefined8 ****)puVar13[2];
        ppppuStack_e0 = (undefined8 ****)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LSpot_Origin[",&local_118);
        puVar13 = (undefined8 *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*puVar13;
        ppppuStack_f0 = (undefined8 ****)puVar13[1];
        local_e8 = (undefined8 ****)puVar13[2];
        ppppuStack_e0 = (undefined8 ****)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        uVar14 = FUN_1400924d0(&local_f8,"uniform vec4 g_LSpot_Direction[",&local_118);
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_f8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LSpot_Exponent[",&local_118);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        FUN_1400ea100(&local_118,uVar6);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LTube_Color[",&local_118);
        puVar13 = (undefined8 *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*puVar13;
        ppppuStack_f0 = (undefined8 ****)puVar13[1];
        local_e8 = (undefined8 ****)puVar13[2];
        ppppuStack_e0 = (undefined8 ****)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LTube_OriginA[",&local_118);
        puVar13 = (undefined8 *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*puVar13;
        ppppuStack_f0 = (undefined8 ****)puVar13[1];
        local_e8 = (undefined8 ****)puVar13[2];
        ppppuStack_e0 = (undefined8 ****)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LTube_OriginB[",&local_118);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
      }
      if (uVar7 != 0) {
        FUN_1400ea100(&local_f8,uVar7);
        uVar14 = FUN_1400924d0(&local_118,"uniform vec4 g_LDirectional_Color[",&local_f8);
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
        uVar14 = FUN_1400924d0(&local_118,"uniform vec4 g_LDirectional_Direction[",&local_f8);
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
        FUN_140017240(&local_f8);
      }
      if (uVar10 + uVar11 * 3 + uVar9 + uVar8 != 0) {
        FUN_1400ea100(&local_f8);
        uVar14 = FUN_1400924d0(&local_118,"uniform mat4 g_LFeature_ShadowProjection[",&local_f8);
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
        uVar14 = FUN_1400924d0(&local_118,"uniform vec4 g_LFeature_ShadowProjectionTransform[",
                               &local_f8);
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
        FUN_140017240(&local_f8);
      }
      if (uVar12 == 0) {
        FUN_1400532a0(param_3,
                      "vec3 PerformLighting_V1(vec3 worldPos, vec3 color, vec3 normal, vec3 viewVector, vec3 specularTint, vec3 ambient, float roughness, float metallic)\n{\n\tvec3 light = CAST3(0.0);\n"
                      ,0xaf);
      }
      else {
        FUN_1400ea100(&local_118,uVar12);
        uVar14 = FUN_1400924d0(&local_f8,"uniform vec4 g_LFeature_ShadowPointProjection[",&local_118
                              );
        uVar14 = FUN_140076f60(local_d8,uVar14,&DAT_1404876a8);
        FUN_140053330(param_3,uVar14);
        FUN_140017240(local_d8);
        FUN_140017240(&local_f8);
        uVar14 = FUN_1400924d0(local_d8,"uniform vec4 g_LFeature_ShadowPointProjectionTransform[",
                               &local_118);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_1404876a8,3);
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        FUN_140053330(param_3,&local_f8);
        FUN_140017240(&local_f8);
        FUN_140017240(local_d8);
        FUN_140017240(&local_118);
        FUN_1400532a0(param_3,
                      "vec3 PerformLighting_V1(vec3 worldPos, vec3 color, vec3 normal, vec3 viewVector, vec3 specularTint, vec3 ambient, float roughness, float metallic)\n{\n\tvec3 light = CAST3(0.0);\n"
                      ,0xaf);
        do {
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          uVar14 = FUN_140053e40(&local_f8,uVar5);
          uVar14 = FUN_14002fd20(local_d8,"\tconst uint i = ",uVar14);
          plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
          local_108 = (undefined8 ****)plVar15[2];
          ppppuStack_100 = (undefined8 ****)plVar15[3];
          puVar17 = (uint *)*plVar15;
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          local_118 = (uint)puVar17;
          uStack_114 = (uint)((ulonglong)puVar17 >> 0x20);
          uStack_110 = (uint)plVar15[1];
          uStack_10c = (uint)((ulonglong)plVar15[1] >> 0x20);
          puVar20 = &local_118;
          if ((undefined8 *****)0xf < ppppuStack_100) {
            puVar20 = puVar17;
          }
          FUN_1400532a0(param_3,puVar20,local_108);
          if ((undefined8 *****)0xf < ppppuStack_100) {
            lVar22 = CONCAT44(uStack_114,local_118);
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_100 + 1);
            lVar16 = lVar22;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              lVar16 = *(longlong *)(lVar22 + -8);
              if (0x1f < (lVar22 - lVar16) - 8U) goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_100 + 5);
            }
            thunk_FUN_14028af80(lVar16,pppppuVar21);
          }
          FUN_140017240(local_d8);
          FUN_140017240(&local_f8);
          FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LPoint_Origin[i].xyz - worldPos;\n",0x36);
          FUN_1400532a0(param_3,
                        "\tvec4 projectedCoords = CalculateProjectedCoordsPoint(worldPos, g_LPoint_Origin[i].xyz, g_LFeature_ShadowPointProjection[i], g_LFeature_ShadowPointProjectionTransform[i]);\n"
                        ,0xac);
          FUN_1400532a0(param_3,
                        "\tfloat shadowFactor = PerformPointShadowMapping(projectedCoords);\n",0x42)
          ;
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LPoint_Color[i].rgb, g_LPoint_Color[i].w, g_LPoint_Origin[i].w, specularTint, ambient, roughness, metallic, shadowFactor);\n"
                        ,0xc4);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar12);
      }
      for (; uVar5 < uVar4; uVar5 = uVar5 + 1) {
        FUN_1400532a0(param_3,&DAT_14048c06c,2);
        if ((int)uVar5 < 0) {
          lVar16 = FUN_140053cb0(local_a3,-uVar5);
          *(undefined1 *)(lVar16 + -1) = 0x2d;
          lVar16 = lVar16 + -1;
        }
        else {
          lVar16 = FUN_140053cb0(local_a3,uVar5);
        }
        FUN_140053d10(local_d8,lVar16,local_a3);
        uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        ppppppuVar18 = &local_f8;
        if ((undefined8 *****)0xf < ppppuStack_e0) {
          ppppppuVar18 = (undefined8 ******)local_f8;
        }
        FUN_1400532a0(param_3,ppppppuVar18,local_e8);
        FUN_140017240(&local_f8);
        FUN_140017240(&local_118);
        FUN_140017240(local_d8);
        FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LPoint_Origin[i].xyz - worldPos;\n",0x36);
        FUN_1400532a0(param_3,
                      "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LPoint_Color[i].rgb, g_LPoint_Color[i].w, g_LPoint_Origin[i].w, specularTint, ambient, roughness, metallic, 1.0);\n"
                      ,0xbb);
        FUN_1400532a0(param_3,&DAT_14048797c,2);
      }
      uVar5 = 0;
      uVar4 = uVar5;
      if (uVar8 != 0) {
        do {
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          if ((int)uVar4 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar4);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar4);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
          plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          FUN_140017240(&local_f8);
          FUN_140017240(&local_118);
          FUN_140017240(local_d8);
          FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LSpot_Origin[i].xyz - worldPos;\n",0x35);
          FUN_1400532a0(param_3,
                        "\tvec3 projectedCoords = CalculateProjectedCoords(worldPos, g_LFeature_ShadowProjection[i]);\n"
                        ,0x5c);
          FUN_1400532a0(param_3,
                        "\tfloat shadowFactor = PerformShadowMapping(projectedCoords, g_LFeature_ShadowProjectionTransform[i]);\n"
                        ,0x66);
          FUN_1400532a0(param_3,
                        "\tvec3 colorCookie = texSample2D(COOKIE_SAMPLER, projectedCoords.xy).rgb;\n"
                        ,0x49);
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LSpot_Color[i].rgb * colorCookie, g_LSpot_Color[i].w, g_LSpot_Exponent[i].x, specularTint, ambient, roughness, metallic, shadowFactor);\n"
                        ,0xd1);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar8);
      }
      uVar8 = uVar5;
      if (uVar10 != 0) {
        do {
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          if ((int)uVar4 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar4);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar4);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
          plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          FUN_140017240(&local_f8);
          FUN_140017240(&local_118);
          FUN_140017240(local_d8);
          FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LSpot_Origin[i].xyz - worldPos;\n",0x35);
          FUN_1400532a0(param_3,
                        "\tvec3 projectedCoords = CalculateProjectedCoords(worldPos, g_LFeature_ShadowProjection[i]);\n"
                        ,0x5c);
          FUN_1400532a0(param_3,
                        "\tvec3 colorCookie = texSample2D(COOKIE_SAMPLER, projectedCoords.xy).rgb;\n"
                        ,0x49);
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LSpot_Color[i].rgb * colorCookie, g_LSpot_Color[i].w, g_LSpot_Exponent[i].x, specularTint, ambient, roughness, metallic, 1.0);\n"
                        ,200);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar8 = uVar8 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar8 < uVar10);
      }
      uVar12 = uVar5;
      uVar8 = local_60;
      uVar10 = uVar4;
      if (uVar9 != 0) {
        do {
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          if ((int)uVar4 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar4);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar4);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
          plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          FUN_140017240(&local_f8);
          FUN_140017240(&local_118);
          FUN_140017240(local_d8);
          FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LSpot_Origin[i].xyz - worldPos;\n",0x35);
          FUN_1400532a0(param_3,
                        "\tfloat spotCookie = -dot(normalize(lightDelta), g_LSpot_Direction[i].xyz);\n"
                        ,0x4b);
          FUN_1400532a0(param_3,
                        "\tspotCookie = smoothstep(g_LSpot_Direction[i].w, g_LSpot_Origin[i].w, spotCookie);\n"
                        ,0x53);
          FUN_1400532a0(param_3,
                        "\tvec3 projectedCoords = CalculateProjectedCoords(worldPos, g_LFeature_ShadowProjection[i]);\n"
                        ,0x5c);
          FUN_1400532a0(param_3,
                        "\tfloat shadowFactor = PerformShadowMapping(projectedCoords, g_LFeature_ShadowProjectionTransform[i]);\n"
                        ,0x66);
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LSpot_Color[i].rgb * spotCookie, g_LSpot_Color[i].w, g_LSpot_Exponent[i].x, specularTint, ambient, roughness, metallic, shadowFactor);\n"
                        ,0xd0);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar12 = uVar12 + 1;
          uVar4 = uVar4 + 1;
          uVar8 = local_60;
          uVar10 = uVar4;
        } while (uVar12 < uVar9);
      }
      for (; uVar9 = local_60, uVar4 < local_60; uVar4 = uVar4 + 1) {
        local_60 = uVar8;
        FUN_1400532a0(param_3,&DAT_14048c06c,2);
        if ((int)uVar4 < 0) {
          lVar16 = FUN_140053cb0(local_a3,-uVar4);
          *(undefined1 *)(lVar16 + -1) = 0x2d;
          lVar16 = lVar16 + -1;
        }
        else {
          lVar16 = FUN_140053cb0(local_a3,uVar4);
        }
        FUN_140053d10(local_d8,lVar16,local_a3);
        uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
        plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
        local_e8 = (undefined8 ****)plVar15[2];
        ppppuStack_e0 = (undefined8 ****)plVar15[3];
        local_f8 = (undefined8 *****)*plVar15;
        ppppuStack_f0 = (undefined8 ****)plVar15[1];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        ppppppuVar18 = &local_f8;
        if ((undefined8 *****)0xf < ppppuStack_e0) {
          ppppppuVar18 = (undefined8 ******)local_f8;
        }
        FUN_1400532a0(param_3,ppppppuVar18,local_e8);
        FUN_140017240(&local_f8);
        FUN_140017240(&local_118);
        FUN_140017240(local_d8);
        FUN_1400532a0(param_3,"\tvec3 lightDelta = g_LSpot_Origin[i].xyz - worldPos;\n",0x35);
        FUN_1400532a0(param_3,
                      "\tfloat spotCookie = -dot(normalize(lightDelta), g_LSpot_Direction[i].xyz);\n"
                      ,0x4b);
        FUN_1400532a0(param_3,
                      "\tspotCookie = smoothstep(g_LSpot_Direction[i].w, g_LSpot_Origin[i].w, spotCookie);\n"
                      ,0x53);
        FUN_1400532a0(param_3,
                      "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LSpot_Color[i].rgb * spotCookie, g_LSpot_Color[i].w, g_LSpot_Exponent[i].x, specularTint, ambient, roughness, metallic, 1.0);\n"
                      ,199);
        FUN_1400532a0(param_3,&DAT_14048797c,2);
        uVar8 = local_60;
        local_60 = uVar9;
      }
      local_60 = uVar8;
      uVar4 = uVar5;
      if (uVar6 != 0) {
        do {
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          if ((int)uVar4 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar4);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar4);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          uVar14 = FUN_14002fd20(&local_118,"\tconst uint i = ",local_d8);
          plVar15 = (longlong *)FUN_1400532a0(uVar14,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          FUN_140017240(&local_f8);
          FUN_140017240(&local_118);
          FUN_140017240(local_d8);
          FUN_1400532a0(param_3,
                        "\tvec3 lightDelta = PointSegmentDelta(worldPos, g_LTube_OriginA[i].xyz, g_LTube_OriginB[i].xyz);\n"
                        ,0x60);
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadow(normal, lightDelta, viewVector, color, g_LTube_Color[i].rgb, g_LTube_Color[i].w, g_LTube_OriginA[i].w, specularTint, ambient, roughness, metallic, 1.0);\n"
                        ,0xb9);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
      local_res8 = (undefined1)uVar7;
      if (uVar11 != 0) {
        do {
          ppppppuVar18 = (undefined8 ******)0x0;
          FUN_1400532a0(param_3,&DAT_14048c06c,2);
          if ((int)uVar5 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar5);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar5);
          }
          FUN_140053d10(local_58,lVar16,local_a3);
          if (uStack_40 - local_48 < 0x10) {
            ppppppuVar18 = (undefined8 ******)
                           FUN_1400380d0(local_58,0x10,local_48,0,"\tconst uint i = ",0x10);
          }
          else {
            ppppppuVar24 = local_58;
            if (0xf < uStack_40) {
              ppppppuVar24 = (undefined8 ******)local_58[0];
            }
            if (((undefined8 ******)0x14048c2a7 < ppppppuVar24) ||
               ((char *)((longlong)ppppppuVar24 + local_48) < "\tconst uint i = ")) {
              ppppppuVar18 = (undefined8 ******)&DAT_00000010;
            }
            else if ("\tconst uint i = " < ppppppuVar24) {
              ppppppuVar18 = ppppppuVar24 + -0x28091853;
            }
            lVar16 = local_48 + 1;
            local_48 = local_48 + 0x10;
            FUN_1404210f0(ppppppuVar24 + 2,ppppppuVar24,lVar16);
            FUN_1404210f0(ppppppuVar24,"\tconst uint i = ",ppppppuVar18);
            FUN_1404210f0((char *)((longlong)ppppppuVar18 + (longlong)ppppppuVar24),
                          ppppppuVar18 + 0x28091855,0x10 - (longlong)ppppppuVar18);
            ppppppuVar18 = local_58;
          }
          local_118 = *(uint *)ppppppuVar18;
          uStack_114 = *(uint *)((longlong)ppppppuVar18 + 4);
          uStack_110 = *(uint *)(ppppppuVar18 + 1);
          uStack_10c = *(uint *)((longlong)ppppppuVar18 + 0xc);
          local_108 = ppppppuVar18[2];
          ppppuStack_100 = ppppppuVar18[3];
          ppppppuVar18[2] = (undefined8 *****)0x0;
          ppppppuVar18[3] = (undefined8 *****)0xf;
          *(undefined1 *)ppppppuVar18 = 0;
          plVar15 = (longlong *)FUN_1400532a0(&local_118,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_e0 + 1);
            ppppppuVar18 = (undefined8 ******)local_f8;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              ppppppuVar18 = (undefined8 ******)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_e0 + 5);
            }
            thunk_FUN_14028af80(ppppppuVar18,pppppuVar21);
          }
          if ((undefined8 *****)0xf < ppppuStack_100) {
            lVar22 = CONCAT44(uStack_114,local_118);
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_100 + 1);
            lVar16 = lVar22;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              lVar16 = *(longlong *)(lVar22 + -8);
              if (0x1f < (lVar22 - lVar16) - 8U) goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_100 + 5);
            }
            thunk_FUN_14028af80(lVar16,pppppuVar21);
          }
          local_108 = (undefined8 *****)0x0;
          ppppuStack_100 = (undefined8 *****)0xf;
          local_118 = local_118 & 0xffffff00;
          if (0xf < uStack_40) {
            uVar19 = uStack_40 + 1;
            ppppppuVar18 = (undefined8 ******)local_58[0];
            if (0xfff < uVar19) {
              ppppppuVar18 = (undefined8 ******)local_58[0][-1];
              if ((char *)0x1f < (char *)((longlong)local_58[0] + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              uVar19 = uStack_40 + 0x28;
            }
            thunk_FUN_14028af80(ppppppuVar18,uVar19);
          }
          if ((int)uVar10 < 0) {
            lVar16 = FUN_140053cb0(local_a3,-uVar10);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar10);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          puVar17 = (uint *)FUN_140035e80(local_d8,0,"\tconst uint p1 = ",0x11);
          local_118 = *puVar17;
          uStack_114 = puVar17[1];
          uStack_110 = puVar17[2];
          uStack_10c = puVar17[3];
          local_108 = *(undefined8 *****)(puVar17 + 4);
          ppppuStack_100 = *(undefined8 *****)(puVar17 + 6);
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar17[6] = 0xf;
          puVar17[7] = 0;
          *(undefined1 *)puVar17 = 0;
          plVar15 = (longlong *)FUN_1400532a0(&local_118,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_e0 + 1);
            ppppppuVar18 = (undefined8 ******)local_f8;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              ppppppuVar18 = (undefined8 ******)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_e0 + 5);
            }
            thunk_FUN_14028af80(ppppppuVar18,pppppuVar21);
          }
          if ((undefined8 *****)0xf < ppppuStack_100) {
            lVar22 = CONCAT44(uStack_114,local_118);
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_100 + 1);
            lVar16 = lVar22;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              lVar16 = *(longlong *)(lVar22 + -8);
              if (0x1f < (lVar22 - lVar16) - 8U) goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_100 + 5);
            }
            thunk_FUN_14028af80(lVar16,pppppuVar21);
          }
          local_108 = (undefined8 *****)0x0;
          ppppuStack_100 = (undefined8 *****)0xf;
          local_118 = local_118 & 0xffffff00;
          if (0xf < local_c0) {
            uVar19 = local_c0 + 1;
            lVar16 = local_d8[0];
            if (0xfff < uVar19) {
              lVar16 = *(longlong *)(local_d8[0] + -8);
              if (0x1f < (local_d8[0] - lVar16) - 8U) goto LAB_14016b0cd;
              uVar19 = local_c0 + 0x28;
            }
            thunk_FUN_14028af80(lVar16,uVar19);
          }
          uVar4 = uVar10 + 1;
          if ((int)uVar4 < 0) {
            lVar16 = FUN_140053cb0(local_a3,~uVar10);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3,uVar4);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          puVar13 = (undefined8 *)FUN_140035e80(local_d8,0,"\tconst uint p2 = ",0x11);
          local_a0 = (undefined8 *****)*puVar13;
          uStack_98 = puVar13[1];
          local_90 = puVar13[2];
          uStack_88 = puVar13[3];
          puVar13[2] = 0;
          puVar13[3] = 0xf;
          *(undefined1 *)puVar13 = 0;
          if (uStack_88 - local_90 < 3) {
            ppppppuVar18 = (undefined8 ******)FUN_140053110(&local_a0,3,local_res8,&DAT_14048c068,3)
            ;
          }
          else {
            ppppppuVar18 = &local_a0;
            if (0xf < uStack_88) {
              ppppppuVar18 = (undefined8 ******)local_a0;
            }
            lVar16 = (longlong)ppppppuVar18 + local_90;
            local_90 = local_90 + 3;
            FUN_1404210f0(lVar16,&DAT_14048c068,3);
            *(undefined1 *)(lVar16 + 3) = 0;
            ppppppuVar18 = &local_a0;
          }
          local_e8 = ppppppuVar18[2];
          ppppuStack_e0 = ppppppuVar18[3];
          local_f8 = *ppppppuVar18;
          ppppuStack_f0 = ppppppuVar18[1];
          ppppppuVar18[2] = (undefined8 *****)0x0;
          ppppppuVar18[3] = (undefined8 *****)0xf;
          *(undefined1 *)ppppppuVar18 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_e0 + 1);
            ppppppuVar18 = (undefined8 ******)local_f8;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              ppppppuVar18 = (undefined8 ******)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_e0 + 5);
            }
            thunk_FUN_14028af80(ppppppuVar18,pppppuVar21);
          }
          if (0xf < uStack_88) {
            uVar19 = uStack_88 + 1;
            ppppppuVar18 = (undefined8 ******)local_a0;
            if (0xfff < uVar19) {
              ppppppuVar18 = (undefined8 ******)local_a0[-1];
              if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              uVar19 = uStack_88 + 0x28;
            }
            thunk_FUN_14028af80(ppppppuVar18,uVar19);
          }
          local_90 = 0;
          uStack_88 = 0xf;
          local_a0 = (undefined8 *****)((ulonglong)local_a0 & 0xffffffffffffff00);
          if (0xf < local_c0) {
            uVar19 = local_c0 + 1;
            lVar16 = local_d8[0];
            if (0xfff < uVar19) {
              lVar16 = *(longlong *)(local_d8[0] + -8);
              if (0x1f < (local_d8[0] - lVar16) - 8U) goto LAB_14016b0cd;
              uVar19 = local_c0 + 0x28;
            }
            thunk_FUN_14028af80(lVar16,uVar19);
          }
          if ((int)(uVar10 + 2) < 0) {
            lVar16 = FUN_140053cb0(local_a3,-2 - uVar10);
            *(undefined1 *)(lVar16 + -1) = 0x2d;
            lVar16 = lVar16 + -1;
          }
          else {
            lVar16 = FUN_140053cb0(local_a3);
          }
          FUN_140053d10(local_d8,lVar16,local_a3);
          puVar17 = (uint *)FUN_140035e80(local_d8,0,"\tconst uint p3 = ");
          local_118 = *puVar17;
          uStack_114 = puVar17[1];
          uStack_110 = puVar17[2];
          uStack_10c = puVar17[3];
          local_108 = *(undefined8 *****)(puVar17 + 4);
          ppppuStack_100 = *(undefined8 *****)(puVar17 + 6);
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar17[6] = 0xf;
          puVar17[7] = 0;
          *(undefined1 *)puVar17 = 0;
          plVar15 = (longlong *)FUN_1400532a0(&local_118,&DAT_14048c068,3);
          local_e8 = (undefined8 ****)plVar15[2];
          ppppuStack_e0 = (undefined8 ****)plVar15[3];
          local_f8 = (undefined8 *****)*plVar15;
          ppppuStack_f0 = (undefined8 ****)plVar15[1];
          plVar15[2] = 0;
          plVar15[3] = 0xf;
          *(undefined1 *)plVar15 = 0;
          ppppppuVar18 = &local_f8;
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            ppppppuVar18 = (undefined8 ******)local_f8;
          }
          FUN_1400532a0(param_3,ppppppuVar18,local_e8);
          if ((undefined8 *****)0xf < ppppuStack_e0) {
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_e0 + 1);
            ppppppuVar18 = (undefined8 ******)local_f8;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              ppppppuVar18 = (undefined8 ******)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppppuVar18)))
              goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_e0 + 5);
            }
            thunk_FUN_14028af80(ppppppuVar18,pppppuVar21);
          }
          if ((undefined8 *****)0xf < ppppuStack_100) {
            lVar22 = CONCAT44(uStack_114,local_118);
            pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_100 + 1);
            lVar16 = lVar22;
            if ((undefined8 *****)0xfff < pppppuVar21) {
              lVar16 = *(longlong *)(lVar22 + -8);
              if (0x1f < (lVar22 - lVar16) - 8U) goto LAB_14016b0cd;
              pppppuVar21 = (undefined8 *****)(ppppuStack_100 + 5);
            }
            thunk_FUN_14028af80(lVar16,pppppuVar21);
          }
          local_108 = (undefined8 *****)0x0;
          ppppuStack_100 = (undefined8 *****)0xf;
          local_118 = local_118 & 0xffffff00;
          if (0xf < local_c0) {
            uVar19 = local_c0 + 1;
            lVar16 = local_d8[0];
            if (0xfff < uVar19) {
              lVar16 = *(longlong *)(local_d8[0] + -8);
              if (0x1f < (local_d8[0] - lVar16) - 8U) goto LAB_14016b0cd;
              uVar19 = local_c0 + 0x28;
            }
            thunk_FUN_14028af80(lVar16,uVar19);
          }
          FUN_1400532a0(param_3,
                        "\tvec4 projectedCoords1 = CalculateProjectedCoordsCascades(worldPos, g_LFeature_ShadowProjection[p1]);\n"
                        ,0x66);
          FUN_1400532a0(param_3,
                        "\tvec4 projectedCoords2 = CalculateProjectedCoordsCascades(worldPos, g_LFeature_ShadowProjection[p2]);\n"
                        ,0x66);
          FUN_1400532a0(param_3,
                        "\tvec4 projectedCoords3 = CalculateProjectedCoordsCascades(worldPos, g_LFeature_ShadowProjection[p3]);\n"
                        ,0x66);
          FUN_1400532a0(param_3,
                        "\tprojectedCoords1.xyz = mix(projectedCoords1.xyz, projectedCoords2.xyz, projectedCoords1.w);\n"
                        ,0x5d);
          FUN_1400532a0(param_3,
                        "\tprojectedCoords1.xyz = mix(projectedCoords1.xyz, projectedCoords3.xyz, projectedCoords2.w);\n"
                        ,0x5d);
          FUN_1400532a0(param_3,
                        "\tvec4 uvTransforms = mix(g_LFeature_ShadowProjectionTransform[p1], g_LFeature_ShadowProjectionTransform[p2], projectedCoords1.w);\n"
                        ,0x82);
          FUN_1400532a0(param_3,
                        "\tuvTransforms = mix(uvTransforms, g_LFeature_ShadowProjectionTransform[p3], projectedCoords2.w);\n"
                        ,0x61);
          FUN_1400532a0(param_3,
                        "\tfloat shadowFactor = max(projectedCoords3.w, PerformShadowMapping(projectedCoords1.xyz, uvTransforms));\n"
                        ,0x69);
          FUN_1400532a0(param_3,
                        "\tlight += ComputePBRLightShadowInfinite(normal, g_LDirectional_Direction[i].xyz, viewVector, color, g_LDirectional_Color[i].rgb, specularTint, ambient, roughness, metallic, shadowFactor);\n"
                        ,0xbc);
          FUN_1400532a0(param_3,&DAT_14048797c,2);
          uVar5 = uVar5 + 1;
          uVar10 = uVar4;
        } while (uVar5 < uVar11);
      }
      for (; uVar5 < uVar7; uVar5 = uVar5 + 1) {
        FUN_1400532a0(param_3,&DAT_14048c06c,2);
        if ((int)uVar5 < 0) {
          lVar16 = FUN_140053cb0(local_a3,-uVar5);
          *(undefined1 *)(lVar16 + -1) = 0x2d;
          lVar16 = lVar16 + -1;
        }
        else {
          lVar16 = FUN_140053cb0(local_a3,uVar5);
        }
        FUN_140053d10(local_d8,lVar16,local_a3);
        puVar13 = (undefined8 *)FUN_140035e80(local_d8,0,"\tconst uint i = ",0x10);
        local_80 = (undefined8 *****)*puVar13;
        uStack_78 = puVar13[1];
        local_70 = puVar13[2];
        uStack_68 = puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        if (uStack_68 - local_70 < 3) {
          ppppppuVar18 = (undefined8 ******)FUN_140053110(&local_80,3,local_res8,&DAT_14048c068,3);
        }
        else {
          ppppppuVar18 = &local_80;
          if (0xf < uStack_68) {
            ppppppuVar18 = (undefined8 ******)local_80;
          }
          lVar16 = (longlong)ppppppuVar18 + local_70;
          local_70 = local_70 + 3;
          FUN_1404210f0(lVar16,&DAT_14048c068,3);
          *(undefined1 *)(lVar16 + 3) = 0;
          ppppppuVar18 = &local_80;
        }
        local_e8 = ppppppuVar18[2];
        ppppuStack_e0 = ppppppuVar18[3];
        local_f8 = *ppppppuVar18;
        ppppuStack_f0 = ppppppuVar18[1];
        ppppppuVar18[2] = (undefined8 *****)0x0;
        ppppppuVar18[3] = (undefined8 *****)0xf;
        *(undefined1 *)ppppppuVar18 = 0;
        ppppppuVar18 = &local_f8;
        if ((undefined8 *****)0xf < ppppuStack_e0) {
          ppppppuVar18 = (undefined8 ******)local_f8;
        }
        FUN_1400532a0(param_3,ppppppuVar18,local_e8);
        if ((undefined8 *****)0xf < ppppuStack_e0) {
          pppppuVar21 = (undefined8 *****)((longlong)ppppuStack_e0 + 1);
          ppppppuVar18 = (undefined8 ******)local_f8;
          if ((undefined8 *****)0xfff < pppppuVar21) {
            ppppppuVar18 = (undefined8 ******)local_f8[-1];
            if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppppuVar18))) {
LAB_14016b0cd:
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pppppuVar21 = (undefined8 *****)(ppppuStack_e0 + 5);
          }
          thunk_FUN_14028af80(ppppppuVar18,pppppuVar21);
        }
        if (0xf < uStack_68) {
          uVar19 = uStack_68 + 1;
          ppppppuVar18 = (undefined8 ******)local_80;
          if (0xfff < uVar19) {
            ppppppuVar18 = (undefined8 ******)local_80[-1];
            if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppppuVar18)))
            goto LAB_14016b0cd;
            uVar19 = uStack_68 + 0x28;
          }
          thunk_FUN_14028af80(ppppppuVar18,uVar19);
        }
        local_70 = 0;
        uStack_68 = 0xf;
        local_80 = (undefined8 *****)((ulonglong)local_80 & 0xffffffffffffff00);
        if (0xf < local_c0) {
          uVar19 = local_c0 + 1;
          lVar16 = local_d8[0];
          if (0xfff < uVar19) {
            lVar16 = *(longlong *)(local_d8[0] + -8);
            if (0x1f < (local_d8[0] - lVar16) - 8U) goto LAB_14016b0cd;
            uVar19 = local_c0 + 0x28;
          }
          thunk_FUN_14028af80(lVar16,uVar19);
        }
        FUN_1400532a0(param_3,
                      "\tlight += ComputePBRLightShadowInfinite(normal, g_LDirectional_Direction[i].xyz, viewVector, color, g_LDirectional_Color[i].rgb, specularTint, ambient, roughness, metallic, 1.0);\n"
                      ,0xb3);
        FUN_1400532a0(param_3,&DAT_14048797c,2);
      }
      FUN_1400532a0(param_3,"\treturn light;\n}\n",0x11);
    }
  }
  return;
}

