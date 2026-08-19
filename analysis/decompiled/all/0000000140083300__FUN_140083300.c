// Function: FUN_140083300
// Addr: 140083300
// Size: 137 bytes


void FUN_140083300(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1400818d0(param_1 + 0xe);
  if (param_1[1] != -1) {
    (*DAT_1404262f0)(param_1[1],0xffffffffffffffff);
    param_1[1] = -1;
  }
  if (*param_1 != -1) {
    (*DAT_140426368)();
    *param_1 = -1;
  }
  plVar1 = (longlong *)param_1[0x59];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x52);
    param_1[0x59] = 0;
  }
  FUN_140081810(param_1 + 0xe);
  return;
}

