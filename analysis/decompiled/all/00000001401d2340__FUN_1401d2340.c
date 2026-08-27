// Function: FUN_1401d2340
// Addr: 1401d2340
// Size: 4868 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d2340(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong lVar17;
  void *pvVar18;
  ulonglong uVar19;
  undefined1 **ppuVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  longlong *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  uint unaff_ESI;
  int iVar27;
  undefined8 uVar28;
  byte bVar29;
  longlong *plVar30;
  undefined8 extraout_XMM0_Qa;
  bool local_res20;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [40];
  undefined7 local_128;
  char cStack_121;
  undefined2 uStack_120;
  char cStack_11e;
  char cStack_11d;
  char cStack_11c;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  undefined8 local_118;
  longlong *local_110;
  int local_108;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar26 = auStack_158;
  FUN_1401d3650(param_1,param_3);
  lVar17 = *param_1;
  pcVar25 = (char *)0x0;
  local_68 = 0;
  if ((param_2[2] & 0x10000) != 0) {
    pcVar25 = "genericropeparticle";
  }
  local_70 = (longlong *)FUN_14028af20(0x38);
  local_50 = 0;
  local_48 = 7;
  *local_70 = (longlong)local_70;
  local_70[1] = (longlong)local_70;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 8;
  local_78[0] = 0x3f800000;
  FUN_140011f50(&local_60,0x10,local_70);
  puVar15 = param_2 + 0xe;
  if (0xf < *(ulonglong *)(param_2 + 0x14)) {
    puVar15 = *(uint **)puVar15;
  }
  puVar11 = (undefined1 *)FUN_140150110(lVar17 + 0x1630,puVar15,local_78,pcVar25);
  local_a8 = puVar11;
  if (local_60 == 0) {
LAB_1401d2457:
    plVar30 = local_70;
    *(undefined8 *)local_70[1] = 0;
    puVar7 = (undefined8 *)*local_70;
    while (puVar7 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar7;
      FUN_140017240(puVar7 + 2);
      thunk_FUN_14028af80(puVar7,0x38);
      puVar7 = puVar3;
      puVar11 = local_a8;
    }
    thunk_FUN_14028af80(plVar30,0x38);
    pcVar25 = *(char **)(param_2 + 0x22);
    if (pcVar25 == (char *)0x0) {
      return;
    }
    if (puVar11 == (undefined1 *)0x0) {
      return;
    }
    if (*param_2 == 0) {
      return;
    }
    uVar22 = param_2[2];
    lVar17 = *(longlong *)(puVar11 + 0xd0);
    if (((uVar22 & 2) != 0) || (local_88 = 1, param_2[0xc] != 0)) {
      local_88 = 0;
    }
    if (lVar17 == 0) {
      local_108 = 0;
      local_res20 = false;
LAB_1401d251f:
      bVar6 = false;
    }
    else {
      local_108 = *(int *)(lVar17 + 0x18);
      local_res20 = *(uint *)(lVar17 + 0x2c) < *(uint *)(lVar17 + 0x20);
      if (3 < local_108 - 8U) goto LAB_1401d251f;
      bVar6 = true;
    }
    unaff_ESI = 0;
    pcVar23 = pcVar25;
    puVar8 = auStack_158;
    local_b4 = unaff_ESI;
    if (*pcVar25 != '\0') {
      do {
        cVar1 = *pcVar23;
        if (cVar1 == '\x01') {
          if ((uVar22 >> 0x18 & 1) != 0) goto LAB_1401d2559;
          unaff_ESI = unaff_ESI | 1;
        }
        else if (cVar1 == '\x02') {
LAB_1401d2559:
          unaff_ESI = unaff_ESI | 2;
        }
        else if (cVar1 == '\x03') {
          unaff_ESI = unaff_ESI | 8;
        }
        else if (cVar1 == '\x04') {
          unaff_ESI = unaff_ESI | 4;
        }
        pcVar23 = pcVar23 + *(ushort *)(pcVar23 + 2);
      } while (*pcVar23 != '\0');
      local_b8 = unaff_ESI & 2;
      plVar30 = (longlong *)(puVar11 + 0x200);
      bVar29 = (byte)(uVar22 >> 0x13);
      local_b4 = local_b8;
      uVar21 = local_b8;
LAB_1401d2590:
      cVar1 = *pcVar25;
      if (cVar1 == '\x01') {
        if (uVar21 == 0) {
          if (!bVar6 && *(int *)(pcVar25 + 0xc) == 0) {
            *(undefined1 **)(pcVar25 + 4) = puVar11;
            goto LAB_1401d32b5;
          }
          FUN_140031950(local_78);
          uStack_120._0_1_ = s_TEX0FORMAT_140490128[8];
          uStack_120._1_1_ = s_TEX0FORMAT_140490128[9];
          local_118 = 10;
          cStack_11d = '\0';
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          local_110 = (longlong *)0xf;
          local_128 = (undefined7)s_TEX0FORMAT_140490128._0_8_;
          cStack_121 = SUB81(s_TEX0FORMAT_140490128._0_8_,7);
          cStack_11e = '\0';
          piVar13 = (int *)FUN_14015a440(local_78,&local_128);
          *piVar13 = local_108;
          if ((longlong *)0xf < local_110) {
            FUN_140017200(&local_128,CONCAT17(cStack_121,local_128));
          }
          uVar19 = uStack_f0;
          uStack_f0 = CONCAT71(uStack_f0._1_7_,7);
          uStack_f0._4_4_ = SUB84(uVar19,4);
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) & 0xfffffffffffffeff;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          plVar16 = (longlong *)FUN_14028af20(0x10);
          *plVar16 = 0;
          plVar16[1] = 0;
          lVar17 = FUN_14028af20(0x58);
          puVar11 = local_a8;
          *(longlong *)lVar17 = lVar17;
          *(longlong *)(lVar17 + 8) = lVar17;
          *(longlong *)(lVar17 + 0x10) = lVar17;
          *(undefined2 *)(lVar17 + 0x18) = 0x101;
          *plVar16 = lVar17;
          plVar24 = plVar30;
          if (0xf < *(ulonglong *)(local_a8 + 0x218)) {
            plVar24 = (longlong *)*plVar30;
          }
          local_f8 = plVar16;
          uVar14 = FUN_140150110(*param_1 + 0x1630,plVar24,local_78,0);
          *(undefined8 *)(pcVar25 + 4) = uVar14;
          FUN_140085440(&local_f8);
        }
        else {
          FUN_140031950(local_78);
          local_128._0_1_ = s_THICKFORMAT_140490170[0];
          local_128._1_1_ = s_THICKFORMAT_140490170[1];
          local_128._2_1_ = s_THICKFORMAT_140490170[2];
          local_128._3_1_ = s_THICKFORMAT_140490170[3];
          local_128._4_1_ = s_THICKFORMAT_140490170[4];
          local_128._5_1_ = s_THICKFORMAT_140490170[5];
          local_128._6_1_ = s_THICKFORMAT_140490170[6];
          cStack_121 = (char)s_THICKFORMAT_140490170._7_4_;
          uStack_120 = SUB42(s_THICKFORMAT_140490170._7_4_,1);
          cStack_11e = SUB41(s_THICKFORMAT_140490170._7_4_,3);
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          local_118 = 0xb;
          local_110 = (longlong *)0xf;
          cStack_11d = '\0';
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
          *puVar12 = 1;
          if ((longlong *)0xf < local_110) {
            lVar5 = CONCAT17(cStack_121,local_128);
            plVar24 = (longlong *)((longlong)local_110 + 1);
            lVar17 = lVar5;
            if ((longlong *)0xfff < plVar24) {
              lVar17 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
              plVar24 = local_110 + 5;
            }
            thunk_FUN_14028af80(lVar17,plVar24);
          }
          if ((param_2[2] & 0x1000000) != 0) {
            local_128._0_1_ = s_SPRITESHEET_140490180[0];
            local_128._1_1_ = s_SPRITESHEET_140490180[1];
            local_128._2_1_ = s_SPRITESHEET_140490180[2];
            local_128._3_1_ = s_SPRITESHEET_140490180[3];
            local_128._4_1_ = s_SPRITESHEET_140490180[4];
            local_128._5_1_ = s_SPRITESHEET_140490180[5];
            local_128._6_1_ = s_SPRITESHEET_140490180[6];
            cStack_121 = (char)s_SPRITESHEET_140490180._7_4_;
            uStack_120 = SUB42(s_SPRITESHEET_140490180._7_4_,1);
            cStack_11e = SUB41(s_SPRITESHEET_140490180._7_4_,3);
            cStack_11c = 0;
            uStack_11b = 0;
            uStack_11a = 0;
            local_118 = 0xb;
            local_110 = (longlong *)0xf;
            cStack_11d = 0;
            puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
            *puVar12 = 1;
            FUN_140017240(&local_128);
            local_118 = 0;
            local_110 = (longlong *)0x0;
            local_128 = 0;
            cStack_121 = 0;
            uStack_120 = 0;
            cStack_11e = 0;
            cStack_11d = 0;
            cStack_11c = 0;
            uStack_11b = 0;
            uStack_11a = 0;
            FUN_140017480(&local_128,"SPRITESHEETBLEND",0x10);
            puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
            *puVar12 = local_88;
            FUN_140017240(&local_128);
            local_118 = 0;
            local_110 = (longlong *)0x0;
            local_128._0_1_ = '\0';
            local_128._1_1_ = '\0';
            local_128._2_1_ = '\0';
            local_128._3_1_ = '\0';
            local_128._4_1_ = '\0';
            local_128._5_1_ = '\0';
            local_128._6_1_ = '\0';
            cStack_121 = '\0';
            uStack_120._0_1_ = '\0';
            uStack_120._1_1_ = '\0';
            cStack_11e = '\0';
            cStack_11d = '\0';
            cStack_11c = '\0';
            uStack_11b = 0;
            uStack_11a = 0;
            FUN_140017480(&local_128,"SPRITESHEETBLENDNPOT",0x14);
            puVar15 = (uint *)FUN_14015a440(local_78,&local_128);
            *puVar15 = (uint)local_res20;
            FUN_140017240(&local_128);
          }
          if (bVar6) {
            local_118 = 0;
            local_110 = (longlong *)0x0;
            local_128._0_1_ = '\0';
            local_128._1_1_ = '\0';
            local_128._2_1_ = '\0';
            local_128._3_1_ = '\0';
            local_128._4_1_ = '\0';
            local_128._5_1_ = '\0';
            local_128._6_1_ = '\0';
            cStack_121 = '\0';
            uStack_120._0_1_ = '\0';
            uStack_120._1_1_ = '\0';
            cStack_11e = '\0';
            cStack_11d = '\0';
            cStack_11c = '\0';
            uStack_11b = 0;
            uStack_11a = 0;
            FUN_140017480(&local_128,"TEX0FORMAT",10);
            piVar13 = (int *)FUN_14015a440(local_78,&local_128);
            *piVar13 = local_108;
            FUN_140017240(&local_128);
          }
          plVar24 = plVar30;
          if (0xf < *(ulonglong *)(puVar11 + 0x218)) {
            plVar24 = (longlong *)*plVar30;
          }
          uVar14 = FUN_140150110(*param_1 + 0x1630,plVar24,local_78,0);
          *(undefined8 *)(pcVar25 + 4) = uVar14;
        }
      }
      else {
        if (cVar1 == '\x02') {
          local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_f0 = FUN_14028af20(0x38);
          *(ulonglong *)uStack_f0 = uStack_f0;
          *(ulonglong *)(uStack_f0 + 8) = uStack_f0;
          uStack_e0 = 0;
          local_d8 = 0;
          lStack_d0 = 0;
          local_c8 = 7;
          local_c0 = 8;
          local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x3f800000);
          FUN_140011f50(&uStack_e0,0x10,uStack_f0);
          local_128._0_1_ = s_THICKFORMAT_140490170[0];
          local_128._1_1_ = s_THICKFORMAT_140490170[1];
          local_128._2_1_ = s_THICKFORMAT_140490170[2];
          local_128._3_1_ = s_THICKFORMAT_140490170[3];
          local_128._4_1_ = s_THICKFORMAT_140490170[4];
          local_128._5_1_ = s_THICKFORMAT_140490170[5];
          local_128._6_1_ = s_THICKFORMAT_140490170[6];
          cStack_121 = (char)s_THICKFORMAT_140490170._7_4_;
          uStack_120 = SUB42(s_THICKFORMAT_140490170._7_4_,1);
          cStack_11e = SUB41(s_THICKFORMAT_140490170._7_4_,3);
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          local_118 = 0xb;
          local_110 = (longlong *)0xf;
          cStack_11d = '\0';
          puVar12 = (undefined4 *)FUN_14015a440(&local_f8,&local_128);
          *puVar12 = 1;
          if ((longlong *)0xf < local_110) {
            lVar5 = CONCAT17(cStack_121,local_128);
            plVar24 = (longlong *)((longlong)local_110 + 1);
            lVar17 = lVar5;
            if ((longlong *)0xfff < plVar24) {
              lVar17 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
              plVar24 = local_110 + 5;
            }
            thunk_FUN_14028af80(lVar17,plVar24);
          }
          local_118 = 0xd;
          uStack_11a = 0;
          uStack_120 = (undefined2)s_TRAILRENDERER_140490138._8_4_;
          cStack_11e = SUB41(s_TRAILRENDERER_140490138._8_4_,2);
          cStack_11d = SUB41(s_TRAILRENDERER_140490138._8_4_,3);
          cStack_11c = s_TRAILRENDERER_140490138[0xc];
          local_110 = (longlong *)0xf;
          local_128 = (undefined7)s_TRAILRENDERER_140490138._0_8_;
          cStack_121 = SUB81(s_TRAILRENDERER_140490138._0_8_,7);
          uStack_11b = 0;
          puVar12 = (undefined4 *)FUN_14015a440(&local_f8,&local_128);
          *puVar12 = 1;
          if ((longlong *)0xf < local_110) {
            lVar5 = CONCAT17(cStack_121,local_128);
            plVar24 = (longlong *)((longlong)local_110 + 1);
            lVar17 = lVar5;
            if ((longlong *)0xfff < plVar24) {
              lVar17 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
              plVar24 = local_110 + 5;
            }
            thunk_FUN_14028af80(lVar17,plVar24);
          }
          if ((param_2[2] & 0x1000000) != 0) {
            local_128._0_1_ = s_SPRITESHEET_140490180[0];
            local_128._1_1_ = s_SPRITESHEET_140490180[1];
            local_128._2_1_ = s_SPRITESHEET_140490180[2];
            local_128._3_1_ = s_SPRITESHEET_140490180[3];
            local_128._4_1_ = s_SPRITESHEET_140490180[4];
            local_128._5_1_ = s_SPRITESHEET_140490180[5];
            local_128._6_1_ = s_SPRITESHEET_140490180[6];
            cStack_121 = (char)s_SPRITESHEET_140490180._7_4_;
            uStack_120 = SUB42(s_SPRITESHEET_140490180._7_4_,1);
            cStack_11e = SUB41(s_SPRITESHEET_140490180._7_4_,3);
            cStack_11c = 0;
            uStack_11b = 0;
            uStack_11a = 0;
            local_118 = 0xb;
            local_110 = (longlong *)0xf;
            cStack_11d = 0;
            puVar12 = (undefined4 *)FUN_14015a440(&local_f8,&local_128);
            *puVar12 = 1;
            FUN_140017240(&local_128);
            local_118 = 0;
            local_110 = (longlong *)0x0;
            local_128 = 0;
            cStack_121 = 0;
            uStack_120 = 0;
            cStack_11e = 0;
            cStack_11d = 0;
            cStack_11c = 0;
            uStack_11b = 0;
            uStack_11a = 0;
            FUN_140017480(&local_128,"SPRITESHEETBLEND",0x10);
            puVar12 = (undefined4 *)FUN_14015a440(&local_f8,&local_128);
            *puVar12 = local_88;
            if (0xf < local_110) {
              FUN_140017200(&local_128,CONCAT17(cStack_121,local_128));
            }
            local_118 = 0;
            local_110 = (longlong *)0x0;
            local_128._0_1_ = '\0';
            local_128._1_1_ = '\0';
            local_128._2_1_ = '\0';
            local_128._3_1_ = '\0';
            local_128._4_1_ = '\0';
            local_128._5_1_ = '\0';
            local_128._6_1_ = '\0';
            cStack_121 = '\0';
            uStack_120._0_1_ = '\0';
            uStack_120._1_1_ = '\0';
            cStack_11e = '\0';
            cStack_11d = '\0';
            cStack_11c = '\0';
            uStack_11b = 0;
            uStack_11a = 0;
            FUN_140017480(&local_128,"SPRITESHEETBLENDNPOT",0x14);
            puVar15 = (uint *)FUN_14015a440(&local_f8,&local_128);
            *puVar15 = (uint)local_res20;
            if ((longlong *)0xf < local_110) {
              FUN_140017200(&local_128,CONCAT17(cStack_121,local_128));
            }
          }
          if (bVar6) {
            uStack_120._0_1_ = s_TEX0FORMAT_140490128[8];
            uStack_120._1_1_ = s_TEX0FORMAT_140490128[9];
            local_118 = 10;
            cStack_11d = '\0';
            cStack_11c = '\0';
            uStack_11b = 0;
            uStack_11a = 0;
            local_110 = (longlong *)0xf;
            local_128 = (undefined7)s_TEX0FORMAT_140490128._0_8_;
            cStack_121 = SUB81(s_TEX0FORMAT_140490128._0_8_,7);
            cStack_11e = '\0';
            piVar13 = (int *)FUN_14015a440(&local_f8,&local_128);
            *piVar13 = local_108;
            FUN_140017240(&local_128);
          }
          plVar24 = plVar30;
          if (0xf < *(ulonglong *)(puVar11 + 0x218)) {
            plVar24 = (longlong *)*plVar30;
          }
          uVar14 = FUN_140150110(*param_1 + 0x1630,plVar24,&local_f8,0);
          *(undefined8 *)(pcVar25 + 4) = uVar14;
          if (uStack_e0 != 0) {
            FUN_140037480(extraout_XMM0_Qa,uStack_e0,(longlong)(lStack_d0 - uStack_e0) >> 3);
            uStack_e0 = 0;
            local_d8 = 0;
            lStack_d0 = 0;
          }
          FUN_140035290();
          thunk_FUN_14028af80(uStack_f0,0x38);
          uVar21 = local_b8;
          goto LAB_1401d32b5;
        }
        if (cVar1 == '\x03') {
          FUN_140031950(local_78);
          local_128._0_1_ = s_THICKFORMAT_140490170[0];
          local_128._1_1_ = s_THICKFORMAT_140490170[1];
          local_128._2_1_ = s_THICKFORMAT_140490170[2];
          local_128._3_1_ = s_THICKFORMAT_140490170[3];
          local_128._4_1_ = s_THICKFORMAT_140490170[4];
          local_128._5_1_ = s_THICKFORMAT_140490170[5];
          local_128._6_1_ = s_THICKFORMAT_140490170[6];
          cStack_121 = (char)s_THICKFORMAT_140490170._7_4_;
          uStack_120 = SUB42(s_THICKFORMAT_140490170._7_4_,1);
          cStack_11e = SUB41(s_THICKFORMAT_140490170._7_4_,3);
          cStack_11c = 0;
          uStack_11b = 0;
          uStack_11a = 0;
          local_118 = 0xb;
          local_110 = (longlong *)0xf;
          cStack_11d = 0;
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
          *puVar12 = 1;
          FUN_140017240(&local_128);
          uVar9 = *(undefined4 *)(pcVar25 + 0x3c);
          local_f8 = (longlong *)0x1f;
          local_118 = 0;
          local_110 = (longlong *)0x0;
          local_128 = 0;
          cStack_121 = 0;
          uStack_120._0_1_ = '\0';
          uStack_120._1_1_ = '\0';
          cStack_11e = '\0';
          cStack_11d = '\0';
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          pcVar23 = (char *)FUN_1400173f0(&local_128,&local_f8);
          uVar14 = s_TRAILSUBDIVISION_140490148._8_8_;
          local_110 = local_f8;
          local_128 = SUB87(pcVar23,0);
          cStack_121 = (char)((ulonglong)pcVar23 >> 0x38);
          local_118 = 0x10;
          *(undefined8 *)pcVar23 = s_TRAILSUBDIVISION_140490148._0_8_;
          *(undefined8 *)(pcVar23 + 8) = uVar14;
          pcVar23[0x10] = '\0';
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
          *puVar12 = uVar9;
          if ((longlong *)0xf < local_110) {
            lVar5 = CONCAT17(cStack_121,local_128);
            plVar24 = (longlong *)((longlong)local_110 + 1);
            lVar17 = lVar5;
            if ((longlong *)0xfff < plVar24) {
              lVar17 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
              plVar24 = local_110 + 5;
            }
            thunk_FUN_14028af80(lVar17,plVar24);
          }
          if (bVar6) {
            uStack_120._0_1_ = s_TEX0FORMAT_140490128[8];
            uStack_120._1_1_ = s_TEX0FORMAT_140490128[9];
            local_118 = 10;
            cStack_11d = 0;
            cStack_11c = 0;
            uStack_11b = 0;
            uStack_11a = 0;
            local_110 = (longlong *)0xf;
            local_128 = (undefined7)s_TEX0FORMAT_140490128._0_8_;
            cStack_121 = SUB81(s_TEX0FORMAT_140490128._0_8_,7);
            cStack_11e = 0;
            piVar13 = (int *)FUN_14015a440(local_78,&local_128);
            *piVar13 = local_108;
            FUN_140017240(&local_128);
          }
          uVar9 = *(undefined4 *)(pcVar25 + 0xc);
          local_128._0_1_ = s_ORIENTATION_1404901d0[0];
          local_128._1_1_ = s_ORIENTATION_1404901d0[1];
          local_128._2_1_ = s_ORIENTATION_1404901d0[2];
          local_128._3_1_ = s_ORIENTATION_1404901d0[3];
          local_128._4_1_ = s_ORIENTATION_1404901d0[4];
          local_128._5_1_ = s_ORIENTATION_1404901d0[5];
          local_128._6_1_ = s_ORIENTATION_1404901d0[6];
          cStack_121 = (char)s_ORIENTATION_1404901d0._7_4_;
          uStack_120 = SUB42(s_ORIENTATION_1404901d0._7_4_,1);
          cStack_11e = SUB41(s_ORIENTATION_1404901d0._7_4_,3);
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          local_118 = 0xb;
          local_110 = (longlong *)0xf;
          cStack_11d = '\0';
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
          *puVar12 = uVar9;
          if ((longlong *)0xf < local_110) {
            lVar5 = CONCAT17(cStack_121,local_128);
            plVar24 = (longlong *)((longlong)local_110 + 1);
            lVar17 = lVar5;
            if ((longlong *)0xfff < plVar24) {
              lVar17 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
              plVar24 = local_110 + 5;
            }
            thunk_FUN_14028af80(lVar17,plVar24);
          }
          puVar11 = local_a8;
          plVar24 = plVar30;
          if (0xf < *(ulonglong *)(local_a8 + 0x218)) {
            plVar24 = (longlong *)*plVar30;
          }
          uVar14 = FUN_140150110(*param_1 + 0x1630,plVar24,local_78,"genericropeparticle");
          *(undefined8 *)(pcVar25 + 4) = uVar14;
          goto LAB_1401d32a0;
        }
        if (cVar1 != '\x04') goto LAB_1401d32b5;
        local_78[0] = 0;
        local_70 = (longlong *)0x0;
        local_68 = 0;
        local_70 = (longlong *)FUN_14028af20(0x38);
        *local_70 = (longlong)local_70;
        local_70[1] = (longlong)local_70;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 7;
        local_40 = 8;
        local_78[0] = 0x3f800000;
        FUN_140011f50(&local_60,0x10,local_70);
        uVar9 = *(undefined4 *)(pcVar25 + 0x44);
        local_118 = 0;
        local_110 = (longlong *)0x0;
        local_128 = 0;
        cStack_121 = 0;
        uStack_120._0_1_ = '\0';
        uStack_120._1_1_ = '\0';
        cStack_11e = '\0';
        cStack_11d = '\0';
        cStack_11c = '\0';
        uStack_11b = 0;
        uStack_11a = 0;
        pcVar23 = (char *)FUN_14028af20(0x20);
        uVar14 = s_TRAILSUBDIVISION_140490148._8_8_;
        local_128 = SUB87(pcVar23,0);
        cStack_121 = (char)((ulonglong)pcVar23 >> 0x38);
        local_118 = 0x10;
        local_110 = (longlong *)0x1f;
        *(undefined8 *)pcVar23 = s_TRAILSUBDIVISION_140490148._0_8_;
        *(undefined8 *)(pcVar23 + 8) = uVar14;
        pcVar23[0x10] = '\0';
        puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
        *puVar12 = uVar9;
        if ((longlong *)0xf < local_110) {
          lVar5 = CONCAT17(cStack_121,local_128);
          plVar24 = (longlong *)((longlong)local_110 + 1);
          lVar17 = lVar5;
          if ((longlong *)0xfff < plVar24) {
            lVar17 = *(longlong *)(lVar5 + -8);
            if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
            plVar24 = local_110 + 5;
          }
          thunk_FUN_14028af80(lVar17,plVar24);
        }
        if (bVar6) {
          local_e8 = 10;
          uStack_e0 = 0xf;
          local_f8 = (longlong *)s_TEX0FORMAT_140490128._0_8_;
          uStack_f0 = (ulonglong)(ushort)s_TEX0FORMAT_140490128._8_2_;
          piVar13 = (int *)FUN_14015a440(local_78,&local_f8);
          *piVar13 = local_108;
          if (0xf < uStack_e0) {
            FUN_140017200(&local_f8,local_f8);
          }
        }
        uVar9 = *(undefined4 *)(pcVar25 + 0xc);
        local_128._0_1_ = s_ORIENTATION_1404901d0[0];
        local_128._1_1_ = s_ORIENTATION_1404901d0[1];
        local_128._2_1_ = s_ORIENTATION_1404901d0[2];
        local_128._3_1_ = s_ORIENTATION_1404901d0[3];
        local_128._4_1_ = s_ORIENTATION_1404901d0[4];
        local_128._5_1_ = s_ORIENTATION_1404901d0[5];
        local_128._6_1_ = s_ORIENTATION_1404901d0[6];
        cStack_121 = (char)s_ORIENTATION_1404901d0._7_4_;
        uStack_120 = SUB42(s_ORIENTATION_1404901d0._7_4_,1);
        cStack_11e = SUB41(s_ORIENTATION_1404901d0._7_4_,3);
        cStack_11c = '\0';
        uStack_11b = 0;
        uStack_11a = 0;
        local_118 = 0xb;
        local_110 = (longlong *)0xf;
        cStack_11d = '\0';
        puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
        *puVar12 = uVar9;
        if ((longlong *)0xf < local_110) {
          lVar5 = CONCAT17(cStack_121,local_128);
          plVar24 = (longlong *)((longlong)local_110 + 1);
          lVar17 = lVar5;
          if ((longlong *)0xfff < plVar24) {
            lVar17 = *(longlong *)(lVar5 + -8);
            if (0x1f < (lVar5 - lVar17) - 8U) goto LAB_1401d32cb;
            plVar24 = local_110 + 5;
          }
          thunk_FUN_14028af80(lVar17,plVar24);
        }
        uStack_f0._0_5_ = CONCAT14(s_TRAILRENDERER_140490138[0xc],s_TRAILRENDERER_140490138._8_4_);
        local_e8 = 0xd;
        uStack_e0 = 0xf;
        local_f8 = (longlong *)s_TRAILRENDERER_140490138._0_8_;
        uStack_f0 = (ulonglong)(uint5)uStack_f0;
        puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_f8);
        *puVar12 = 1;
        if (0xf < uStack_e0) {
          uVar19 = uStack_e0 + 1;
          plVar24 = local_f8;
          if (0xfff < uVar19) {
            plVar24 = (longlong *)local_f8[-1];
            if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)plVar24)))
            goto LAB_1401d32cb;
            uVar19 = uStack_e0 + 0x28;
          }
          thunk_FUN_14028af80(plVar24,uVar19);
        }
        if ((uVar22 >> 0x13 & 1) != 0) {
          local_118 = 0;
          local_110 = (longlong *)0x0;
          local_128._0_1_ = '\0';
          local_128._1_1_ = '\0';
          local_128._2_1_ = '\0';
          local_128._3_1_ = '\0';
          local_128._4_1_ = '\0';
          local_128._5_1_ = '\0';
          local_128._6_1_ = '\0';
          cStack_121 = '\0';
          uStack_120._0_1_ = '\0';
          uStack_120._1_1_ = '\0';
          cStack_11e = '\0';
          cStack_11d = '\0';
          cStack_11c = '\0';
          uStack_11b = 0;
          uStack_11a = 0;
          FUN_140017480(&local_128,"TRAILSCROLLALPHA",0x10);
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_128);
          *puVar12 = 1;
          if ((longlong *)0xf < local_110) {
            FUN_140017200(&local_128,CONCAT17(cStack_121,local_128));
          }
        }
        if ((pcVar25[0x48] & 1U) != 0) {
          uStack_f0 = (ulonglong)
                      CONCAT24(s_TRAILFADEALPHA_1404901f8._12_2_,s_TRAILFADEALPHA_1404901f8._8_4_);
          local_e8 = 0xe;
          uStack_e0 = 0xf;
          local_f8 = (longlong *)s_TRAILFADEALPHA_1404901f8._0_8_;
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_f8);
          *puVar12 = 1;
          if (0xf < uStack_e0) {
            FUN_140017200(&local_f8,local_f8);
          }
        }
        if ((pcVar25[0x48] & 2U) != 0) {
          uStack_f0._0_5_ = CONCAT14(s_TRAILFADESIZE_140490208[0xc],s_TRAILFADESIZE_140490208._8_4_)
          ;
          local_e8 = 0xd;
          uStack_e0 = 0xf;
          local_f8 = (longlong *)s_TRAILFADESIZE_140490208._0_8_;
          uStack_f0 = (ulonglong)(uint5)uStack_f0;
          puVar12 = (undefined4 *)FUN_14015a440(local_78,&local_f8);
          *puVar12 = 1;
          if (0xf < uStack_e0) {
            FUN_140017200(&local_f8,local_f8);
          }
        }
        puVar11 = local_a8;
        plVar24 = plVar30;
        if (0xf < *(ulonglong *)(local_a8 + 0x218)) {
          plVar24 = (longlong *)*plVar30;
        }
        uVar14 = FUN_140150110(*param_1 + 0x1630,plVar24,local_78,"genericropeparticle");
        *(undefined8 *)(pcVar25 + 4) = uVar14;
        if (param_3[7] == 0) {
          *(undefined2 *)(param_3 + 10) = *(undefined2 *)(pcVar25 + 0x40);
          *(float *)(param_3 + 0xb) = *(float *)(pcVar25 + 0x3c) / (float)*(int *)(pcVar25 + 0x40);
        }
      }
