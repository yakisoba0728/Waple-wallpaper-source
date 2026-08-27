// Function: FUN_1401b4760
// Addr: 1401b4760
// Size: 631 bytes


undefined8 * FUN_1401b4760(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_88 [8];
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined2 local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28;
  
  *param_1 = &PTR_FUN_14048f2e0;
  uVar1 = FUN_140291700(1);
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  puVar2 = (undefined8 *)FUN_14028af20(0x18);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_14048f2e8;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 4;
  FUN_1402914b0(local_88,0);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1402917f0(local_88,&DAT_14048f2dc);
  FUN_1402918b0(local_88);
  if (local_30 != 0) {
    thunk_FUN_1402d9040();
  }
  local_30 = 0;
  if (local_40 != 0) {
    thunk_FUN_1402d9040();
  }
  local_40 = 0;
  if (local_50 != 0) {
    thunk_FUN_1402d9040();
  }
  local_50 = 0;
  if (local_60 != 0) {
    thunk_FUN_1402d9040();
  }
  local_60 = 0;
  if (local_70 != 0) {
    thunk_FUN_1402d9040();
  }
  local_70 = 0;
  if (local_80 != 0) {
    thunk_FUN_1402d9040();
  }
  local_80 = 0;
  FUN_140291550(local_88);
  *puVar2 = &PTR_FUN_14048f338;
  param_1[0xc] = 0;
  param_1[1] = puVar2;
  plVar3 = (longlong *)FUN_1402918d0(param_1[3]);
  if (DAT_1404e8240 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e8240 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e8240 = (longlong)DAT_1404e3c90;
    }
    FUN_140291550(local_res8);
  }
  FUN_140293ad0(plVar3,puVar2,DAT_1404e8240);
  *(undefined4 *)(plVar3 + 4) = 0;
  if ((undefined2 *)plVar3[5] != &DAT_14048f2d8) {
    if ((undefined2 *)plVar3[5] != (undefined2 *)0x0) {
      thunk_FUN_1402d9040();
    }
    plVar3[5] = 0;
    puVar4 = (undefined2 *)_malloc_base(2);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = DAT_14048f2d8;
    }
    plVar3[5] = (longlong)puVar4;
  }
  if ((longlong *)param_1[3] != plVar3) {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[3] = plVar3;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0xe] = 0;
  return param_1;
}

