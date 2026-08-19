// Function: FUN_1401a5d10
// Addr: 1401a5d10
// Size: 3568 bytes


/* WARNING: Removing unreachable block (ram,0x0001401a5ea6) */
/* WARNING: Removing unreachable block (ram,0x0001401a65c9) */

longlong FUN_1401a5d10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 ****ppppuVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
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
  ulonglong uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 ***local_a8 [3];
  ulonglong local_90;
  byte local_88 [8];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  
  local_res20 = 0;
  local_e8 = 0;
  FUN_1401a6d30(param_1,param_2,&local_res20,&local_e8);
  uVar26 = 0xcbf29ce484222325;
  lVar17 = local_res20;
  if (param_3 != (longlong *)0x0) {
    puVar2 = *(undefined8 **)(local_e8 + 8);
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      lVar17 = *param_3;
      if ((ulonglong)puVar3[9] < 0x10) {
        puVar19 = puVar3 + 6;
      }
      else {
        puVar19 = (undefined8 *)puVar3[6];
      }
      uVar18 = 0;
      uVar25 = 0xcbf29ce484222325;
      if (puVar3[8] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar19 + uVar18);
          uVar18 = uVar18 + 1;
          uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
        } while (uVar18 < (ulonglong)puVar3[8]);
      }
      lVar12 = func_0x000140011170(lVar17,&local_e8,puVar3 + 6,uVar25);
      if ((*(longlong *)(lVar12 + 8) == 0) ||
         (*(longlong *)(lVar12 + 8) == *(longlong *)(lVar17 + 8))) {
        uVar11 = *(undefined4 *)(puVar3 + 10);
        plVar13 = (longlong *)FUN_14015afd0(lVar17,&local_108,puVar3 + 6);
        *(undefined4 *)(*plVar13 + 0x30) = uVar11;
      }
    }
    lVar17 = *param_3;
    local_88[0] = (char)s_LIGHTING_140486a00._0_8_;
    local_88[1] = SUB81(s_LIGHTING_140486a00._0_8_,1);
    local_88[2] = SUB81(s_LIGHTING_140486a00._0_8_,2);
    local_88[3] = SUB81(s_LIGHTING_140486a00._0_8_,3);
    local_88[4] = SUB81(s_LIGHTING_140486a00._0_8_,4);
    local_88[5] = SUB81(s_LIGHTING_140486a00._0_8_,5);
    local_88[6] = SUB81(s_LIGHTING_140486a00._0_8_,6);
    local_88[7] = SUB81(s_LIGHTING_140486a00._0_8_,7);
    uStack_80 = 0;
    local_78 = 8;
    uVar18 = 0xcbf29ce484222325;
    local_70 = 0xf;
    uVar25 = 0;
    do {
      pbVar1 = local_88 + uVar25;
      uVar25 = uVar25 + 1;
      uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
    } while (uVar25 < 8);
    uVar18 = uVar18 & *(ulonglong *)(lVar17 + 0x30);
    lVar12 = *(longlong *)(lVar17 + 8);
    lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 8 + uVar18 * 0x10);
    if (lVar21 != lVar12) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + uVar18 * 0x10);
      while( true ) {
        plVar13 = (longlong *)(lVar21 + 0x10);
        if (0xf < *(ulonglong *)(lVar21 + 0x28)) {
          plVar13 = (longlong *)*plVar13;
        }
        if ((*(longlong *)(lVar21 + 0x20) == 8) &&
           (iVar10 = func_0x0001404210c0(local_88,plVar13,8), iVar10 == 0)) goto LAB_1401a5ee0;
        if (lVar21 == lVar17) break;
        lVar21 = *(longlong *)(lVar21 + 8);
      }
    }
    lVar21 = 0;
