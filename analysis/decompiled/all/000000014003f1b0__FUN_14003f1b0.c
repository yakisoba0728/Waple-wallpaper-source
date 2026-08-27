// Function: FUN_14003f1b0
// Addr: 14003f1b0
// Size: 103 bytes


undefined8 FUN_14003f1b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  if (*param_1 == lVar1) {
    FUN_140085610(param_1 + 6);
    return 1;
  }
  if (*(char *)(lVar1 + -0x20) == '\x06') {
    FUN_140087690(lVar1 + -0x28);
    return 1;
  }
  lVar2 = *(longlong *)(param_1[4] + -0x10);
  uVar3 = FUN_140086de0(lVar1 + -0x28,lVar2,(ulonglong)*(uint *)(param_1[4] + -8) + lVar2);
  FUN_140085610(uVar3,param_2);
  return 1;
}

