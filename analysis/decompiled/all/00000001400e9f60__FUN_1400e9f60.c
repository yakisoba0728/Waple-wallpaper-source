// Function: FUN_1400e9f60
// Addr: 1400e9f60
// Size: 119 bytes


undefined8 * FUN_1400e9f60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  size_t sVar2;
  char *_Str;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    _Str = *(char **)(lVar1 + 0x28);
    if (_Str == (char *)0x0) {
      _Str = (char *)(lVar1 + 0x30);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    sVar2 = strlen(_Str);
    FUN_140017480(param_2,_Str,sVar2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}

