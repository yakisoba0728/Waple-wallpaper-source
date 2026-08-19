// Function: FUN_1403d2d20
// Addr: 1403d2d20
// Size: 126 bytes


undefined4 FUN_1403d2d20(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  func_0x00014039dc00();
  lVar1 = param_2 + 8;
  (*DAT_140426580)(lVar1);
  iVar2 = FUN_1402f0320(*(undefined8 *)(param_2 + 0x30),param_3,param_4,
                        *(int *)(param_1 + 0x68) == 0,local_res8);
  if (iVar2 != 0) {
    local_res8[0] = 0;
  }
  if (lVar1 != 0) {
    (*DAT_140426578)(lVar1);
  }
  return local_res8[0];
}

