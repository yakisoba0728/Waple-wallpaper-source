// Function: FUN_140414f40
// Addr: 140414f40
// Size: 90 bytes


void FUN_140414f40(int *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
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
        return;
      }
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        pcVar3 = (code *)**(undefined8 **)(param_1 + 0x10);
        if (pcVar3 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0xe) == (undefined8 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = **(undefined8 **)(param_1 + 0xe);
          }
          (*pcVar3)(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 0x10) + 8) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0xe) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + 8);
          }
          (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 0x10) + 0x10) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0xe) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x10);
          }
          (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 0x10) + 0x18) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0xe) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x18);
          }
          (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 0x10) + 0x20) != (code *)0x0) {
          uVar4 = 0;
          if (*(longlong *)(param_1 + 0xe) != 0) {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x20);
          }
          (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(uVar4);
        }
      }
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x10));
      func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0xe));
      func_0x0001402bf8e0(param_1);
    }
  }
  return;
}

