// Function: FUN_1402f7e90
// Addr: 1402f7e90
// Size: 130 bytes


longlong FUN_1402f7e90(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (0 < param_2) {
    lVar1 = (**(code **)(param_1 + 8))(param_1,param_2);
    uVar2 = 0x40;
    if (lVar1 != 0) {
      uVar2 = 0;
      FUN_1404217a0(lVar1,0,(longlong)param_2);
    }
    *param_3 = uVar2;
    return lVar1;
  }
  if (-1 < param_2) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = 6;
  return 0;
}

