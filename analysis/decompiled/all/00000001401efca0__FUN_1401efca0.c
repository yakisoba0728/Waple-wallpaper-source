// Function: FUN_1401efca0
// Addr: 1401efca0
// Size: 1296 bytes


undefined * FUN_1401efca0(undefined8 param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined7 uVar8;
  char cVar9;
  size_t sVar10;
  undefined *puVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 local_res8;
  longlong local_38 [2];
  char local_28 [12];
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e83e0);
  local_28[0] = s_visible_1404903a0[0];
  local_28[1] = s_visible_1404903a0[1];
  local_28[2] = s_visible_1404903a0[2];
  local_28[3] = s_visible_1404903a0[3];
  local_28[4] = (char)s_visible_1404903a0._4_2_;
  local_28[5] = SUB21(s_visible_1404903a0._4_2_,1);
  local_28[6] = s_visible_1404903a0[6];
  local_28[0xb] = 0;
  uStack_1c = 0;
  local_18 = 7;
  local_10 = 0xf;
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  FUN_14015a000(&DAT_1404e83e0,local_38,local_28);
  if (local_10 < 0x10) {
LAB_1401efd4b:
    lVar12 = local_38[0];
    FUN_14000f880(local_38[0] + 0x68,"visible",7);
    *(undefined4 *)(lVar12 + 0x34) = 0x118;
    *(code **)(lVar12 + 0x38) = FUN_1401e1a90;
    *(undefined4 *)(lVar12 + 0x30) = 6;
    *(code **)(lVar12 + 0x40) = FUN_1401e1b60;
    local_18 = 4;
    *(undefined1 **)(lVar12 + 0x48) = &LAB_1401e1c60;
    local_10 = 0xf;
    *(undefined1 **)(lVar12 + 0x50) = &LAB_1401e1c90;
    local_28[5] = '\0';
    local_28[6] = '\0';
    local_28[7] = '\0';
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = 0;
    uStack_1c = 0;
    *(code **)(lVar12 + 0x58) = FUN_1401e6300;
    local_28[0] = (char)DAT_1404748b8;
    local_28[1] = DAT_1404748b8._1_1_;
    local_28[2] = DAT_1404748b8._2_1_;
    local_28[3] = DAT_1404748b8._3_1_;
    local_28[4] = '\0';
    FUN_14015a000(&DAT_1404e83e0,local_38,local_28);
    if (0xf < local_10) {
      lVar15 = CONCAT17(local_28[7],
                        CONCAT16(local_28[6],
                                 CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_))));
      pcVar13 = (char *)(local_10 + 1);
      lVar12 = lVar15;
      if ((char *)0xfff < pcVar13) {
        lVar12 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_1401f01a9;
        pcVar13 = (char *)(local_10 + 0x28);
      }
      thunk_FUN_14028af80(lVar12,pcVar13);
    }
    lVar12 = local_38[0];
    FUN_14000f880(local_38[0] + 0x68,&DAT_1404748b8,4);
    uVar8 = s_getMaterial_140490948._0_7_;
    *(code **)(lVar12 + 0x38) = FUN_1401a4bc0;
    local_28._0_4_ = (undefined4)uVar8;
    local_28[4] = SUB71(uVar8,4);
    local_28[5] = SUB71(uVar8,5);
    local_28[6] = SUB71(uVar8,6);
    *(code **)(lVar12 + 0x48) = FUN_1401a4d00;
    *(undefined4 *)(lVar12 + 0x34) = 0x120;
    *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4d60;
    local_28[7] = s_getMaterial_140490948[7];
    local_28[8] = s_getMaterial_140490948[8];
    local_28[9] = s_getMaterial_140490948[9];
    local_28[10] = s_getMaterial_140490948[10];
    *(undefined4 *)(lVar12 + 0x30) = 5;
    uStack_1c = 0;
    local_18 = 0xb;
    local_10 = 0xf;
    local_28[0xb] = 0;
    FUN_140178e90(&DAT_1404e8420,local_38,local_28);
    if (0xf < local_10) {
      lVar15 = CONCAT17(local_28[7],
                        CONCAT16(local_28[6],
                                 CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_))));
      pcVar13 = (char *)(local_10 + 1);
      lVar12 = lVar15;
      if ((char *)0xfff < pcVar13) {
        lVar12 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_1401f01a9;
        pcVar13 = (char *)(local_10 + 0x28);
      }
      thunk_FUN_14028af80(lVar12,pcVar13);
    }
    lVar12 = local_38[0];
    FUN_14000f880(local_38[0] + 0x38,"getMaterial",0xb);
    *(undefined4 *)(lVar12 + 0x70) = 0x800;
    *(code **)(lVar12 + 0x30) = FUN_1401ee0c0;
    local_res8 = CONCAT44(local_res8._4_4_,0x208);
    FUN_14002ff50(lVar12 + 0x58,&local_res8);
    local_18 = 0;
    local_10 = 0;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = 0;
    uStack_1c = 0;
    pcVar13 = (char *)FUN_14028af20(0x20);
    uVar6 = s_getMaterialCount_1404908c0._12_4_;
    uVar5 = s_getMaterialCount_1404908c0._8_4_;
    uVar3 = s_getMaterialCount_1404908c0._4_4_;
    local_28._0_4_ = SUB84(pcVar13,0);
    local_28[4] = (char)((ulonglong)pcVar13 >> 0x20);
    local_28[5] = (char)((ulonglong)pcVar13 >> 0x28);
    local_28[6] = (char)((ulonglong)pcVar13 >> 0x30);
    local_28[7] = (char)((ulonglong)pcVar13 >> 0x38);
    local_18 = 0x10;
    local_10 = 0x1f;
    *(undefined4 *)pcVar13 = s_getMaterialCount_1404908c0._0_4_;
    *(undefined4 *)(pcVar13 + 4) = uVar3;
    *(undefined4 *)(pcVar13 + 8) = uVar5;
    *(undefined4 *)(pcVar13 + 0xc) = uVar6;
    pcVar13[0x10] = '\0';
    FUN_140178e90(&DAT_1404e8420,local_38,local_28);
    if (0xf < local_10) {
      lVar15 = CONCAT17(local_28[7],
                        CONCAT16(local_28[6],
                                 CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_))));
      pcVar13 = (char *)(local_10 + 1);
      lVar12 = lVar15;
      if ((char *)0xfff < pcVar13) {
        lVar12 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_1401f01a9;
        pcVar13 = (char *)(local_10 + 0x28);
      }
      thunk_FUN_14028af80(lVar12,pcVar13);
    }
    lVar12 = local_38[0];
    FUN_14000f880(local_38[0] + 0x38,"getMaterialCount",0x10);
    *(undefined4 *)(lVar12 + 0x70) = 8;
    *(undefined1 **)(lVar12 + 0x30) = &LAB_1401ee1a0;
    local_18 = 0;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = 0;
    uStack_1c = 0;
    local_10 = 0;
    pcVar13 = (char *)FUN_14028af20(0x20);
    uVar7 = s_setMaterialProperty_1404908d8._12_4_;
    uVar6 = s_setMaterialProperty_1404908d8._8_4_;
    uVar5 = s_setMaterialProperty_1404908d8._4_4_;
    uVar3 = CONCAT31(s_setMaterialProperty_1404908d8._16_3_,s_setMaterialProperty_1404908d8[0xf]);
    local_28._0_4_ = SUB84(pcVar13,0);
    local_28[4] = (char)((ulonglong)pcVar13 >> 0x20);
    local_28[5] = (char)((ulonglong)pcVar13 >> 0x28);
    local_28[6] = (char)((ulonglong)pcVar13 >> 0x30);
    local_28[7] = (char)((ulonglong)pcVar13 >> 0x38);
    local_18 = 0x13;
    local_10 = 0x1f;
    *(undefined4 *)pcVar13 = s_setMaterialProperty_1404908d8._0_4_;
    *(undefined4 *)(pcVar13 + 4) = uVar5;
    *(undefined4 *)(pcVar13 + 8) = uVar6;
    *(undefined4 *)(pcVar13 + 0xc) = uVar7;
    *(undefined4 *)(pcVar13 + 0xf) = uVar3;
    pcVar13[0x13] = '\0';
    FUN_140178e90(&DAT_1404e8420,local_38,local_28);
    if (0xf < local_10) {
      lVar15 = CONCAT17(local_28[7],
                        CONCAT16(local_28[6],
                                 CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_))));
      pcVar13 = (char *)(local_10 + 1);
      lVar12 = lVar15;
      if ((char *)0xfff < pcVar13) {
        lVar12 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_1401f01a9;
        pcVar13 = (char *)(local_10 + 0x28);
      }
      thunk_FUN_14028af80(lVar12,pcVar13);
    }
    lVar12 = local_38[0];
    FUN_14000f880(local_38[0] + 0x38,"setMaterialProperty",0x13);
    *(undefined4 *)(lVar12 + 0x70) = 1;
    *(code **)(lVar12 + 0x30) = FUN_1401ee1d0;
    local_res8._0_4_ = 0x200;
    FUN_14002ff50(lVar12 + 0x58,&local_res8);
    local_res8 = CONCAT44(local_res8._4_4_,0x7c);
    FUN_14002ff50(lVar12 + 0x58,&local_res8);
    local_18 = 0;
    local_10 = 0;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = 0;
    uStack_1c = 0;
    pcVar13 = (char *)FUN_14028af20(0x20);
    uVar6 = s_executeMaterialFunction_1404908f0._12_4_;
    uVar5 = s_executeMaterialFunction_1404908f0._8_4_;
    uVar3 = s_executeMaterialFunction_1404908f0._4_4_;
    local_28._0_4_ = SUB84(pcVar13,0);
    local_28[4] = (char)((ulonglong)pcVar13 >> 0x20);
    local_28[5] = (char)((ulonglong)pcVar13 >> 0x28);
    local_28[6] = (char)((ulonglong)pcVar13 >> 0x30);
    local_28[7] = (char)((ulonglong)pcVar13 >> 0x38);
    uVar4 = CONCAT71(s_executeMaterialFunction_1404908f0._16_7_,
                     s_executeMaterialFunction_1404908f0[0xf]);
    local_18 = 0x17;
    local_10 = 0x1f;
    *(undefined4 *)pcVar13 = s_executeMaterialFunction_1404908f0._0_4_;
    *(undefined4 *)(pcVar13 + 4) = uVar3;
    *(undefined4 *)(pcVar13 + 8) = uVar5;
    *(undefined4 *)(pcVar13 + 0xc) = uVar6;
    *(undefined8 *)(pcVar13 + 0xf) = uVar4;
    pcVar13[0x17] = '\0';
    FUN_140178e90(&DAT_1404e8420,local_38,local_28);
    if (local_10 < 0x10) goto LAB_1401f0152;
    lVar15 = CONCAT17(local_28[7],
                      CONCAT16(local_28[6],
                               CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_))));
    pcVar13 = (char *)(local_10 + 1);
    lVar12 = lVar15;
    if ((char *)0xfff < pcVar13) {
      lVar12 = *(longlong *)(lVar15 + -8);
      if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_1401f01a9;
      pcVar13 = (char *)(local_10 + 0x28);
    }
    thunk_FUN_14028af80(lVar12,pcVar13);
