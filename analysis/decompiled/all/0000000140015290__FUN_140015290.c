// Function: FUN_140015290
// Addr: 140015290
// Size: 164 bytes


undefined8 * FUN_140015290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *_Str;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  param_1[1] = "system error";
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *param_1 = &PTR_FUN_140474318;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  _Str = "unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  sVar3 = strlen(_Str);
  FUN_140017480(param_1 + 0xc,_Str,sVar3);
  return param_1;
}

