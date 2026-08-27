// Function: FUN_1401151e0
// Addr: 1401151e0
// Size: 65 bytes


void FUN_1401151e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_140017240(param_1 + 0x20);
  FUN_140017240(param_1);
  return;
}

