// Function: FUN_140418960
// Addr: 140418960
// Size: 756 bytes


void FUN_140418960(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar2 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      *param_1 = -0xdead;
      lVar3 = *(longlong *)(param_1 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      plVar1 = (longlong *)(param_1 + 0x28);
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        pcVar4 = *(code **)*plVar1;
        if (pcVar4 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0x26) == (undefined8 *)0x0) {
            (*pcVar4)(0);
          }
          else {
            (*pcVar4)(**(undefined8 **)(param_1 + 0x26));
          }
        }
        if (*(code **)(*plVar1 + 8) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 8);
          }
          (**(code **)(*plVar1 + 8))(uVar5);
        }
        if (*(code **)(*(longlong *)(param_1 + 0x28) + 0x10) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x10);
          }
          (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x18) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x18);
          }
          (**(code **)(*plVar1 + 0x18))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x20) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x20);
          }
          (**(code **)(*plVar1 + 0x20))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x28) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x28);
          }
          (**(code **)(*plVar1 + 0x28))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x30) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x30);
          }
          (**(code **)(*plVar1 + 0x30))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x38) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x38);
          }
          (**(code **)(*plVar1 + 0x38))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x40) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x40);
          }
          (**(code **)(*plVar1 + 0x40))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x48) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x48);
          }
          (**(code **)(*plVar1 + 0x48))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x50) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x50);
          }
          (**(code **)(*plVar1 + 0x50))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x58);
          }
          (**(code **)(*plVar1 + 0x58))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x60) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x60);
          }
          (**(code **)(*plVar1 + 0x60))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x68) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x68);
          }
          (**(code **)(*plVar1 + 0x68))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x70) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x70);
          }
          (**(code **)(*plVar1 + 0x70))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x78) != (code *)0x0) {
          if (*(longlong *)(param_1 + 0x26) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x78);
          }
          (**(code **)(*plVar1 + 0x78))(uVar5);
        }
        if (*(code **)(*plVar1 + 0x80) != (code *)0x0) {
          uVar5 = 0;
          if (*(longlong *)(param_1 + 0x26) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x80);
          }
          (**(code **)(*plVar1 + 0x80))(uVar5);
        }
      }
      thunk_FUN_1402d9040(*plVar1);
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x26));
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

