// Function: FUN_140099050
// Addr: 140099050
// Size: 692 bytes


void FUN_140099050(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  local_4c = 0;
  uStack_44 = 0;
  local_58 = 1;
  local_54 = 1;
  local_3c = 0;
  uStack_34 = 0;
  local_50 = 5;
  local_2c = 0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xa8))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_58,param_1 + 0xc0);
  local_54 = 0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xa8))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_58,param_1 + 200);
  local_58 = 0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xa8))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_58,param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  local_88 = 3;
  local_84 = 3;
  uStack_78 = 0;
  local_70 = 1;
  local_80 = 1;
  uStack_68 = (ulonglong)(*(int *)(*(longlong *)(param_1 + 8) + 0x1a8) != 0);
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0xe8);
  local_84 = 2;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0xf0);
  local_84 = 1;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  uStack_78 = CONCAT44(0xc0800000,(undefined4)uStack_78);
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0x108);
  local_84 = 2;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0x110);
  local_84 = 1;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb0))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_88,param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  plVar2 = (longlong *)puVar1[2];
  if (plVar2 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,0,&DAT_140477ef0,&local_res8);
    if (-1 < iVar3) {
      plVar2 = (longlong *)*puVar1;
      (**(code **)(*plVar2 + 0x48))(plVar2,local_res8,0,&local_res10);
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
    (**(code **)(*plVar2 + 0x90))(plVar2,&local_88);
    uVar4 = FUN_14028af20(0xa0);
    uVar4 = FUN_1400d2c60(uVar4,local_88,local_84,1,0,param_2,0x1b,0x18,0,0,
                          *(undefined8 *)(param_1 + 0x70),local_res10,local_res8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x20) = uVar4;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x20);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}

