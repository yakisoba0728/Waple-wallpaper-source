// Function: FUN_140291ef0
// Addr: 140291ef0
// Size: 117 bytes


ushort FUN_140291ef0(ushort param_1,longlong param_2)

{
  int iVar1;
  ushort local_res8 [8];
  ushort local_res18 [8];
  
  if (param_1 != 0xffff) {
    if ((*(longlong *)(param_2 + 0x18) == 0) && (param_1 < 0x100)) {
      if ((ushort)(param_1 - 0x41) < 0x1a) {
        return param_1 + 0x20;
      }
    }
    else {
      local_res8[0] = param_1;
      local_res18[0] = param_1;
      iVar1 = FUN_1402948f0(*(longlong *)(param_2 + 0x18),0x100,local_res8,1,local_res18,1);
      param_1 = local_res8[0];
      if (iVar1 != 0) {
        param_1 = local_res18[0];
      }
    }
  }
  return param_1;
}

