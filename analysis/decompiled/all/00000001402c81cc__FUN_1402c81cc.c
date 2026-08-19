// Function: FUN_1402c81cc
// Addr: 1402c81cc
// Size: 62 bytes


int FUN_1402c81cc(undefined8 param_1,undefined2 *param_2,longlong param_3,longlong param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 uStack_1c;
  char local_18;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar2 = PTR_PTR_1404dc7b8._0_4_;
    uVar3 = PTR_PTR_1404dc7b8._4_4_;
    uVar4 = PTR_DAT_1404dc7c0._0_4_;
    uVar5 = PTR_DAT_1404dc7c0._4_4_;
    if (DAT_1404e46ac == 0) goto LAB_1402c8219;
  }
  else {
    uVar2 = *param_5;
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
LAB_1402c8219:
    local_20 = '\x01';
    uStack_30 = uVar2;
    uStack_2c = uVar3;
    uStack_28 = uVar4;
    uStack_24 = uVar5;
  }
  if (((param_4 == 0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
    uStack_1c = 0x16;
  }
  else {
    iVar1 = func_0x0001402c17b4();
    if (iVar1 < 0) {
      *param_2 = 0;
    }
    if (iVar1 != -2) goto code_r0x0001402c828a;
    uStack_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_1402cada4(0,0,0,0,0,local_48);
  iVar1 = -1;
code_r0x0001402c828a:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 == '\0') {
    if (local_10 == '\0') {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402c0df0(local_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c0df0(local_48);
}

