// Function: FUN_140060720
// Addr: 140060720
// Size: 262 bytes


longlong * FUN_140060720(undefined8 *param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined8 ****ppppuVar2;
  uint local_res18 [4];
  undefined8 ***local_28;
  longlong lStack_20;
  ulonglong local_18;
  ulonglong uStack_10;
  
  FUN_14004aa50(*param_1,local_res18,4);
  uVar1 = (ulonglong)local_res18[0];
  if (param_3 < local_res18[0]) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return param_2;
  }
  local_18 = 0;
  uStack_10 = 0xf;
  lStack_20 = 0;
  local_28 = (undefined8 ****)0x0;
  if (local_res18[0] == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    local_28._0_1_ = 0;
    local_18 = uVar1;
  }
  else if (uVar1 < 0x10) {
    local_18 = uVar1;
    FUN_1404217a0(&local_28,0,uVar1);
    *(undefined1 *)((longlong)&local_28 + uVar1) = 0;
  }
  else {
    FUN_140016cc0(&local_28,uVar1,(undefined1)local_res18[0],uVar1,0);
  }
  ppppuVar2 = &local_28;
  if (0xf < uStack_10) {
    ppppuVar2 = (undefined8 ****)local_28;
  }
  FUN_14004aa50(*param_1,ppppuVar2,(longlong)(int)local_res18[0]);
  *param_2 = (longlong)local_28;
  param_2[1] = lStack_20;
  param_2[2] = local_18;
  param_2[3] = uStack_10;
  return param_2;
}

