// Function: FUN_1401e0530
// Addr: 1401e0530
// Size: 3674 bytes


undefined * FUN_1401e0530(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined7 uVar9;
  char *pcVar10;
  undefined *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 local_res8 [4];
  longlong local_68 [2];
  undefined4 local_58;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined8 local_48;
  ulonglong local_40;
  
  local_res8[0] = param_1;
  FUN_140153760(&DAT_1404e8250);
  local_48 = 6;
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_58._0_1_ = s_origin_14048f4dc[0];
  local_58._1_1_ = s_origin_14048f4dc[1];
  local_58._2_1_ = s_origin_14048f4dc[2];
  local_58._3_1_ = s_origin_14048f4dc[3];
  cStack_54 = (char)s_origin_14048f4dc._4_2_;
  cStack_53 = SUB21(s_origin_14048f4dc._4_2_,1);
  local_40 = 0xf;
  cStack_52 = '\0';
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"origin",6);
  uVar3 = s_scale_14048f64c._0_4_;
  *(undefined4 *)(lVar13 + 0x34) = 0x128;
  uVar4 = s_scale_14048f64c._0_4_;
  cStack_52 = '\0';
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  s_scale_14048f64c[0] = (char)uVar3;
  s_scale_14048f64c[1] = SUB41(uVar3,1);
  s_scale_14048f64c[2] = SUB41(uVar3,2);
  s_scale_14048f64c[3] = SUB41(uVar3,3);
  local_58._0_1_ = s_scale_14048f64c[0];
  local_58._1_1_ = s_scale_14048f64c[1];
  local_58._2_1_ = s_scale_14048f64c[2];
  local_58._3_1_ = s_scale_14048f64c[3];
  cStack_54 = s_scale_14048f64c[4];
  s_scale_14048f64c._0_4_ = uVar4;
  *(undefined4 *)(lVar13 + 0x30) = 2;
  *(code **)(lVar13 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar13 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar13 + 0x58) = &LAB_1401e0520;
  local_48 = 5;
  local_40 = 0xf;
  cStack_53 = '\0';
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"scale",5);
  uVar3 = s_angles_14048fc5c._0_4_;
  *(undefined4 *)(lVar13 + 0x34) = 0x134;
  uVar4 = s_angles_14048fc5c._0_4_;
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  s_angles_14048fc5c[0] = (char)uVar3;
  s_angles_14048fc5c[1] = SUB41(uVar3,1);
  s_angles_14048fc5c[2] = SUB41(uVar3,2);
  s_angles_14048fc5c[3] = SUB41(uVar3,3);
  local_58._0_1_ = s_angles_14048fc5c[0];
  local_58._1_1_ = s_angles_14048fc5c[1];
  local_58._2_1_ = s_angles_14048fc5c[2];
  local_58._3_1_ = s_angles_14048fc5c[3];
  cStack_54 = (char)s_angles_14048fc5c._4_2_;
  cStack_53 = SUB21(s_angles_14048fc5c._4_2_,1);
  s_angles_14048fc5c._0_4_ = uVar4;
  *(undefined4 *)(lVar13 + 0x30) = 2;
  *(code **)(lVar13 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar13 + 0x48) = &LAB_1401a4530;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4560;
  *(undefined1 **)(lVar13 + 0x58) = &LAB_1401e0520;
  local_48 = 6;
  local_40 = 0xf;
  cStack_52 = '\0';
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"angles",6);
  uVar7 = s_parallaxDepth_1404902c8._0_8_;
  *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 4;
  *(code **)(lVar13 + 0x38) = FUN_1401df2f0;
  *(undefined4 *)(lVar13 + 0x34) = 0x140;
  *(code **)(lVar13 + 0x48) = FUN_1401df590;
  *(undefined4 *)(lVar13 + 0x30) = 2;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4560;
  cStack_50 = (char)s_parallaxDepth_1404902c8._8_4_;
  cStack_4f = SUB41(s_parallaxDepth_1404902c8._8_4_,1);
  cStack_4e = SUB41(s_parallaxDepth_1404902c8._8_4_,2);
  cStack_4d = SUB41(s_parallaxDepth_1404902c8._8_4_,3);
  cStack_4c = s_parallaxDepth_1404902c8[0xc];
  uStack_4a = 0;
  local_48 = 0xd;
  local_40 = 0xf;
  local_58 = (undefined4)uVar7;
  cStack_54 = SUB81(uVar7,4);
  cStack_53 = SUB81(uVar7,5);
  cStack_52 = SUB81(uVar7,6);
  cStack_51 = SUB81(uVar7,7);
  uStack_4b = 0;
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"parallaxDepth",0xd);
  *(undefined4 *)(lVar13 + 0x34) = 0x170;
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  *(undefined4 *)(lVar13 + 0x30) = 1;
  uVar7 = s_sortorder_1404902d8._0_8_;
  *(code **)(lVar13 + 0x38) = FUN_1401a3fc0;
  local_48 = 9;
  *(undefined1 **)(lVar13 + 0x48) = &LAB_1401a4200;
  local_40 = 0xf;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4220;
  cStack_50 = s_sortorder_1404902d8[8];
  local_58 = (undefined4)uVar7;
  cStack_54 = SUB81(uVar7,4);
  cStack_53 = SUB81(uVar7,5);
  cStack_52 = SUB81(uVar7,6);
  cStack_51 = SUB81(uVar7,7);
  cStack_4f = '\0';
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"sortorder",9);
  *(undefined4 *)(lVar13 + 0x34) = 0x124;
  *(code **)(lVar13 + 0x38) = FUN_1401a4930;
  *(undefined4 *)(lVar13 + 0x30) = 0;
  *(undefined1 **)(lVar13 + 0x48) = &LAB_1401a49f0;
  local_48 = 0;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  cStack_54 = 0;
  cStack_53 = 0;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0;
  pcVar10 = (char *)FUN_14028af20(0x20);
  uVar8 = s_getTransformMatrix_1404902e8._16_2_;
  uVar5 = s_getTransformMatrix_1404902e8._12_4_;
  uVar4 = s_getTransformMatrix_1404902e8._8_4_;
  uVar3 = s_getTransformMatrix_1404902e8._4_4_;
  local_58 = SUB84(pcVar10,0);
  cStack_54 = (char)((ulonglong)pcVar10 >> 0x20);
  cStack_53 = (char)((ulonglong)pcVar10 >> 0x28);
  cStack_52 = (char)((ulonglong)pcVar10 >> 0x30);
  cStack_51 = (char)((ulonglong)pcVar10 >> 0x38);
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)pcVar10 = s_getTransformMatrix_1404902e8._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar3;
  *(undefined4 *)(pcVar10 + 8) = uVar4;
  *(undefined4 *)(pcVar10 + 0xc) = uVar5;
  *(undefined2 *)(pcVar10 + 0x10) = uVar8;
  pcVar10[0x12] = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getTransformMatrix",0x12);
  *(undefined4 *)(lVar13 + 0x70) = 0x80;
  *(code **)(lVar13 + 0x30) = FUN_1401df5e0;
  local_48 = 0;
  local_58 = 0;
  cStack_54 = 0;
  cStack_53 = 0;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0;
  pcVar10 = (char *)FUN_14028af20(0x20);
  cVar6 = s_rotateObjectSpace_140490268[0x10];
  uVar5 = s_rotateObjectSpace_140490268._12_4_;
  uVar4 = s_rotateObjectSpace_140490268._8_4_;
  uVar3 = s_rotateObjectSpace_140490268._4_4_;
  local_58 = SUB84(pcVar10,0);
  cStack_54 = (char)((ulonglong)pcVar10 >> 0x20);
  cStack_53 = (char)((ulonglong)pcVar10 >> 0x28);
  cStack_52 = (char)((ulonglong)pcVar10 >> 0x30);
  cStack_51 = (char)((ulonglong)pcVar10 >> 0x38);
  local_48 = 0x11;
  local_40 = 0x1f;
  *(undefined4 *)pcVar10 = s_rotateObjectSpace_140490268._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar3;
  *(undefined4 *)(pcVar10 + 8) = uVar4;
  *(undefined4 *)(pcVar10 + 0xc) = uVar5;
  pcVar10[0x10] = cVar6;
  pcVar10[0x11] = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"rotateObjectSpace",0x11);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401df620;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x20);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  local_48 = 6;
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_58._0_1_ = s_lookAt_14049027c[0];
  local_58._1_1_ = s_lookAt_14049027c[1];
  local_58._2_1_ = s_lookAt_14049027c[2];
  local_58._3_1_ = s_lookAt_14049027c[3];
  cStack_54 = (char)s_lookAt_14049027c._4_2_;
  cStack_53 = SUB21(s_lookAt_14049027c._4_2_,1);
  local_40 = 0xf;
  cStack_52 = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"lookAt",6);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401dfc00;
  local_res8[0]._0_4_ = 0x20;
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x20);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  cStack_50 = s_lookAtYaw_140490288[8];
  local_48 = 9;
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0xf;
  local_58 = (undefined4)s_lookAtYaw_140490288._0_8_;
  cStack_54 = SUB81(s_lookAtYaw_140490288._0_8_,4);
  cStack_53 = SUB81(s_lookAtYaw_140490288._0_8_,5);
  cStack_52 = SUB81(s_lookAtYaw_140490288._0_8_,6);
  cStack_51 = SUB81(s_lookAtYaw_140490288._0_8_,7);
  cStack_4f = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"lookAtYaw",9);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401dfe30;
  local_res8[0]._0_4_ = 0x20;
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x20);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  cStack_50 = s_setParent_140490298[8];
  local_48 = 9;
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0xf;
  local_58 = (undefined4)s_setParent_140490298._0_8_;
  cStack_54 = SUB81(s_setParent_140490298._0_8_,4);
  cStack_53 = SUB81(s_setParent_140490298._0_8_,5);
  cStack_52 = SUB81(s_setParent_140490298._0_8_,6);
  cStack_51 = SUB81(s_setParent_140490298._0_8_,7);
  cStack_4f = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"setParent",9);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401e00b0;
  lVar13 = lVar13 + 0x58;
  local_res8[0]._0_4_ = 0xa08;
  FUN_14002ff50(lVar13,local_res8);
  local_res8[0]._0_4_ = 0x20a;
  FUN_14002ff50(lVar13,local_res8);
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,2);
  FUN_14002ff50(lVar13,local_res8);
  cStack_50 = s_getParent_140490350[8];
  local_48 = 9;
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0xf;
  local_58 = (undefined4)s_getParent_140490350._0_8_;
  cStack_54 = SUB81(s_getParent_140490350._0_8_,4);
  cStack_53 = SUB81(s_getParent_140490350._0_8_,5);
  cStack_52 = SUB81(s_getParent_140490350._0_8_,6);
  cStack_51 = SUB81(s_getParent_140490350._0_8_,7);
  cStack_4f = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getParent",9);
  uVar9 = s_getChildren_140490360._0_7_;
  *(undefined1 **)(lVar13 + 0x30) = &LAB_1401e0180;
  local_58 = (undefined4)uVar9;
  cStack_54 = SUB71(uVar9,4);
  cStack_53 = SUB71(uVar9,5);
  cStack_52 = SUB71(uVar9,6);
  cStack_51 = (char)s_getChildren_140490360._7_4_;
  cStack_50 = SUB41(s_getChildren_140490360._7_4_,1);
  cStack_4f = SUB41(s_getChildren_140490360._7_4_,2);
  cStack_4e = SUB41(s_getChildren_140490360._7_4_,3);
  *(undefined4 *)(lVar13 + 0x70) = 0x800;
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  local_48 = 0xb;
  local_40 = 0xf;
  cStack_4d = '\0';
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getChildren",0xb);
  *(undefined4 *)(lVar13 + 0x70) = 0x1000;
  *(undefined1 **)(lVar13 + 0x30) = &LAB_1401e0190;
  local_48 = 0;
  local_40 = 0;
  local_58._0_1_ = '\0';
  local_58._1_1_ = '\0';
  local_58._2_1_ = '\0';
  local_58._3_1_ = '\0';
  cStack_54 = '\0';
  cStack_53 = '\0';
  cStack_52 = '\0';
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  FUN_140017480(&local_58,"getAttachmentIndex",0x12);
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getAttachmentIndex",0x12);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401e01d0;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x200);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  *(undefined4 *)(lVar13 + 0x70) = 8;
  local_48 = 0;
  local_40 = 0;
  local_58._0_1_ = '\0';
  local_58._1_1_ = '\0';
  local_58._2_1_ = '\0';
  local_58._3_1_ = '\0';
  cStack_54 = '\0';
  cStack_53 = '\0';
  cStack_52 = '\0';
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  FUN_140017480(&local_58,"getAttachmentMatrix",0x13);
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_1401e1382;
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getAttachmentMatrix",0x13);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401e01f0;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x208);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  *(undefined4 *)(lVar13 + 0x70) = 0x80;
  local_48 = 0;
  local_40 = 0;
  local_58._0_1_ = '\0';
  local_58._1_1_ = '\0';
  local_58._2_1_ = '\0';
  local_58._3_1_ = '\0';
  cStack_54 = '\0';
  cStack_53 = '\0';
  cStack_52 = '\0';
  cStack_51 = '\0';
  cStack_50 = '\0';
  cStack_4f = '\0';
  cStack_4e = '\0';
  cStack_4d = '\0';
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_4a = 0;
  FUN_140017480(&local_58,"getAttachmentOrigin",0x13);
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    lVar2 = CONCAT17(cStack_51,CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58))))
    ;
    uVar12 = local_40 + 1;
    lVar13 = lVar2;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar13) - 8U) {
LAB_1401e1382:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar11 = (undefined *)(*pcVar1)();
        return puVar11;
      }
      uVar12 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar12);
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getAttachmentOrigin",0x13);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401e02c0;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x208);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  *(undefined4 *)(lVar13 + 0x70) = 0x20;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  cStack_54 = 0;
  cStack_53 = 0;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = 0;
  cStack_4f = 0;
  cStack_4e = 0;
  cStack_4d = 0;
  cStack_4c = 0;
  uStack_4b = 0;
  uStack_4a = 0;
  FUN_140017480(&local_58,"getAttachmentAngles",0x13);
  FUN_140178e90(&DAT_1404e8290,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,
                  CONCAT17(cStack_51,
                           CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58)))));
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x38,"getAttachmentAngles",0x13);
  *(undefined4 *)(lVar13 + 0x70) = 1;
  *(code **)(lVar13 + 0x30) = FUN_1401e0390;
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,0x208);
  FUN_14002ff50(lVar13 + 0x58,local_res8);
  local_58 = DAT_1404748b8;
  *(undefined4 *)(lVar13 + 0x70) = 0x20;
  cStack_53 = 0;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = 0;
  cStack_4f = 0;
  cStack_4e = 0;
  cStack_4d = 0;
  cStack_4c = 0;
  uStack_4b = 0;
  uStack_4a = 0;
  cStack_54 = 0;
  local_48 = 4;
  local_40 = 0xf;
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,
                  CONCAT17(cStack_51,
                           CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58)))));
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,&DAT_1404748b8,4);
  *(undefined4 *)(lVar13 + 0x34) = 0x1d8;
  *(code **)(lVar13 + 0x38) = FUN_1401a4bc0;
  *(undefined4 *)(lVar13 + 0x30) = 5;
  *(code **)(lVar13 + 0x48) = FUN_1401a4d00;
  local_48 = 5;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_1401a4d60;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = 0;
  cStack_4f = 0;
  cStack_4e = 0;
  cStack_4d = 0;
  cStack_4c = 0;
  uStack_4b = 0;
  uStack_4a = 0;
  local_58._0_1_ = s_solid_14049032c[0];
  local_58._1_1_ = s_solid_14049032c[1];
  local_58._2_1_ = s_solid_14049032c[2];
  local_58._3_1_ = s_solid_14049032c[3];
  cStack_54 = s_solid_14049032c[4];
  local_40 = 0xf;
  cStack_53 = 0;
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,
                  CONCAT17(cStack_51,
                           CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58)))));
  }
  lVar13 = local_68[0];
  FUN_14000f880(local_68[0] + 0x68,"solid",5);
  *(undefined4 *)(lVar13 + 0x34) = 0x120;
  *(code **)(lVar13 + 0x38) = FUN_14019c3f0;
  *(undefined4 *)(lVar13 + 0x30) = 6;
  *(code **)(lVar13 + 0x40) = FUN_14019c4c0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  *(undefined1 **)(lVar13 + 0x48) = &LAB_14019c5c0;
  local_48 = 0;
  *(undefined1 **)(lVar13 + 0x50) = &LAB_14019c600;
  local_58 = 0;
  cStack_54 = 0;
  cStack_53 = 0;
  cStack_52 = 0;
  cStack_51 = 0;
  cStack_50 = 0;
  cStack_4f = 0;
  cStack_4e = 0;
  cStack_4d = 0;
  cStack_4c = 0;
  uStack_4b = 0;
  uStack_4a = 0;
  local_40 = 0;
  FUN_140017480(&local_58,"disablepropagation",0x12);
  FUN_14015a000(&DAT_1404e8250,local_68,&local_58);
  if (0xf < local_40) {
    FUN_140017200(&local_58,
                  CONCAT17(cStack_51,
                           CONCAT16(cStack_52,CONCAT15(cStack_53,CONCAT14(cStack_54,local_58)))));
  }
  FUN_14000f880(local_68[0] + 0x68,"disablepropagation",0x12);
  *(undefined4 *)(local_68[0] + 0x34) = 0x120;
  *(code **)(local_68[0] + 0x38) = FUN_14019bb40;
  *(undefined4 *)(local_68[0] + 0x30) = 6;
  *(code **)(local_68[0] + 0x40) = FUN_14019bc10;
  *(undefined1 **)(local_68[0] + 0x48) = &LAB_14019bd10;
  *(undefined1 **)(local_68[0] + 0x50) = &LAB_14019bd50;
  *(undefined8 *)(local_68[0] + 0x58) = 0;
  return &DAT_1404e8250;
}

