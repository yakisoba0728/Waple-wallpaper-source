// Function: FUN_1400f1780
// Addr: 1400f1780
// Size: 254 bytes


undefined8 FUN_1400f1780(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res8 [4];
  undefined4 local_res18 [2];
  longlong *local_res20;
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
  if (-1 < (int)uVar2) {
    uVar3 = 0;
    local_res8[0] = 0;
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,local_res8);
    if (local_res8[0] != 0) {
      do {
        local_res18[0] = 0;
        local_38 = (longlong *)0x0;
        (**(code **)(*(longlong *)*param_2 + 0x110))
                  ((longlong *)*param_2,uVar3,local_res18,&local_38);
        local_res20 = (longlong *)0x0;
        local_30 = 0;
        uStack_28 = 0;
        (**(code **)(*local_38 + 0x110))(local_38,&local_res20);
        (**(code **)(*local_res20 + 0x40))(local_res20,&local_30);
        (**(code **)(*local_res20 + 0x10))();
        (**(code **)(*local_38 + 0x10))();
        iVar1 = memcmp(&local_30,&DAT_14042c320,0x10);
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

