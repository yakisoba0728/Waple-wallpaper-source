// Function: FUN_1400648c0
// Addr: 1400648c0
// Size: 196 bytes


void FUN_1400648c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  int iVar5;
  int iVar6;
  
  lVar1 = *param_1;
  if (((lVar1 != param_1[1]) && (*(int *)((longlong)param_1 + 0x34) == 1)) &&
     (iVar6 = (int)(param_1[1] - lVar1 >> 3) * 0x38e38e39, 0 < iVar6)) {
    iVar5 = 0;
    uVar2 = param_2[3];
    sVar3 = param_2[2];
    do {
      _Buf1 = (undefined8 *)(lVar1 + (longlong)iVar5 * 0x48);
      _Buf2 = param_2;
      if (0xf < uVar2) {
        _Buf2 = (undefined8 *)*param_2;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      iVar5 = iVar5 + 1;
      if ((_Size == sVar3) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) {
        *(int *)(param_1 + 8) = iVar5;
        return;
      }
    } while (iVar5 < iVar6);
  }
  return;
}

