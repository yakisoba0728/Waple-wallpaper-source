// Function: FUN_1402cd1a4
// Addr: 1402cd1a4
// Size: 59 bytes


undefined4 FUN_1402cd1a4(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  char local_18;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1404e46ac == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    uStack_30 = PTR_PTR_1404dc7b8._0_4_;
    uStack_2c = PTR_PTR_1404dc7b8._4_4_;
    uStack_28 = PTR_DAT_1404dc7c0._0_4_;
    uStack_24 = PTR_DAT_1404dc7c0._4_4_;
    param_1 = PTR_PTR_1404dc7b8._0_4_;
  }
  uVar1 = func_0x0001402cd028(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_48);
  }
  if (local_10 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_48);
  }
  return uVar1;
}

