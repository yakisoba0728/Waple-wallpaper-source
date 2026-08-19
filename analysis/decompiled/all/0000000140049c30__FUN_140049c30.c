// Function: FUN_140049c30
// Addr: 140049c30
// Size: 91 bytes


longlong FUN_140049c30(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_1402cc09c(*(longlong *)(param_1 + 0x80),param_2,
                          (ulonglong)(param_2 == 0 && param_3 == 0) << 2,param_3);
    if (iVar1 == 0) {
      func_0x00014004c3c0(param_1,*(undefined8 *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return 0;
}

