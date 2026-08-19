// Function: FUN_140355bd0
// Addr: 140355bd0
// Size: 194 bytes


void FUN_140355bd0(undefined8 param_1,longlong *param_2,int param_3,uint *param_4)

{
  undefined4 local_res10 [2];
  int local_res18;
  longlong local_70;
  
  local_res10[0] = 0;
  local_70 = 0;
  local_res18 = param_3;
  if ((((param_2 == (longlong *)0x0) || (param_4 == (uint *)0x0)) || (0x1e < param_3 - 2U)) ||
     (local_70 = *param_2, local_70 == 0)) {
    local_res10[0] = 6;
  }
  else {
    if (*param_4 <= (uint)(0x7fffffff / (ulonglong)param_4[1])) {
                    /* WARNING: Subroutine does not return */
      FUN_1402f8180(local_70,0xc,0,*param_4 * param_4[1],0,local_res10);
    }
    local_res10[0] = 10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(local_70,0);
}

