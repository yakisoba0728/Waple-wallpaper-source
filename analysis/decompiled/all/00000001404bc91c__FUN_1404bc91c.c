// Function: FUN_1404bc91c
// Addr: 1404bc91c
// Size: 1 bytes


void FUN_1404bc91c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Could not recover jumptable at 0x0001404bc939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}