LAB_1401f0152:
    FUN_14000f880(local_38[0] + 0x38,"executeMaterialFunction",0x17);
    *(undefined4 *)(local_38[0] + 0x70) = 1;
    *(code **)(local_38[0] + 0x30) = FUN_1401ee3a0;
    local_res8 = CONCAT44(local_res8._4_4_,0x200);
    FUN_14002ff50(local_38[0] + 0x58,&local_res8);
    return &DAT_1404e83e0;
  }
  lVar15 = CONCAT17(local_28[7],
                    CONCAT16(local_28[6],CONCAT15(local_28[5],CONCAT14(local_28[4],local_28._0_4_)))
                   );
  pcVar13 = (char *)(local_10 + 1);
  lVar12 = lVar15;
  if (pcVar13 < (char *)0x1000) {
LAB_1401efd46:
    thunk_FUN_14028af80(lVar12,pcVar13);
    goto LAB_1401efd4b;
  }
  lVar12 = *(longlong *)(lVar15 + -8);
  if ((lVar15 - lVar12) - 8U < 0x20) {
    pcVar13 = (char *)(local_10 + 0x28);
    goto LAB_1401efd46;
  }
LAB_1401f01a9:
  lVar12 = 5;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)();
  sVar10 = strlen(pcVar13);
  uVar14 = 0;
  uVar17 = 0xcbf29ce484222325;
  uVar18 = 0xcbf29ce484222325;
  if (sVar10 != 0) {
    do {
      pbVar1 = (byte *)(pcVar13 + uVar14);
      uVar14 = uVar14 + 1;
      uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
    } while (uVar14 < sVar10);
  }
  lVar15 = *(longlong *)(DAT_1404e83f8 + 8 + (DAT_1404e8410 & uVar18) * 0x10);
  if (lVar15 != DAT_1404e83e8) {
    lVar16 = *(longlong *)(DAT_1404e83f8 + (DAT_1404e8410 & uVar18) * 0x10);
    cVar9 = FUN_14000d010(lVar15 + 0x10,pcVar13);
    while (cVar9 == '\0') {
      if (lVar15 == lVar16) goto LAB_1401f025e;
      lVar15 = *(longlong *)(lVar15 + 8);
      cVar9 = FUN_14000d010(lVar15 + 0x10,pcVar13);
    }
    if (lVar15 != 0) goto LAB_1401f0265;
  }
