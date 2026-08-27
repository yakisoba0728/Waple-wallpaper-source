// function FUN_1816311d0 @ 1816311d0 size=2748

undefined8 *
FUN_1816311d0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *local_res8;
  undefined8 *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined4 uVar13;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 local_58 [24];
  
  plVar7 = param_6;
  puVar5 = (undefined8 *)0x0;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  lVar1 = *param_3;
  local_res8 = param_1;
  if ((undefined8 *)param_3[1] != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x230);
    uVar9 = *(undefined8 *)param_3[1];
    if (puVar5 == *(undefined8 **)(lVar1 + 0x238)) {
      puVar5 = (undefined8 *)FUN_1800081f0(lVar1);
    }
    *(undefined8 **)(lVar1 + 0x230) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  FUN_18000a790(&param_5,lVar1,0);
  FUN_18000c050(param_5,1);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181632350,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getLayer",0,CONCAT44(uVar13,8));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181632620,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getLayerByID",0,CONCAT44(uVar13,0xc));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181632950,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getLayerCount",0,CONCAT44(uVar13,0xd));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181632c00,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"enumerateLayers",0,CONCAT44(uVar13,0xf));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181632fc0,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"destroyLayer",0,CONCAT44(uVar13,0xc));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181633290,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"createLayer",0,CONCAT44(uVar13,0xb));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181634eb0,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"sortLayer",0,CONCAT44(uVar13,9));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181635200,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getLayerIndex",0,CONCAT44(uVar13,0xd));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181634980,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getInitialLayerConfig",0,CONCAT44(uVar13,0x15));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181635540,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getCameraTransforms",0,CONCAT44(uVar13,0x13));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_1816359e0,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"setCameraTransforms",0,CONCAT44(uVar13,0x13));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181635ee0,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"getAnimation",0,CONCAT44(uVar13,0xc));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_1816361f0,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"createModelData",0,CONCAT44(uVar13,0xf));
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  uVar12 = param_5;
  uVar13 = 0;
  puVar6 = (undefined8 *)FUN_180009770(local_58,lVar1,FUN_181636890,0,0,0,1,0,0,0,0,0);
  uVar11 = CONCAT44(uVar13,0x10);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res20,lVar1,"destroyModelData",0,uVar11);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1800090f0(uVar12,local_res20,uVar9,0);
  (**(code **)(*plVar7 + 8))(plVar7,&local_res18);
  (**(code **)(*param_4 + 0x10))(param_4,local_res18);
  plVar2 = (longlong *)local_res18[1];
  uVar9 = param_5;
  for (plVar10 = (longlong *)*local_res18; param_5 = uVar9, plVar10 != plVar2; plVar10 = plVar10 + 1
      ) {
    plVar7 = (longlong *)(*plVar10 + 0x38);
    if (0xf < *(ulonglong *)(*plVar10 + 0x50)) {
      plVar7 = (longlong *)*plVar7;
    }
    plVar7 = (longlong *)FUN_180029c50(&local_res20,lVar1,plVar7,0,0xffffffff);
    if (*plVar7 == 0) {
      FUN_180008160();
    }
    uVar13 = 0;
    FUN_18000a810(uVar9,*plVar7,FUN_181631d00,FUN_181632030,0,0,0,0);
    param_1 = local_res8;
    uVar9 = param_5;
    plVar7 = param_6;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&local_res18);
  plVar7 = (longlong *)FUN_180029060(param_5,&local_res8,puVar5);
  if (*plVar7 == 0) {
    FUN_180008160();
  }
  lVar3 = *plVar7;
  FUN_180025d10(lVar3,0,param_1,1);
  puVar6 = (undefined8 *)FUN_180028a80(puVar5,&local_res20);
  uVar9 = *puVar6;
  FUN_180029b70(&param_6,lVar1,"thisScene",0,CONCAT44(uVar13,9));
  FUN_18001b770(uVar9,&local_res8,puVar5,param_6,lVar3);
  FUN_18000a790(&local_res10,lVar1,0);
  FUN_18000c050(local_res10,3);
  puVar6 = local_res10;
  uVar13 = 0;
  puVar8 = (undefined8 *)FUN_180009770(&param_6,lVar1,FUN_181636b60,0,0,0,1,0,0,0,0,0);
  uVar9 = *puVar8;
  FUN_180029b70(&local_res8,lVar1,"applyData",0,CONCAT44(uVar13,9));
  FUN_1800090f0(puVar6,local_res8,uVar9,0);
  puVar6 = local_res10;
  uVar13 = 0;
  puVar8 = (undefined8 *)FUN_180009770(&param_6,lVar1,FUN_181636ef0,0,0,0,1,0,0,0,0,0);
  uVar12 = CONCAT44(uVar13,0xb);
  uVar9 = *puVar8;
  FUN_180029b70(&local_res8,lVar1,"replaceData",0,uVar12);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  FUN_1800090f0(puVar6,local_res8,uVar9,0);
  if (param_1[5] != 0) {
    thunk_FUN_1800bff50();
    param_1[5] = 0;
  }
  if (local_res10 != (undefined8 *)0x0) {
    uVar9 = FUN_180007fb0(lVar1,*local_res10);
    param_1[5] = uVar9;
  }
  puVar6 = (undefined8 *)FUN_180028a80(puVar5,&param_6);
  uVar12 = CONCAT44(uVar13,10);
  uVar9 = *puVar6;
  FUN_180029b70(&local_res8,lVar1,"IModelData",0,uVar12);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  plVar7 = (longlong *)FUN_18001d110(uVar9,&local_res20,puVar5,local_res8);
  lVar3 = *plVar7;
  if ((lVar3 != 0) && (cVar4 = FUN_180016480(lVar3), cVar4 != '\0')) {
    FUN_180029b70(&local_res8,lVar1,"prototype",0,CONCAT44(uVar13,9));
    plVar7 = (longlong *)FUN_18001d110(lVar3,&param_6,puVar5,local_res8);
    if (*plVar7 == 0) {
      FUN_180008160();
    }
    puVar5 = (undefined8 *)*plVar7;
    if (param_1[6] != 0) {
      thunk_FUN_1800bff50();
      param_1[6] = 0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      uVar9 = FUN_180007fb0(lVar1,*puVar5);
      param_1[6] = uVar9;
    }
  }
  return param_1;
}


