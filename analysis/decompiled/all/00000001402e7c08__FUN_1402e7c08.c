// Function: FUN_1402e7c08
// Addr: 1402e7c08
// Size: 182 bytes


undefined4 FUN_1402e7c08(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_stack_00000030;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000030 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1404dc6e8._0_4_;
    uVar3 = PTR_PTR_1404dc6e8._4_4_;
    uVar4 = PTR_DAT_1404dc6f0._0_4_;
    uVar5 = PTR_DAT_1404dc6f0._4_4_;
    if (DAT_1404e45dc != 0) goto LAB_1402e7c56;
  }
  else {
    uVar1 = *in_stack_00000030;
    uVar3 = in_stack_00000030[1];
    uVar4 = in_stack_00000030[2];
    uVar5 = in_stack_00000030[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_1402e7c56:
  uVar1 = FUN_1402e77b4();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1402c0d20(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1402c0d20(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

