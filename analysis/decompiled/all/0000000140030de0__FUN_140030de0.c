// Function: FUN_140030de0
// Addr: 140030de0
// Size: 241 bytes


longlong * FUN_140030de0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar2 = param_3[3];
  puVar7 = param_3;
  if (0xf < uVar2) {
    puVar7 = (undefined8 *)*param_3;
  }
  _Size = param_3[2];
  uVar6 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar7 + uVar6);
      uVar6 = uVar6 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < _Size);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10);
  if (lVar8 == lVar3) {
    lVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
    while( true ) {
      puVar7 = (undefined8 *)(lVar8 + 0x10);
      if (0xf < *(ulonglong *)(lVar8 + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      _Buf1 = param_3;
      if (0xf < uVar2) {
        _Buf1 = (undefined8 *)*param_3;
      }
      if ((_Size == *(ulonglong *)(lVar8 + 0x20)) &&
         ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar7,_Size), iVar5 == 0)))) goto LAB_140030eb5;
      if (lVar8 == lVar4) break;
      lVar8 = *(longlong *)(lVar8 + 8);
    }
    lVar8 = 0;
  }
LAB_140030eb5:
  if (lVar8 == 0) {
    lVar8 = lVar3;
  }
  *param_2 = lVar8;
  return param_2;
}

