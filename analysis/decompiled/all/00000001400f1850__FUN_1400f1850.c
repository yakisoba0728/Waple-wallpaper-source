// Function: FUN_1400f1850
// Addr: 1400f1850
// Size: 40 bytes


undefined8 FUN_1400f1850(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res8 [4];
  undefined4 auStackX_18 [2];
  longlong *plStackX_20;
  longlong *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
  if (-1 < (int)uVar2) {
    uVar3 = 0;
    local_res8[0] = 0;
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,local_res8);
    if (local_res8[0] != 0) {
      do {
        auStackX_18[0] = 0;
        plStack_38 = (longlong *)0x0;
        (**(code **)(*(longlong *)*param_2 + 0x110))
                  ((longlong *)*param_2,uVar3,auStackX_18,&plStack_38);
        plStackX_20 = (longlong *)0x0;
        uStack_30 = 0;
        uStack_28 = 0;
        (**(code **)(*plStack_38 + 0x110))(plStack_38,&plStackX_20);
        (**(code **)(*plStackX_20 + 0x40))(plStackX_20,&uStack_30);
        (**(code **)(*plStackX_20 + 0x10))();
        (**(code **)(*plStack_38 + 0x10))();
        iVar1 = func_0x0001404210c0(&uStack_30,&UNK_14042c3f0,0x10);
        if (iVar1 == 0) {
          (**(code **)(*(longlong *)*param_2 + 0x120))((longlong *)*param_2,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_res8[0]);
    }
    uVar2 = 0;
  }
  return uVar2;
}

