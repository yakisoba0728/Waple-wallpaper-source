// Function: FUN_140360900
// Addr: 140360900
// Size: 202 bytes


void FUN_140360900(undefined8 param_1,longlong *param_2,longlong param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  float in_stack_00000040;
  undefined8 uStack0000000000000050;
  
  fVar1 = *(float *)(param_2 + 2);
  *(float *)(param_3 + 0x10) = *(float *)((longlong)param_2 + 0x14) * *(float *)(param_3 + 0x10);
  *(float *)(param_3 + 0xc) = fVar1 * *(float *)(param_3 + 0xc);
  lVar2 = *param_2;
  uStack0000000000000050 = 0;
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    uStack0000000000000050 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403609c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x28))(lVar2,param_2[1],fVar1 * in_stack_00000040,fVar1 * param_4);
  return;
}

