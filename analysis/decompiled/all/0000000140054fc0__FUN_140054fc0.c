// Function: FUN_140054fc0
// Addr: 140054fc0
// Size: 141 bytes


void FUN_140054fc0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_140477770;
  plVar1 = (longlong *)param_1[0x1f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x18);
    param_1[0x1f] = 0;
  }
  plVar1 = (longlong *)param_1[0x17];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x10);
    param_1[0x17] = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_140056cf0(param_1 + 1);
    *param_1 = &PTR_FUN_1404777f0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140015110();
}

