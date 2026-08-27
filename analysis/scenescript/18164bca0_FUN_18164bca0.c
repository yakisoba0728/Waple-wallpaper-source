// function FUN_18164bca0 @ 18164bca0 size=351

void FUN_18164bca0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  
  *(undefined2 *)(param_1 + 0x95) = 0;
  FUN_180046010(local_68,*(undefined8 *)(param_1 + 0x1d8));
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  thunk_FUN_180063140(uVar1);
  local_58 = *(longlong *)(param_1 + 0x1d8);
  local_50 = *(undefined8 *)(local_58 + 0x230);
  local_48 = *(longlong *)(local_58 + 0x238);
  *(int *)(local_58 + 0x240) = *(int *)(local_58 + 0x240) + 1;
  lVar2 = *(longlong *)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x490) = param_2;
  *(undefined8 *)(param_1 + 0x498) = param_3;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      thunk_FUN_1800bff50();
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      thunk_FUN_1800bff50();
      *(undefined8 *)(lVar2 + 0x28) = 0;
    }
    thunk_FUN_1816b3a50(lVar2,0x38);
  }
  uVar3 = FUN_1816b39f0(0x38);
  uVar3 = FUN_1816311d0(uVar3,param_1,param_1 + 0x1d8,param_2,param_3,
                        *(undefined8 *)(param_1 + 0x400));
  *(undefined8 *)(param_1 + 0x4a0) = uVar3;
  if (local_58 != 0) {
    uVar3 = *(undefined8 *)(local_58 + 0x230);
    *(undefined8 *)(local_58 + 0x230) = local_50;
    *(int *)(local_58 + 0x240) = *(int *)(local_58 + 0x240) + -1;
    local_50 = uVar3;
    if (*(longlong *)(local_58 + 0x238) != local_48) {
      *(longlong *)(local_58 + 0x238) = local_48;
      FUN_180008200(&local_58,local_58);
    }
  }
  thunk_FUN_180063250(uVar1);
  FUN_180046360(local_68);
  return;
}


