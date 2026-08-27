// Function: FUN_140083230
// Addr: 140083230
// Size: 137 bytes


void FUN_140083230(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_140081800(param_1 + 0xe);
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    UnregisterWaitEx((HANDLE)param_1[1],(HANDLE)0xffffffffffffffff);
    param_1[1] = 0xffffffffffffffff;
  }
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
  }
  plVar1 = (longlong *)param_1[0x59];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x52);
    param_1[0x59] = 0;
  }
  FUN_140081740(param_1 + 0xe);
  return;
}

