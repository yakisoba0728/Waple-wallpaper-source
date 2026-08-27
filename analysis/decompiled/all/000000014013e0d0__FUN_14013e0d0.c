// Function: FUN_14013e0d0
// Addr: 14013e0d0
// Size: 99 bytes


void FUN_14013e0d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_14013daf0();
  FUN_14013e530(param_1 + 0x58,param_2);
  lVar3 = *(longlong *)(param_1 + 0x88);
  lVar1 = *(longlong *)(param_1 + 0x90);
  while( true ) {
    if (lVar3 == lVar1) {
      FUN_14013d5a0(param_1);
      return;
    }
    plVar2 = *(longlong **)(lVar3 + 0x38);
    if (plVar2 == (longlong *)0x0) break;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    lVar3 = lVar3 + 0x40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c2c0();
}