LAB_1401a5ee0:
    if (lVar21 == 0) {
      lVar21 = lVar12;
    }
    if ((lVar21 != *(longlong *)(*param_3 + 8)) && (*(int *)(lVar21 + 0x30) != 0)) {
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xc;
      local_108 = (char)s_LIGHTS_POINT_140487700._0_8_;
      cStack_107 = SUB81(s_LIGHTS_POINT_140487700._0_8_,1);
      cStack_106 = SUB81(s_LIGHTS_POINT_140487700._0_8_,2);
      uStack_105 = SUB84(s_LIGHTS_POINT_140487700._0_8_,3);
      cStack_101 = SUB81(s_LIGHTS_POINT_140487700._0_8_,7);
      uStack_f0 = 0xf;
      cStack_100 = (char)s_LIGHTS_POINT_140487700._8_4_;
      cStack_ff = SUB41(s_LIGHTS_POINT_140487700._8_4_,1);
      cStack_fe = SUB41(s_LIGHTS_POINT_140487700._8_4_,2);
      cStack_fd = SUB41(s_LIGHTS_POINT_140487700._8_4_,3);
      cStack_fc = '\0';
      puVar14 = (uint *)FUN_14015a510(*param_3,&local_108);
      *puVar14 = uVar24 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      local_108 = (char)s_LIGHTS_SPOT_140487748._0_7_;
      cStack_107 = SUB71(s_LIGHTS_SPOT_140487748._0_7_,1);
      cStack_106 = SUB71(s_LIGHTS_SPOT_140487748._0_7_,2);
      uStack_105 = SUB74(s_LIGHTS_SPOT_140487748._0_7_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_101 = (char)s_LIGHTS_SPOT_140487748._7_4_;
      cStack_100 = SUB41(s_LIGHTS_SPOT_140487748._7_4_,1);
      cStack_ff = SUB41(s_LIGHTS_SPOT_140487748._7_4_,2);
      cStack_fe = SUB41(s_LIGHTS_SPOT_140487748._7_4_,3);
      cStack_fd = '\0';
      puVar14 = (uint *)FUN_14015a510(*param_3,&local_108);
      *puVar14 = uVar24 >> 4 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
      local_108 = (char)s_LIGHTS_TUBE_140487840._0_7_;
      cStack_107 = SUB71(s_LIGHTS_TUBE_140487840._0_7_,1);
      cStack_106 = SUB71(s_LIGHTS_TUBE_140487840._0_7_,2);
      uStack_105 = SUB74(s_LIGHTS_TUBE_140487840._0_7_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_101 = (char)s_LIGHTS_TUBE_140487840._7_4_;
      cStack_100 = SUB41(s_LIGHTS_TUBE_140487840._7_4_,1);
      cStack_ff = SUB41(s_LIGHTS_TUBE_140487840._7_4_,2);
      cStack_fe = SUB41(s_LIGHTS_TUBE_140487840._7_4_,3);
      cStack_fd = '\0';
      puVar14 = (uint *)FUN_14015a510(*param_3,&local_108);
      *puVar14 = uVar24 >> 8 & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      lVar17 = *param_3;
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
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
      func_0x000140017550(&local_108,"LIGHTS_DIRECTIONAL",0x12);
      puVar14 = (uint *)FUN_14015a510(lVar17,&local_108);
      *puVar14 = uVar24 >> 0xc & 0xf;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      lVar17 = *param_3;
      local_f8 = 0;
      uStack_f0 = 0;
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x121c);
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
      func_0x000140017550(&local_108,"LIGHTS_SPOT_SHADOW_COOKIE",0x19);
      puVar14 = (uint *)FUN_14015a510(lVar17,&local_108);
      *puVar14 = uVar24 >> 0x14 & 3;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      local_f8 = 0;
      uStack_f0 = 0;
      lVar17 = *param_3;
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
      func_0x000140017550(&local_108,"LIGHTS_SPOT_SHADOW",0x12);
      puVar14 = (uint *)FUN_14015a510(lVar17,&local_108);
      *puVar14 = uVar24 >> 0x10 & 3;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      lVar17 = *param_3;
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
      func_0x000140017550(&local_108,"LIGHTS_SPOT_COOKIE",0x12);
      puVar14 = (uint *)FUN_14015a510(lVar17,&local_108);
      *puVar14 = uVar24 >> 0x12 & 3;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar26 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar26) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar26 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar26);
      }
      lVar17 = *param_3;
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
      func_0x000140017550(&local_108,"LIGHTS_DIRECTIONAL_SHADOW",0x19);
      puVar14 = (uint *)FUN_14015a510(lVar17,&local_108);
      *puVar14 = uVar24 >> 0x16 & 3;
                    /* WARNING: Subroutine does not return */
      FUN_140017310(&local_108);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 10 & 1) != 0) {
      local_108 = (char)s_SCENE_ORTHO_14048eee8._0_7_;
      cStack_107 = SUB71(s_SCENE_ORTHO_14048eee8._0_7_,1);
      cStack_106 = SUB71(s_SCENE_ORTHO_14048eee8._0_7_,2);
      uStack_105 = SUB74(s_SCENE_ORTHO_14048eee8._0_7_,3);
      cStack_101 = (char)s_SCENE_ORTHO_14048eee8._7_4_;
      cStack_100 = SUB41(s_SCENE_ORTHO_14048eee8._7_4_,1);
      cStack_ff = SUB41(s_SCENE_ORTHO_14048eee8._7_4_,2);
      cStack_fe = SUB41(s_SCENE_ORTHO_14048eee8._7_4_,3);
      cStack_fc = '\0';
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xb;
      uStack_f0 = 0xf;
      cStack_fd = '\0';
      puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        lVar17 = lVar12;
        if ((0xfff < uStack_f0 + 1) &&
           (lVar17 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar17) - 8U)) goto LAB_1401a6d26;
        func_0x00014028b040(lVar17);
      }
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) & 0x1800000) != 0) {
      lVar17 = *param_3;
      local_b8 = 3;
      uStack_c0 = 0;
      uVar18 = 0xcbf29ce484222325;
      local_c8 = (ulonglong)(uint3)DAT_14048eef4;
      uVar25 = 0;
      local_b0 = 0xf;
      do {
        pbVar1 = (byte *)((longlong)&local_c8 + uVar25);
        uVar25 = uVar25 + 1;
        uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
      } while (uVar25 < 3);
      uVar18 = uVar18 & *(ulonglong *)(lVar17 + 0x30);
      lVar12 = *(longlong *)(lVar17 + 8);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 8 + uVar18 * 0x10);
      if (lVar21 != lVar12) {
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + uVar18 * 0x10);
        while( true ) {
          plVar13 = (longlong *)(lVar21 + 0x10);
          if (0xf < *(ulonglong *)(lVar21 + 0x28)) {
            plVar13 = (longlong *)*plVar13;
          }
          if ((*(longlong *)(lVar21 + 0x20) == 3) &&
             (iVar10 = func_0x0001404210c0(&local_c8,plVar13,3), iVar10 == 0)) goto LAB_1401a665c;
          if (lVar21 == lVar17) break;
          lVar21 = *(longlong *)(lVar21 + 8);
        }
      }
      lVar21 = 0;
