// Function: FUN_14005cad0
// Addr: 14005cad0
// Size: 677 bytes


int FUN_14005cad0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  char *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  
  uStack_7c = 6;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_88 = "POSITION";
  uStack_6c = 0;
  local_68 = "TEXCOORD";
  uStack_60 = 0;
  uStack_4c = 0;
  local_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  uStack_5c = 0x10;
  uStack_54 = 0xc;
  local_a8 = (undefined8 *)FUN_14028af20(0x40);
  puStack_a0 = local_a8 + 8;
  *local_a8 = local_88;
  local_a8[1] = CONCAT44(uStack_7c,uStack_80);
  local_a8[2] = CONCAT44(uStack_74,uStack_78);
  local_a8[3] = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(local_a8 + 4) = (undefined4)local_68;
  *(undefined4 *)((longlong)local_a8 + 0x24) = local_68._4_4_;
  *(undefined4 *)(local_a8 + 5) = uStack_60;
  *(undefined4 *)((longlong)local_a8 + 0x2c) = (undefined4)uStack_5c;
  *(undefined4 *)(local_a8 + 6) = uStack_5c._4_4_;
  *(undefined4 *)((longlong)local_a8 + 0x34) = (undefined4)uStack_54;
  *(undefined4 *)(local_a8 + 7) = uStack_54._4_4_;
  *(undefined4 *)((longlong)local_a8 + 0x3c) = uStack_4c;
  lVar1 = *param_1;
  local_98 = puStack_a0;
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  local_b8 = param_3;
  iVar3 = (**(code **)(lVar1 + 0x60))(param_1,uVar5,uVar4,0);
  if (-1 < iVar3) {
    lVar1 = *param_1;
    uVar4 = (**(code **)(*(longlong *)param_2[2] + 0x20))();
    uVar5 = (**(code **)(*(longlong *)param_2[2] + 0x18))();
    local_b8 = param_3 + 1;
    iVar3 = (**(code **)(lVar1 + 0x78))(param_1,uVar5,uVar4,0);
    if (-1 < iVar3) {
      if ((*(byte *)(param_2 + 3) & 2) != 0) {
        local_88 = "TEXCOORD";
        uStack_80 = 1;
        uStack_7c = 6;
        uStack_78 = 0;
        uStack_74 = 0x14;
        uStack_70 = 0;
        uStack_6c = 0;
        FUN_14005f100(&local_a8,&local_88);
        uStack_80 = 0;
        local_88 = "NORMAL";
        uStack_7c = 6;
        uStack_78 = 0;
        uStack_74 = 0x20;
        uStack_70 = 0;
        uStack_6c = 0;
        FUN_14005f100(&local_a8,&local_88);
      }
      if ((longlong *)param_2[1] != (longlong *)0x0) {
        lVar1 = *param_1;
        uVar4 = (**(code **)(*(longlong *)param_2[1] + 0x20))();
        uVar5 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
        local_b8 = param_3 + 2;
        iVar3 = (**(code **)(lVar1 + 0x68))(param_1,uVar5,uVar4,0);
        if (iVar3 < 0) goto LAB_14005ccd2;
      }
      lVar1 = *param_1;
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x20))();
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      local_b0 = param_3 + 3;
      local_b8 = plVar6;
      iVar3 = (**(code **)(lVar1 + 0x58))
                        (param_1,local_a8,(longlong)puStack_a0 - (longlong)local_a8 >> 5,uVar4);
      if (-1 < iVar3) goto LAB_14005cd1c;
    }
  }
LAB_14005ccd2:
  if ((longlong *)param_3[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_3[3] + 0x10))();
    param_3[3] = 0;
  }
  if ((longlong *)param_3[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_3[1] + 0x10))();
    param_3[1] = 0;
  }
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_3[2] + 0x10))();
    param_3[2] = 0;
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
    *param_3 = 0;
  }
LAB_14005cd1c:
  if (local_a8 != (undefined8 *)0x0) {
    puVar7 = local_a8;
    puVar8 = auStack_d8;
    if ((0xfff < ((longlong)local_98 - (longlong)local_a8 & 0xffffffffffffffe0U)) &&
       (puVar7 = (undefined8 *)local_a8[-1], puVar8 = auStack_d8,
       0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar7)))) {
      pcVar2 = (code *)swi(0x29);
      puVar7 = (undefined8 *)(*pcVar2)(5);
      puVar8 = auStack_d0;
    }
    *(undefined8 *)(puVar8 + -8) = 0x14005cd5f;
    thunk_FUN_14028af80(puVar7);
  }
  return iVar3;
}

