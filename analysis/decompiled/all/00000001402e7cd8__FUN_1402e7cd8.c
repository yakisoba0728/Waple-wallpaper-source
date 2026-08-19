// Function: FUN_1402e7cd8
// Addr: 1402e7cd8
// Size: 176 bytes


undefined4 FUN_1402e7cd8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_stack_00000030;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  char local_18;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000030 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1404dc7b8._0_4_;
    uVar2 = PTR_PTR_1404dc7b8._4_4_;
    uVar3 = PTR_DAT_1404dc7c0._0_4_;
    uVar4 = PTR_DAT_1404dc7c0._4_4_;
    if (DAT_1404e46ac != 0) goto LAB_1402e7d26;
  }
  else {
    uVar1 = *in_stack_00000030;
    uVar2 = in_stack_00000030[1];
    uVar3 = in_stack_00000030[2];
    uVar4 = in_stack_00000030[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar2;
  uStack_28 = uVar3;
  uStack_24 = uVar4;
LAB_1402e7d26:
  uVar1 = FUN_1402e7884();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 == '\0') {
    if (local_10 == '\0') {
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c0df0(local_48);
}

