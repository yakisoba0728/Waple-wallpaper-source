// Function: FUN_14003efd0
// Addr: 14003efd0
// Size: 76 bytes


undefined1 FUN_14003efd0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res8[0] = 7;
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(undefined1 *)(lVar1 + 8) = 7;
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffeff;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar2 = func_0x00014028aff0(0x10);
    return uVar2;
  }
  func_0x00014004c6d0(param_1,lVar1,local_res8);
  func_0x00014004acd0(param_1 + 0x18);
  return 1;
}

