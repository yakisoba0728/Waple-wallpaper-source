// Function: FUN_1401e36f0
// Addr: 1401e36f0
// Size: 352 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e36f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  
  iVar2 = func_0x000140290e50(&DAT_1404dfc10);
  if (iVar2 == 0) {
    if (DAT_1404dfc5c == 0x7fffffff) {
      DAT_1404dfc5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_140290f70(&DAT_1404dfc10);
    if (DAT_1404e8428 != 0) {
      iVar2 = func_0x000140291210();
      if (DAT_1404e8428 == iVar2) goto UNWIND_INFO_1401e3e72_UnwindCodes_12__OffsetInProlog;
      local_c8 = _DAT_1404e8420;
      uStack_c4 = DAT_1404e8420_4;
      iStack_c0 = DAT_1404e8428;
      uStack_bc = DAT_1404e8428_4;
      iVar2 = func_0x000140291220(&local_c8,0);
      if (iVar2 != 0) goto UNWIND_INFO_1401e3e72_UnwindCodes_63__UnwindOpCode;
      _DAT_1404e8420 = 0;
      _DAT_1404e8428 = 0;
    }
    iVar2 = func_0x000140290e50(&DAT_1404dfc10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (DAT_1404dfc5c == 0x7fffffff) {
      DAT_1404dfc5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    if ((param_1[7] != 0) && (DAT_1404e8428 == 0)) {
      plVar1 = *(longlong **)param_1[6];
      if (plVar1 != (longlong *)param_1[6]) {
        *(undefined1 *)(plVar1[2] + 0x84) = 1;
        func_0x00014028aff0(0x88);
        return;
      }
      func_0x00014028aff0(0x30);
      return;
    }
    FUN_140290f70(&DAT_1404dfc10);
    if (DAT_1404e8428 != 0) {
      iVar2 = func_0x000140291210();
      if (DAT_1404e8428 == iVar2) goto UNWIND_INFO_1401e3e72_UnwindCodes_12__OffsetInProlog;
      local_c8 = _DAT_1404e8420;
      uStack_c4 = DAT_1404e8420_4;
      iStack_c0 = DAT_1404e8428;
      uStack_bc = DAT_1404e8428_4;
      iVar2 = func_0x000140291220(&local_c8,0);
      if (iVar2 != 0) {
UNWIND_INFO_1401e3e72_UnwindCodes_63__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(2);
      }
      _DAT_1404e8420 = 0;
      _DAT_1404e8428 = 0;
    }
    (**(code **)(*(longlong *)*param_1 + 8))();
    func_0x00014000dab0(param_1 + 8);
    return;
  }
UNWIND_INFO_1401e3e72_UnwindCodes_12__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(5);
}

