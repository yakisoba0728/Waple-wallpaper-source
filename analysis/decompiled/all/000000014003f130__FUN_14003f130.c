// Function: FUN_14003f130
// Addr: 14003f130
// Size: 76 bytes


undefined1 FUN_14003f130(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res8[0] = 6;
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(undefined1 *)(lVar1 + 8) = 6;
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffeff;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar2 = func_0x00014028aff0(0x10);
    return uVar2;
  }
  func_0x00014004c6d0(param_1,lVar1,local_res8);
  return 1;
}

