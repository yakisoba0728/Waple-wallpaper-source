// Function: FUN_140196a50
// Addr: 140196a50
// Size: 50 bytes


ulonglong FUN_140196a50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((ulonglong)(*(longlong *)(param_1 + 0x110) - *(longlong *)(param_1 + 0x108) >> 3) <=
      (param_2 & 0xffffffff)) {
    return 0;
  }
  uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x108) + (param_2 & 0xffffffff) * 8);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  uVar4 = *(ulonglong *)(param_1 + 0x1f0) &
          ((((((((uVar5 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar5 >> 8 & 0xff) *
                0x100000001b3 ^ uVar5 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar5 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar5 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar5 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar5 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar5 >> 0x38) * 0x100000001b3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar4 * 0x10);
  if (lVar3 != lVar1) {
    uVar2 = *(ulonglong *)(lVar3 + 0x10);
    while (uVar5 != uVar2) {
      if (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar4 * 0x10)) {
        return uVar5;
      }
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar2 = *(ulonglong *)(lVar3 + 0x10);
    }
    if (lVar3 == 0) {
      lVar3 = lVar1;
    }
    if (lVar3 != lVar1) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

