// Function: FUN_14035f650
// Addr: 14035f650
// Size: 143 bytes


void FUN_14035f650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res18 [4];
  ulonglong in_stack_ffffffffffffffd8;
  
  local_res18[0] = (undefined4)param_3;
  uVar4 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x90) + 0x38);
  if (pcVar1 == (code *)PTR_FUN_1404df460) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    *param_4 = 0;
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x30))
              (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,uVar4);
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
  }
  (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0x98),1,local_res18,
            in_stack_ffffffffffffffd8 & 0xffffffff00000000,param_4,0,uVar4);
  return;
}

