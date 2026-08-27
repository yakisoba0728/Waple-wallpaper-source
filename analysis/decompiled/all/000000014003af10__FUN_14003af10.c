// Function: FUN_14003af10
// Addr: 14003af10
// Size: 161 bytes


longlong FUN_14003af10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 local_res9;
  undefined1 local_resb;
  
  FUN_140016600();
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  iVar1 = FUN_14003adf0(param_1,param_3,(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x279) = local_res9;
    *(undefined1 *)(param_1 + 0x27b) = local_resb;
    *(undefined1 *)(param_1 + 0x278) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x278) = 0;
    *(undefined2 *)(param_1 + 0x279) = local_res9;
    *(undefined1 *)(param_1 + 0x27b) = local_resb;
    if (iVar1 != 0x12) {
      *(int *)(param_1 + 0x27c) = iVar1;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x27c) = 0;
  return param_1;
}

