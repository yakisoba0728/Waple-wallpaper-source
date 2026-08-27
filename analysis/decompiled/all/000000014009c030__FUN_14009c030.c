// Function: FUN_14009c030
// Addr: 14009c030
// Size: 149 bytes


undefined8 * FUN_14009c030(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *_Str;
  size_t sVar1;
  
  if (param_3 == 1) {
    _Str = "broken promise";
  }
  else if (param_3 == 2) {
    _Str = "future already retrieved";
  }
  else if (param_3 == 3) {
    _Str = "promise already satisfied";
  }
  else {
    if (param_3 != 4) {
      _Str = (char *)FUN_14028f4f0(param_3);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_14009c0a3;
    }
    _Str = "no state";
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
LAB_14009c0a3:
  sVar1 = strlen(_Str);
  FUN_140017480(param_2,_Str,sVar1);
  return param_2;
}

