// Function: FUN_1401966d0
// Addr: 1401966d0
// Size: 365 bytes


ulonglong FUN_1401966d0(longlong param_1,char *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  size_t _Size;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  longlong lVar8;
  ulonglong *puVar9;
  
  puVar9 = *(ulonglong **)(param_1 + 0x108);
  puVar1 = *(ulonglong **)(param_1 + 0x110);
  while( true ) {
    if (puVar9 == puVar1) {
      return 0;
    }
    uVar2 = *puVar9;
    sVar6 = strlen(param_2);
    _Buf1 = (undefined8 *)(uVar2 + 0x1d8);
    _Size = *(size_t *)(uVar2 + 0x1e8);
    if (0xf < *(ulonglong *)(uVar2 + 0x1f0)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == sVar6) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,param_2,_Size), iVar5 == 0))))
    break;
    puVar9 = puVar9 + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  uVar7 = *(ulonglong *)(param_1 + 0x1f0) &
          ((((((((uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar2 >> 8 & 0xff) *
                0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar7 * 0x10);
  if (lVar8 == lVar3) {
    return uVar2;
  }
  uVar4 = *(ulonglong *)(lVar8 + 0x10);
  while (uVar2 != uVar4) {
    if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar7 * 0x10)) {
      return uVar2;
    }
    lVar8 = *(longlong *)(lVar8 + 8);
    uVar4 = *(ulonglong *)(lVar8 + 0x10);
  }
  if (lVar8 == 0) {
    lVar8 = lVar3;
  }
  if (lVar8 != lVar3) {
    return 0;
  }
  return uVar2;
}

