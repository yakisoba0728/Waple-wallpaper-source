// Function: FUN_140256560
// Addr: 140256560
// Size: 422 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140256560(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [24];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_1401ddbb0();
  lVar5 = 0;
  *param_1 = &PTR_FUN_140491680;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  plVar3 = (longlong *)FUN_140086de0(param_3,"sprite","");
  lVar1 = *plVar3;
  if ((lVar1 != 0) && (lVar5 = lVar1, (*(uint *)(plVar3 + 1) >> 8 & 1) != 0)) {
    lVar5 = lVar1 + 4;
  }
  uVar4 = FUN_14014ff70(param_2 + 0x1630,lVar5);
  param_1[0x48] = uVar4;
  local_88 = &local_res8;
  local_res8 = 0;
  local_80 = local_res10;
  local_resc = 7;
  uVar2 = FUN_140098c30(&local_88);
  local_78 = _DAT_140492b60;
  uStack_70 = _UNK_140492b68;
  local_58 = _DAT_140492ba0;
  uStack_50 = _UNK_140492ba8;
  local_68 = _DAT_140492e00;
  uStack_60 = _UNK_140492e08;
  local_38 = _DAT_140492df0;
  uStack_30 = _UNK_140492df8;
  local_48 = _DAT_140493020;
  uStack_40 = _UNK_140493028;
  local_98 = 0x10000;
  local_94 = 2;
  local_90 = 0x30002;
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0x1518) + 0x40))
                    (*(longlong **)(param_2 + 0x1518),uVar2,&local_78,4,&local_98,6,0,0,0);
  param_1[0x49] = uVar4;
  uVar4 = FUN_14014ff70(param_2 + 0x1630,"materials/util/occlusiontest.json");
  param_1[0x4a] = uVar4;
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0x1518) + 0x80))();
  param_1[0x4b] = uVar4;
  return param_1;
}

