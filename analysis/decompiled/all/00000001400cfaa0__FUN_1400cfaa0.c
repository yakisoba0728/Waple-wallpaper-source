// Function: FUN_1400cfaa0
// Addr: 1400cfaa0
// Size: 64 bytes


undefined8 * FUN_1400cfaa0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_PTR_1404867f8;
  param_1[9] = 0;
  puVar1 = (undefined8 *)param_2[7];
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,param_1 + 2);
    param_1[9] = uVar3;
  }
  puVar4 = (undefined4 *)FUN_1402d3ed0(4,0x20);
  param_1[1] = puVar4;
  *puVar4 = 0;
  LOCK();
  *(int *)param_1[1] = *(int *)param_1[1] + 1;
  UNLOCK();
  plVar2 = (longlong *)param_2[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
    param_2[7] = 0;
  }
  return param_1;
}

