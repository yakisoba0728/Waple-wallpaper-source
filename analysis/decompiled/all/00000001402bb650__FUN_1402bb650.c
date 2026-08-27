// Function: FUN_1402bb650
// Addr: 1402bb650
// Size: 186 bytes


void FUN_1402bb650(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  lVar2 = FUN_1402bbec0();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_1402bbec0();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_1402bbec0();
  FUN_1402ba930((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),local_38,
                *(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_1402be1a0(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}

