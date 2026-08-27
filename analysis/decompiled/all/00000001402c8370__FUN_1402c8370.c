// Function: FUN_1402c8370
// Addr: 1402c8370
// Size: 99 bytes


longlong FUN_1402c8370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402d6aa0();
  lVar1 = param_1 + lVar1 * 2;
  lVar2 = FUN_1402d6bf0(param_2,param_3);
  FUN_1404210f0(lVar1,param_2,lVar2 * 2);
  *(undefined2 *)(lVar2 * 2 + lVar1) = 0;
  return param_1;
}

