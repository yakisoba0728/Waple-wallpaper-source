// Function: FUN_1402f6c90
// Addr: 1402f6c90
// Size: 94 bytes


void FUN_1402f6c90(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001402f6ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2);
  return;
}

