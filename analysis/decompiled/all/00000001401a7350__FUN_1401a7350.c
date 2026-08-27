// Function: FUN_1401a7350
// Addr: 1401a7350
// Size: 355 bytes


undefined8 FUN_1401a7350(longlong param_1,undefined8 param_2,undefined4 **param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 **ppuVar8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar7 = auStack_a8;
  local_68[0] = 0;
  local_60 = 0;
  local_58 = 0;
  local_60 = FUN_14028af20(0x38);
  *(longlong *)local_60 = local_60;
  *(longlong *)(local_60 + 8) = local_60;
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 7;
  local_30 = 8;
  local_68[0] = 0x3f800000;
  FUN_140011f50(&local_50,0x10,local_60);
  local_88 = local_68;
  local_80 = 0;
  uStack_78 = 0;
  ppuVar8 = &local_88;
  if (param_3 != (undefined4 **)0x0) {
    ppuVar8 = param_3;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1518);
  uVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2,ppuVar8);
  if (local_50 != 0) {
    lVar6 = local_50;
    puVar7 = auStack_a8;
    if ((0xfff < (ulonglong)((lStack_40 - local_50 >> 3) * 8)) &&
       (lVar6 = *(longlong *)(local_50 + -8), puVar7 = auStack_a8, 0x1f < (local_50 - lVar6) - 8U))
    {
      lVar6 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = auStack_a0;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1401a7452;
    thunk_FUN_14028af80(lVar6);
    *(undefined8 *)(puVar7 + 0x58) = 0;
    *(undefined8 *)(puVar7 + 0x60) = 0;
    *(undefined8 *)(puVar7 + 0x68) = 0;
  }
  puVar2 = *(undefined8 **)(puVar7 + 0x48);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    *(undefined8 *)(puVar7 + -8) = 0x1401a7480;
    FUN_140017240(puVar2 + 2);
    *(undefined8 *)(puVar7 + -8) = 0x1401a748d;
    thunk_FUN_14028af80(puVar2,0x38);
    puVar2 = puVar3;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401a74a4;
  thunk_FUN_14028af80(*(undefined8 *)(puVar7 + 0x48),0x38);
  return uVar5;
}

