// Function: FUN_1402cc09c
// Addr: 1402cc09c
// Size: 99 bytes


undefined4 FUN_1402cc09c(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int local_res8 [2];
  longlong local_res10;
  undefined1 auStackX_18 [8];
  longlong local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 uStack_6c;
  char local_68;
  char local_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  longlong *plStack_30;
  int *piStack_28;
  undefined8 *puStack_20;
  
  local_98[0] = 0;
  local_70 = DAT_1404e46ac == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1404dc7b8._0_4_;
    uStack_7c = PTR_PTR_1404dc7b8._4_4_;
    uStack_78 = PTR_DAT_1404dc7c0._0_4_;
    uStack_74 = PTR_DAT_1404dc7c0._4_4_;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    uStack_6c = 0x16;
    FUN_1402cada4(0,0,0,0,0,local_98);
    uVar1 = 0xffffffff;
  }
  else {
    plStack_40 = &local_res10;
    plStack_38 = &local_res20;
    plStack_30 = local_98;
    piStack_28 = local_res8;
    puStack_20 = &local_58;
    lStack_50 = param_1;
    lStack_48 = param_1;
    uVar1 = func_0x0001402cbf74(auStackX_18,&lStack_48,&plStack_40,&lStack_50);
  }
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_98);
  }
  if (local_60 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_98);
  }
  return uVar1;
}

