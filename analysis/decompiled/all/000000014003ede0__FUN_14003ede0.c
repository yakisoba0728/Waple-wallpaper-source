// Function: FUN_14003ede0
// Addr: 14003ede0
// Size: 46 bytes


undefined1 FUN_14003ede0(undefined8 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined1 local_38 [8];
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = CONCAT31(local_30._1_3_,5);
  local_30 = local_30 & 0xfffffeff;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38[0] = param_2;
  uVar1 = FUN_14003f280(0,local_38);
  func_0x000140086e00(local_38);
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_28 + 0x40);
  }
  return uVar1;
}

