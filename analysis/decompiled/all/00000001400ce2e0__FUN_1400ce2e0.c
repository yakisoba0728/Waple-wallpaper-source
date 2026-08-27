// Function: FUN_1400ce2e0
// Addr: 1400ce2e0
// Size: 137 bytes


undefined8 * FUN_1400ce2e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1a);
    param_1[0x21] = 0;
  }
  *param_1 = &PTR_FUN_140485fb0;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_140292210(param_1 + 4);
  }
  FUN_140292df0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x110);
  }
  return param_1;
}

