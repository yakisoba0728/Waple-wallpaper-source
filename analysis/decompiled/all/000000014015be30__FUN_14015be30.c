// Function: FUN_14015be30
// Addr: 14015be30
// Size: 224 bytes


undefined8 *
FUN_14015be30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_1404e7fa8 + 8 + (DAT_1404e7fc0 & param_4) * 0x10);
  if (puVar4 == DAT_1404e7f98) {
    *param_2 = DAT_1404e7f98;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_1404e7fa8 + (DAT_1404e7fc0 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}

