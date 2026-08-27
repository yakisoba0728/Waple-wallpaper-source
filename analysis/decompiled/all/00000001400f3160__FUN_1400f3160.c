// Function: FUN_1400f3160
// Addr: 1400f3160
// Size: 142 bytes


void FUN_1400f3160(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_140290d80(param_1 + 0xd8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x88))(plVar1,(double)param_2);
      LOCK();
      *(undefined1 *)(param_1 + 0x92) = 1;
      UNLOCK();
    }
    FUN_140290ea0(param_1 + 0xd8);
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

