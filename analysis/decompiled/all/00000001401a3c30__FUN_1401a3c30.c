// Function: FUN_1401a3c30
// Addr: 1401a3c30
// Size: 125 bytes


void FUN_1401a3c30(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_res8 [4];
  
  *param_1 = &PTR_DAT_14048b830;
  lVar3 = param_1[3];
  lVar1 = param_1[4];
  while( true ) {
    if (lVar3 == lVar1) {
      func_0x0001400318b0(param_1 + 6);
      func_0x0001400318b0(param_1 + 3);
      *param_1 = &PTR_UNWIND_INFO_140053f43_UnwindCodes_4__UnwindOpCode_1404778c0;
      return;
    }
    plVar2 = *(longlong **)(lVar3 + 0x38);
    local_res8[0] = param_1;
    if (plVar2 == (longlong *)0x0) break;
    (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
    lVar3 = lVar3 + 0x40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c390();
}

