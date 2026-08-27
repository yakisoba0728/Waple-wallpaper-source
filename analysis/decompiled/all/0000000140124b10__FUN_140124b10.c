// Function: FUN_140124b10
// Addr: 140124b10
// Size: 59 bytes


undefined8 FUN_140124b10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res8 [2];
  undefined1 local_res18 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_res8,local_res18);
  *param_2 = local_res8[0];
  return uVar2;
}

