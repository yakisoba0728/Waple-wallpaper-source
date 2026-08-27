// Function: FUN_1402eeb40
// Addr: 1402eeb40
// Size: 131 bytes


void FUN_1402eeb40(longlong param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  
  if (param_3 != (uint *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    if (((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
       (pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1,param_3);
      if ((param_2 - 1U & 0xfffffffd) == 0) {
        *param_3 = *param_3 & 0xffffffc0;
        param_3[1] = param_3[1] & 0xffffffc0;
        param_3[2] = param_3[2] + 0x3f & 0xffffffc0;
        param_3[3] = param_3[3] + 0x3f & 0xffffffc0;
      }
      if (param_2 - 2U < 2) {
        *param_3 = (int)*param_3 >> 6;
        param_3[1] = (int)param_3[1] >> 6;
        param_3[2] = (int)param_3[2] >> 6;
        param_3[3] = (int)param_3[3] >> 6;
      }
    }
  }
  return;
}

