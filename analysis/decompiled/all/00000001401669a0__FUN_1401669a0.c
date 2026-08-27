// Function: FUN_1401669a0
// Addr: 1401669a0
// Size: 225 bytes


undefined8 FUN_1401669a0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong _Size;
  void *_Buf1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined8 *_Buf2;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  _Size = param_2[1];
  uVar7 = 0;
  _Buf1 = (void *)*param_2;
  uVar8 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)_Buf1 + uVar7);
      uVar7 = uVar7 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < _Size);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x30) & uVar8;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = uVar8 * 2;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  if (lVar6 == lVar2) {
    lVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
    while( true ) {
      _Buf2 = (undefined8 *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      if (_Size == *(ulonglong *)(lVar6 + 0x20)) {
        if (_Size == 0) goto LAB_140166a64;
        iVar4 = memcmp(_Buf1,_Buf2,_Size);
        lVar5 = CONCAT44(extraout_var,iVar4);
        if (iVar4 == 0) goto LAB_140166a64;
      }
      if (lVar6 == lVar3) break;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
    lVar6 = 0;
  }
LAB_140166a64:
  if (lVar6 == 0) {
    lVar6 = lVar2;
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar6 != lVar2);
}

