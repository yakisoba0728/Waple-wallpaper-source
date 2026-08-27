// Function: FUN_14000d0f0
// Addr: 14000d0f0
// Size: 76 bytes


bool FUN_14000d0f0(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  int iVar1;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size == param_2[2]) {
    if (_Size != 0) {
      iVar1 = memcmp(param_1,_Buf2,_Size);
      return iVar1 == 0;
    }
    return true;
  }
  return false;
}

