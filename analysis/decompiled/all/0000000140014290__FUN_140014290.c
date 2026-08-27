// Function: FUN_140014290
// Addr: 140014290
// Size: 145 bytes


undefined2 *
FUN_140014290(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
             undefined1 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  if (param_2 != param_3) {
    do {
      local_res18[0] = 0;
      iVar1 = FUN_140291bd0(local_res10,*param_2,local_res18,param_1 + 0x30);
      uVar2 = local_res10[0];
      if (iVar1 != 1) {
        uVar2 = param_4;
      }
      param_2 = param_2 + 1;
      *param_5 = uVar2;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

