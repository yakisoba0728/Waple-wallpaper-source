// Function: FUN_1400f0090
// Addr: 1400f0090
// Size: 71 bytes


undefined4 FUN_1400f0090(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_res8 [8];
  
  if ((*(char *)(param_1 + 0x18) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar1 + 0xe8))(plVar1,*(longlong *)(param_1 + 0x10),local_res8,8,0);
    return local_res8[0];
  }
  return 0;
}

