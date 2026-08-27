// Function: FUN_1401e2990
// Addr: 1401e2990
// Size: 377 bytes


void FUN_1401e2990(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_14028af20();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3 = (undefined8 *)FUN_1401e2b10(puVar3);
  *param_2 = (longlong)puVar3;
  if (puVar3 != param_1) {
    puVar6 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    FUN_14000f880(puVar3,puVar6,param_1[2]);
  }
  if ((undefined8 *)*param_2 != param_1) {
    plVar5 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_14000f880((undefined8 *)*param_2 + 4,plVar5,param_1[6]);
  }
  lVar1 = *param_2;
  *(undefined1 *)(lVar1 + 0x84) = *(undefined1 *)((longlong)param_1 + 0x84);
  *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined8 *)param_1[9];
  for (puVar6 = (undefined8 *)*puVar3; puVar6 != puVar3; puVar6 = (undefined8 *)*puVar6) {
    FUN_140016fc0(local_48,puVar6 + 2);
    local_24 = *(undefined4 *)((longlong)puVar6 + 0x34);
    local_28 = *(undefined4 *)(puVar6 + 6);
    local_20 = puVar6[7];
    uVar4 = thunk_FUN_14028af20();
    FUN_1404210f0(uVar4,local_20,local_28);
    uVar2 = local_28;
    plVar5 = (longlong *)FUN_1401e4a60(*param_2 + 0x40,local_58,local_48);
    lVar1 = *plVar5;
    *(undefined4 *)(lVar1 + 0x30) = uVar2;
    *(undefined4 *)(lVar1 + 0x34) = local_54;
    *(undefined8 *)(lVar1 + 0x38) = uVar4;
    FUN_140017240(local_48);
  }
  return;
}

