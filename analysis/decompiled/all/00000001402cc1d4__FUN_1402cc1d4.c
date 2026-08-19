// Function: FUN_1402cc1d4
// Addr: 1402cc1d4
// Size: 1 bytes


undefined4 FUN_1402cc1d4(undefined4 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong in_RCX;
  longlong alStack_48 [2];
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_20;
  char cStack_18;
  char cStack_10;
  
  if ((in_RCX == 0) || (param_2 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    uStack_30 = &UNK_1402cc1e2;
    FUN_1402cb004();
  }
  alStack_48[0] = 0;
  cStack_20 = DAT_1404e46ac == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    uStack_30 = (undefined *)CONCAT44(PTR_PTR_1404dc7b8._4_4_,PTR_PTR_1404dc7b8._0_4_);
    uStack_28 = PTR_DAT_1404dc7c0._0_4_;
    uStack_24 = PTR_DAT_1404dc7c0._4_4_;
    param_1 = PTR_PTR_1404dc7b8._0_4_;
  }
  uVar1 = FUN_1402cc20c(param_1,*param_2,0,alStack_48);
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

