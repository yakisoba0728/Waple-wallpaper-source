// Function: FUN_140211070
// Addr: 140211070
// Size: 5299 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140211070(ulonglong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  longlong unaff_RBX;
  undefined1 *puVar16;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  char *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  puVar16 = auStack_58;
  local_res8 = param_1;
  FUN_140153760(&DAT_1404e85e0);
  puVar13 = auStack_58;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e97e8) goto LAB_140212262;
  do {
    *(longlong *)(puVar16 + 0x68) = unaff_RBX;
    local_18 = 9;
    local_28 = (char *)s_alignment_140488490._0_8_;
    local_10 = 0xf;
    uStack_20 = (ulonglong)(byte)s_alignment_140488490[8];
    *(undefined8 *)(puVar16 + -8) = 0x1402110fb;
    FUN_14015a000(&DAT_1404e85e0,local_38,&local_28);
    if (local_10 < 0x10) {
LAB_140211136:
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x68;
      *(undefined8 *)(puVar16 + -8) = 0x140211150;
      FUN_14000f880(lVar1,"alignment",9);
      *(undefined4 *)(unaff_RBX + 0x34) = 0x4b1;
      *(code **)(unaff_RBX + 0x38) = FUN_140212690;
      *(undefined4 *)(unaff_RBX + 0x30) = 5;
      *(code **)(unaff_RBX + 0x40) = FUN_140212820;
      local_18 = 0;
      *(code **)(unaff_RBX + 0x48) = FUN_140212530;
      *(code **)(unaff_RBX + 0x50) = FUN_140212610;
      *(undefined1 **)(unaff_RBX + 0x58) = &LAB_1401fa290;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      local_10 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402111ae;
      local_28 = (char *)FUN_14028af20(0x20);
      uVar7 = s_getTextureAnimation_140490df0._12_4_;
      uVar6 = s_getTextureAnimation_140490df0._8_4_;
      uVar5 = s_getTextureAnimation_140490df0._4_4_;
      uVar3 = CONCAT31(s_getTextureAnimation_140490df0._16_3_,s_getTextureAnimation_140490df0[0xf]);
      local_18 = 0x13;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_getTextureAnimation_140490df0._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar5;
      *(undefined4 *)(local_28 + 8) = uVar6;
      *(undefined4 *)(local_28 + 0xc) = uVar7;
      *(undefined4 *)(local_28 + 0xf) = uVar3;
      local_28[0x13] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x1402111ed;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211228;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211242;
      FUN_14000f880(lVar1,"getTextureAnimation",0x13);
      local_28 = (char *)s_getVideoTexture_140490e08._0_8_;
      *(code **)(unaff_RBX + 0x30) = FUN_14020e670;
      uStack_20._0_7_ =
           CONCAT16(s_getVideoTexture_140490e08[0xe],
                    CONCAT24(s_getVideoTexture_140490e08._12_2_,s_getVideoTexture_140490e08._8_4_));
      *(undefined4 *)(unaff_RBX + 0x70) = 0x800;
      local_18 = 0xf;
      local_10 = 0xf;
      uStack_20 = (ulonglong)(uint7)uStack_20;
      *(undefined8 *)(puVar16 + -8) = 0x1402112a7;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1402112e2;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x1402112fc;
      FUN_14000f880(lVar1,"getVideoTexture",0xf);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x800;
      *(code **)(unaff_RBX + 0x30) = FUN_14020e7b0;
      local_18 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      local_10 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211327;
      local_28 = (char *)FUN_14028af20(0x20);
      cVar8 = s_getAnimationLayer_140490ea8[0x10];
      uVar6 = s_getAnimationLayer_140490ea8._12_4_;
      uVar5 = s_getAnimationLayer_140490ea8._8_4_;
      uVar3 = s_getAnimationLayer_140490ea8._4_4_;
      local_18 = 0x11;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_getAnimationLayer_140490ea8._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar3;
      *(undefined4 *)(local_28 + 8) = uVar5;
      *(undefined4 *)(local_28 + 0xc) = uVar6;
      local_28[0x10] = cVar8;
      local_28[0x11] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x140211367;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1402113a2;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x1402113bc;
      FUN_14000f880(lVar1,"getAnimationLayer",0x11);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x800;
      *(code **)(unaff_RBX + 0x30) = FUN_14020e910;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x1402113e2;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402113fb;
      local_28 = (char *)FUN_14028af20(0x20);
      uVar6 = s_getAnimationLayerCount_140490ec0._8_4_;
      uVar5 = s_getAnimationLayerCount_140490ec0._4_4_;
      uVar3 = CONCAT22(s_getAnimationLayerCount_140490ec0._14_2_,
                       s_getAnimationLayerCount_140490ec0._12_2_);
      uVar4 = CONCAT62(s_getAnimationLayerCount_140490ec0._16_6_,
                       s_getAnimationLayerCount_140490ec0._14_2_);
      local_18 = 0x16;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_getAnimationLayerCount_140490ec0._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar5;
      *(undefined4 *)(local_28 + 8) = uVar6;
      *(undefined4 *)(local_28 + 0xc) = uVar3;
      *(undefined8 *)(local_28 + 0xe) = uVar4;
      local_28[0x16] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x14021143e;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211479;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211493;
      FUN_14000f880(lVar1,"getAnimationLayerCount",0x16);
      *(undefined4 *)(unaff_RBX + 0x70) = 8;
      *(undefined1 **)(unaff_RBX + 0x30) = &LAB_14020e9f0;
      local_18 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      local_10 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402114be;
      local_28 = (char *)FUN_14028af20(0x20);
      uVar7 = s_createAnimationLayer_140490ed8._16_4_;
      uVar6 = s_createAnimationLayer_140490ed8._12_4_;
      uVar5 = s_createAnimationLayer_140490ed8._8_4_;
      uVar3 = s_createAnimationLayer_140490ed8._4_4_;
      local_18 = 0x14;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_createAnimationLayer_140490ed8._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar3;
      *(undefined4 *)(local_28 + 8) = uVar5;
      *(undefined4 *)(local_28 + 0xc) = uVar6;
      *(undefined4 *)(local_28 + 0x10) = uVar7;
      local_28[0x14] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x1402114fd;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211538;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211552;
      FUN_14000f880(lVar1,"createAnimationLayer",0x14);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x800;
      *(code **)(unaff_RBX + 0x30) = FUN_14020ea30;
      local_res8._0_4_ = 0x600;
      *(undefined8 *)(puVar16 + -8) = 0x140211578;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x600);
      *(undefined8 *)(puVar16 + -8) = 0x14021158c;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402115a5;
      local_28 = (char *)FUN_14028af20(0x20);
      uVar7 = s_playSingleAnimation_140490ef0._12_4_;
      uVar6 = s_playSingleAnimation_140490ef0._8_4_;
      uVar5 = s_playSingleAnimation_140490ef0._4_4_;
      uVar3 = CONCAT31(s_playSingleAnimation_140490ef0._16_3_,s_playSingleAnimation_140490ef0[0xf]);
      local_18 = 0x13;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_playSingleAnimation_140490ef0._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar5;
      *(undefined4 *)(local_28 + 8) = uVar6;
      *(undefined4 *)(local_28 + 0xc) = uVar7;
      *(undefined4 *)(local_28 + 0xf) = uVar3;
      local_28[0x13] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x1402115e4;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x14021161f;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211639;
      FUN_14000f880(lVar1,"playSingleAnimation",0x13);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x800;
      *(code **)(unaff_RBX + 0x30) = FUN_14020ef40;
      local_res8._0_4_ = 0x600;
      *(undefined8 *)(puVar16 + -8) = 0x14021165f;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x600);
      *(undefined8 *)(puVar16 + -8) = 0x140211673;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_res8 = 0x1f;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211697;
      local_28 = (char *)FUN_1400173f0(&local_28,&local_res8);
      uVar6 = s_destroyAnimationLayer_140490e50._12_4_;
      uVar5 = s_destroyAnimationLayer_140490e50._8_4_;
      uVar3 = s_destroyAnimationLayer_140490e50._4_4_;
      uVar4 = CONCAT53(s_destroyAnimationLayer_140490e50._16_5_,
                       s_destroyAnimationLayer_140490e50._13_3_);
      local_10 = local_res8;
      local_18 = 0x15;
      *(undefined4 *)local_28 = s_destroyAnimationLayer_140490e50._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar3;
      *(undefined4 *)(local_28 + 8) = uVar5;
      *(undefined4 *)(local_28 + 0xc) = uVar6;
      *(undefined8 *)(local_28 + 0xd) = uVar4;
      local_28[0x15] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x1402116da;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211715;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x14021172f;
      FUN_14000f880(lVar1,"destroyAnimationLayer",0x15);
      *(undefined4 *)(unaff_RBX + 0x70) = 2;
      *(code **)(unaff_RBX + 0x30) = FUN_14020ef80;
      local_res8 = CONCAT44(local_res8._4_4_,0xa08);
      *(undefined8 *)(puVar16 + -8) = 0x140211755;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0xc;
      local_10 = 0xf;
      local_28 = (char *)s_getBoneCount_140490e68._0_8_;
      uStack_20 = (ulonglong)(uint)s_getBoneCount_140490e68._8_4_;
      *(undefined8 *)(puVar16 + -8) = 0x14021179a;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x1402117d5;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x1402117ef;
      FUN_14000f880(lVar1,"getBoneCount",0xc);
      *(undefined4 *)(unaff_RBX + 0x70) = 8;
      *(undefined1 **)(unaff_RBX + 0x30) = &LAB_14020f190;
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      local_res8 = 0x1f;
      *(undefined8 *)(puVar16 + -8) = 0x140211825;
      local_28 = (char *)FUN_1400173f0(&local_28,&local_res8);
      uVar6 = s_getBoneTransform_140490e78._12_4_;
      uVar5 = s_getBoneTransform_140490e78._8_4_;
      uVar3 = s_getBoneTransform_140490e78._4_4_;
      local_10 = local_res8;
      local_18 = 0x10;
      *(undefined4 *)local_28 = s_getBoneTransform_140490e78._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar3;
      *(undefined4 *)(local_28 + 8) = uVar5;
      *(undefined4 *)(local_28 + 0xc) = uVar6;
      local_28[0x10] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x14021185b;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211896;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x1402118b0;
      FUN_14000f880(lVar1,"getBoneTransform",0x10);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x80;
      *(code **)(unaff_RBX + 0x30) = FUN_14020f1d0;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x1402118d6;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402118fb;
      FUN_140017480(&local_28,"setBoneTransform",0x10);
      *(undefined8 *)(puVar16 + -8) = 0x14021190f;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x14021194a;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211964;
      FUN_14000f880(lVar1,"setBoneTransform",0x10);
      *(undefined4 *)(unaff_RBX + 0x70) = 1;
      *(code **)(unaff_RBX + 0x30) = FUN_14020f350;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x14021198a;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x80);
      *(undefined8 *)(puVar16 + -8) = 0x14021199e;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402119c3;
      FUN_140017480(&local_28,"getLocalBoneTransform",0x15);
      *(undefined8 *)(puVar16 + -8) = 0x1402119d7;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211a12;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211a2c;
      FUN_14000f880(lVar1,"getLocalBoneTransform",0x15);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x80;
      *(code **)(unaff_RBX + 0x30) = FUN_14020f6b0;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x140211a52;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211a77;
      FUN_140017480(&local_28,"setLocalBoneTransform",0x15);
      *(undefined8 *)(puVar16 + -8) = 0x140211a8b;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211ac6;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211ae0;
      FUN_14000f880(lVar1,"setLocalBoneTransform",0x15);
      *(undefined4 *)(unaff_RBX + 0x70) = 1;
      *(code **)(unaff_RBX + 0x30) = FUN_14020f840;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x140211b06;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x80);
      *(undefined8 *)(puVar16 + -8) = 0x140211b1a;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211b3f;
      FUN_140017480(&local_28,"getLocalBoneAngles",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140211b53;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211b8e;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      unaff_RBX = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211ba8;
      FUN_14000f880(lVar1,"getLocalBoneAngles",0x12);
      *(undefined4 *)(unaff_RBX + 0x70) = 0x20;
      *(code **)(unaff_RBX + 0x30) = FUN_14020fa10;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x140211bce;
      FUN_14002ff50(unaff_RBX + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211bf3;
      FUN_140017480(&local_28,"setLocalBoneAngles",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140211c07;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (0xf < local_10) {
        uVar15 = local_10 + 1;
        pcVar14 = local_28;
        if (0xfff < uVar15) {
          pcVar14 = *(char **)(local_28 + -8);
          if ((char *)0x1f < local_28 + (-8 - (longlong)pcVar14)) goto LAB_14021225b;
          uVar15 = local_10 + 0x28;
        }
        *(undefined8 *)(puVar16 + -8) = 0x140211c42;
        thunk_FUN_14028af80(pcVar14,uVar15);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211c5c;
      FUN_14000f880(lVar1,"setLocalBoneAngles",0x12);
      *(undefined4 *)(lVar12 + 0x70) = 1;
      *(code **)(lVar12 + 0x30) = FUN_14020fce0;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x140211c82;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x20);
      *(undefined8 *)(puVar16 + -8) = 0x140211c96;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211cbb;
      FUN_140017480(&local_28,"getLocalBoneOrigin",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140211ccf;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211ce6;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211d00;
      FUN_14000f880(lVar1,"getLocalBoneOrigin",0x12);
      *(undefined4 *)(lVar12 + 0x70) = 0x20;
      *(code **)(lVar12 + 0x30) = FUN_1402100d0;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x140211d26;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211d4b;
      FUN_140017480(&local_28,"setLocalBoneOrigin",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140211d5f;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211d76;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211d90;
      FUN_14000f880(lVar1,"setLocalBoneOrigin",0x12);
      *(undefined4 *)(lVar12 + 0x70) = 1;
      *(code **)(lVar12 + 0x30) = FUN_140210250;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x140211db6;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x20);
      *(undefined8 *)(puVar16 + -8) = 0x140211dca;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211def;
      FUN_140017480(&local_28,"getBlendShapeIndex",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140211e03;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211e1a;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211e34;
      FUN_14000f880(lVar1,"getBlendShapeIndex",0x12);
      *(undefined4 *)(lVar12 + 0x70) = 8;
      *(code **)(lVar12 + 0x30) = FUN_140210400;
      local_res8 = CONCAT44(local_res8._4_4_,0x200);
      *(undefined8 *)(puVar16 + -8) = 0x140211e5a;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211e7f;
      FUN_140017480(&local_28,"getBlendShapeWeight",0x13);
      *(undefined8 *)(puVar16 + -8) = 0x140211e93;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211eaa;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211ec4;
      FUN_14000f880(lVar1,"getBlendShapeWeight",0x13);
      *(undefined4 *)(lVar12 + 0x70) = 4;
      *(code **)(lVar12 + 0x30) = FUN_1402104b0;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x140211eea;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140211f0f;
      FUN_140017480(&local_28,"setBlendShapeWeight",0x13);
      *(undefined8 *)(puVar16 + -8) = 0x140211f23;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211f3a;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140211f54;
      FUN_14000f880(lVar1,"setBlendShapeWeight",0x13);
      *(undefined4 *)(lVar12 + 0x70) = 1;
      *(code **)(lVar12 + 0x30) = FUN_1402105c0;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x140211f7a;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,4);
      *(undefined8 *)(puVar16 + -8) = 0x140211f8e;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0xc;
      local_10 = 0xf;
      local_28 = (char *)s_getBoneIndex_140491028._0_8_;
      uStack_20 = (ulonglong)(uint)s_getBoneIndex_140491028._8_4_;
      *(undefined8 *)(puVar16 + -8) = 0x140211fd3;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x140211fea;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140212004;
      FUN_14000f880(lVar1,"getBoneIndex",0xc);
      *(undefined4 *)(lVar12 + 0x70) = 8;
      *(code **)(lVar12 + 0x30) = FUN_140210790;
      local_res8 = CONCAT44(local_res8._4_4_,0x200);
      *(undefined8 *)(puVar16 + -8) = 0x14021202a;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x14021204f;
      FUN_140017480(&local_28,"getBoneParentIndex",0x12);
      *(undefined8 *)(puVar16 + -8) = 0x140212063;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x14021207a;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140212094;
      FUN_14000f880(lVar1,"getBoneParentIndex",0x12);
      *(undefined4 *)(lVar12 + 0x70) = 8;
      *(code **)(lVar12 + 0x30) = FUN_140210860;
      local_res8 = CONCAT44(local_res8._4_4_,0x208);
      *(undefined8 *)(puVar16 + -8) = 0x1402120ba;
      FUN_14002ff50(lVar12 + 0x58,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x1402120df;
      FUN_140017480(&local_28,"applyBonePhysicsImpulse",0x17);
      *(undefined8 *)(puVar16 + -8) = 0x1402120f3;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      pcVar14 = local_28;
      if (0xf < local_10) {
        *(undefined8 *)(puVar16 + -8) = 0x14021210a;
        FUN_140017200(&local_28,pcVar14);
      }
      lVar12 = local_38[0];
      lVar1 = local_38[0] + 0x38;
      *(undefined8 *)(puVar16 + -8) = 0x140212124;
      FUN_14000f880(lVar1,"applyBonePhysicsImpulse",0x17);
      *(undefined4 *)(lVar12 + 0x70) = 1;
      *(code **)(lVar12 + 0x30) = FUN_140210990;
      unaff_RBX = lVar12 + 0x58;
      local_res8._0_4_ = 0x208;
      *(undefined8 *)(puVar16 + -8) = 0x14021214d;
      FUN_14002ff50(unaff_RBX,&local_res8);
      local_res8._0_4_ = 0x20;
      *(undefined8 *)(puVar16 + -8) = 0x140212160;
      FUN_14002ff50(unaff_RBX,&local_res8);
      local_res8 = CONCAT44(local_res8._4_4_,0x20);
      *(undefined8 *)(puVar16 + -8) = 0x140212173;
      FUN_14002ff50(unaff_RBX,&local_res8);
      local_18 = 0;
      local_10 = 0;
      local_28 = (char *)0x0;
      uStack_20 = 0;
      *(undefined8 *)(puVar16 + -8) = 0x14021218c;
      local_28 = (char *)FUN_14028af20(0x20);
      uVar11 = s_resetBonePhysicsSimulation_140490fc8._22_4_;
      uVar10 = s_resetBonePhysicsSimulation_140490fc8._18_4_;
      uVar9 = s_resetBonePhysicsSimulation_140490fc8._4_4_;
      uVar3 = CONCAT22(s_resetBonePhysicsSimulation_140490fc8._10_2_,
                       s_resetBonePhysicsSimulation_140490fc8._8_2_);
      uVar6 = CONCAT22(s_resetBonePhysicsSimulation_140490fc8._14_2_,
                       s_resetBonePhysicsSimulation_140490fc8._12_2_);
      uVar5 = CONCAT22(s_resetBonePhysicsSimulation_140490fc8._12_2_,
                       s_resetBonePhysicsSimulation_140490fc8._10_2_);
      uVar7 = CONCAT22(s_resetBonePhysicsSimulation_140490fc8._16_2_,
                       s_resetBonePhysicsSimulation_140490fc8._14_2_);
      local_18 = 0x1a;
      local_10 = 0x1f;
      *(undefined4 *)local_28 = s_resetBonePhysicsSimulation_140490fc8._0_4_;
      *(undefined4 *)(local_28 + 4) = uVar9;
      *(undefined4 *)(local_28 + 8) = uVar3;
      *(undefined4 *)(local_28 + 0xc) = uVar6;
      *(undefined4 *)(local_28 + 10) = uVar5;
      *(undefined4 *)(local_28 + 0xe) = uVar7;
      *(undefined4 *)(local_28 + 0x12) = uVar10;
      *(undefined4 *)(local_28 + 0x16) = uVar11;
      local_28[0x1a] = '\0';
      *(undefined8 *)(puVar16 + -8) = 0x1402121cd;
      FUN_140178e90(&DAT_1404e8620,local_38,&local_28);
      if (local_10 < 0x10) goto LAB_140212204;
      uVar15 = local_10 + 1;
      pcVar14 = local_28;
      if (uVar15 < 0x1000) goto LAB_1402121ff;
      pcVar14 = *(char **)(local_28 + -8);
      if (local_28 + (-8 - (longlong)pcVar14) < (char *)0x20) {
        uVar15 = local_10 + 0x28;
LAB_1402121ff:
        *(undefined8 *)(puVar16 + -8) = 0x140212204;
        thunk_FUN_14028af80(pcVar14,uVar15);
LAB_140212204:
        *(undefined8 *)(puVar16 + -8) = 0x14021221e;
        FUN_14000f880(local_38[0] + 0x38,"resetBonePhysicsSimulation",0x1a);
        *(undefined4 *)(local_38[0] + 0x70) = 1;
        *(code **)(local_38[0] + 0x30) = FUN_140210e10;
        local_res8 = CONCAT44(local_res8._4_4_,0x208);
        *(undefined8 *)(puVar16 + -8) = 0x140212244;
        FUN_14002ff50(local_38[0] + 0x58,&local_res8);
        return &DAT_1404e85e0;
      }
    }
    else {
      uVar15 = local_10 + 1;
      pcVar14 = local_28;
      if (uVar15 < 0x1000) {
LAB_140211131:
        *(undefined8 *)(puVar16 + -8) = 0x140211136;
        thunk_FUN_14028af80(pcVar14,uVar15);
        goto LAB_140211136;
      }
      pcVar14 = *(char **)(local_28 + -8);
      if (local_28 + (-8 - (longlong)pcVar14) < (char *)0x20) {
        uVar15 = local_10 + 0x28;
        goto LAB_140211131;
      }
    }
LAB_14021225b:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar13 = puVar16 + 8;
LAB_140212262:
    puVar16 = puVar13;
    *(undefined8 *)(puVar16 + -8) = 0x14021226e;
    FUN_14028b140(&DAT_1404e97e8);
    if (DAT_1404e97e8 == -1) {
      *(undefined8 *)(puVar16 + -8) = 0x140212287;
      FUN_14028b410(FUN_1404252b0);
      uRam00000001404e97f8 = 0;
      uRam00000001404e9820 = 0;
      DAT_1404e9840 = s_topright_140490e18[0];
      DAT_1404e9840_1._0_1_ = s_topright_140490e18[1];
      DAT_1404e9840_1._1_1_ = s_topright_140490e18[2];
      DAT_1404e9840_1._2_1_ = s_topright_140490e18[3];
      DAT_1404e9840_1._3_1_ = s_topright_140490e18[4];
      DAT_1404e9840_1._4_1_ = s_topright_140490e18[5];
      DAT_1404e9840_1._5_1_ = s_topright_140490e18[6];
      DAT_1404e9840_1._6_1_ = s_topright_140490e18[7];
      uRam00000001404e9870 = 0;
      uRam00000001404e989c = 0;
      DAT_1404e9890 = s_bottomright_140490e28[0];
      DAT_1404e9890_1._0_1_ = s_bottomright_140490e28[1];
      DAT_1404e9890_1._1_1_ = s_bottomright_140490e28[2];
      DAT_1404e9890_1._2_1_ = s_bottomright_140490e28[3];
      DAT_1404e9890_1._3_1_ = s_bottomright_140490e28[4];
      DAT_1404e9890_1._4_1_ = s_bottomright_140490e28[5];
      DAT_1404e9890_1._5_1_ = s_bottomright_140490e28[6];
      DAT_1404e9897 = s_bottomright_140490e28[7];
      DAT_1404e9897_1._0_1_ = s_bottomright_140490e28[8];
      DAT_1404e9897_1._1_1_ = s_bottomright_140490e28[9];
      DAT_1404e9897_1._2_1_ = s_bottomright_140490e28[10];
      uRam00000001404e98c0 = 0;
      DAT_1404e98e0 = s_bottomleft_140490e40[0];
      DAT_1404e98e0_1._0_1_ = s_bottomleft_140490e40[1];
      DAT_1404e98e0_1._1_1_ = s_bottomleft_140490e40[2];
      DAT_1404e98e0_1._2_1_ = s_bottomleft_140490e40[3];
      DAT_1404e98e0_1._3_1_ = s_bottomleft_140490e40[4];
      DAT_1404e98e0_1._4_1_ = s_bottomleft_140490e40[5];
      DAT_1404e98e0_1._5_1_ = s_bottomleft_140490e40[6];
      DAT_1404e98e0_1._6_1_ = s_bottomleft_140490e40[7];
      uRam00000001404e9910 = 0;
      uRam00000001404e9938 = 0;
      _DAT_1404e9800 = 6;
      _DAT_1404e9808 = 0xf;
      _DAT_1404e97f0 = (ulonglong)CONCAT24(s_center_14048e594._4_2_,s_center_14048e594._0_4_);
      DAT_1404e9810 = 0;
      _DAT_1404e9828 = 3;
      _DAT_1404e9830 = 0xf;
      _DAT_1404e9818 = (ulonglong)(uint3)DAT_140490d60;
      DAT_1404e9838 = 1;
      _DAT_1404e9850 = 8;
      _DAT_1404e9858 = 0xf;
      _DAT_1404e9848 = 0;
      DAT_1404e9860 = 2;
      _DAT_1404e9878 = 5;
      _DAT_1404e9880 = 0xf;
      _DAT_1404e9868 = (ulonglong)CONCAT14(s_right_14048f6e8[4],s_right_14048f6e8._0_4_);
      DAT_1404e9888 = 3;
      _DAT_1404e98a0 = 0xb;
      _DAT_1404e98a8 = 0xf;
      DAT_1404e989b = 0;
      DAT_1404e98b0 = 4;
      _DAT_1404e98c8 = 6;
      _DAT_1404e98d0 = 0xf;
      _DAT_1404e98b8 = (ulonglong)CONCAT24(s_bottom_140490e34._4_2_,s_bottom_140490e34._0_4_);
      DAT_1404e98d8 = 5;
      _DAT_1404e98f0 = 10;
      _DAT_1404e98f8 = 0xf;
      _DAT_1404e98e8 = (ulonglong)(ushort)s_bottomleft_140490e40._8_2_;
      DAT_1404e9900 = 6;
      _DAT_1404e9918 = 4;
      _DAT_1404e9920 = 0xf;
      _DAT_1404e9908 = (ulonglong)DAT_140490de0;
      DAT_1404e9928 = 7;
      _DAT_1404e9940 = 7;
      _DAT_1404e9948 = 0xf;
      _DAT_1404e9930 =
           (ulonglong)
           CONCAT16(s_topleft_140490de8[6],
                    CONCAT24(s_topleft_140490de8._4_2_,s_topleft_140490de8._0_4_));
      DAT_1404e97d8 = &DAT_1404e97f0;
      DAT_1404e97e0 = &DAT_1404e9958;
      DAT_1404e9950 = 8;
      *(undefined8 *)(puVar16 + -8) = 0x14021251e;
      _Init_thread_footer(&DAT_1404e97e8);
    }
  } while( true );
}

