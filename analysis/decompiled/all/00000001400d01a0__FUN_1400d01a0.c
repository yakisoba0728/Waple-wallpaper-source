// Function: FUN_1400d01a0
// Addr: 1400d01a0
// Size: 268 bytes


void FUN_1400d01a0(longlong param_1,int param_2,undefined8 param_3)

{
  size_t _Size;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *_Buf1;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *_Buf2;
  longlong local_28 [3];
  ulonglong local_10;
  
  lVar6 = 0;
  lVar4 = param_1;
  if (param_2 == 0) {
LAB_1400d028c:
    if (*(longlong *)(lVar4 + 0x110) != lVar6) {
      return;
    }
  }
  else {
    if ((param_2 != 1) && (param_2 != 2)) {
      return;
    }
    if (*(longlong *)(param_1 + 0x110) == 0) {
LAB_1400d022e:
      bVar2 = false;
    }
    else {
      _Buf2 = (undefined8 *)(param_1 + 0x100);
      lVar6 = 1;
      _Buf1 = (undefined8 *)FUN_140005790(local_28,param_3);
      if (0xf < *(ulonglong *)(param_1 + 0x118)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size != *(size_t *)(param_1 + 0x110)) ||
         ((_Size != 0 && (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 != 0)))) goto LAB_1400d022e;
      bVar2 = true;
    }
    if ((lVar6 != 0) && (0xf < local_10)) {
      uVar5 = local_10 + 1;
      lVar4 = local_28[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_28[0] + -8);
        if (0x1f < (local_28[0] - lVar4) - 8U) {
          lVar4 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          goto LAB_1400d028c;
        }
        uVar5 = local_10 + 0x28;
      }
      thunk_FUN_14028af80(lVar4,uVar5);
    }
    if (!bVar2) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}

