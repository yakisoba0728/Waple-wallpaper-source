// Function: FUN_1400f2510
// Addr: 1400f2510
// Size: 558 bytes


void FUN_1400f2510(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined8 local_res18;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = FUN_140290d80(param_1 + 0xd8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x144);
  UNLOCK();
  LOCK();
  *(undefined1 *)(param_1 + 0x92) = 1;
  UNLOCK();
  *(undefined8 **)(param_1 + 0xa0) = param_2;
  local_res8 = (longlong *)0x0;
  iVar2 = (**(code **)*param_2)(param_2,&DAT_140487188,&local_res8);
  if (-1 < iVar2) {
    local_res18 = 0;
    iVar2 = (**(code **)(*local_res8 + 0x40))(local_res8,&local_res18);
    if (-1 < iVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
                (*(longlong **)(param_1 + 0x10),local_res18,&DAT_140477ef0,param_1 + 0xa8);
    }
    puVar1 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_140487078,param_1 + 0xb0);
    }
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
    local_res8 = (longlong *)0x0;
  }
  if (((*(longlong *)(param_1 + 0xa8) != 0) &&
      ((~(byte)(*(uint *)(*(longlong *)(param_1 + 0x50) + 0x118) >> 0x12) & 1) != 0)) &&
     (*(int *)(param_1 + 0x130) == 0)) {
    LOCK();
    *(undefined1 *)(param_1 + 0x138) = 1;
    UNLOCK();
    plVar3 = (longlong *)FUN_14028af20(0x10);
    plVar3[1] = (longlong)FUN_1400f3930;
    *plVar3 = param_1;
    lVar4 = FUN_1402ca17c(0,0,FUN_140082eb0,plVar3,0,&local_30);
    if (lVar4 == 0) {
      local_30 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (*(int *)(param_1 + 0x130) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140015110();
    }
    *(undefined4 *)(param_1 + 0x130) = local_30;
    *(undefined4 *)(param_1 + 0x134) = local_2c;
    *(longlong *)(param_1 + 0x128) = lVar4;
  }
  FUN_140290ea0(param_1 + 0xd8);
  return;
}

