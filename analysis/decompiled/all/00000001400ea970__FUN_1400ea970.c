// Function: FUN_1400ea970
// Addr: 1400ea970
// Size: 91 bytes


undefined8 FUN_1400ea970(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_18 [2];
  
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(longlong *)(param_1 + 0x18),0,4,0,local_18);
    if (-1 < iVar2) {
      *param_2 = local_18[0];
      return 1;
    }
  }
  return 0;
}

