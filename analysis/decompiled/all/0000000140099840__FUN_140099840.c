// Function: FUN_140099840
// Addr: 140099840
// Size: 361 bytes


ulonglong FUN_140099840(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff28;
  uint uVar6;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x70);
  *(undefined8 *)(uVar4 + 0x20) = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
    (**(code **)(*plVar2 + 0x90))(plVar2,&local_80);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
    uVar4 = (**(code **)(*plVar2 + 0x68))
                      (plVar2,0,param_3,param_4,(ulonglong)uVar6 << 0x20,
                       CONCAT44(uVar7,uStack_58._4_4_));
    if (((int)uVar4 + 0x7785fffbU & 0xfffffffd) != 0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      if (-1 < (int)uVar4) {
        puVar1 = *(undefined8 **)(param_1 + 0x70);
        plVar2 = (longlong *)puVar1[2];
        iVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,0,&DAT_140477fc0,&local_res8);
        if (-1 < iVar3) {
          plVar2 = (longlong *)*puVar1;
          (**(code **)(*plVar2 + 0x48))(plVar2,local_res8,0,&local_88);
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
        (**(code **)(*plVar2 + 0x90))(plVar2,&uStack_50);
        uVar5 = func_0x00014028aff0(0xa0);
        uVar5 = FUN_1400d2d30(uVar5,uStack_50,uStack_4c,1,0,param_2,0x1b,0x18,0,0,
                              *(undefined8 *)(param_1 + 0x70),local_88,local_res8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x20) = uVar5;
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + 0x20) + 0x48))();
      }
      uVar4 = *(ulonglong *)(param_1 + 0x70);
      if ((*(longlong *)(uVar4 + 0x20) != 0) &&
         (*(longlong *)(*(longlong *)(uVar4 + 0x20) + 0x48) != 0)) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

