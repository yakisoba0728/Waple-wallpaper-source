// Function: FUN_1400577f0
// Addr: 1400577f0
// Size: 74 bytes


void FUN_1400577f0(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  (*DAT_140426658)(local_res8);
  lVar1 = *param_1;
  *param_1 = local_res8[0];
  *(float *)(param_1 + 2) =
       (float)(local_res8[0] - lVar1) / (float)param_1[1] + *(float *)(param_1 + 2);
  return;
}

