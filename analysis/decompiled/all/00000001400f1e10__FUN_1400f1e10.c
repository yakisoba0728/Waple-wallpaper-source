// Function: FUN_1400f1e10
// Addr: 1400f1e10
// Size: 392 bytes


void FUN_1400f1e10(undefined8 *param_1)

{
  longlong lVar1;
  DWORD DVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = &PTR_FUN_1404871b8;
  LOCK();
  *(undefined1 *)(param_1 + 0x27) = 0;
  UNLOCK();
  if (*(int *)(param_1 + 0x26) != 0) {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x26) == DVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_18 = *(undefined4 *)(param_1 + 0x25);
    uStack_14 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_10 = *(undefined4 *)(param_1 + 0x26);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x134);
    iVar3 = FUN_140291150(&local_18,0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  lVar1 = param_1[10];
  for (plVar4 = *(longlong **)(lVar1 + 0x1460);
      (plVar4 != *(longlong **)(lVar1 + 0x1468) && ((undefined8 *)*plVar4 != param_1));
      plVar4 = plVar4 + 1) {
  }
  FUN_1404210f0(plVar4,plVar4 + 1,(longlong)*(longlong **)(lVar1 + 0x1468) - (longlong)(plVar4 + 1))
  ;
  *(longlong *)(lVar1 + 0x1468) = *(longlong *)(lVar1 + 0x1468) + -8;
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
    param_1[0x16] = 0;
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    param_1[0x15] = 0;
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x150))();
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((HANDLE)param_1[0x10] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x10]);
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    param_1[0x13] = 0;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    MFShutdown();
  }
  if (*(int *)(param_1 + 0x26) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
  *param_1 = &PTR_FUN_140487378;
  return;
}

