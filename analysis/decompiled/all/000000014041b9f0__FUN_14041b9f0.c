// Function: FUN_14041b9f0
// Addr: 14041b9f0
// Size: 174 bytes


ulonglong FUN_14041b9f0(ulonglong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      FUN_1402eca00(param_2,param_3,0xfff8000000000000,1,8,0x21,param_1,0,1);
      return 0xfff8000000000000;
    }
    param_1 = param_1 | 0x8000000000000;
  }
  return param_1;
}

