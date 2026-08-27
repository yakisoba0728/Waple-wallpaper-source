// Function: FUN_140291fb0
// Addr: 140291fb0
// Size: 44 bytes


longlong FUN_140291fb0(LPCWSTR param_1,longlong param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,(int)(param_2 - (longlong)param_1 >> 1),param_3);
  return param_2;
}

