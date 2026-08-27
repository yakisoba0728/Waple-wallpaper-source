// Function: FUN_140014be0
// Addr: 140014be0
// Size: 124 bytes


undefined8 * FUN_140014be0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0xc];
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_14028af80(lVar1,0x10);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x68);
  }
  return param_1;
}