LAB_1401d32a0:
      FUN_14000d9e0(&local_60);
      FUN_140030c70(&local_70);
      uVar21 = local_b8;
LAB_1401d32b5:
      pcVar25 = pcVar25 + *(ushort *)(pcVar25 + 2);
      if (*pcVar25 == '\0') goto LAB_1401d32e3;
      goto LAB_1401d2590;
    }
  }
  else {
    uVar19 = (local_50 - local_60 >> 3) * 8;
    lVar17 = local_60;
    if (uVar19 < 0x1000) {
LAB_1401d244c:
      thunk_FUN_14028af80(lVar17,uVar19);
      goto LAB_1401d2457;
    }
    plVar30 = param_1;
    if ((local_60 - *(longlong *)(local_60 + -8)) - 8U < 0x20) {
      uVar19 = uVar19 + 0x27;
      lVar17 = *(longlong *)(local_60 + -8);
      goto LAB_1401d244c;
    }
LAB_1401d32cb:
    uVar22 = 0;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_150;
    param_1 = plVar30;
    local_b4 = unaff_ESI;
  }
  puVar26 = puVar8;
  bVar29 = (byte)(uVar22 >> 0x13);
  unaff_ESI = local_b4;
LAB_1401d32e3:
  if (*(ushort *)(param_3 + 10) != 0) {
    uVar22 = *param_2 & 3;
    iVar27 = 4 - uVar22;
    if (uVar22 == 0) {
      iVar27 = 0;
    }
    iVar27 = iVar27 + *param_2;
    uVar22 = (uint)*(ushort *)(param_3 + 10) * iVar27 * 0xc;
    *(undefined8 *)(puVar26 + -8) = 0x1401d3323;
    pvVar18 = _aligned_malloc((ulonglong)uVar22,0x10);
    param_3[7] = pvVar18;
    *(undefined8 *)(puVar26 + -8) = 0x1401d3335;
    FUN_1404217a0(pvVar18,0,uVar22);
    uVar22 = iVar27 * 2;
    *(undefined8 *)(puVar26 + -8) = 0x1401d3346;
    pvVar18 = _aligned_malloc((ulonglong)uVar22,0x10);
    param_3[8] = pvVar18;
    if ((bVar29 & 1) != 0) {
      *(undefined8 *)(puVar26 + -8) = 0x1401d335c;
      pvVar18 = _aligned_malloc((ulonglong)uVar22,0x10);
      param_3[9] = pvVar18;
      *(undefined8 *)(puVar26 + -8) = 0x1401d336e;
      FUN_1404217a0(pvVar18,0,uVar22);
    }
  }
  if ((param_2[2] & 0x800000) == 0) {
    if (local_b4 == 0) {
      if ((unaff_ESI & 1) != 0) {
        local_a8 = puVar26 + 0x60;
        ppuVar20 = &local_a8;
        puStack_a0 = puVar26 + 0x70;
        *(undefined8 *)(puVar26 + 0x60) = _DAT_140492c90;
        *(undefined8 *)(puVar26 + 0x68) = _UNK_140492c98;
        goto LAB_1401d3522;
      }
    }
    else {
      *(undefined1 ***)(puVar26 + 0x60) = &local_a8;
      ppuVar20 = (undefined1 **)(puVar26 + 0x60);
      local_98 = 0x19;
      *(undefined4 **)(puVar26 + 0x68) = &local_94;
      local_a8 = _DAT_140492c50;
      puStack_a0 = _UNK_140492c58;
LAB_1401d3522:
      *(undefined8 *)(puVar26 + -8) = 0x1401d3527;
      uVar9 = FUN_140098c30(ppuVar20);
      *(undefined8 *)(puVar26 + -8) = 0x1401d3533;
      uVar14 = FUN_14028af20(0x28);
      uVar22 = *param_2;
      *(longlong *)(puVar26 + 0x20) = *param_1;
      *(undefined8 *)(puVar26 + -8) = 0x1401d354b;
      uVar14 = FUN_140261250(uVar14,uVar9,uVar22,0);
      *param_3 = uVar14;
    }
    *(undefined1 ***)(puVar26 + 0x60) = &local_a8;
    local_98 = 0x10;
    *(undefined4 **)(puVar26 + 0x68) = &local_90;
    local_a8 = _DAT_140492c60;
    puStack_a0 = (undefined1 *)_UNK_140492c68;
    local_94 = 0x19;
    *(undefined8 *)(puVar26 + -8) = 0x1401d3586;
    uVar9 = FUN_140098c30(puVar26 + 0x60);
    local_98 = 0x12;
    local_94 = 0x13;
    *(undefined1 ***)(puVar26 + 0x60) = &local_a8;
    *(undefined1 **)(puVar26 + 0x68) = local_8c;
    local_a8 = _DAT_140492c70;
    puStack_a0 = (undefined1 *)_UNK_140492c78;
    local_90 = 0x19;
    *(undefined8 *)(puVar26 + -8) = 0x1401d35c6;
    uVar10 = FUN_140098c30(puVar26 + 0x60);
    if ((unaff_ESI & 4) != 0) {
      *(undefined8 *)(puVar26 + -8) = 0x1401d35d8;
      uVar14 = FUN_14028af20(0x28);
      uVar2 = *(ushort *)(param_3 + 10);
      uVar22 = *param_2;
      *(longlong *)(puVar26 + 0x20) = *param_1;
      *(undefined8 *)(puVar26 + -8) = 0x1401d35f7;
      uVar14 = FUN_140261250(uVar14,uVar9,uVar2 * uVar22,0);
      param_3[1] = uVar14;
    }
    if ((unaff_ESI & 8) == 0) {
      return;
    }
    *(undefined8 *)(puVar26 + -8) = 0x1401d360c;
    uVar14 = FUN_14028af20(0x28);
    uVar28 = 0;
    goto LAB_1401d360f;
  }
  if (local_b4 == 0) {
    if ((unaff_ESI & 1) != 0) {
      *(undefined4 *)(puVar26 + 0x60) = 0;
      puStack_a0 = puVar26 + 0x6c;
      *(undefined4 *)(puVar26 + 100) = 9;
      *(undefined4 *)(puVar26 + 0x68) = 0x19;
      goto LAB_1401d33cc;
    }
  }
  else {
    puStack_a0 = puVar26 + 0x70;
    *(undefined8 *)(puVar26 + 0x60) = _DAT_140492c80;
    *(undefined8 *)(puVar26 + 0x68) = _UNK_140492c88;
LAB_1401d33cc:
    local_a8 = puVar26 + 0x60;
    *(undefined8 *)(puVar26 + -8) = 0x1401d33d9;
    uVar9 = FUN_140098c30(&local_a8);
    *(undefined8 *)(puVar26 + -8) = 0x1401d33e5;
    uVar14 = FUN_14028af20(0x28);
    uVar22 = *param_2;
    *(longlong *)(puVar26 + 0x20) = *param_1;
    *(undefined8 *)(puVar26 + -8) = 0x1401d3400;
    uVar14 = FUN_140261250(uVar14,uVar9,uVar22,2);
    *param_3 = uVar14;
  }
  *(undefined1 ***)(puVar26 + 0x60) = &local_a8;
  local_98 = 0x19;
  *(undefined4 **)(puVar26 + 0x68) = &local_94;
  local_a8 = _DAT_140492c60;
  puStack_a0 = (undefined1 *)_UNK_140492c68;
  *(undefined8 *)(puVar26 + -8) = 0x1401d3434;
  uVar9 = FUN_140098c30(puVar26 + 0x60);
  local_98 = 0x12;
  local_94 = 0x19;
  *(undefined1 ***)(puVar26 + 0x60) = &local_a8;
  *(undefined4 **)(puVar26 + 0x68) = &local_90;
  local_a8 = _DAT_140492c70;
  puStack_a0 = (undefined1 *)_UNK_140492c78;
  *(undefined8 *)(puVar26 + -8) = 0x1401d346d;
  uVar10 = FUN_140098c30(puVar26 + 0x60);
  if ((unaff_ESI & 4) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x1401d347f;
    uVar14 = FUN_14028af20(0x28);
    uVar2 = *(ushort *)(param_3 + 10);
    uVar22 = *param_2;
    *(longlong *)(puVar26 + 0x20) = *param_1;
    *(undefined8 *)(puVar26 + -8) = 0x1401d34a1;
    uVar14 = FUN_140261250(uVar14,uVar9,uVar2 * uVar22,2);
    param_3[1] = uVar14;
  }
  if ((unaff_ESI & 8) == 0) {
    return;
  }
  *(undefined8 *)(puVar26 + -8) = 0x1401d34ba;
  uVar14 = FUN_14028af20(0x28);
  uVar28 = 2;
LAB_1401d360f:
  uVar22 = *param_2;
  *(longlong *)(puVar26 + 0x20) = *param_1;
  *(undefined8 *)(puVar26 + -8) = 0x1401d3624;
  uVar14 = FUN_140261250(uVar14,uVar10,uVar22,uVar28);
  param_3[2] = uVar14;
  return;
}

