// Function: FUN_1403479d0
// Addr: 1403479d0
// Size: 71 bytes


ulonglong FUN_1403479d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 local_18 [2];
  
  uVar1 = FUN_140346c80(param_1,param_2,local_18);
  if ((int)uVar1 == 0) {
    FUN_1402f8130(param_3,local_18[0],param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

