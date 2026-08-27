// Function: FUN_140035680
// Addr: 140035680
// Size: 82 bytes


void FUN_140035680(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
  }
  return;
}

