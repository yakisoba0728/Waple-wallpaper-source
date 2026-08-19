// Function: FUN_140088430
// Addr: 140088430
// Size: 208 bytes


undefined8 * FUN_140088430(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((char)param_1[1] == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_140088ff0(&local_68,*(undefined8 *)(*param_1 + 8));
  plVar1 = (longlong *)**(longlong **)*param_1;
  if (plVar1 != *(longlong **)*param_1) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)func_0x000140017550(&local_50,plVar1[4],*(uint *)(plVar1 + 5) >> 2);
    return puVar2;
  }
  *param_2 = local_68;
  param_2[1] = uStack_60;
  param_2[2] = local_58;
  return param_2;
}

