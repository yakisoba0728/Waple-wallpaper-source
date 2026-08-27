// Function: FUN_1404160c0
// Addr: 1404160c0
// Size: 847 bytes


void FUN_1404160c0(int *param_1)

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
      if (*(undefined8 **)(param_1 + 6) != (undefined8 *)0x0) {
        pcVar3 = (code *)**(undefined8 **)(param_1 + 6);
        if (pcVar3 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 4) == (undefined8 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = **(undefined8 **)(param_1 + 4);
          }
          (*pcVar3)(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 8) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 8);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 8))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x10) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x10);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x18) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x18);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x20) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x20);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x20))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x28) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x28);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x28))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x30) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x30);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x30))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x38) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x38);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x38))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x40) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x40);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x40))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x48) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x48);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x48))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x50) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x50);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x50))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x58) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x58);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x58))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x60) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x60);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x60))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x68) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x68);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x68))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x70) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x70);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x70))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x78) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x78);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x78))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x80) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x80);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x80))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x88) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x88);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x88))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x90) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x90);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x90))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0x98) != (code *)0x0) {
          if (*(longlong *)(param_1 + 4) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x98);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0x98))(uVar4);
        }
        if (*(code **)(*(longlong *)(param_1 + 6) + 0xa0) != (code *)0x0) {
          uVar4 = 0;
          if (*(longlong *)(param_1 + 4) != 0) {
            uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 4) + 0xa0);
          }
          (**(code **)(*(longlong *)(param_1 + 6) + 0xa0))(uVar4);
        }
      }
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 6));
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 4));
      thunk_FUN_1402d9040(param_1);
    }
  }
  return;
}

