// Function: FUN_1402cbfb4
// Addr: 1402cbfb4
// Size: 21 bytes


undefined8 FUN_1402cbfb4(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = *(ulonglong *)*param_1;
  func_0x0001402cbda4(*(undefined8 *)param_1[1],param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 *)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar3 = *(longlong *)param_1[4];
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402dd8b0(uVar1 & 0xfffffffffffffffe,1);
    }
    plVar2 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar2 + 0x14) = *(uint *)((longlong)plVar2 + 0x14) | 0x180;
    UNLOCK();
    *(int *)(plVar2 + 4) = (int)(uVar1 & 0xfffffffffffffffe);
  }
  else {
    plVar2 = *(longlong **)param_1[1];
    lVar3 = (longlong)plVar2 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar2 + 0x14) = *(uint *)((longlong)plVar2 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar2 + 4) = 2;
  }
  *plVar2 = lVar3;
  plVar2[1] = lVar3;
  *(undefined4 *)(plVar2 + 2) = 0;
  return 0;
}

