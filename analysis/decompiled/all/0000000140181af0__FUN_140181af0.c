// Function: FUN_140181af0
// Addr: 140181af0
// Size: 1088 bytes


longlong FUN_140181af0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined **local_b8;
  longlong *local_b0;
  undefined ***local_80;
  undefined **local_78;
  longlong *local_70;
  undefined ***local_40;
  
  FUN_14017def0(param_1 + 2);
  *(undefined1 *)(param_1 + 0x60d) = 1;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_78 = &PTR_LAB_14048e458;
  local_40 = &local_78;
  local_70 = param_1;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x30))((longlong *)param_1[0x2d],&local_78);
  (**(code **)(*(longlong *)param_1[0x2d] + 0x38))((longlong *)param_1[0x2d],1);
  uVar5 = FUN_14028af20(0x500);
  lVar6 = FUN_140186c90(uVar5,param_2,param_3,param_1 + 2);
  *param_1 = lVar6;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x38))((longlong *)param_1[0x2d],0);
  FUN_140184020(param_1);
  lVar6 = *param_1;
  if (((*(byte *)(lVar6 + 0xe0) & 4) != 0) &&
     (*(longlong *)(lVar6 + 0x310) != *(longlong *)(lVar6 + 0x318))) {
    lVar6 = FUN_14014ff70(param_1 + 0x2c8,"materials/util/fade.json");
    param_1[0x630] = lVar6;
  }
  lVar6 = param_1[0x37];
  uVar2 = *(uint *)(*param_1 + 0xe0);
  uVar9 = *(uint *)(param_1 + 0x25) >> 0xd;
  if ((*(byte *)(*param_1 + 0xe0) & 1) == 0) {
    if (param_1[0x612] != 0) {
      FUN_1401ab5f0(param_1 + 0x2da);
      param_1[0x612] = 0;
    }
  }
  else if (param_1[0x612] == 0) {
    lVar7 = FUN_1401aadb0(param_1 + 0x2da,*(undefined4 *)((longlong)param_1 + 0x8c),
                          (int)param_1[0x12],1,"_rt_Reflection",1,
                          (*(uint *)(param_1 + 0x25) & 1) * 4 + 0x16,2,0);
    param_1[0x612] = lVar7;
  }
  if ((uVar2 >> 0xb & 1) == 0) {
    if (param_1[0x61f] != 0) {
      FUN_1401ab5f0(param_1 + 0x2da);
      param_1[0x61f] = 0;
    }
  }
  else if (param_1[0x61f] == 0) {
    uVar4 = 1;
    if ((uVar9 & 1) != 0) {
      uVar4 = 0xf;
    }
    uVar10 = 1;
    plVar8 = (longlong *)
             FUN_1401aadb0(param_1 + 0x2da,*(undefined4 *)((longlong)param_1 + 0x8c),
                           (int)param_1[0x12],1,"_rt_MipMappedFrameBuffer",uVar4,0x1b,2,0x10);
    param_1[0x61f] = (longlong)plVar8;
    if ((*(byte *)(param_1 + 0x25) & 0x80) == 0) {
      lVar7 = plVar8[1];
      plVar1 = (longlong *)(lVar7 + 0x50);
      *plVar1 = *plVar1 + 8;
      **(undefined8 **)(lVar7 + 0x50) = plVar8;
      (**(code **)(*plVar8 + 0x48))(plVar8);
      (**(code **)(*(longlong *)param_1[0x2a5] + 0x118))
                ((longlong *)param_1[0x2a5],0,0,0,CONCAT44(uVar10,DAT_140492704));
      (**(code **)(*(longlong *)param_1[0x2a5] + 0x120))((longlong *)param_1[0x2a5],1,0);
      plVar8 = (longlong *)param_1[0x61f];
      *(longlong *)(plVar8[1] + 0x50) = *(longlong *)(plVar8[1] + 0x50) + -8;
      if ((longlong *)**(longlong **)(plVar8[1] + 0x50) == (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8);
        (**(code **)(*(longlong *)param_1[0x61f] + 0x20))();
      }
      else {
        (**(code **)(*(longlong *)**(longlong **)(plVar8[1] + 0x50) + 0x48))();
        (**(code **)(*(longlong *)param_1[0x61f] + 0x20))();
      }
    }
  }
  if ((int)lVar6 == 0) {
    if (param_1[0x620] != 0) {
      FUN_1401ab5f0(param_1 + 0x2da);
      param_1[0x620] = 0;
    }
  }
  else if (param_1[0x620] == 0) {
    uVar4 = 1;
    if ((uVar9 & 1) != 0) {
      uVar4 = 0xf;
    }
    lVar6 = FUN_1401aadb0(param_1 + 0x2da,*(undefined4 *)((longlong)param_1 + 0x8c),
                          (int)param_1[0x12],1,"_rt_FullFrameBufferMultiSampled",uVar4,0x18,2,0x20);
    param_1[0x620] = lVar6;
  }
  puVar3 = (undefined8 *)param_1[8];
  *puVar3 = 0x3f800000;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  puVar3[5] = 0x3f800000;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x3f800000;
  puVar3 = (undefined8 *)param_1[9];
  *puVar3 = 0x3f800000;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  puVar3[5] = 0x3f800000;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x3f800000;
  FUN_140183a70(param_1);
  local_b8 = &PTR_LAB_14048e488;
  local_80 = &local_b8;
  local_b0 = param_1;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x40))((longlong *)param_1[0x2d],1,&local_b8);
  lVar6 = *param_1;
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[4])(local_80,local_80 != &local_b8);
  }
  return lVar6;
}

