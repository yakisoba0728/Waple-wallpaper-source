// Function: FUN_1402248c0
// Addr: 1402248c0
// Size: 176 bytes


int FUN_1402248c0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  size_t _Size;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    lVar2 = plVar1[0x15];
    uVar6 = (plVar1[0x16] - lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (uVar6 != 0) {
      iVar5 = 0;
      do {
        _Buf1 = (undefined8 *)((longlong)iVar5 * 0x68 + lVar2);
        sVar4 = strlen(param_2);
        _Size = _Buf1[2];
        if (0xf < (ulonglong)_Buf1[3]) {
          _Buf1 = (undefined8 *)*_Buf1;
        }
        if (_Size == sVar4) {
          if (_Size == 0) {
            return iVar5;
          }
          iVar3 = memcmp(_Buf1,param_2,_Size);
          if (iVar3 == 0) {
            return iVar5;
          }
        }
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 < uVar6);
    }
  }
  return -1;
}