LAB_1401f025e:
  lVar15 = DAT_1404e83e8;
LAB_1401f0265:
  if (lVar15 != DAT_1404e83e8) {
    return (undefined *)(lVar15 + 0x30);
  }
  uVar14 = 0;
  if (sVar10 != 0) {
    do {
      pbVar1 = (byte *)(pcVar13 + uVar14);
      uVar14 = uVar14 + 1;
      uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
    } while (uVar14 < sVar10);
  }
  lVar15 = *(longlong *)(lVar12 + 0x50);
  uVar17 = *(ulonglong *)(lVar12 + 0x78) & uVar17;
  lVar16 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + 8 + uVar17 * 0x10);
  if (lVar16 != lVar15) {
    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + uVar17 * 0x10);
    cVar9 = FUN_14000d010(lVar16 + 0x10,pcVar13);
    while( true ) {
      if (cVar9 != '\0') {
        DAT_1404748b8._0_1_ = (char)DAT_1404748b8;
        DAT_1404748b8._1_1_ = SUB41(DAT_1404748b8,1);
        DAT_1404748b8._2_1_ = SUB41(DAT_1404748b8,2);
        DAT_1404748b8._3_1_ = SUB41(DAT_1404748b8,3);
        s_visible_1404903a0[0] = (char)s_visible_1404903a0._0_4_;
        s_visible_1404903a0[1] = SUB41(s_visible_1404903a0._0_4_,1);
        s_visible_1404903a0[2] = SUB41(s_visible_1404903a0._0_4_,2);
        s_visible_1404903a0[3] = SUB41(s_visible_1404903a0._0_4_,3);
        s_visible_1404903a0[4] = (char)s_visible_1404903a0._4_2_;
        s_visible_1404903a0[5] = SUB21(s_visible_1404903a0._4_2_,1);
        s_getMaterialCount_1404908c0[0] = (char)s_getMaterialCount_1404908c0._0_4_;
        s_getMaterialCount_1404908c0[1] = SUB41(s_getMaterialCount_1404908c0._0_4_,1);
        s_getMaterialCount_1404908c0[2] = SUB41(s_getMaterialCount_1404908c0._0_4_,2);
        s_getMaterialCount_1404908c0[3] = SUB41(s_getMaterialCount_1404908c0._0_4_,3);
        s_getMaterialCount_1404908c0[4] = (char)s_getMaterialCount_1404908c0._4_4_;
        s_getMaterialCount_1404908c0[5] = SUB41(s_getMaterialCount_1404908c0._4_4_,1);
        s_getMaterialCount_1404908c0[6] = SUB41(s_getMaterialCount_1404908c0._4_4_,2);
        s_getMaterialCount_1404908c0[7] = SUB41(s_getMaterialCount_1404908c0._4_4_,3);
        s_getMaterialCount_1404908c0[8] = (char)s_getMaterialCount_1404908c0._8_4_;
        s_getMaterialCount_1404908c0[9] = SUB41(s_getMaterialCount_1404908c0._8_4_,1);
        s_getMaterialCount_1404908c0[10] = SUB41(s_getMaterialCount_1404908c0._8_4_,2);
        s_getMaterialCount_1404908c0[0xb] = SUB41(s_getMaterialCount_1404908c0._8_4_,3);
        s_getMaterialCount_1404908c0[0xc] = (char)s_getMaterialCount_1404908c0._12_4_;
        s_getMaterialCount_1404908c0[0xd] = SUB41(s_getMaterialCount_1404908c0._12_4_,1);
        s_getMaterialCount_1404908c0[0xe] = SUB41(s_getMaterialCount_1404908c0._12_4_,2);
        s_getMaterialCount_1404908c0[0xf] = SUB41(s_getMaterialCount_1404908c0._12_4_,3);
        s_setMaterialProperty_1404908d8[0] = (char)s_setMaterialProperty_1404908d8._0_4_;
        s_setMaterialProperty_1404908d8[1] = SUB41(s_setMaterialProperty_1404908d8._0_4_,1);
        s_setMaterialProperty_1404908d8[2] = SUB41(s_setMaterialProperty_1404908d8._0_4_,2);
        s_setMaterialProperty_1404908d8[3] = SUB41(s_setMaterialProperty_1404908d8._0_4_,3);
        s_setMaterialProperty_1404908d8[4] = (char)s_setMaterialProperty_1404908d8._4_4_;
        s_setMaterialProperty_1404908d8[5] = SUB41(s_setMaterialProperty_1404908d8._4_4_,1);
        s_setMaterialProperty_1404908d8[6] = SUB41(s_setMaterialProperty_1404908d8._4_4_,2);
        s_setMaterialProperty_1404908d8[7] = SUB41(s_setMaterialProperty_1404908d8._4_4_,3);
        s_setMaterialProperty_1404908d8[8] = (char)s_setMaterialProperty_1404908d8._8_4_;
        s_setMaterialProperty_1404908d8[9] = SUB41(s_setMaterialProperty_1404908d8._8_4_,1);
        s_setMaterialProperty_1404908d8[10] = SUB41(s_setMaterialProperty_1404908d8._8_4_,2);
        s_setMaterialProperty_1404908d8[0xb] = SUB41(s_setMaterialProperty_1404908d8._8_4_,3);
        s_setMaterialProperty_1404908d8[0xc] = (char)s_setMaterialProperty_1404908d8._12_4_;
        s_setMaterialProperty_1404908d8[0xd] = SUB41(s_setMaterialProperty_1404908d8._12_4_,1);
        s_setMaterialProperty_1404908d8[0xe] = SUB41(s_setMaterialProperty_1404908d8._12_4_,2);
        s_setMaterialProperty_1404908d8[0xf] = SUB41(s_setMaterialProperty_1404908d8._12_4_,3);
        s_setMaterialProperty_1404908d8[0x10] = (char)s_setMaterialProperty_1404908d8._16_3_;
        s_setMaterialProperty_1404908d8[0x11] = SUB31(s_setMaterialProperty_1404908d8._16_3_,1);
        s_setMaterialProperty_1404908d8[0x12] = SUB31(s_setMaterialProperty_1404908d8._16_3_,2);
        s_executeMaterialFunction_1404908f0[0] = (char)s_executeMaterialFunction_1404908f0._0_4_;
        s_executeMaterialFunction_1404908f0[1] = SUB41(s_executeMaterialFunction_1404908f0._0_4_,1);
        s_executeMaterialFunction_1404908f0[2] = SUB41(s_executeMaterialFunction_1404908f0._0_4_,2);
        s_executeMaterialFunction_1404908f0[3] = SUB41(s_executeMaterialFunction_1404908f0._0_4_,3);
        s_executeMaterialFunction_1404908f0[4] = (char)s_executeMaterialFunction_1404908f0._4_4_;
        s_executeMaterialFunction_1404908f0[5] = SUB41(s_executeMaterialFunction_1404908f0._4_4_,1);
        s_executeMaterialFunction_1404908f0[6] = SUB41(s_executeMaterialFunction_1404908f0._4_4_,2);
        s_executeMaterialFunction_1404908f0[7] = SUB41(s_executeMaterialFunction_1404908f0._4_4_,3);
        s_executeMaterialFunction_1404908f0[8] = (char)s_executeMaterialFunction_1404908f0._8_4_;
        s_executeMaterialFunction_1404908f0[9] = SUB41(s_executeMaterialFunction_1404908f0._8_4_,1);
        s_executeMaterialFunction_1404908f0[10] = SUB41(s_executeMaterialFunction_1404908f0._8_4_,2)
        ;
        s_executeMaterialFunction_1404908f0[0xb] =
             SUB41(s_executeMaterialFunction_1404908f0._8_4_,3);
        s_executeMaterialFunction_1404908f0[0xc] = (char)s_executeMaterialFunction_1404908f0._12_4_;
        s_executeMaterialFunction_1404908f0[0xd] =
             SUB41(s_executeMaterialFunction_1404908f0._12_4_,1);
        s_executeMaterialFunction_1404908f0[0xe] =
             SUB41(s_executeMaterialFunction_1404908f0._12_4_,2);
        s_executeMaterialFunction_1404908f0[0xf] =
             SUB41(s_executeMaterialFunction_1404908f0._12_4_,3);
        s_executeMaterialFunction_1404908f0[0x10] = (char)s_executeMaterialFunction_1404908f0._16_7_
        ;
        s_executeMaterialFunction_1404908f0[0x11] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,1);
        s_executeMaterialFunction_1404908f0[0x12] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,2);
        s_executeMaterialFunction_1404908f0[0x13] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,3);
        s_executeMaterialFunction_1404908f0[0x14] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,4);
        s_executeMaterialFunction_1404908f0[0x15] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,5);
        s_executeMaterialFunction_1404908f0[0x16] =
             SUB71(s_executeMaterialFunction_1404908f0._16_7_,6);
        s_getMaterial_140490948[0] = (char)s_getMaterial_140490948._0_7_;
        s_getMaterial_140490948[1] = SUB71(s_getMaterial_140490948._0_7_,1);
        s_getMaterial_140490948[2] = SUB71(s_getMaterial_140490948._0_7_,2);
        s_getMaterial_140490948[3] = SUB71(s_getMaterial_140490948._0_7_,3);
        s_getMaterial_140490948[4] = SUB71(s_getMaterial_140490948._0_7_,4);
        s_getMaterial_140490948[5] = SUB71(s_getMaterial_140490948._0_7_,5);
        s_getMaterial_140490948[6] = SUB71(s_getMaterial_140490948._0_7_,6);
        s_getMaterial_140490948[7] = (char)s_getMaterial_140490948._7_4_;
        s_getMaterial_140490948[8] = SUB41(s_getMaterial_140490948._7_4_,1);
        s_getMaterial_140490948[9] = SUB41(s_getMaterial_140490948._7_4_,2);
        s_getMaterial_140490948[10] = SUB41(s_getMaterial_140490948._7_4_,3);
        if (lVar16 == 0) {
          lVar16 = lVar15;
        }
        puVar11 = (undefined *)0x0;
        if (lVar16 != lVar15) {
          puVar11 = (undefined *)(lVar16 + 0x30);
        }
        return puVar11;
      }
      if (lVar16 == lVar12) break;
      lVar16 = *(longlong *)(lVar16 + 8);
      cVar9 = FUN_14000d010(lVar16 + 0x10,pcVar13);
    }
  }
  return (undefined *)0x0;
}

