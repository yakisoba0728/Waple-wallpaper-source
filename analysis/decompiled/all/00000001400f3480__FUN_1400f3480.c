// Function: FUN_1400f3480
// Addr: 1400f3480
// Size: 294 bytes


void FUN_1400f3480(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x144);
  UNLOCK();
  if (*(char *)(param_1 + 0xc9) != '\0') {
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
    local_18 = 0;
    local_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x20);
    local_c = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x24);
    plVar1 = *(longlong **)(param_1 + 0xb0);
    local_res9 = 0;
    local_res8 = 0;
    local_resb = 0xff;
    if ((plVar1 != (longlong *)0x0) &&
       (iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,1000), -1 < iVar2)) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x158))
                        (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xa8),
                         param_1 + 0xb8,&local_18,&local_res8);
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
    FUN_140290ea0(param_1 + 0xd8);
  }
  return;
}

