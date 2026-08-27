// Function: FUN_14013ba20
// Addr: 14013ba20
// Size: 295 bytes


undefined8 FUN_14013ba20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  HRESULT HVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *local_res8;
  longlong *local_res10;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  local_res10 = (longlong *)0x0;
  uVar5 = 0;
  HVar3 = CoCreateInstance((IID *)&DAT_1404838b0,(LPUNKNOWN)0x0,4,(IID *)&DAT_140475c78,&local_res10
                          );
  plVar2 = local_res10;
  if (HVar3 < 0) {
    return 0;
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x18))(local_res10,&DAT_1404838a0,&DAT_14048ae00,param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      local_res8 = (longlong *)0x0;
      iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_1404838c0,&DAT_14048b108,&local_res8);
      plVar1 = local_res8;
      if (iVar4 < 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *(longlong **)(param_1 + 0x18) = local_res8;
        if (local_res8 != (longlong *)0x0) {
          local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
          iVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + -8,&local_res8);
          if (-1 < iVar4) {
            uVar5 = 1;
            *(undefined4 *)(param_1 + 0x28) = local_res8._0_4_;
          }
        }
      }
      (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar5;
  }
  return 0;
}

