// Function: FUN_1401dd7d0
// Addr: 1401dd7d0
// Size: 293 bytes


undefined8 * FUN_1401dd7d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  *param_2 = 0x3f800000;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f800000;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[5] = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x16c);
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    if (-1 < *(int *)(param_1 + 400)) {
      (**(code **)(*plVar1 + 0x78))(plVar1,*(int *)(param_1 + 400),param_2);
    }
    uVar2 = FUN_1401dd7d0(*(undefined8 *)(param_1 + 0x180),local_88);
    puVar3 = (undefined8 *)FUN_14005ecb0(local_48,uVar2,param_2);
    uVar2 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar2;
    uVar2 = puVar3[3];
    param_2[2] = puVar3[2];
    param_2[3] = uVar2;
    uVar2 = puVar3[5];
    param_2[4] = puVar3[4];
    param_2[5] = uVar2;
    uVar2 = puVar3[7];
    param_2[6] = puVar3[6];
    param_2[7] = uVar2;
  }
  return param_2;
}

