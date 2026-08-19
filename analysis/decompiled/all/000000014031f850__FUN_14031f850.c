// Function: FUN_14031f850
// Addr: 14031f850
// Size: 63 bytes


undefined8 FUN_14031f850(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0xffff) {
    if (param_2 < 0x187) {
      if (*(longlong *)(param_1 + 0x10d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014031f888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10d8) + 0x28))(param_2);
        return uVar1;
      }
    }
    else if (param_2 - 0x187 < *(uint *)(param_1 + 0x5c0)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + (ulonglong)(param_2 - 0x187) * 8);
    }
  }
  return 0;
}

