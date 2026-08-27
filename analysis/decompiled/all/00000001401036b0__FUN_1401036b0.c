// Function: FUN_1401036b0
// Addr: 1401036b0
// Size: 221 bytes


undefined8 * FUN_1401036b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [24];
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  lVar3 = FUN_14028af20(0x30);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[3] = lVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_140037600(param_1 + 5,(longlong)(param_2[6] - param_2[5]) >> 3,param_1[3]);
  puVar1 = (undefined8 *)param_2[3];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_140032bc0(param_1 + 2,local_48,puVar2 + 2);
  }
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)param_2[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar1)(puVar1,param_1 + 10);
    param_1[0x11] = uVar4;
  }
  return param_1;
}

