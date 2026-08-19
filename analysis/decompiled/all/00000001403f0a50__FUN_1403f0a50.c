// Function: FUN_1403f0a50
// Addr: 1403f0a50
// Size: 114 bytes


undefined1 FUN_1403f0a50(longlong param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (param_3 != 0)) && (*param_2 != 0)) {
    lVar1 = FUN_1402bbc10(param_1,param_4);
    if (lVar1 != 0) {
      uVar2 = func_0x000140421ed0(param_4);
      return uVar2;
    }
  }
  return 0;
}

