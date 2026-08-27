// Function: FUN_140089ba0
// Addr: 140089ba0
// Size: 177 bytes


undefined8 * FUN_140089ba0(undefined8 *param_1,ulonglong param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  char *_Str;
  char local_28 [23];
  char local_11 [9];
  
  local_11[1] = 0;
  _Str = local_11 + 1;
  do {
    _Str = _Str + -1;
    uVar2 = param_2 / 10;
    *_Str = (char)param_2 + (char)uVar2 * -10 + '0';
    param_2 = uVar2;
  } while (uVar2 != 0);
  if (_Str < local_28) {
    FID_conflict__assert
              (L"current >= buffer",L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp",0x33);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(_Str);
  FUN_140017480(param_1,_Str,sVar1);
  return param_1;
}

