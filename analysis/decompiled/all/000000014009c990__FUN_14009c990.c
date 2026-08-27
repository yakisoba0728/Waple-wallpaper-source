// Function: FUN_14009c990
// Addr: 14009c990
// Size: 77 bytes


ulonglong FUN_14009c990(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  
  uVar1 = param_6 / 3;
  if (param_2 / 3 < param_6 / 3) {
    uVar1 = param_2 / 3;
  }
  if (uVar1 != 0) {
    FUN_1404210f0(param_1,param_5,uVar1 * 3);
  }
  return uVar1;
}

