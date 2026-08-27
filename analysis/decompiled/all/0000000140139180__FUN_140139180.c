// Function: FUN_140139180
// Addr: 140139180
// Size: 229 bytes


void FUN_140139180(longlong param_1,int param_2,undefined8 param_3)

{
  size_t _Size;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *_Buf1;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 *_Buf2;
  longlong local_28 [3];
  ulonglong local_10;
  
  bVar6 = false;
  if (param_2 == 0) goto LAB_140139249;
  if ((param_2 != 1) && (param_2 != 2)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
LAB_140139202:
    bVar2 = false;
  }
  else {
    _Buf2 = (undefined8 *)(param_1 + 0x18);
    bVar6 = true;
    _Buf1 = (undefined8 *)FUN_140005790(local_28,param_3);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size != *(size_t *)(param_1 + 0x28)) ||
       ((_Size != 0 && (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 != 0)))) goto LAB_140139202;
    bVar2 = true;
  }
  if ((bVar6) && (0xf < local_10)) {
    uVar5 = local_10 + 1;
    lVar4 = local_28[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar4,uVar5);
  }
  if (!bVar2) {
    return;
  }
LAB_140139249:
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

