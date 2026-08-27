// Function: FUN_140035f90
// Addr: 140035f90
// Size: 69 bytes


undefined8 * FUN_140035f90(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x28);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_140017480(param_2,_Str,sVar1);
  return param_2;
}

