// Function: FUN_1402c10b8
// Addr: 1402c10b8
// Size: 14 bytes


undefined4 FUN_1402c10b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  longlong alStack_48 [2];
  undefined1 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_20;
  char cStack_18;
  char cStack_10;
  
  alStack_48[0] = 0;
  cStack_20 = DAT_1404e46ac == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    uStack_30 = PTR_PTR_1404dc7b8._0_4_;
    uStack_2c = PTR_PTR_1404dc7b8._4_4_;
    uStack_28 = PTR_DAT_1404dc7c0._0_4_;
    uStack_24 = PTR_DAT_1404dc7c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  uStack_58 = param_1;
  puStack_50 = param_2;
  uVar1 = func_0x0001402c0378(alStack_48,&uStack_58,param_3,1);
  if (cStack_20 == '\x02') {
    *(uint *)(alStack_48[0] + 0x3a8) = *(uint *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(alStack_48);
  }
  if (cStack_10 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(alStack_48);
  }
  return uVar1;
}

