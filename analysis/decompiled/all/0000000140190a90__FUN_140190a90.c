// Function: FUN_140190a90
// Addr: 140190a90
// Size: 174 bytes


void FUN_140190a90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *local_res10 [3];
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  while (plVar2 = plVar1, local_res10[0] = param_2, plVar2 != *(longlong **)(param_1 + 0x160)) {
    plVar1 = plVar2 + 1;
    if ((undefined8 *)*plVar2 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(plVar2,plVar1,(longlong)*(longlong **)(param_1 + 0x160) - (longlong)plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  while (plVar2 = plVar1, plVar2 != *(longlong **)(param_1 + 0x1d0)) {
    plVar1 = plVar2 + 1;
    if ((undefined8 *)*plVar2 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(plVar2,plVar1,(longlong)*(longlong **)(param_1 + 0x1d0) - (longlong)plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  while (plVar2 = plVar1, plVar2 != *(longlong **)(param_1 + 0x178)) {
    plVar1 = plVar2 + 1;
    if ((undefined8 *)*plVar2 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(plVar2,plVar1,(longlong)*(longlong **)(param_1 + 0x178) - (longlong)plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  while (plVar2 = plVar1, plVar2 != *(longlong **)(param_1 + 0x1e8)) {
    plVar1 = plVar2 + 1;
    if ((undefined8 *)*plVar2 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(plVar2,plVar1,(longlong)*(longlong **)(param_1 + 0x1e8) - (longlong)plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  do {
    plVar2 = plVar1;
    if (plVar2 == *(longlong **)(param_1 + 0x200)) {
      FUN_14019e370(param_1 + 0x280,local_res10);
      FUN_14019e370(param_1 + 0x2c0,local_res10);
      FUN_14019e370(param_1 + 0x210,local_res10);
      if (param_2 != (undefined8 *)0x0) {
        (**(code **)*param_2)(param_2,1);
      }
      return;
    }
    plVar1 = plVar2 + 1;
  } while ((undefined8 *)*plVar2 != param_2);
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(plVar2,plVar1,(longlong)*(longlong **)(param_1 + 0x200) - (longlong)plVar1);
}

