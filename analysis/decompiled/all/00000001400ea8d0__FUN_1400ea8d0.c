// Function: FUN_1400ea8d0
// Addr: 1400ea8d0
// Size: 114 bytes


undefined8 FUN_1400ea8d0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_18 [2];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (0 < param_3) {
      *(int *)(param_1 + 0x2c) = param_3;
    }
  }
  else if (0 < param_4) {
    *(int *)(param_1 + 0x2c) = param_4;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(longlong *)(param_1 + 0x10),0,4,0,local_18);
    if (-1 < iVar2) {
      *param_2 = local_18[0];
      return 1;
    }
  }
  return 0;
}

