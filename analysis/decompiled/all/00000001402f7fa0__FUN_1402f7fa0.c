// Function: FUN_1402f7fa0
// Addr: 1402f7fa0
// Size: 67 bytes


longlong FUN_1402f7fa0(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (0 < param_2) {
    lVar1 = (**(code **)(param_1 + 8))();
    uVar2 = 0x40;
    if (lVar1 != 0) {
      uVar2 = 0;
    }
    *param_3 = uVar2;
    return lVar1;
  }
  uVar2 = 0;
  if (param_2 < 0) {
    uVar2 = 6;
  }
  *param_3 = uVar2;
  return 0;
}

