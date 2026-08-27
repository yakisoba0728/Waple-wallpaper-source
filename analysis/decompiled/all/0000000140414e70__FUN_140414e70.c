// Function: FUN_140414e70
// Addr: 140414e70
// Size: 305 bytes


void FUN_140414e70(int *param_1)

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
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        param_1[2] = 0;
        param_1[3] = 0;
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
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xe));
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

