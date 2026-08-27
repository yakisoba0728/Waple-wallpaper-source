// Function: FUN_14011e8e0
// Addr: 14011e8e0
// Size: 234 bytes


LRESULT FUN_14011e8e0(HWND param_1,UINT param_2,ulonglong param_3,LONG_PTR *param_4)

{
  longlong *plVar1;
  LRESULT LVar2;
  tagRECT local_38;
  
  if (param_2 == 1) {
    SetWindowLongPtrW(param_1,-0x15,*param_4);
    return 0;
  }
  if (param_2 != 5) {
    if (param_2 == 0x10) {
      plVar1 = (longlong *)GetWindowLongPtrW(param_1,-0x15);
      if (plVar1 != (longlong *)0x0) {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x18))();
        }
        *plVar1 = 0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014011e952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar2 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
    return LVar2;
  }
  plVar1 = (longlong *)GetWindowLongPtrW(param_1,-0x15);
  if ((((param_3 & 0xfffffffffffffffd) == 0) && (plVar1 != (longlong *)0x0)) &&
     (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    GetClientRect(param_1,&local_38);
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_38);
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return 0;
}

