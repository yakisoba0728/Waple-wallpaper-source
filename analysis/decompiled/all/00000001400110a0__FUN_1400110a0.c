// Function: FUN_1400110a0
// Addr: 1400110a0
// Size: 208 bytes


longlong * FUN_1400110a0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar4;
  
  param_4 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar4 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (plVar4 == plVar1) {
      *param_2 = (longlong)plVar4;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *param_2 = *plVar4;
  param_2[1] = (longlong)plVar4;
  return param_2;
}

