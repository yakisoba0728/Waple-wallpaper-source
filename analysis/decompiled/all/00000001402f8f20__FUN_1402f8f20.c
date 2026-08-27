// Function: FUN_1402f8f20
// Addr: 1402f8f20
// Size: 87 bytes


undefined8 FUN_1402f8f20(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  char *_Str1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    _Str1 = (char *)*param_1;
    while (_Str1 != (char *)0x0) {
      iVar2 = strcmp(_Str1,param_2);
      if (iVar2 == 0) {
        return param_1[1];
      }
      puVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      _Str1 = (char *)*puVar1;
    }
  }
  return 0;
}

