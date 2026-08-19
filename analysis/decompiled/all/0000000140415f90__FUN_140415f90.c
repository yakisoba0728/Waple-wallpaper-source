// Function: FUN_140415f90
// Addr: 140415f90
// Size: 66 bytes


void FUN_140415f90(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      lVar2 = *(longlong *)(param_1 + 2);
      if (lVar2 != 0) {
        FUN_1403c32f0(lVar2);
        func_0x0001402bf8e0(lVar2);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if ((*(undefined8 **)(param_1 + 0x2c) != (undefined8 *)0x0) &&
         (*(undefined8 **)(param_1 + 0x2c) != &DAT_14045dde0)) {
        func_0x0001402bf8e0();
      }
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      if (*(longlong **)(param_1 + 0x2e) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x2e) + 0x10))();
      }
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x26));
      }
      FUN_140415f90(*(undefined8 *)(param_1 + 6));
      func_0x0001404158e0(*(undefined8 *)(param_1 + 8));
      func_0x000140416190(*(undefined8 *)(param_1 + 0x24));
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x20));
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x22));
      func_0x0001402bf8e0(param_1);
    }
  }
  return;
}

