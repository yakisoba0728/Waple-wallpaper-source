// Function: FUN_1400605a0
// Addr: 1400605a0
// Size: 61 bytes


float FUN_1400605a0(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  (*DAT_140426658)(local_res8);
  lVar1 = *param_1;
  *param_1 = local_res8[0];
  return (float)(local_res8[0] - lVar1) / (float)param_1[1];
}

