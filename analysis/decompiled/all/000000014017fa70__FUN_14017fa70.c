// Function: FUN_14017fa70
// Addr: 14017fa70
// Size: 7256 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017fa70(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint *puVar22;
  longlong lVar23;
  undefined1 auVar24 [8];
  longlong lVar25;
  ulonglong uVar26;
  char *pcVar27;
  byte *pbVar28;
  ulonglong uVar29;
  float *pfVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  byte bVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  int local_res10;
  float *local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 uVar60;
  undefined4 *puVar59;
  undefined8 in_stack_fffffffffffffd30;
  undefined4 *puVar61;
  undefined4 uVar62;
  undefined8 in_stack_fffffffffffffd38;
  undefined4 *puVar63;
  undefined4 uVar64;
  undefined8 in_stack_fffffffffffffd40;
  undefined4 *puVar65;
  undefined4 uVar66;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  longlong *local_258;
  undefined4 local_250;
  float local_248;
  float local_244;
  float local_240 [2];
  longlong *local_238;
  undefined4 *local_230;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  undefined8 local_210;
  float local_208;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined2 local_1af;
  undefined1 local_1ad;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined2 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined2 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  
  puVar65 = &local_1e8;
  if ((char)param_1[0x29e] != '\0') {
    FUN_14017e040(param_1 + 2);
  }
  bVar37 = *(byte *)(param_1 + 0x25) & 1;
  if (bVar37 == 0) {
    cVar15 = FUN_14017e6f0(param_1 + 2);
    bVar14 = true;
    if (cVar15 == '\0') goto LAB_14017fafc;
  }
  else {
LAB_14017fafc:
    bVar14 = false;
  }
  uVar34 = *(uint *)(param_1 + 0x25);
  uVar35 = uVar34 >> 0xd;
  uVar36 = uVar35 & 0xffffff01;
  if (((uVar35 & 1) == 0) || ((uVar34 >> 0xe & 1) == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  uVar34 = uVar34 >> 7;
  local_1d8 = uVar36;
  if (param_1[0x62a] == 0) {
    plVar5 = param_1 + 0x2c8;
    if (bVar13) {
      pcVar27 = "materials/util/combine_dhdr_upsample.json";
    }
    else {
      pcVar27 = "materials/util/combine_ldr.json";
      if (((byte)uVar35 & 1 & (byte)uVar36) != 0) {
        pcVar27 = "materials/util/combine_hdr_upsample.json";
      }
    }
    lVar17 = FUN_14014ff70(plVar5,pcVar27);
    param_1[0x62a] = lVar17;
    if ((byte)uVar36 == 0) {
      lVar17 = FUN_14014ff70(plVar5,"materials/util/downsample_quarter_bloom.json");
      param_1[0x62c] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/downsample_eighth_blur_v.json");
      param_1[0x62e] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/blur_h_bloom.json");
      param_1[0x62f] = lVar17;
    }
    else {
      pcVar27 = "materials/util/combine_srgb.json";
      if ((*(uint *)(param_1 + 0x25) >> 0x10 & 1) != 0) {
        pcVar27 = "materials/util/combine_video_hdr.json";
      }
      lVar17 = FUN_14014ff70(plVar5,pcVar27);
      param_1[0x62b] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/hdr_downsample.json");
      param_1[0x633] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/hdr_downsample_bloom.json");
      param_1[0x632] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/hdr_upsample.json");
      param_1[0x634] = lVar17;
      lVar17 = FUN_14014ff70(plVar5,"materials/util/hdr_upsample_cubic.json");
      param_1[0x635] = lVar17;
    }
    FUN_140184020(param_1);
  }
  if ((*(uint *)((longlong)param_1 + 0x124) & 0xfffffffd) == 0) {
    lVar17 = *param_1;
    local_238 = (longlong *)(lVar17 + 0x35c);
    local_258 = (longlong *)(lVar17 + 0x364);
    local_230 = (undefined4 *)(lVar17 + 0x360);
  }
  else {
    local_238 = param_1 + 0x636;
    local_258 = param_1 + 0x637;
    local_230 = (undefined4 *)((longlong)param_1 + 0x31b4);
  }
  *(int *)((longlong)param_1 + 0x154) = *(int *)((longlong)param_1 + 0x154) + 1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x15c);
  *(float *)((longlong)param_1 + 0x15c) = param_2;
  fVar45 = (float)((double)param_2 + (double)param_1[0x29]);
  param_1[0x29] = (longlong)((double)param_2 + (double)param_1[0x29]);
  fVar38 = _DAT_14049296c;
  *(float *)(param_1 + 0x28) = fVar45;
  if (fVar38 < fVar45) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_140150d60(param_1 + 0x2c8);
  FUN_1401891a0(*param_1,param_2);
  FUN_140183a70(param_1);
  lVar17 = *param_1;
  if ((lVar17 != 0) && ((*(uint *)(lVar17 + 0xe0) >> 3 & 1) != 0)) {
    _local_228 = ZEXT416((uint)(*(float *)(lVar17 + 0x154) * *(float *)(lVar17 + 0x114)));
    pfVar30 = (float *)param_1[10];
    uVar21 = *(undefined8 *)(lVar17 + 0x354);
    uVar8 = *(undefined8 *)pfVar30;
    uVar9 = *(undefined8 *)(pfVar30 + 2);
    local_res20._0_4_ = (float)uVar21;
    local_res20._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
    uVar10 = *(undefined8 *)(pfVar30 + 4);
    uVar11 = *(undefined8 *)(pfVar30 + 6);
    fVar38 = (float)local_res20 * DAT_1404926c0;
    fVar56 = local_res20._4_4_ * DAT_1404926c0;
    local_108 = *(undefined8 *)(pfVar30 + 8);
    uStack_100 = *(undefined8 *)(pfVar30 + 10);
    local_res20 = uVar21;
    local_res18._0_4_ = fVar38;
    pfVar18 = (float *)FUN_14005f5b0(pfVar30,3);
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,2);
    fVar38 = *pfVar19;
    fVar45 = pfVar19[3];
    fVar46 = pfVar19[2];
    fVar47 = pfVar19[1];
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,1);
    fVar39 = pfVar19[3];
    fVar41 = pfVar19[2];
    fVar43 = *pfVar19;
    fVar44 = pfVar19[1];
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,0);
    fVar48 = pfVar19[3];
    fVar49 = pfVar19[2];
    fVar51 = pfVar18[3];
    fVar53 = *pfVar19;
    fVar55 = pfVar19[1];
    fVar57 = pfVar18[2];
    fVar58 = *pfVar18;
    fVar3 = pfVar18[1];
    *(undefined8 *)pfVar30 = uVar8;
    *(undefined8 *)(pfVar30 + 2) = uVar9;
    *(undefined8 *)(pfVar30 + 4) = uVar10;
    *(undefined8 *)(pfVar30 + 6) = uVar11;
    pfVar30[0xd] = fVar47 * 0.0 + fVar56 * fVar44 + local_res18._0_4_ * fVar55 + fVar3;
    pfVar30[0xc] = local_res18._0_4_ * fVar53 + fVar56 * fVar43 + fVar38 * 0.0 + fVar58;
    pfVar30[0xe] = fVar46 * 0.0 + local_res18._0_4_ * fVar49 + fVar56 * fVar41 + fVar57;
    pfVar30[0xf] = fVar45 * 0.0 + local_res18._0_4_ * fVar48 + fVar56 * fVar39 + fVar51;
    *(undefined8 *)(pfVar30 + 8) = local_108;
    *(undefined8 *)(pfVar30 + 10) = uStack_100;
    pfVar18 = (float *)FUN_14005f5b0(pfVar30,0);
    fVar38 = *pfVar18;
    fVar45 = pfVar18[1];
    fVar46 = pfVar18[2];
    fVar47 = pfVar18[3];
    pfVar18 = (float *)FUN_14005f5b0(pfVar30,1);
    uVar21 = *(undefined8 *)(pfVar18 + 1);
    uVar50 = local_228._0_4_;
    fVar48 = (float)local_228._0_4_ * *pfVar18;
    fVar49 = (float)local_228._0_4_ * pfVar18[3];
    pfVar18 = (float *)FUN_14005f5b0(pfVar30,2);
    fVar39 = *pfVar18;
    fVar41 = pfVar18[1];
    fVar43 = pfVar18[2];
    fVar44 = pfVar18[3];
    pfVar30[4] = fVar48;
    pfVar30[7] = fVar49;
    *pfVar30 = (float)uVar50 * fVar38;
    pfVar30[1] = (float)uVar50 * fVar45;
    pfVar30[2] = (float)uVar50 * fVar46;
    pfVar30[3] = (float)uVar50 * fVar47;
    fVar39 = _DAT_140492e30 * fVar39;
    fVar41 = _UNK_140492e34 * fVar41;
    fVar43 = _UNK_140492e38 * fVar43;
    fVar44 = _UNK_140492e3c * fVar44;
    *(ulonglong *)(pfVar30 + 5) =
         CONCAT44((float)uVar50 * (float)((ulonglong)uVar21 >> 0x20),(float)uVar50 * (float)uVar21);
    pfVar30[0xc] = pfVar30[0xc];
    pfVar30[0xd] = pfVar30[0xd];
    pfVar30[0xe] = pfVar30[0xe];
    pfVar30[0xf] = pfVar30[0xf];
    pfVar30[8] = fVar39;
    pfVar30[9] = fVar41;
    pfVar30[10] = fVar43;
    pfVar30[0xb] = fVar44;
    uVar21 = *(undefined8 *)pfVar30;
    uVar8 = *(undefined8 *)(pfVar30 + 2);
    uVar9 = *(undefined8 *)(pfVar30 + 4);
    uVar10 = *(undefined8 *)(pfVar30 + 6);
    uVar11 = *(undefined8 *)(pfVar30 + 8);
    uVar12 = *(undefined8 *)(pfVar30 + 10);
    local_res18._0_4_ = local_res20._4_4_ * DAT_1404929ac;
    local_res20 = CONCAT44(local_res20._4_4_,(float)local_res20 * DAT_1404929ac);
    pfVar18 = (float *)FUN_14005f5b0(pfVar30,3);
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,2);
    fVar51 = DAT_1404929a0 * pfVar19[3];
    fVar58 = DAT_1404929a0 * pfVar19[2];
    fVar53 = *pfVar19 * DAT_1404929a0;
    fVar57 = DAT_1404929a0 * pfVar19[1];
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,1);
    fVar55 = local_res18._0_4_ * pfVar19[3];
    fVar48 = local_res18._0_4_ * pfVar19[2];
    fVar49 = local_res18._0_4_ * *pfVar19;
    local_res18 = (float *)CONCAT44(local_res18._4_4_,local_res18._0_4_ * pfVar19[1]);
    pfVar19 = (float *)FUN_14005f5b0(pfVar30,0);
    fVar38 = pfVar19[3];
    fVar45 = pfVar19[2];
    fVar46 = *pfVar19;
    fVar47 = pfVar18[3];
    fVar39 = pfVar19[1];
    fVar41 = pfVar18[2];
    fVar43 = *pfVar18;
    fVar44 = pfVar18[1];
    *(undefined8 *)pfVar30 = uVar21;
    *(undefined8 *)(pfVar30 + 2) = uVar8;
    pfVar30[0xf] = fVar55 + (float)local_res20 * fVar38 + fVar51 + fVar47;
    *(undefined8 *)(pfVar30 + 4) = uVar9;
    *(undefined8 *)(pfVar30 + 6) = uVar10;
    pfVar30[0xd] = local_res18._0_4_ + (float)local_res20 * fVar39 + fVar57 + fVar44;
    pfVar30[0xc] = (float)local_res20 * fVar46 + fVar49 + fVar53 + fVar43;
    pfVar30[0xe] = fVar58 + (float)local_res20 * fVar45 + fVar48 + fVar41;
    *(undefined8 *)(pfVar30 + 8) = uVar11;
    *(undefined8 *)(pfVar30 + 10) = uVar12;
  }
  uVar35 = 0;
  plVar5 = (longlong *)param_1[9];
  lVar17 = plVar5[1];
  param_1[0x22e] = *plVar5;
  param_1[0x22f] = lVar17;
  lVar17 = plVar5[3];
  param_1[0x230] = plVar5[2];
  param_1[0x231] = lVar17;
  lVar17 = plVar5[5];
  param_1[0x232] = plVar5[4];
  param_1[0x233] = lVar17;
  lVar17 = plVar5[7];
  plVar33 = (longlong *)param_1[10];
  param_1[0x234] = plVar5[6];
  param_1[0x235] = lVar17;
  lVar17 = plVar33[1];
  param_1[0x236] = *plVar33;
  param_1[0x237] = lVar17;
  lVar17 = plVar33[3];
  param_1[0x238] = plVar33[2];
  param_1[0x239] = lVar17;
  lVar17 = plVar33[5];
  param_1[0x23a] = plVar33[4];
  param_1[0x23b] = lVar17;
  uVar50 = *(undefined4 *)((longlong)plVar33 + 0x34);
  lVar17 = plVar33[7];
  uVar52 = *(undefined4 *)((longlong)plVar33 + 0x3c);
  puVar20 = (undefined8 *)param_1[8];
  *(int *)(param_1 + 0x23c) = (int)plVar33[6];
  *(undefined4 *)((longlong)param_1 + 0x11e4) = uVar50;
  *(int *)(param_1 + 0x23d) = (int)lVar17;
  *(undefined4 *)((longlong)param_1 + 0x11ec) = uVar52;
  *puVar20 = 0x3f800000;
  puVar20[1] = 0;
  *(undefined4 *)(puVar20 + 2) = 0;
  *(undefined8 *)((longlong)puVar20 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x24) = 0;
  puVar20[5] = 0x3f800000;
  puVar20[6] = 0;
  *(undefined4 *)(puVar20 + 7) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x3c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
  puVar20 = (undefined8 *)FUN_140184310(local_228,param_1[9],2);
  lVar17 = param_1[9];
  uVar40 = (uint)*puVar20 ^ DAT_140492ff0;
  uVar42 = (uint)((ulonglong)*puVar20 >> 0x20) ^ _UNK_140492ff4;
  *(uint *)(param_1 + 0x2f) = *(uint *)(puVar20 + 1) ^ DAT_140492ff0;
  param_1[0x2e] = CONCAT44(uVar42,uVar40);
  uVar50 = 0;
  uVar52 = 0;
  uVar54 = 0;
