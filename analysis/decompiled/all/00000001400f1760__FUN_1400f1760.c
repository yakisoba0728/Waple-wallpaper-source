// Function: FUN_1400f1760
// Addr: 1400f1760
// Size: 79 bytes


int FUN_1400f1760(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &DAT_1404873c8;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
      param_1[2] = 0;
    }
    func_0x00014028b040(param_1,0x18);
  }
  return iVar2 + -1;
}

