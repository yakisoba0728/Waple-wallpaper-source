// Function: FUN_1402f7860
// Addr: 1402f7860
// Size: 130 bytes


undefined4 FUN_1402f7860(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  *(undefined1 **)(param_1 + 4) = &LAB_1402f93f0;
  *(code **)(param_1 + 6) = FUN_1402f93c0;
  lVar1 = (**(code **)(param_2 + 8))(param_2,0x788);
  uVar2 = 0x40;
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_1404217a0(lVar1,0,0x788);
  }
  *(longlong *)(param_1 + 8) = lVar1;
  return uVar2;
}

