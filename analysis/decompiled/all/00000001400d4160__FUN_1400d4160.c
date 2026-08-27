// Function: FUN_1400d4160
// Addr: 1400d4160
// Size: 159 bytes


undefined8 FUN_1400d4160(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 8))(param_1,param_2,1);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,lVar2);
  uVar3 = thunk_FUN_14028af20(uVar1);
  (**(code **)(*param_1 + 0x10))(param_1,lVar2,uVar3,uVar1);
  (**(code **)(*param_1 + 0x20))(param_1,lVar2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  return uVar3;
}

