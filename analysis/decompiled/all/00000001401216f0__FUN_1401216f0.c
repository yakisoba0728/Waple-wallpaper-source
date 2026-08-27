// Function: FUN_1401216f0
// Addr: 1401216f0
// Size: 88 bytes


undefined8 FUN_1401216f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_res8,0);
    if (-1 < iVar2) {
      *param_2 = local_res8;
      *param_3 = local_resc;
      return CONCAT71((uint7)(uint3)((uint)local_resc >> 8),1);
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}

