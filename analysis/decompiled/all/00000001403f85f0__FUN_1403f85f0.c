// Function: FUN_1403f85f0
// Addr: 1403f85f0
// Size: 66 bytes


void FUN_1403f85f0(longlong param_1)

{
  int *piVar1;
  
  FUN_140419b60();
  piVar1 = (int *)func_0x000140419c80();
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x10) = piVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xfffd;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined2 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 1;
  return;
}

