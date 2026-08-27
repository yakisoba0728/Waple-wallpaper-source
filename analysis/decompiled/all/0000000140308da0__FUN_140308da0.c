// Function: FUN_140308da0
// Addr: 140308da0
// Size: 52 bytes


undefined8 FUN_140308da0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  *param_4 = 0;
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x498) != 0)) {
    uVar2 = (**(code **)(lVar1 + 0xb0))();
    *(undefined4 *)param_4 = uVar2;
  }
  return 0;
}

