// Function: FUN_14003f110
// Addr: 14003f110
// Size: 156 bytes


undefined8 FUN_14003f110(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_38 [48];
  
  FUN_140085350(local_38,param_1[1] + -0x28);
  FUN_140085440(param_1[1] + -0x28);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + -0x28;
  if (*param_1 == lVar1 + -0x28) {
    param_1 = param_1 + 6;
  }
  else {
    if (*(char *)(lVar1 + -0x48) == '\x06') {
      FUN_140087690(lVar1 + -0x50,local_38);
      FUN_140085440(local_38);
      return 1;
    }
    lVar2 = *(longlong *)(param_1[4] + -0x10);
    param_1 = (longlong *)
              FUN_140086de0(lVar1 + -0x50,lVar2,(ulonglong)*(uint *)(param_1[4] + -8) + lVar2);
  }
  FUN_140085610(param_1,local_38);
  FUN_140085440(local_38);
  return 1;
}