LAB_1401801a0:
  do {
    if (3 < uVar35) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x12a);
    }
    uVar4 = *(undefined4 *)(lVar17 + (longlong)(int)uVar35 * 0x10);
    if (3 < uVar35) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec4.inl",0x1e1);
    }
    if (uVar35 != 0) {
      if (uVar35 == 1) {
        uVar35 = 2;
        uVar52 = uVar4;
        goto LAB_1401801a0;
      }
      if (uVar35 == 2) {
        uVar35 = 3;
        uVar54 = uVar4;
        goto LAB_1401801a0;
      }
      if (uVar35 == 3) break;
    }
    uVar35 = uVar35 + 1;
    uVar50 = uVar4;
  } while ((int)uVar35 < 4);
  lVar17 = param_1[9];
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar50;
  uVar35 = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar52;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar54;
  uVar50 = 0;
  uVar52 = 0;
  uVar54 = 0;
LAB_140180240:
  do {
    if (3 < uVar35) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_mat4x4.inl",0x12a);
    }
    uVar4 = *(undefined4 *)(lVar17 + 4 + (longlong)(int)uVar35 * 0x10);
    if (3 < uVar35) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec4.inl",0x1e1);
    }
    uVar62 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
    uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
    uVar66 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
    uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
    if (uVar35 != 0) {
      if (uVar35 == 1) {
        uVar35 = 2;
        uVar52 = uVar4;
        goto LAB_140180240;
      }
      if (uVar35 == 2) {
        uVar35 = 3;
        uVar54 = uVar4;
        goto LAB_140180240;
      }
      if (uVar35 == 3) break;
    }
    uVar35 = uVar35 + 1;
    uVar50 = uVar4;
  } while ((int)uVar35 < 4);
  *(undefined4 *)(param_1 + 0x31) = uVar50;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar52;
  *(undefined4 *)(param_1 + 0x32) = uVar54;
  if ((char)param_1[0x309] != '\0') {
    FUN_140189e10(*param_1);
  }
  FUN_140171440(param_1 + 0x2e3,param_2);
  FUN_14018b390(*param_1);
  if (*(int *)(*param_1 + 0xe0) < 0) {
    FUN_140184020(param_1);
    *(uint *)(*param_1 + 0xe0) = *(uint *)(*param_1 + 0xe0) & 0x7fffffff;
  }
  FUN_140190c80(*param_1);
  fVar38 = DAT_140492704;
  puVar59 = (undefined4 *)CONCAT44(uVar60,DAT_140492704);
  (**(code **)(*(longlong *)param_1[0x2a5] + 0x118))
            ((longlong *)param_1[0x2a5],(int)*local_238,*local_230,(int)*local_258,puVar59);
  if ((*(byte *)(*param_1 + 0xe0) & 1) != 0) {
    if ((uVar34 & 1) == 0) {
      plVar33 = (longlong *)param_1[0x612];
      lVar17 = plVar33[1];
      plVar5 = (longlong *)(lVar17 + 0x50);
      *plVar5 = *plVar5 + 8;
      **(longlong **)(lVar17 + 0x50) = (longlong)plVar33;
      (**(code **)(*plVar33 + 0x48))();
      (**(code **)(*(longlong *)param_1[0x2a5] + 0x120))((longlong *)param_1[0x2a5],1,0);
      plVar5 = (longlong *)param_1[0x612];
      *(longlong *)(plVar5[1] + 0x50) = *(longlong *)(plVar5[1] + 0x50) + -8;
      if ((longlong *)**(longlong **)(plVar5[1] + 0x50) == (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
      else {
        (**(code **)(*(longlong *)**(longlong **)(plVar5[1] + 0x50) + 0x48))();
      }
    }
    else {
      puVar20 = (undefined8 *)param_1[9];
      *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
      local_res18 = (float *)CONCAT44(local_res18._4_4_,1);
      local_res20 = local_res20 & 0xffffffff00000000;
      local_240[0] = 0.0;
      param_1[9] = (longlong)(puVar20 + 8);
      local_244 = 0.0;
      local_248 = 0.0;
      puVar20[8] = *puVar20;
      puVar20[9] = puVar20[1];
      local_25c = 1.4013e-45;
      local_260 = 0.0;
      local_264 = 0.0;
      puVar20[10] = puVar20[2];
      puVar20[0xb] = puVar20[3];
      local_268 = 0.0;
      local_1e8 = 0;
      local_1e4 = 0xffffffff;
      puVar20[0xc] = puVar20[4];
      puVar20[0xd] = puVar20[5];
      local_1e0 = 0;
      local_1dc = 0;
      local_238 = (longlong *)((ulonglong)local_238 & 0xffffffff00000000);
      *(undefined4 *)(puVar20 + 0xe) = *(undefined4 *)(puVar20 + 6);
      *(undefined4 *)((longlong)puVar20 + 0x74) = *(undefined4 *)((longlong)puVar20 + 0x34);
      *(undefined4 *)(puVar20 + 0xf) = *(undefined4 *)(puVar20 + 7);
      *(undefined4 *)((longlong)puVar20 + 0x7c) = *(undefined4 *)((longlong)puVar20 + 0x3c);
      local_230 = (undefined4 *)((ulonglong)local_230 & 0xffffffff00000000);
      puVar63 = &local_1e4;
      puVar61 = &local_1e0;
      puVar59 = &local_1dc;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,1);
      FUN_1401844f0(local_228,&local_258,&local_230,&local_238,puVar59,puVar61,puVar63,puVar65,
                    &local_268,&local_264,&local_260,&local_25c,&local_248,&local_244,local_240,
                    &local_res20,&local_res18);
      uVar62 = (undefined4)((ulonglong)puVar61 >> 0x20);
      uVar64 = (undefined4)((ulonglong)puVar63 >> 0x20);
      uVar66 = (undefined4)((ulonglong)puVar65 >> 0x20);
      FUN_1401842d0(param_1[9],local_228);
      FUN_140184630(local_228);
      fVar45 = *(float *)((longlong)param_1 + 0x17c);
      local_264 = *(float *)((longlong)param_1 + 0x18c);
      local_260 = *(float *)(param_1 + 0x32);
      local_248 = *(float *)(param_1 + 0xf);
      local_244 = *(float *)((longlong)param_1 + 0x7c);
      fVar46 = *(float *)(param_1 + 0x31);
      local_240[0] = *(float *)(param_1 + 0x10);
      local_res20 = CONCAT44(local_res20._4_4_,fVar45);
      local_268 = *(float *)(param_1 + 0x30);
      local_25c = *(float *)((longlong)param_1 + 0x184);
      *(float *)(param_1 + 0x31) =
           fVar46 * (float)local_228._0_4_ + local_264 * fStack_21c + local_260 * (float)local_210;
      *(float *)((longlong)param_1 + 0x18c) =
           fVar46 * (float)local_228._4_4_ + local_264 * (float)local_218 +
           local_210._4_4_ * local_260;
      *(float *)(param_1 + 0x32) =
           local_264 * local_218._4_4_ + fVar46 * fStack_220 + local_208 * local_260;
      *(float *)((longlong)param_1 + 0x17c) =
           local_268 * fStack_21c + fVar45 * (float)local_228._0_4_ + local_25c * (float)local_210;
      *(float *)(param_1 + 0x30) =
           fVar45 * (float)local_228._4_4_ + local_268 * (float)local_218 +
           local_25c * local_210._4_4_;
      *(float *)((longlong)param_1 + 0x184) =
           local_268 * local_218._4_4_ + fVar45 * fStack_220 + local_25c * local_208;
      *(float *)(param_1 + 0xf) =
           (float)local_228._0_4_ * local_248 + fStack_21c * local_244 +
           (float)local_210 * local_240[0];
      *(float *)((longlong)param_1 + 0x7c) =
           (float)local_218 * local_244 + (float)local_228._4_4_ * local_248 +
           local_210._4_4_ * local_240[0];
      *(float *)(param_1 + 0x10) =
           fStack_220 * local_248 + local_218._4_4_ * local_244 + local_240[0] * local_208;
      if (bVar37 != 0) {
        uVar21 = FUN_14005f600(param_1[10],1);
        puVar22 = (uint *)FUN_14005f500(uVar21,1);
        uVar35 = *puVar22 ^ DAT_140492ff0;
        uVar21 = FUN_14005f600(param_1[10],1);
        puVar22 = (uint *)FUN_14005f500(uVar21,1);
        *puVar22 = uVar35;
      }
      bVar16 = (byte)(*(uint *)(param_1 + 0x25) >> 0xb);
      if ((*(uint *)(param_1 + 0x25) & 1) == 0) {
        bVar16 = ~bVar16;
      }
      local_res18 = (float *)(CONCAT71(local_res18._1_7_,bVar16) & 0xffffffffffffff01);
      FUN_14017e180(param_1 + 0x38,&local_res18);
      (**(code **)(*(longlong *)param_1[0x2a5] + 0xb0))
                ((longlong *)param_1[0x2a5],(ulonglong)local_res18 & 0xff);
      plVar33 = (longlong *)param_1[0x612];
      lVar17 = plVar33[1];
      plVar5 = (longlong *)(lVar17 + 0x50);
      *plVar5 = *plVar5 + 8;
      **(longlong **)(lVar17 + 0x50) = (longlong)plVar33;
      (**(code **)(*plVar33 + 0x48))();
      FUN_140183550(param_1,1);
      plVar5 = (longlong *)param_1[0x612];
      *(longlong *)(plVar5[1] + 0x50) = *(longlong *)(plVar5[1] + 0x50) + -8;
      if ((longlong *)**(longlong **)(plVar5[1] + 0x50) == (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
      else {
        (**(code **)(*(longlong *)**(longlong **)(plVar5[1] + 0x50) + 0x48))();
      }
      FUN_14017e760(param_1 + 2);
      if (bVar37 != 0) {
        uVar21 = FUN_14005f600(param_1[10],1);
        puVar22 = (uint *)FUN_14005f500(uVar21,1);
        uVar35 = *puVar22 ^ DAT_140492ff0;
        uVar21 = FUN_14005f600(param_1[10],1);
        puVar22 = (uint *)FUN_14005f500(uVar21,1);
        *puVar22 = uVar35;
      }
      *(float *)((longlong)param_1 + 0x18c) = local_264;
      *(float *)(param_1 + 0x32) = local_260;
      *(float *)((longlong)param_1 + 0x17c) = (float)local_res20;
      *(float *)(param_1 + 0x30) = local_268;
      *(float *)((longlong)param_1 + 0x184) = local_25c;
      *(float *)(param_1 + 0xf) = local_248;
      *(float *)((longlong)param_1 + 0x7c) = local_244;
      *(float *)(param_1 + 0x10) = local_240[0];
      *(float *)(param_1 + 0x31) = fVar46;
      param_1[9] = param_1[9] + -0x40;
      *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
    }
  }
  uVar29 = 0;
  pfVar30 = (float *)0x7fffffffffffffff;
  pbVar28 = (byte *)param_1[0x39];
  bVar37 = (byte)(*(uint *)(param_1 + 0x25) >> 0xb) & 1;
  if (pbVar28 == (byte *)param_1[0x3a]) {
    lVar17 = (longlong)pbVar28 - param_1[0x38];
    if (lVar17 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar26 = param_1[0x3a] - param_1[0x38];
    local_res18 = (float *)(lVar17 + 1);
    if (uVar26 <= 0x7fffffffffffffff - (uVar26 >> 1)) {
      pfVar18 = (float *)((uVar26 >> 1) + uVar26);
      pfVar30 = local_res18;
      if (local_res18 <= pfVar18) {
        pfVar30 = pfVar18;
      }
      if (pfVar30 != (float *)0x0) {
        if ((float *)0xfff < pfVar30) {
          pfVar18 = (float *)((longlong)pfVar30 + 0x27);
          if (pfVar18 <= pfVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_14018097b;
        }
        uVar29 = FUN_14028af20(pfVar30);
      }
LAB_1401809cd:
      *(byte *)(uVar29 + lVar17) = bVar37;
      pbVar6 = (byte *)param_1[0x38];
      if (pbVar28 == (byte *)param_1[0x39]) {
        lVar17 = param_1[0x39] - (longlong)pbVar6;
        uVar26 = uVar29;
        pbVar28 = pbVar6;
      }
      else {
        FUN_1404210f0(uVar29,pbVar6,(longlong)pbVar28 - (longlong)pbVar6);
        uVar26 = lVar17 + 1 + uVar29;
        lVar17 = param_1[0x39] - (longlong)pbVar28;
      }
      FUN_1404210f0(uVar26,pbVar28,lVar17);
      FUN_14005b010(param_1 + 0x38,uVar29,local_res18,pfVar30);
      uVar36 = local_1d8;
      goto LAB_140180a2d;
    }
    pfVar18 = (float *)0x8000000000000026;
LAB_14018097b:
    lVar23 = FUN_14028af20(pfVar18);
    if (lVar23 != 0) {
      uVar29 = lVar23 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar29 - 8) = lVar23;
      goto LAB_1401809cd;
    }
LAB_140181648:
    pcVar7 = (code *)swi(0x29);
    uVar34 = (*pcVar7)(5);
  }
  else {
    *pbVar28 = bVar37;
    param_1[0x39] = param_1[0x39] + 1;
LAB_140180a2d:
    (**(code **)(*(longlong *)param_1[0x2a5] + 0xb0))((longlong *)param_1[0x2a5],bVar37);
    if ((((*(byte *)(param_1 + 0x25) & 0x40) == 0) ||
        (lVar17 = *param_1, (*(uint *)(lVar17 + 0xe0) >> 1 & 1) == 0)) ||
       (*(longlong *)(lVar17 + 0x158) == *(longlong *)(lVar17 + 0x160))) {
      FUN_140183550(param_1,0);
      if (((longlong *)param_1[0x61f] != (longlong *)0x0) && ((uVar34 & 1) != 0)) {
        (**(code **)(*(longlong *)param_1[0x61f] + 8))();
        (**(code **)(*(longlong *)param_1[0x61f] + 0x20))();
      }
      if ((char)uVar36 != '\0') {
        (**(code **)(*(longlong *)param_1[0x613] + 8))();
        FUN_140155fc0(param_1[0x62b]);
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        FUN_140157430(param_1[0x62b]);
      }
    }
    else {
      FUN_140183550(param_1,0);
      (**(code **)(*(longlong *)param_1[0x613] + 8))();
      if (((longlong *)param_1[0x61f] != (longlong *)0x0) && ((uVar34 & 1) != 0)) {
        (**(code **)(*(longlong *)param_1[0x61f] + 8))();
        (**(code **)(*(longlong *)param_1[0x61f] + 0x20))();
      }
      (**(code **)(*(longlong *)param_1[0x2a5] + 0xb0))((longlong *)param_1[0x2a5],0);
      FUN_140183610(param_1);
      if (bVar14) {
        puVar59 = (undefined4 *)
                  CONCAT44((int)((ulonglong)puVar59 >> 0x20),
                           (int)(*(float *)(param_1 + 0x11) + *(float *)(param_1 + 0x11)));
        (**(code **)(*(longlong *)param_1[0x2a5] + 0x88))
                  ((longlong *)param_1[0x2a5],0,0,
                   (int)(*(float *)((longlong)param_1 + 0x84) + *(float *)((longlong)param_1 + 0x84)
                        ),puVar59);
      }
      if ((char)uVar36 != '\0') {
        (**(code **)(*(longlong *)param_1[0x2a5] + 0x158))
                  ((longlong *)param_1[0x2a5],param_1 + 0x17);
        *(undefined8 *)(param_1[0x62a] + 0xd8) = *(undefined8 *)(param_1[0x617] + 0x20);
      }
      FUN_140155fc0(param_1[0x62a]);
      (**(code **)(*(longlong *)param_1[0xb] + 8))();
      FUN_140157430(param_1[0x62a]);
    }
    if (param_1[0x631] != 0) {
      (**(code **)(*(longlong *)param_1[0x613] + 8))();
      FUN_140155fc0(param_1[0x631]);
      (**(code **)(*(longlong *)param_1[0xb] + 8))();
      FUN_140157430(param_1[0x631]);
    }
    fVar45 = DAT_1404926c0;
    lVar17 = *param_1;
    fVar46 = 0.0;
    if ((*(byte *)(lVar17 + 0xe0) & 4) != 0) {
      lVar23 = *(longlong *)(lVar17 + 0x310);
      if ((lVar23 != *(longlong *)(lVar17 + 0x318)) &&
         ((ulonglong)*(uint *)(lVar17 + 0xe4) <
          (ulonglong)(*(longlong *)(lVar17 + 0x318) - lVar23 >> 5))) {
        fVar47 = *(float *)((ulonglong)*(uint *)(lVar17 + 0xe4) * 0x20 + 0x18 + lVar23);
        fVar39 = fVar47 - *(float *)(lVar17 + 0xec);
        if (fVar39 < DAT_1404926c0) {
LAB_140180c81:
          fVar46 = fVar39 + fVar39;
        }
        else {
          if (fVar39 <= fVar47 - DAT_1404926c0) goto LAB_140180c90;
          if (fVar39 < DAT_1404926c0) goto LAB_140180c81;
          fVar46 = (fVar47 - fVar39) + (fVar47 - fVar39);
        }
        fVar46 = fVar38 - fVar46;
      }
    }
LAB_140180c90:
    if ((0.0 < fVar46) && (param_1[0x630] != 0)) {
      *(float *)(param_1 + 0x26) = fVar46;
      FUN_140155fc0();
      (**(code **)(*(longlong *)param_1[0xb] + 8))();
      FUN_140157430(param_1[0x630]);
    }
    if (bVar14) {
      puVar59 = (undefined4 *)
                CONCAT44((int)((ulonglong)puVar59 >> 0x20),(int)*(float *)(param_1 + 0x11));
      (**(code **)(*(longlong *)param_1[0x2a5] + 0x88))
                ((longlong *)param_1[0x2a5],0,0,(int)*(float *)((longlong)param_1 + 0x84),puVar59);
    }
    local_res18 = (float *)((longlong)param_1 + 0x84);
    cVar15 = FUN_1401830a0();
    fVar46 = fVar38;
    if (cVar15 == '\0') {
      fVar46 = 0.0;
    }
    fVar47 = *(float *)((longlong)param_1 + 0x31cc);
    if (fVar47 != fVar46) {
      if (DAT_140492620 <= (float)((uint)(fVar46 - fVar47) & _DAT_140492fc0)) {
        fVar39 = param_2;
        if (fVar38 <= param_2) {
          fVar39 = fVar38;
        }
        fVar47 = (fVar46 - fVar47) * fVar39 + fVar47;
        *(float *)((longlong)param_1 + 0x31cc) = fVar47;
      }
      else {
        *(float *)((longlong)param_1 + 0x31cc) = fVar46;
        fVar47 = fVar46;
      }
      local_res18 = (float *)((longlong)param_1 + 0x84);
    }
    pfVar30 = (float *)((longlong)param_1 + 0x84);
    pfVar18 = (float *)(param_1 + 0x11);
    if (0.0 < fVar47) {
      local_1ad = 1;
      local_1b8 = 0;
      local_1af = 0;
      pcVar27 = "Done.";
      local_1ac = 0;
      plVar5 = param_1 + 0x316;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_184 = 0;
      local_17c = 0;
      local_158 = 0;
      local_14f = 0;
      local_14c = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_124 = 0;
      local_11c = 0;
      if (fVar45 < fVar46) {
        pcVar27 = "Hold on";
      }
      local_1c8 = 0;
      local_168 = 0;
      local_174 = 1;
      local_14d = 1;
      local_114 = 1;
      local_1b0 = 1;
      local_150 = 1;
      local_1c0 = 5;
      local_160 = 5;
      local_1bc = 0x41400000;
      local_15c = 0x40c00000;
      lVar17 = FUN_1401b0410(plVar5,&local_1c8,pcVar27,0);
      if (lVar17 != 0) {
        fVar47 = *(float *)(lVar17 + 0x98);
        fVar39 = *(float *)(lVar17 + 0x90);
        fVar51 = *(float *)(lVar17 + 0x9c) - *(float *)(lVar17 + 0x94);
        fVar48 = (fVar38 - *(float *)((longlong)param_1 + 0x31cc)) * *pfVar18 * DAT_14049262c;
        fVar38 = *(float *)(lVar17 + 0xa0);
        uVar21 = FUN_14014ff70(param_1 + 0x2c8,"materials/util/compiler_backdrop.json");
        fVar41 = *(float *)((longlong)param_1 + 0x31cc) * DAT_1404926c8;
        *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
        *(float *)(param_1 + 0x26) = fVar41;
        puVar20 = (undefined8 *)param_1[8];
        param_1[8] = (longlong)(puVar20 + 8);
        puVar20[8] = *puVar20;
        puVar20[9] = puVar20[1];
        puVar20[10] = puVar20[2];
        puVar20[0xb] = puVar20[3];
        puVar20[0xc] = puVar20[4];
        puVar20[0xd] = puVar20[5];
        puVar20[0xe] = puVar20[6];
        puVar20[0xf] = puVar20[7];
        pfVar19 = (float *)param_1[8];
        fVar49 = fVar48 / *pfVar18;
        fVar49 = fVar49 + fVar49;
        fVar41 = pfVar19[4];
        fVar43 = *pfVar19;
        fVar44 = pfVar19[8];
        *(undefined8 *)pfVar19 = *(undefined8 *)pfVar19;
        *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar19 + 2);
        *(undefined8 *)(pfVar19 + 4) = *(undefined8 *)(pfVar19 + 4);
        *(undefined8 *)(pfVar19 + 6) = *(undefined8 *)(pfVar19 + 6);
        *(undefined8 *)(pfVar19 + 8) = *(undefined8 *)(pfVar19 + 8);
        *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(pfVar19 + 10);
        pfVar19[0xc] = fVar49 * fVar41 + fVar43 * 0.0 + fVar44 * 0.0 + pfVar19[0xc];
        *(ulonglong *)(pfVar19 + 0xd) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar19 + 9) >> 0x20) * 0.0 +
                      fVar49 * (float)((ulonglong)*(undefined8 *)(pfVar19 + 5) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(pfVar19 + 1) >> 0x20) * 0.0 +
                      (float)((ulonglong)*(undefined8 *)(pfVar19 + 0xd) >> 0x20),
                      (float)*(undefined8 *)(pfVar19 + 9) * 0.0 +
                      fVar49 * (float)*(undefined8 *)(pfVar19 + 5) +
                      (float)*(undefined8 *)(pfVar19 + 1) * 0.0 +
                      (float)*(undefined8 *)(pfVar19 + 0xd));
        pfVar19[0xf] = fVar49 * pfVar19[7] + pfVar19[3] * 0.0 + pfVar19[0xb] * 0.0 + pfVar19[0xf];
        FUN_140155fc0(uVar21);
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        FUN_140157430(uVar21);
        param_1[8] = param_1[8] + -0x40;
        *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
        lVar23 = *plVar5;
        puVar20 = *(undefined8 **)(lVar23 + 0x40);
        *(undefined1 *)(lVar23 + 0x1ca) = 1;
        *(undefined8 **)(lVar23 + 0x40) = puVar20 + 8;
        puVar20[8] = *puVar20;
        puVar20[9] = puVar20[1];
        puVar20[10] = puVar20[2];
        puVar20[0xb] = puVar20[3];
        puVar20[0xc] = puVar20[4];
        puVar20[0xd] = puVar20[5];
        puVar20[0xe] = puVar20[6];
        puVar20[0xf] = puVar20[7];
        lVar23 = *plVar5;
        puVar20 = *(undefined8 **)(lVar23 + 0x38);
        *(undefined1 *)(lVar23 + 0x1ca) = 1;
        *(undefined8 **)(lVar23 + 0x38) = puVar20 + 8;
        puVar20[8] = *puVar20;
        puVar20[9] = puVar20[1];
        puVar20[10] = puVar20[2];
        puVar20[0xb] = puVar20[3];
        puVar20[0xc] = puVar20[4];
        puVar20[0xd] = puVar20[5];
        puVar20[0xe] = puVar20[6];
        puVar20[0xf] = puVar20[7];
        lVar23 = *plVar5;
        puVar20 = *(undefined8 **)(lVar23 + 0x30);
        *(undefined1 *)(lVar23 + 0x1ca) = 1;
        *(undefined8 **)(lVar23 + 0x30) = puVar20 + 8;
        puVar20[8] = *puVar20;
        puVar20[9] = puVar20[1];
        puVar20[10] = puVar20[2];
        puVar20[0xb] = puVar20[3];
        puVar20[0xc] = puVar20[4];
        puVar20[0xd] = puVar20[5];
        uVar50 = DAT_140492944;
        puVar20[0xe] = puVar20[6];
        puVar20[0xf] = puVar20[7];
        lVar23 = *plVar5;
        uVar29 = *(ulonglong *)(lVar23 + 0x74);
        local_res20._4_4_ = (float)(uVar29 >> 0x20);
        uVar21 = CONCAT44(uVar62,local_res20._4_4_);
        local_res20 = uVar29;
        (**(code **)(**(longlong **)(lVar23 + 0x1518) + 0x18))
                  (*(longlong **)(lVar23 + 0x1518),*(undefined8 *)(lVar23 + 0x40),0,
                   uVar29 & 0xffffffff,(ulonglong)puVar59 & 0xffffffff00000000,uVar21,
                   CONCAT44(uVar64,DAT_140492a18),CONCAT44(uVar66,uVar50));
        local_258 = (longlong *)0x3f8000003f800000;
        local_250 = 0x3f800000;
        puVar20 = *(undefined8 **)(*plVar5 + 0x38);
        *puVar20 = 0x3f800000;
        puVar20[1] = 0;
        *(undefined4 *)(puVar20 + 2) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x14) = 0x3f800000;
        *(undefined8 *)((longlong)puVar20 + 0x1c) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 0;
        puVar20[5] = 0x3f800000;
        puVar20[6] = 0;
        *(undefined4 *)(puVar20 + 7) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = 0x3f800000;
        fVar48 = (*pfVar18 * fVar45 + fVar51 + fVar51) - fVar48;
        uVar21 = FUN_1401b3430(plVar5,lVar17,(int)((*pfVar30 - (fVar47 - fVar39)) * fVar45),
                               (int)fVar48,&local_258,*(undefined4 *)((longlong)param_1 + 0x31cc));
        FUN_1401b3240(uVar21,lVar17);
        if (fVar45 < fVar46) {
          local_218 = 0;
          local_210 = 0;
          _local_228 = ZEXT816(0);
          FUN_140017480(local_228,"Compiling assets",0x10);
          puVar20 = (undefined8 *)FUN_14003a8b0(&local_108,local_228,&DAT_14048e3c0);
          if (0xf < (ulonglong)puVar20[3]) {
            puVar20 = (undefined8 *)*puVar20;
          }
          lVar17 = FUN_1401b0410(plVar5,&local_1c8,puVar20,0);
          uVar21 = FUN_140017240(&local_108);
          fVar46 = param_2;
          if (lVar17 != 0) {
            fVar46 = *(float *)(lVar17 + 0x98) - *(float *)(lVar17 + 0x90);
            param_2 = *(float *)(lVar17 + 0x9c) - *(float *)(lVar17 + 0x94);
            FUN_1401b3240(uVar21,lVar17);
            uVar34 = (int)(((int)(*(float *)(param_1 + 0x28) * DAT_14049284c) >> 0x1f & 3U) +
                          (int)(*(float *)(param_1 + 0x28) * DAT_14049284c)) >> 2 & 0x80000003;
            if ((int)uVar34 < 0) {
              uVar34 = (uVar34 - 1 | 0xfffffffc) + 1;
            }
            local_res10 = 0;
            if (0 < (int)uVar34) {
              do {
                uVar26 = local_210;
                uVar29 = local_218;
                if (local_218 < local_210) {
                  auVar24 = (undefined1  [8])local_228;
                  if (0xf < local_210) {
                    auVar24 = local_228;
                  }
                  puVar2 = (undefined2 *)((longlong)auVar24 + local_218);
                  local_218 = local_218 + 1;
                  *puVar2 = 0x2e;
                }
                else {
                  if (local_218 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    FUN_1400172e0();
                  }
                  uVar32 = local_218 + 1 | 0xf;
                  if (uVar32 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (local_210 >> 1) < local_210) {
                      uVar32 = 0x7fffffffffffffff;
                      uVar31 = 0x8000000000000027;
                      goto LAB_140181355;
                    }
                    uVar31 = (local_210 >> 1) + local_210;
                    if (uVar32 < uVar31) {
                      uVar32 = uVar31;
                    }
                    uVar1 = uVar32 + 1;
                    if (uVar1 == 0) {
                      uVar31 = 0;
                    }
                    else {
                      if (0xfff < uVar1) {
                        uVar31 = uVar32 + 0x28;
                        if (uVar31 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                          FUN_140017370();
                        }
                        goto LAB_140181355;
                      }
                      uVar31 = FUN_14028af20(uVar1);
                    }
                  }
                  else {
                    uVar32 = 0x7fffffffffffffff;
                    uVar31 = 0x8000000000000027;
LAB_140181355:
                    lVar17 = FUN_14028af20(uVar31);
                    if (lVar17 == 0) goto LAB_140181648;
                    uVar31 = lVar17 + 0x27U & 0xffffffffffffffe0;
                    *(longlong *)(uVar31 - 8) = lVar17;
                  }
                  local_218 = uVar29 + 1;
                  local_210 = uVar32;
                  if (uVar26 < 0x10) {
                    FUN_1404210f0(uVar31,local_228,uVar29);
                    *(undefined2 *)(uVar29 + uVar31) = 0x2e;
                  }
                  else {
                    auVar24 = local_228;
                    FUN_1404210f0(uVar31,local_228,uVar29);
                    *(undefined2 *)(uVar29 + uVar31) = 0x2e;
                    if (uVar26 + 1 < 0x1000) {
                      thunk_FUN_14028af80(auVar24);
                    }
                    else {
                      if (0x1f < ((longlong)auVar24 - *(longlong *)((longlong)auVar24 + -8)) - 8U)
                      goto LAB_140181648;
                      thunk_FUN_14028af80(*(longlong *)((longlong)auVar24 + -8),uVar26 + 0x28);
                    }
                  }
                  local_228 = (undefined1  [8])uVar31;
                }
                local_res10 = local_res10 + 1;
                pfVar30 = local_res18;
              } while (local_res10 < (int)uVar34);
            }
          }
          auVar24 = (undefined1  [8])local_228;
          if (0xf < local_210) {
            auVar24 = local_228;
          }
          lVar17 = FUN_1401b0410(plVar5,&local_1c8,auVar24,0);
          if (lVar17 != 0) {
            fVar48 = fVar48 - fVar38;
            local_258 = (longlong *)0x3f8000003f800000;
            local_250 = 0x3f800000;
            uVar21 = FUN_1401b3430(plVar5,lVar17,(int)((*pfVar30 - fVar46) * fVar45),(int)fVar48,
                                   &local_258,*(undefined4 *)((longlong)param_1 + 0x31cc));
            FUN_1401b3240(uVar21,lVar17);
          }
          fVar38 = DAT_1404926c8;
          lVar17 = param_1[0x60e];
          lVar23 = param_1[0x60f];
          if (lVar17 != lVar23) {
            fVar48 = fVar48 - param_2;
            do {
              if (*(longlong *)(lVar17 + 0x48) != 0) {
                plVar33 = (longlong *)(lVar17 + 8);
                if (0xf < *(ulonglong *)(lVar17 + 0x20)) {
                  plVar33 = (longlong *)*plVar33;
                }
                lVar25 = FUN_1401b0410(plVar5,&local_168,plVar33,0);
                if (lVar25 != 0) {
                  fVar46 = *(float *)(lVar25 + 0x9c);
                  fVar47 = *(float *)(lVar25 + 0x94);
                  local_258 = (longlong *)0x3f8000003f800000;
                  local_250 = 0x3f800000;
                  uVar21 = FUN_1401b3430(plVar5,lVar25,
                                         (int)((*pfVar30 -
                                               (*(float *)(lVar25 + 0x98) -
                                               *(float *)(lVar25 + 0x90))) * fVar45),(int)fVar48,
                                         &local_258,*(float *)((longlong)param_1 + 0x31cc) * fVar38)
                  ;
                  FUN_1401b3240(uVar21,lVar25);
                  fVar48 = fVar48 - (fVar46 - fVar47);
                }
              }
              lVar17 = lVar17 + 0x50;
            } while (lVar17 != lVar23);
          }
          if (0xf < local_210) {
            uVar29 = local_210 + 1;
            auVar24 = local_228;
            if (0xfff < uVar29) {
              auVar24 = *(undefined1 (*) [8])((longlong)local_228 + -8);
              if (0x1f < ((longlong)local_228 - (longlong)auVar24) - 8U) goto LAB_140181648;
              uVar29 = local_210 + 0x28;
            }
            thunk_FUN_14028af80(auVar24,uVar29);
          }
        }
        lVar17 = *plVar5;
        plVar33 = (longlong *)(lVar17 + 0x30);
        *plVar33 = *plVar33 + -0x40;
        *(undefined1 *)(lVar17 + 0x1ca) = 1;
        lVar17 = *plVar5;
        plVar33 = (longlong *)(lVar17 + 0x40);
        *plVar33 = *plVar33 + -0x40;
        *(undefined1 *)(lVar17 + 0x1ca) = 1;
        lVar17 = *plVar5;
        plVar5 = (longlong *)(lVar17 + 0x38);
        *plVar5 = *plVar5 + -0x40;
        *(undefined1 *)(lVar17 + 0x1ca) = 1;
      }
    }
    lVar17 = param_1[0x39];
    param_1[0x39] = lVar17 + -1;
    (**(code **)(*(longlong *)param_1[0x2a5] + 0xb0))
              ((longlong *)param_1[0x2a5],*(undefined1 *)(lVar17 + -2));
    *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_1 + 0x9c);
    uVar34 = *(uint *)((longlong)param_1 + 0xb4);
    if ((uVar34 & 1) != 0) {
      uVar34 = uVar34 | 2;
      goto LAB_140181652;
    }
  }
  uVar34 = uVar34 & 0xfffffffd;
LAB_140181652:
  *(uint *)((longlong)param_1 + 0xb4) = uVar34;
  return;
}

