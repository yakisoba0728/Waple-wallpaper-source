// Function: FUN_140419a90
// Addr: 140419a90
// Size: 273 bytes


void FUN_140419a90(int *param_1)

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
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 0x16));
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))(*(undefined8 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x32) != (code *)0x0) {
        (**(code **)(param_1 + 0x32))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x24));
      }
      FUN_140419a90(*(undefined8 *)(param_1 + 4));
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

