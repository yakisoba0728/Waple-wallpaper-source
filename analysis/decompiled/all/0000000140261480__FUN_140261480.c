// Function: FUN_140261480
// Addr: 140261480
// Size: 35 bytes


void FUN_140261480(undefined8 *param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014026149f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x10))
            ((longlong *)*param_1,param_2,param_3,((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2) * 6
            );
  return;
}