LAB_1401a665c:
      if (lVar21 == 0) {
        lVar21 = lVar12;
      }
      if ((lVar21 != *(longlong *)(*param_3 + 8)) && (*(int *)(lVar21 + 0x30) != 0)) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0x17 & 1) != 0) {
          local_f8 = 8;
          cStack_ff = 0;
          cStack_fe = 0;
          cStack_fd = 0;
          cStack_fc = 0;
          uStack_fb = 0;
          uStack_fa = 0;
          local_108 = (char)s_FOG_DIST_14048eef8._0_8_;
          cStack_107 = SUB81(s_FOG_DIST_14048eef8._0_8_,1);
          cStack_106 = SUB81(s_FOG_DIST_14048eef8._0_8_,2);
          uStack_105 = SUB84(s_FOG_DIST_14048eef8._0_8_,3);
          cStack_101 = SUB81(s_FOG_DIST_14048eef8._0_8_,7);
          cStack_100 = 0;
          uStack_f0 = 0xf;
          puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
          *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_140017310(&local_108);
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0x18 & 1) != 0) {
          cStack_fd = 0;
          cStack_fc = 0;
          uStack_fb = 0;
          uStack_fa = 0;
          local_f8 = 10;
          local_108 = (char)s_FOG_HEIGHT_14048ef48._0_8_;
          cStack_107 = SUB81(s_FOG_HEIGHT_14048ef48._0_8_,1);
          cStack_106 = SUB81(s_FOG_HEIGHT_14048ef48._0_8_,2);
          uStack_105 = SUB84(s_FOG_HEIGHT_14048ef48._0_8_,3);
          cStack_101 = SUB81(s_FOG_HEIGHT_14048ef48._0_8_,7);
          uStack_f0 = 0xf;
          cStack_100 = (char)s_FOG_HEIGHT_14048ef48._8_2_;
          cStack_ff = SUB21(s_FOG_HEIGHT_14048ef48._8_2_,1);
          cStack_fe = 0;
          puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
          *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_140017310(&local_108);
        }
      }
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x118) & 2) != 0) {
      uStack_fa = 0;
      cStack_100 = (char)s_BACKBUFFER_MS_140487b00._8_4_;
      cStack_ff = SUB41(s_BACKBUFFER_MS_140487b00._8_4_,1);
      cStack_fe = SUB41(s_BACKBUFFER_MS_140487b00._8_4_,2);
      cStack_fd = SUB41(s_BACKBUFFER_MS_140487b00._8_4_,3);
      cStack_fc = s_BACKBUFFER_MS_140487b00[0xc];
      local_f8 = 0xd;
      uStack_f0 = 0xf;
      local_108 = (char)s_BACKBUFFER_MS_140487b00._0_8_;
      cStack_107 = SUB81(s_BACKBUFFER_MS_140487b00._0_8_,1);
      cStack_106 = SUB81(s_BACKBUFFER_MS_140487b00._0_8_,2);
      uStack_105 = SUB84(s_BACKBUFFER_MS_140487b00._0_8_,3);
      cStack_101 = SUB81(s_BACKBUFFER_MS_140487b00._0_8_,7);
      uStack_fb = 0;
      puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar12 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar18 = uStack_f0 + 1;
        lVar17 = lVar12;
        if (0xfff < uVar18) {
          lVar17 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
          uVar18 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar17,uVar18);
      }
    }
    lVar17 = local_res20;
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
      local_108 = (char)DAT_14048ef54;
      cStack_107 = (char)((uint)DAT_14048ef54 >> 8);
      cStack_106 = (char)((uint)DAT_14048ef54 >> 0x10);
      local_f8 = 3;
      uStack_f0 = 0xf;
      uStack_105 = 0;
      puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar21 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar18 = uStack_f0 + 1;
        lVar12 = lVar21;
        if (0xfff < uVar18) {
          lVar12 = *(longlong *)(lVar21 + -8);
          if (0x1f < (lVar21 - lVar12) - 8U) goto LAB_1401a6d26;
          uVar18 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar12,uVar18);
      }
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) >> 0xc & 1) != 0) {
      uStack_fb = 0;
      uStack_fa = 0;
      local_f8 = 0xc;
      local_108 = (char)s_REVERSEDEPTH_14048ef58._0_8_;
      cStack_107 = SUB81(s_REVERSEDEPTH_14048ef58._0_8_,1);
      cStack_106 = SUB81(s_REVERSEDEPTH_14048ef58._0_8_,2);
      uStack_105 = SUB84(s_REVERSEDEPTH_14048ef58._0_8_,3);
      cStack_101 = SUB81(s_REVERSEDEPTH_14048ef58._0_8_,7);
      uStack_f0 = 0xf;
      cStack_100 = (char)s_REVERSEDEPTH_14048ef58._8_4_;
      cStack_ff = SUB41(s_REVERSEDEPTH_14048ef58._8_4_,1);
      cStack_fe = SUB41(s_REVERSEDEPTH_14048ef58._8_4_,2);
      cStack_fd = SUB41(s_REVERSEDEPTH_14048ef58._8_4_,3);
      cStack_fc = '\0';
      puVar15 = (undefined4 *)FUN_14015a510(*param_3,&local_108);
      *puVar15 = 1;
      if (0xf < uStack_f0) {
        lVar21 = CONCAT17(cStack_101,
                          CONCAT43(uStack_105,CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
        uVar18 = uStack_f0 + 1;
        lVar12 = lVar21;
        if (0xfff < uVar18) {
          lVar12 = *(longlong *)(lVar21 + -8);
          if (0x1f < (lVar21 - lVar12) - 8U) goto LAB_1401a6d26;
          uVar18 = uStack_f0 + 0x28;
        }
        func_0x00014028b040(lVar12,uVar18);
      }
    }
    if (param_3[1] != 0) {
      uVar18 = 0;
      do {
        lVar12 = *(longlong *)(param_3[1] + uVar18 * 8);
        lVar21 = *(longlong *)(lVar17 + 8);
        uVar25 = ((((uVar18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar18 >> 8 & 0xff) *
                   0x100000001b3 ^ uVar18 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar18 >> 0x18) *
                 0x100000001b3 & *(ulonglong *)(lVar17 + 0x30);
        lVar22 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 8 + uVar25 * 0x10);
        if (lVar22 == lVar21) {
LAB_1401a69c4:
          lVar22 = 0;
        }
        else {
          iVar10 = *(int *)(lVar22 + 0x10);
          while ((int)uVar18 != iVar10) {
            if (lVar22 == *(longlong *)(*(longlong *)(lVar17 + 0x18) + uVar25 * 0x10))
            goto LAB_1401a69c4;
            lVar22 = *(longlong *)(lVar22 + 8);
            iVar10 = *(int *)(lVar22 + 0x10);
          }
        }
        if (lVar22 == 0) {
          lVar22 = lVar21;
        }
        if (lVar12 == 0) {
          if (((lVar22 != lVar21) && (*(char *)(lVar22 + 0x80) != '\0')) &&
             (*(longlong *)(lVar22 + 0x30) != 0)) {
            plVar13 = (longlong *)(lVar22 + 0x20);
            if (0xf < *(ulonglong *)(lVar22 + 0x38)) {
              plVar13 = (longlong *)*plVar13;
            }
            lVar12 = FUN_14014d060(*(longlong *)(param_1 + 0x80) + 0x1520,plVar13,
                                   CONCAT71((int7)(uVar18 >> 8),1));
            if (lVar12 != 0) goto LAB_1401a6a23;
          }
        }
        else {
LAB_1401a6a23:
          if ((lVar22 != *(longlong *)(lVar17 + 8)) && (*(char *)(lVar22 + 0x80) != '\0')) {
            uVar11 = *(undefined4 *)(lVar12 + 0x18);
            lVar17 = *param_3;
            uVar16 = func_0x000140053f10(local_68,uVar18);
            uVar16 = FUN_14002fdf0(&local_e8,&DAT_14048ef40,uVar16);
            puVar15 = (undefined4 *)func_0x000140053370(uVar16,"FORMAT",6);
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
            puVar15 = (undefined4 *)FUN_14015a510(lVar17,&local_108);
            *puVar15 = uVar11;
            if (0xf < uStack_f0) {
              lVar12 = CONCAT17(cStack_101,
                                CONCAT43(uStack_105,
                                         CONCAT12(cStack_106,CONCAT11(cStack_107,local_108))));
              uVar26 = uStack_f0 + 1;
              lVar17 = lVar12;
              if (0xfff < uVar26) {
                lVar17 = *(longlong *)(lVar12 + -8);
                if (0x1f < (lVar12 - lVar17) - 8U) goto LAB_1401a6d26;
                uVar26 = uStack_f0 + 0x28;
              }
              func_0x00014028b040(lVar17,uVar26);
            }
            local_f8 = 0;
            uStack_f0 = 0xf;
            local_108 = '\0';
                    /* WARNING: Subroutine does not return */
            FUN_140017310(&local_e8);
          }
        }
        uVar24 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar24;
      } while ((int)uVar24 < 10);
    }
  }
  uVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1518) + 0x30))();
  FUN_14016ca60(local_a8,uVar11,param_2,param_3,lVar17);
  uVar18 = local_90;
  pppuVar8 = local_a8[0];
  ppppuVar23 = local_a8;
  if (0xf < local_90) {
    ppppuVar23 = (undefined8 ****)local_a8[0];
  }
  uVar25 = func_0x000140421ed0(ppppuVar23);
  uVar20 = 0;
  if (uVar25 != 0) {
    do {
      pbVar1 = (byte *)(uVar20 + (longlong)ppppuVar23);
      uVar20 = uVar20 + 1;
      uVar26 = (uVar26 ^ *pbVar1) * 0x100000001b3;
    } while (uVar20 < uVar25);
  }
  uVar26 = uVar26 & *(ulonglong *)(param_1 + 0x70);
  lVar17 = *(longlong *)(param_1 + 0x48);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8 + uVar26 * 0x10);
  if (lVar12 == lVar17) {
LAB_1401a6bfb:
    lVar12 = 0;
  }
  else {
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar26 * 0x10);
    cVar9 = FUN_14000d0e0(lVar12 + 0x10,ppppuVar23);
    while (cVar9 == '\0') {
      if (lVar12 == lVar21) goto LAB_1401a6bfb;
      lVar12 = *(longlong *)(lVar12 + 8);
      cVar9 = FUN_14000d0e0(lVar12 + 0x10,ppppuVar23);
    }
  }
  if ((lVar12 == 0) || (lVar12 == lVar17)) {
    lVar17 = FUN_1401a7420(param_1,param_2,param_3);
    if (lVar17 == 0) {
      lVar17 = FUN_1401a7420(param_1,"error",0);
    }
    local_d8 = 0;
    ppppuVar23 = local_a8;
    if (0xf < local_90) {
      ppppuVar23 = (undefined8 ****)local_a8[0];
    }
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uVar16 = func_0x000140421ed0(ppppuVar23);
    func_0x000140017550(&local_e8,ppppuVar23,uVar16);
    plVar13 = (longlong *)func_0x0001401a76d0(param_1 + 0x40,&local_108,&local_e8);
    *(longlong *)(*plVar13 + 0x30) = lVar17;
    if (0xf < uStack_d0) {
      uVar26 = uStack_d0 + 1;
      lVar12 = local_e8;
      if (0xfff < uVar26) {
        lVar12 = *(longlong *)(local_e8 + -8);
        if (0x1f < (local_e8 - lVar12) - 8U) goto LAB_1401a6d26;
        uVar26 = uStack_d0 + 0x28;
      }
      func_0x00014028b040(lVar12,uVar26);
    }
  }
  else {
    lVar17 = *(longlong *)(lVar12 + 0x30);
    local_a8[0] = pppuVar8;
    local_90 = uVar18;
  }
  if (local_90 < 0x10) {
    return lVar17;
  }
  uVar26 = local_90 + 1;
  ppppuVar23 = (undefined8 ****)local_a8[0];
  if (0xfff < uVar26) {
    ppppuVar23 = (undefined8 ****)local_a8[0][-1];
    if (0x1f < (ulonglong)((longlong)local_a8[0] + (-8 - (longlong)ppppuVar23))) {
LAB_1401a6d26:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      pcVar4 = (code *)swi(3);
      lVar17 = (*pcVar4)();
      return lVar17;
    }
    uVar26 = local_90 + 0x28;
  }
  lVar17 = func_0x00014028b040(ppppuVar23,uVar26);
  return lVar17;
}

