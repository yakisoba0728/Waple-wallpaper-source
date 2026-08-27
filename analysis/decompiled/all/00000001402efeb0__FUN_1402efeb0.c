// Function: FUN_1402efeb0
// Addr: 1402efeb0
// Size: 116 bytes


undefined8 FUN_1402efeb0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x88) + 8) == 0x756e6963)) {
    lVar1 = FUN_1402f6e00();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402eff0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x28))
                        (lVar1,*(undefined8 *)(param_1 + 0x88),param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

