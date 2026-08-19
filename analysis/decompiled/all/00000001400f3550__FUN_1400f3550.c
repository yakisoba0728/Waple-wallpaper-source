// Function: FUN_1400f3550
// Addr: 1400f3550
// Size: 55 bytes


void FUN_1400f3550(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uStackX_8;
  undefined2 uStackX_9;
  undefined1 uStackX_b;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x144);
  UNLOCK();
  if (*(char *)(param_1 + 0xc9) != '\0') {
    iVar2 = func_0x000140290e50(param_1 + 0xd8);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    uStack_18 = 0;
    uStack_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x20);
    uStack_c = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x24);
    plVar1 = *(longlong **)(param_1 + 0xb0);
    uStackX_9 = 0;
    uStackX_8 = 0;
    uStackX_b = 0xff;
    if ((plVar1 != (longlong *)0x0) &&
       (iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,1000), -1 < iVar2)) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x158))
                        (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xa8),
                         param_1 + 0xb8,&uStack_18,&uStackX_8);
      if (-1 < iVar2) {
        LOCK();
        *(undefined1 *)(param_1 + 0x92) = 0;
        UNLOCK();
        LOCK();
        *(undefined1 *)(param_1 + 0xc9) = 0;
        UNLOCK();
      }
      LOCK();
      *(bool *)(param_1 + 8) = -1 < iVar2;
      UNLOCK();
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))(*(longlong **)(param_1 + 0xb0),0);
    }
    FUN_140290f70(param_1 + 0xd8);
  }
  return;
}

