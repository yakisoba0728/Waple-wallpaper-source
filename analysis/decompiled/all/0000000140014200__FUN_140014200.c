// Function: FUN_140014200
// Addr: 140014200
// Size: 6 bytes


undefined2 * FUN_140014200(longlong param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = func_0x000140291fc0(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

